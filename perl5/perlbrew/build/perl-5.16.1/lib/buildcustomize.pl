#!perl

# We are miniperl, building extensions
# Reset @INC completely, adding the directories we need, and removing the
# installed directories (which we don't need to read, and may confuse us)
@INC = (q /home/isucon/perl5/perlbrew/build/perl-5.16.1/cpan/AutoLoader/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/dist/Carp/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/dist/Cwd ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/dist/Cwd/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/dist/ExtUtils-Command/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/dist/ExtUtils-Install/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/cpan/ExtUtils-MakeMaker/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/dist/ExtUtils-Manifest/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/cpan/File-Path/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/ext/re ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/dist/Term-ReadLine/lib ,
        q /home/isucon/perl5/perlbrew/build/perl-5.16.1/lib ,
        q . );
