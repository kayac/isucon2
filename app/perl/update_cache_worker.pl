#!/usr/bin/env perl

use strict;
use Furl;
use Time::HiRes qw/ sleep /;
use Log::Minimal;
use Devel::KYTProf;

my $path = shift || 1;

my $ua = Furl->new;
while (1) {
    my $res = $ua->post("http://127.0.0.1:5001/ticket/update_table_cache/?process=$path");
    if ($res->is_success) {
    }
    else {
        warnf "failed: %s", $res->status_line;
    }
    sleep 0.1;
}
