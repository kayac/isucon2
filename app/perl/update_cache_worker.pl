#!/usr/bin/env perl

use strict;
use Furl;
use Time::HiRes qw/ sleep /;

my $ua = Furl->new;
while (1) {
    my $res = $ua->post("http://127.0.0.1:5000/ticket/update_cache");
    if ($res->is_success) {
    }
    else {
        warn $res->status_line;
    }
    sleep 0.5;
}
