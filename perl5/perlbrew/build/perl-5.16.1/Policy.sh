#!/bin/sh
#
#  This file was produced by running the Policy_sh.SH script, which
#  gets its values from config.sh, which is generally produced by
#  running Configure.  
#
#  The idea here is to distill in one place the common site-wide
#  "policy" answers (such as installation directories) that are
#  to be "sticky".  If you keep the file Policy.sh around in
#  the same directory as you are building Perl, then Configure will
#  (by default) load up the Policy.sh file just before the
#  platform-specific hints file and rewrite it at the end.
#
#   The sequence of events is as follows:
#   A:  If you are NOT re-using an old config.sh:
#   1.  At start-up, Configure loads up the defaults from the
#	os-specific  hints/osname_osvers.sh file and any previous
#	Policy.sh file.
#   2.  At the end, Configure runs Policy_sh.SH, which creates
#	Policy.sh, overwriting a previous Policy.sh if necessary.
#
#   B: If you are re-using an old config.sh:
#   1.  At start-up, Configure loads up the defaults from config.sh, 
#	ignoring any previous Policy.sh file.
#   2.  At the end, Configure runs Policy_sh.SH, which creates
#	Policy.sh, overwriting a previous Policy.sh if necessary.
#
#  Thus the Policy.sh file gets overwritten each time
#  Configure is run.  Any variables you add to Policy.sh will be lost
#  unless you copy Policy.sh somewhere else before running Configure.
#
#  Allow Configure command-line overrides; usually these won't be
#  needed, but something like -Dprefix=/test/location can be quite
#  useful for testing out new versions.

#Site-specific values:

case "$perladmin" in
'') perladmin='nhnssh@work101.data-hotel.net' ;;
esac

# Installation prefixes.  Allow a Configure -D override.  You
# may wish to reinstall perl under a different prefix, perhaps
# in order to test a different configuration.
# For an explanation of the installation directories, see the
# INSTALL file section on "Installation Directories".
case "$prefix" in
'') prefix='/home/isucon/perl5/perlbrew/perls/perl-5.16.1' ;;
esac

# By default, the next three are the same as $prefix.  
# If the user changes $prefix, and previously $siteprefix was the
# same as $prefix, then change $siteprefix as well.
# Use similar logic for $vendorprefix and $installprefix.

case "$siteprefix" in
'') if test "/home/isucon/perl5/perlbrew/perls/perl-5.16.1" = "/home/isucon/perl5/perlbrew/perls/perl-5.16.1"; then
	siteprefix="$prefix"
    else
	siteprefix='/home/isucon/perl5/perlbrew/perls/perl-5.16.1'
    fi
    ;;
esac
case "$vendorprefix" in
'') if test "" = "/home/isucon/perl5/perlbrew/perls/perl-5.16.1"; then
	vendorprefix="$prefix"
    else
	vendorprefix=''
    fi
    ;;
esac

# Where installperl puts things.
case "$installprefix" in
'') if test "/home/isucon/perl5/perlbrew/perls/perl-5.16.1" = "/home/isucon/perl5/perlbrew/perls/perl-5.16.1"; then
	installprefix="$prefix"
    else
	installprefix='/home/isucon/perl5/perlbrew/perls/perl-5.16.1'
    fi
    ;;
esac

# Installation directives.  Note that each one comes in three flavors.
# For example, we have privlib, privlibexp, and installprivlib.
# privlib is for private (to perl) library files.
# privlibexp is the same, except any '~' the user gave to Configure
#     is expanded to the user's home directory.  This is figured
#     out automatically by Configure, so you don't have to include it here.
# installprivlib is for systems (such as those running AFS) that
#     need to distinguish between the place where things
#     get installed and where they finally will reside.  As of 5.005_6x,
#     this too is handled automatically by Configure based on
#     /home/isucon/perl5/perlbrew/perls/perl-5.16.1, so it isn't included here either.
#
# Note also that there are three broad hierarchies of installation 
# directories, as discussed in the INSTALL file under 
# "Installation Directories":
#
#  =item Directories for the perl distribution
#
#  =item Directories for site-specific add-on files
#
#  =item Directories for vendor-supplied add-on files
#
#  See Porting/Glossary for the definitions of these names, and see the
#  INSTALL file for further explanation and some examples.
# 
# In each case, if your previous value was the default, leave it commented
# out.  That way, if you override prefix, all of these will be
# automatically adjusted.
#
# WARNING:  Be especially careful about architecture-dependent and
# version-dependent names, particularly if you reuse this file for
# different versions of perl.

# bin='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/bin'
# scriptdir='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/bin'
# privlib='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/lib/5.16.1'
# archlib='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/lib/5.16.1/x86_64-linux'
# Preserving custom man1dir
man1dir=' '
# Preserving custom man3dir
man3dir=' '
# Preserving custom man1ext
man1ext='0'
# Preserving custom man3ext
man3ext='0'
# Preserving custom html1dir
html1dir=' '
# Preserving custom html3dir
html3dir=' '
# sitebin='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/bin'
# sitescript='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/bin'
# sitelib='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/lib/site_perl/5.16.1'
# sitearch='/home/isucon/perl5/perlbrew/perls/perl-5.16.1/lib/site_perl/5.16.1/x86_64-linux'
# Preserving custom siteman1dir
siteman1dir=''
# Preserving custom siteman3dir
siteman3dir=''
# sitehtml1dir=''
# sitehtml3dir=''
# vendorbin=''
# vendorscript=''
# vendorlib=''
# vendorarch=''
# Preserving custom vendorman1dir
vendorman1dir=' '
# Preserving custom vendorman3dir
vendorman3dir=' '
# Preserving custom vendorhtml1dir
vendorhtml1dir=' '
# Preserving custom vendorhtml3dir
vendorhtml3dir=' '

#  Lastly, you may add additional items here.  For example, to set the
#  pager to your local favorite value, uncomment the following line in
#  the original Policy_sh.SH file and re-run   sh Policy_sh.SH.
#
#  pager='/usr/bin/less -R'
#
#  A full Glossary of all the config.sh variables is in the file
#  Porting/Glossary.

