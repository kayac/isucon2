### HOW TO RUN ###

    $ curl -k -L http://cpanmin.us/ > ./cpanm
    $ chmod +x ./cpanm
    $ ./cpanm -Lextlib -n --installdeps .
    $ perl -Mlib=extlib/lib/perl5 extlib/bin/plackup -s Starman -E production --preload-app app.psgi
