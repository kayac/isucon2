package Isucon2;
use strict;
use warnings;
use utf8;

use Kossy;

use DBIx::Sunny;
use JSON::XS;
use Redis;

sub load_config {
    my $self = shift;
    $self->{_config} ||= do {
        my $env = $ENV{ISUCON_ENV} || 'local';
        open(my $fh, '<', $self->root_dir . "/../config/common.${env}.json") or die $!;
        my $json = do { local $/; <$fh> };
        close($fh);
        decode_json($json);
    };
}

sub dbh {
    my ($self) = @_;
    $self->{_dbh} ||= do {
        my $dbconf = $self->load_config->{database};
        DBIx::Sunny->connect(
            "dbi:mysql:database=${$dbconf}{dbname};host=${$dbconf}{host};port=${$dbconf}{port}", $dbconf->{username}, $dbconf->{password}, {
                RaiseError => 1,
                PrintError => 0,
                ShowErrorStatement  => 1,
                AutoInactiveDestroy => 1,
                mysql_enable_utf8   => 1,
                mysql_auto_reconnect => 1,
            },
        );
    };
}

sub redis {
    my ($self) = @_;
    $self->{_redis} ||= do {
        Redis->new(
            encoding => undef,
            %{ $self->load_config->{redis} },
        );
    };
}

sub artist {
    my ($self, $id) = @_;

    $self->{_artist} ||= do {
        my $rows = $self->dbh->select_all('SELECT * FROM artist');
        my $r;
        for my $row (@$rows) {
            $r->{ $row->{id} } = $row;
        }
        $r;
    };
    $self->{_artist}{$id};
}

filter 'recent_sold' => sub {
    my ($app) = @_;
    sub {
        my ($self, $c) = @_;

        my $history_json = '[' . join(',', $self->redis->lrange('order_history', 0, 9)) . ']';
        my $history = decode_json $history_json;

        $c->stash->{recent_sold} = [map +{
            v_name  => $_->{variation},
            t_name  => $_->{ticket},
            a_name  => $_->{artist},
            seat_id => $_->{seat_id},
        }, @$history];

        $app->($self, $c);
    }
};

get '/' => [qw(recent_sold)] => sub {
    my ($self, $c) = @_;
    my $rows = $self->dbh->select_all(
        'SELECT * FROM artist ORDER BY id',
    );
    $c->render('index.tx', { artists => $rows });
};

get '/artist/:artistid' => [qw(recent_sold)] => sub {
    my ($self, $c) = @_;
    my $artist = $self->artist($c->args->{artistid});

    my $tickets = $self->dbh->select_all(
        'SELECT id, name FROM ticket WHERE artist_id = ? ORDER BY id',
        $artist->{id},
    );
    for my $ticket (@$tickets) {
        my $variation = $self->dbh->select_row(
            'SELECT id FROM variation WHERE ticket_id = ?', $ticket->{id},
        );
        $ticket->{count} = $self->redis->scard('stock:' . $variation->{id});
    }
    $c->render('artist.tx', {
        artist  => $artist,
        tickets => $tickets,
    });
};

get '/ticket/:ticketid' => [qw(recent_sold)] => sub {
    my ($self, $c) = @_;
    my $ticket = $self->dbh->select_row(
        'SELECT t.*, a.name AS artist_name FROM ticket t INNER JOIN artist a ON t.artist_id = a.id WHERE t.id = ? LIMIT 1',
        $c->args->{ticketid},
    );
    my $variations = $self->dbh->select_all(
        'SELECT id, name FROM variation WHERE ticket_id = ? ORDER BY id',
        $ticket->{id},
    );
    for my $variation (@$variations) {
        $variation->{stock} = $self->dbh->selectall_hashref(
            'SELECT seat_id, order_id FROM stock WHERE variation_id = ?',
            'seat_id',
            {},
            $variation->{id},
        );
        $variation->{vacancy} = $self->redis->scard('stock:' . $variation->{id});
    }
    $c->render('ticket.tx', {
        ticket     => $ticket,
        variations => $variations,
    });
};

post '/buy' => sub {
    my ($self, $c) = @_;
    my $variation_id = $c->req->param('variation_id');
    my $member_id = $c->req->param('member_id');

    my $redis = $self->redis;

    # stockから一つとる
    my $seat_id = $redis->spop('stock:' . $variation_id);

    if ($seat_id) {
        my $variation = $self->dbh->select_row(
            'SELECT * FROM variation WHERE id = ?',
            $variation_id,
        );

        my $ticket = $self->dbh->select_row(
            'SELECT * FROM ticket WHERE id = ?', $variation->{ticket_id},
        );

        my $artist = $self->artist( $ticket->{artist_id} );

        $redis->lpush('order_history', encode_json({
            variation_id => $variation_id,
            seat_id      => $seat_id,
            member_id    => $member_id,
            artist       => $artist->{name},
            ticket       => $ticket->{name},
            variation    => $variation->{name},
            ts           => scalar time,
        }));

        $c->render('complete.tx', { seat_id => $seat_id, member_id => $member_id });
    }
    else {
        $c->render('soldout.tx');
    }
};

# admin

get '/admin' => sub {
    my ($self, $c) = @_;
    $c->render('admin.tx')
};

get '/admin/order.csv' => sub {
    my ($self, $c) = @_;
    $c->res->content_type('text/csv');
    my $orders = $self->dbh->select_all(
        'SELECT order_request.*, stock.seat_id, stock.variation_id, stock.updated_at
         FROM order_request JOIN stock ON order_request.id = stock.order_id
         ORDER BY order_request.id ASC',
    );
    my $body = '';
    for my $order (@$orders) {
        $body .= join ',', @{$order}{qw( id member_id seat_id variation_id updated_at )};
        $body .= "\n";
    }
    $c->res->body($body);
    $c->res;
};

post '/admin' => sub {
    my ($self, $c) = @_;

    open(my $fh, '<', $self->root_dir . '/../config/database/initial_data.sql') or die $!;
    for my $sql (<$fh>) {
        chomp $sql;
        $self->dbh->query($sql) if $sql;
    }
    close($fh);

    # stock を redis にうつす、TODO: 本番データで60秒超えそうだったら生プロトコル作って流すようにする
    my $redis = $self->redis;
    $redis->flushdb;

    my $rows = $self->dbh->select_all(
        'SELECT * FROM stock',
    );
    for my $row (@$rows) {
        $redis->sadd('stock:' . $row->{variation_id}, $row->{seat_id}, sub {});
    }
    $redis->wait_all_responses;

    $c->redirect('/admin')
};

1;
