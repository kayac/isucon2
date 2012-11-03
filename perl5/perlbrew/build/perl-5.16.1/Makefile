# Makefile
# This file is derived from Makefile.SH.  Any changes made here will
# be lost the next time you run Configure.
#  Makefile is used to generate makefile.  The only difference
#  is that makefile has the dependencies filled in at the end.

CC = cc
LD = cc

LDFLAGS =  -fstack-protector -L/usr/local/lib
CLDFLAGS =  -fstack-protector -L/usr/local/lib

mallocsrc = 
mallocobj = 
madlysrc = 
madlyobj = 
LNS = /bin/ln -s
# NOTE: some systems don't grok "cp -f". XXX Configure test needed?
CPS = cp
RMS = rm -f
ranlib = :

# The following are mentioned only to make metaconfig include the
# appropriate questions in Configure.  If you want to change these,
# edit config.sh instead, or specify --man1dir=/wherever on
# installman commandline.
bin = /home/isucon/perl5/perlbrew/perls/perl-5.16.1/bin
scriptdir = /home/isucon/perl5/perlbrew/perls/perl-5.16.1/bin
shrpdir = /home/isucon/perl5/perlbrew/perls/perl-5.16.1/lib/5.16.1/x86_64-linux/CORE
privlib = /home/isucon/perl5/perlbrew/perls/perl-5.16.1/lib/5.16.1
man1dir =  
man1ext = 0
man3dir =  
man3ext = 0

# The following are used to build and install shared libraries for
# dynamic loading.
LDDLFLAGS = -shared -O2 -L/usr/local/lib -fstack-protector
SHRPLDFLAGS = $(LDDLFLAGS)
CCDLFLAGS = -Wl,-E
DLSUFFIX = .so
PLDLFLAGS = 
LIBPERL = libperl.a
LLIBPERL= $(LIBPERL)
LLIBPERL_NONSHR= 
SHRPENV = 

# Static targets are ordinarily built without CCCDLFLAGS.  However,
# if building a shared libperl.so that might later be linked into
# another application, then it might be appropriate to also build static
# extensions (usually just DynaLoader) with relocatable code (e.g. -fPIC
# for GNU cc).
STATIC_LDFLAGS = CCCDLFLAGS=

# The following is used to include the current directory in
# the dynamic loader path you are building a shared libperl.
LDLIBPTH = 

# Sometimes running an executable is an adventure.
RUN = 

# These variables may need to be manually set for non-Unix systems.
AR = /usr/bin/ar
HOST_EXE_EXT = 
EXE_EXT = 
LIB_EXT = .a
OBJ_EXT = .o
PATH_SEP = :

# Macros to invoke a copy of miniperl during the build.  Targets which
# are built using these macros should depend on $(MINIPERL_EXE)
MINIPERL_EXE = miniperl$(EXE_EXT)
MINIPERL = $(LDLIBPTH) $(RUN) ./miniperl$(EXE_EXT) -Ilib

# Macros to invoke a copy of our fully operational perl during the build.
PERL_EXE = perl$(EXE_EXT)
RUN_PERL = $(LDLIBPTH) $(RUN) ./perl$(EXE_EXT)

# Macros to run our tests
RUN_TESTS = $(LDLIBPTH) ./runtests

dynamic_ext =   lib/auto/arybase/arybase.so lib/auto/attributes/attributes.so lib/auto/B/B.so lib/auto/Compress/Raw/Bzip2/Bzip2.so lib/auto/Compress/Raw/Zlib/Zlib.so lib/auto/Cwd/Cwd.so lib/auto/Data/Dumper/Dumper.so lib/auto/DB_File/DB_File.so lib/auto/Devel/Peek/Peek.so lib/auto/Devel/PPPort/PPPort.so lib/auto/Digest/MD5/MD5.so lib/auto/Digest/SHA/SHA.so lib/auto/Encode/Encode.so lib/auto/Fcntl/Fcntl.so lib/auto/File/Glob/Glob.so lib/auto/Filter/Util/Call/Call.so lib/auto/GDBM_File/GDBM_File.so lib/auto/Hash/Util/Util.so lib/auto/Hash/Util/FieldHash/FieldHash.so lib/auto/I18N/Langinfo/Langinfo.so lib/auto/IO/IO.so lib/auto/IPC/SysV/SysV.so lib/auto/List/Util/Util.so lib/auto/Math/BigInt/FastCalc/FastCalc.so lib/auto/MIME/Base64/Base64.so lib/auto/mro/mro.so lib/auto/NDBM_File/NDBM_File.so lib/auto/Opcode/Opcode.so lib/auto/PerlIO/encoding/encoding.so lib/auto/PerlIO/mmap/mmap.so lib/auto/PerlIO/scalar/scalar.so lib/auto/PerlIO/via/via.so lib/auto/POSIX/POSIX.so lib/auto/re/re.so lib/auto/SDBM_File/SDBM_File.so lib/auto/Socket/Socket.so lib/auto/Storable/Storable.so lib/auto/Sys/Hostname/Hostname.so lib/auto/Sys/Syslog/Syslog.so lib/auto/Text/Soundex/Soundex.so lib/auto/threads/threads.so lib/auto/threads/shared/shared.so lib/auto/Tie/Hash/NamedCapture/NamedCapture.so lib/auto/Time/HiRes/HiRes.so lib/auto/Time/Piece/Piece.so lib/auto/Unicode/Collate/Collate.so lib/auto/Unicode/Normalize/Normalize.so lib/auto/XS/APItest/APItest.so lib/auto/XS/Typemap/Typemap.so
dynamic_ext_re = lib/auto/re/re.so
static_ext =  
nonxs_ext =   cpan/Archive-Extract/pm_to_blib cpan/Archive-Tar/pm_to_blib dist/Attribute-Handlers/pm_to_blib cpan/autodie/pm_to_blib cpan/AutoLoader/pm_to_blib dist/autouse/pm_to_blib dist/base/pm_to_blib cpan/B-Debug/pm_to_blib dist/B-Deparse/pm_to_blib dist/bignum/pm_to_blib dist/B-Lint/pm_to_blib dist/Carp/pm_to_blib cpan/CGI/pm_to_blib dist/constant/pm_to_blib cpan/CPAN/pm_to_blib cpan/CPAN-Meta/pm_to_blib cpan/CPAN-Meta-YAML/pm_to_blib cpan/CPANPLUS/pm_to_blib cpan/CPANPLUS-Dist-Build/pm_to_blib dist/Devel-SelfStubber/pm_to_blib cpan/Digest/pm_to_blib dist/Dumpvalue/pm_to_blib cpan/encoding-warnings/pm_to_blib dist/Env/pm_to_blib ext/Errno/pm_to_blib dist/ExtUtils-CBuilder/pm_to_blib dist/ExtUtils-Command/pm_to_blib cpan/ExtUtils-Constant/pm_to_blib dist/ExtUtils-Install/pm_to_blib cpan/ExtUtils-MakeMaker/pm_to_blib dist/ExtUtils-Manifest/pm_to_blib dist/ExtUtils-ParseXS/pm_to_blib ext/FileCache/pm_to_blib dist/File-CheckTree/pm_to_blib cpan/File-Fetch/pm_to_blib cpan/File-Path/pm_to_blib cpan/File-Temp/pm_to_blib dist/Filter-Simple/pm_to_blib cpan/Getopt-Long/pm_to_blib cpan/HTTP-Tiny/pm_to_blib dist/I18N-Collate/pm_to_blib dist/I18N-LangTags/pm_to_blib dist/if/pm_to_blib cpan/IO-Compress/pm_to_blib cpan/IO-Zlib/pm_to_blib cpan/IPC-Cmd/pm_to_blib ext/IPC-Open3/pm_to_blib cpan/JSON-PP/pm_to_blib dist/lib/pm_to_blib cpan/libnet/pm_to_blib cpan/Locale-Codes/pm_to_blib dist/Locale-Maketext/pm_to_blib cpan/Locale-Maketext-Simple/pm_to_blib cpan/Log-Message/pm_to_blib cpan/Log-Message-Simple/pm_to_blib dist/Math-BigInt/pm_to_blib dist/Math-BigRat/pm_to_blib cpan/Math-Complex/pm_to_blib cpan/Memoize/pm_to_blib cpan/Module-Build/pm_to_blib dist/Module-CoreList/pm_to_blib cpan/Module-Load/pm_to_blib cpan/Module-Load-Conditional/pm_to_blib cpan/Module-Loaded/pm_to_blib cpan/Module-Metadata/pm_to_blib cpan/Module-Pluggable/pm_to_blib dist/Net-Ping/pm_to_blib cpan/NEXT/pm_to_blib cpan/Object-Accessor/pm_to_blib cpan/Package-Constants/pm_to_blib cpan/Params-Check/pm_to_blib cpan/parent/pm_to_blib cpan/Parse-CPAN-Meta/pm_to_blib cpan/perlfaq/pm_to_blib cpan/PerlIO-via-QuotedPrint/pm_to_blib cpan/Perl-OSType/pm_to_blib cpan/Pod-Escapes/pm_to_blib ext/Pod-Functions/pm_to_blib ext/Pod-Html/pm_to_blib cpan/Pod-LaTeX/pm_to_blib cpan/podlators/pm_to_blib cpan/Pod-Parser/pm_to_blib cpan/Pod-Perldoc/pm_to_blib cpan/Pod-Simple/pm_to_blib dist/Safe/pm_to_blib dist/Search-Dict/pm_to_blib dist/SelfLoader/pm_to_blib cpan/Term-ANSIColor/pm_to_blib cpan/Term-Cap/pm_to_blib dist/Term-Complete/pm_to_blib dist/Term-ReadLine/pm_to_blib cpan/Term-UI/pm_to_blib cpan/Test/pm_to_blib cpan/Test-Harness/pm_to_blib cpan/Test-Simple/pm_to_blib dist/Text-Abbrev/pm_to_blib cpan/Text-Balanced/pm_to_blib cpan/Text-ParseWords/pm_to_blib cpan/Text-Tabs/pm_to_blib dist/Thread-Queue/pm_to_blib dist/Thread-Semaphore/pm_to_blib dist/Tie-File/pm_to_blib ext/Tie-Memoize/pm_to_blib cpan/Tie-RefHash/pm_to_blib cpan/Time-Local/pm_to_blib cpan/Version-Requirements/pm_to_blib dist/XSLoader/pm_to_blib
ext = $(dynamic_ext) $(static_ext) $(nonxs_ext)
DYNALOADER = DynaLoader$(OBJ_EXT)

libs = -lnsl -ldl -lm -lcrypt -lutil -lc 

public = $(PERL_EXE) utilities translators

shellflags = 

# This is set to  MAKE=make if your make command doesn't
# do it for you.
#

# Mention gmake here so it gets probed for by Configure.

# If you're going to use valgrind and it can't be invoked as plain valgrind
# then you'll need to change this, or override it on the make command line.
VALGRIND ?= valgrind
VG_TEST  ?= ./perl -e 1 2>/dev/null

DTRACE = 
DTRACE_H = 
DTRACE_O = 
MINIDTRACE_O = 

FIRSTMAKEFILE = makefile

# Any special object files needed by this architecture, e.g. os2/os2.obj
ARCHOBJS = 

.SUFFIXES: .c $(OBJ_EXT) .i .s

# grrr
SHELL = /bin/sh

# how to tr(anslate) newlines
TRNL = '\n'

OPTIMIZE = -O2

EXTRAS = 

INSTALLPREFIXEXP = /home/isucon/perl5/perlbrew/perls/perl-5.16.1


CCCMD    = `sh $(shellflags) cflags "optimize='$(OPTIMIZE)'" $@`

CCCMDSRC = `sh $(shellflags) cflags "optimize='$(OPTIMIZE)'" $<`

CONFIGPM_FROM_CONFIG_SH = lib/Config.pm lib/Config_heavy.pl
CONFIGPM = $(CONFIGPM_FROM_CONFIG_SH) lib/Config_git.pl

CONFIGPOD = lib/Config.pod

CONFIGH = config.h

private = preplibrary $(CONFIGPM) $(CONFIGPOD) lib/ExtUtils/Miniperl.pm git_version.h lib/buildcustomize.pl

# Files to be built with variable substitution before miniperl
# is available.
sh = Makefile.SH cflags.SH config_h.SH makedepend.SH myconfig.SH pod/Makefile.SH

shextract = Makefile cflags config.h makedepend makedir myconfig pod/Makefile

addedbyconf = UU $(shextract) pstruct

# Unicode data files generated by mktables
unidatafiles = lib/unicore/Decomposition.pl lib/unicore/TestProp.pl \
	lib/unicore/CombiningClass.pl lib/unicore/Name.pl \
	lib/unicore/UCD.pl lib/unicore/Name.pm \
	lib/unicore/Heavy.pl lib/unicore/mktables.lst

# Directories of Unicode data files generated by mktables
unidatadirs = lib/unicore/To lib/unicore/lib

h1 = EXTERN.h INTERN.h XSUB.h av.h $(CONFIGH) cop.h cv.h dosish.h
h2 = embed.h form.h gv.h handy.h hv.h keywords.h mg.h op.h opcode.h
h3 = pad.h patchlevel.h perl.h perlapi.h perly.h pp.h proto.h regcomp.h
h4 = regexp.h scope.h sv.h unixish.h util.h iperlsys.h thread.h
h5 = utf8.h warnings.h mydtrace.h op_reg_common.h l1_char_class_tab.h
h6 = charclass_invlists.h
h = $(h1) $(h2) $(h3) $(h4) $(h5) $(h6)

c1 = av.c scope.c op.c doop.c doio.c dump.c gv.c hv.c mg.c reentr.c mro.c perl.c
c2 = perly.c pp.c pp_hot.c pp_ctl.c pp_sys.c regcomp.c regexec.c utf8.c sv.c
c3 = taint.c toke.c util.c deb.c run.c universal.c pad.c globals.c keywords.c
c4 = perlio.c perlapi.c numeric.c mathoms.c locale.c pp_pack.c pp_sort.c
c5 = $(madlysrc) $(mallocsrc)

c = $(c1) $(c2) $(c3) $(c4) $(c5) miniperlmain.c opmini.c perlmini.c

obj0 = op$(OBJ_EXT) perl$(OBJ_EXT)
obj0mini = perlmini$(OBJ_EXT) opmini$(OBJ_EXT) miniperlmain$(OBJ_EXT)
obj1 = $(madlyobj) $(mallocobj) gv$(OBJ_EXT) toke$(OBJ_EXT) perly$(OBJ_EXT) pad$(OBJ_EXT) regcomp$(OBJ_EXT) dump$(OBJ_EXT) util$(OBJ_EXT) mg$(OBJ_EXT) reentr$(OBJ_EXT) mro$(OBJ_EXT) keywords$(OBJ_EXT)
obj2 = hv$(OBJ_EXT) av$(OBJ_EXT) run$(OBJ_EXT) pp_hot$(OBJ_EXT) sv$(OBJ_EXT) pp$(OBJ_EXT) scope$(OBJ_EXT) pp_ctl$(OBJ_EXT) pp_sys$(OBJ_EXT)
obj3 = doop$(OBJ_EXT) doio$(OBJ_EXT) regexec$(OBJ_EXT) utf8$(OBJ_EXT) taint$(OBJ_EXT) deb$(OBJ_EXT) universal$(OBJ_EXT) globals$(OBJ_EXT) perlio$(OBJ_EXT) perlapi$(OBJ_EXT) numeric$(OBJ_EXT) mathoms$(OBJ_EXT) locale$(OBJ_EXT) pp_pack$(OBJ_EXT) pp_sort$(OBJ_EXT)

minindt_obj = $(obj0mini) $(obj1) $(obj2) $(obj3) $(ARCHOBJS)
mini_obj = $(minindt_obj) $(MINIDTRACE_O)
ndt_obj = $(obj0) $(obj1) $(obj2) $(obj3) $(ARCHOBJS)
obj = $(ndt_obj) $(DTRACE_O)

perltoc_pod_prereqs = extra.pods pod/perl5161delta.pod pod/perlapi.pod pod/perlintern.pod pod/perlmodlib.pod pod/perluniprops.pod
generated_pods = pod/perltoc.pod $(perltoc_pod_prereqs)
generated_headers = uudmap.h bitcount.h mg_data.h

Icwd = -Idist/Cwd -Idist/Cwd/lib -Idist/Carp/lib

lintflags = \
    -b \
    -n \
    -p \
    -Ncheck=%all \
    -Nlevel=4 \
    -errchk=parentheses \
    -errhdr=%all \
    -errfmt=src \
    -errtags \
    -erroff=E_ASSIGN_NARROW_CONV \
    -erroff=E_BAD_PTR_CAST \
    -erroff=E_BAD_PTR_CAST_ALIGN \
    -erroff=E_BAD_PTR_INT_COMBINATION \
    -erroff=E_BAD_SIGN_EXTEND \
    -erroff=E_BLOCK_DECL_UNUSED \
    -erroff=E_CASE_FALLTHRU \
    -erroff=E_CONST_EXPR \
    -erroff=E_CONSTANT_CONDITION \
    -erroff=E_END_OF_LOOP_CODE_NOT_REACHED \
    -erroff=E_EQUALITY_NOT_ASSIGNMENT \
    -erroff=E_EXPR_NULL_EFFECT \
    -erroff=E_FALSE_LOGICAL_EXPR \
    -erroff=E_INCL_NUSD \
    -erroff=E_LOOP_EMPTY \
    -erroff=E_MAIN_PARAM \
    -erroff=E_POINTER_TO_OBJECT \
    -erroff=E_PTRDIFF_OVERFLOW \
    -erroff=E_SHIFT_CNT_NEG_TOO_BIG_L \
    -erroff=E_STATIC_UNUSED \
    -erroff=E_TRUE_LOGICAL_EXPR

splintflags = \
    -I/usr/lib/gcc/i486-linux-gnu/4.0.2/include/ \
    -D__builtin_va_list=va_list \
    -Dsigjmp_buf=jmp_buf \
    -warnposix \
    \
    +boolint \
    +charintliteral \
    -fixedformalarray \
    -mustfreefresh \
    -nestedextern \
    -predboolint \
    -predboolothers \
    -preproc \
    -boolops \
    -shadow \
    -nullstate \
    +longintegral \
    +matchanyintegral \
    -type \
    \
    +line-len 999 \
    +weak

splintfiles = $(c1)

.c$(OBJ_EXT): 
	$(CCCMD) $(PLDLFLAGS) $*.c

.c.i: 
	$(CCCMDSRC) -E $*.c > $*.i

.c.s:
	$(CCCMDSRC) -S $*.c

all: $(FIRSTMAKEFILE) $(MINIPERL_EXE) $(generated_pods) $(private) $(unidatafiles) $(public) $(dynamic_ext) $(nonxs_ext) extras.make
	@echo " ";
	@echo "	Everything is up to date. Type '$(MAKE) test' to run test suite."

.PHONY: all translators utilities

# Both git_version.h and lib/Config_git.pl are built
# by make_patchnum.pl.
git_version.h: lib/Config_git.pl

lib/Config_git.pl: $(MINIPERL_EXE) make_patchnum.pl
	$(MINIPERL) make_patchnum.pl

# make sure that we recompile perl.c if the git version changes
perl$(OBJ_EXT): git_version.h

translators:	$(MINIPERL_EXE) $(CONFIGPM) $(dynamic_ext) FORCE
	@echo " "; echo "	Making x2p stuff"; cd x2p; $(LDLIBPTH) $(MAKE) all

x2p/s2p: $(MINIPERL_EXE) $(CONFIGPM) $(dynamic_ext) FORCE
	cd x2p; $(LDLIBPTH) $(MAKE) s2p

x2p/find2perl: $(MINIPERL_EXE) $(CONFIGPM) $(dynamic_ext) FORCE
	cd x2p; $(LDLIBPTH) $(MAKE) find2perl

utilities:	$(MINIPERL_EXE) $(CONFIGPM) lib/auto/Cwd/Cwd$(DLSUFFIX) FORCE
	@echo " "; echo "	Making utilities"; cd utils; $(LDLIBPTH) $(MAKE) all


# This is now done by installman only if you actually want the man pages.
#	@echo " "; echo "	Making docs"; cd pod; $(MAKE) all;

# Phony target to force checking subdirectories.
# Apparently some makes require an action for the FORCE target.
.PHONY: FORCE
FORCE:
	@sh -c true

opmini.c: op.c
	$(RMS) opmini.c
	$(LNS) op.c opmini.c

opmini$(OBJ_EXT): opmini.c
	$(CCCMD) $(PLDLFLAGS) -DPERL_IS_MINIPERL -DPERL_EXTERNAL_GLOB opmini.c

perlmini.c: perl.c
	$(RMS) perlmini.c
	$(LNS) perl.c perlmini.c

perlmini$(OBJ_EXT): perlmini.c
	$(CCCMD) $(PLDLFLAGS) -DPERL_IS_MINIPERL -DPERL_EXTERNAL_GLOB perlmini.c

globals$(OBJ_EXT): $(generated_headers)

uudmap.h mg_data.h: bitcount.h

bitcount.h: generate_uudmap$(HOST_EXE_EXT)
	$(RUN) ./generate_uudmap$(HOST_EXE_EXT) $(generated_headers)

generate_uudmap$(OBJ_EXT): mg_raw.h

generate_uudmap$(HOST_EXE_EXT): generate_uudmap$(OBJ_EXT)
	$(CC) -o generate_uudmap$(EXE_EXT) $(LDFLAGS) generate_uudmap$(OBJ_EXT) $(libs)

miniperlmain$(OBJ_EXT): miniperlmain.c patchlevel.h
	$(CCCMD) $(PLDLFLAGS) $*.c

perlmain.c: $(MINIPERL_EXE) lib/ExtUtils/Miniperl.pm
	$(MINIPERL) -Ilib -MExtUtils::Miniperl -e 'writemain(@ARGV)' DynaLoader $(static_ext) > perlmain.c

perlmain$(OBJ_EXT): perlmain.c
	$(CCCMD) $(PLDLFLAGS) $*.c

# The file ext.libs is a list of libraries that must be linked in
# for static extensions, e.g. -lm -lgdbm, etc.  The individual
# static extension Makefile's add to it.
ext.libs: $(static_ext)
	-@test -f ext.libs || touch ext.libs

$(LIBPERL): $& $(obj) $(DYNALOADER) $(LIBPERLEXPORT)
	rm -f $(LIBPERL)
	$(AR) rcu $(LIBPERL) $(obj) $(DYNALOADER)
	@$(ranlib) $(LIBPERL)

# How to build executables.

# The $& notation tells Sequent machines that it can do a parallel make,
# and is harmless otherwise.
# The miniperl -w -MExporter line is a basic cheap test to catch errors
# before make goes on to run preplibrary and then MakeMaker on extensions.
# This is very handy because later errors are often caused by miniperl
# build problems but that's not obvious to the novice.
# The Module used here must not depend on Config or any extensions.

$(MINIPERL_EXE): $& $(mini_obj)
	-@rm -f miniperl.xok
	$(LDLIBPTH) $(CC) $(CLDFLAGS) -o $(MINIPERL_EXE) \
	    $(mini_obj) $(libs)
	$(LDLIBPTH) $(RUN) ./miniperl$(HOST_EXE_EXT) -w -Ilib -MExporter -e '<?>' || $(MAKE) minitest

$(PERL_EXE): $& perlmain$(OBJ_EXT) $(LIBPERL) $(static_ext) ext.libs $(PERLEXPORT)
	-@rm -f miniperl.xok
	$(SHRPENV) $(LDLIBPTH) $(CC) -o perl$(PERL_SUFFIX) $(PERL_PROFILE_LDFLAGS) $(CLDFLAGS) $(CCDLFLAGS) perlmain$(OBJ_EXT) $(static_ext) $(LLIBPERL) `cat ext.libs` $(libs)

# Purify/Quantify Perls.

pure$(PERL_EXE): $& perlmain$(OBJ_EXT) $(LIBPERL) $(static_ext) ext.libs $(PERLEXPORT)
	$(SHRPENV) $(LDLIBPTH) purify $(CC) -o pureperl $(CLDFLAGS) $(CCDLFLAGS) perlmain$(OBJ_EXT) $(static_ext) $(LLIBPERL) `cat ext.libs` $(libs)

purecov$(PERL_EXE): $& perlmain$(OBJ_EXT) $(LIBPERL) $(static_ext) ext.libs $(PERLEXPORT)
	$(SHRPENV) $(LDLIBPTH) purecov $(CC) -o purecovperl $(CLDFLAGS) $(CCDLFLAGS) perlmain$(OBJ_EXT) $(static_ext) $(LLIBPERL) `cat ext.libs` $(libs)

quant$(PERL_EXE): $& perlmain$(OBJ_EXT) $(LIBPERL) $(static_ext) ext.libs $(PERLEXPORT)
	$(SHRPENV) $(LDLIBPTH) quantify $(CC) -o quantperl $(CLDFLAGS) $(CCDLFLAGS) perlmain$(OBJ_EXT) $(static_ext) $(LLIBPERL) `cat ext.libs` $(libs)

# Valgrind perl (currently Linux, Darwin only)

perl.valgrind.config: config.sh
	@echo "To build perl.valgrind you must Configure -Doptimize=-g -Uusemymalloc, checking..."
	@$(MAKE) perl.config.dashg
	@echo "Checking usemymalloc='n' in config.sh..."
	@grep "^usemymalloc="    config.sh
	@grep "^usemymalloc='n'" config.sh >/dev/null || exit 1
	@echo "And of course you have to have valgrind..."
	$(VALGRIND) $(VG_TEST) || exit 1

# Third Degree Perl (Tru64 only)

perl.config.dashg:
	@echo "Checking optimize='-g' in config.sh..."
	@grep "^optimize=" config.sh
	@egrep "^optimize='(.*-g.*)'" config.sh >/dev/null || exit 1

perl.third.config: config.sh
	@echo "To build perl.third you must Configure -Doptimize=-g -Uusemymalloc, checking..."
	@$(MAKE) perl.config.dashg
	@echo "Checking usemymalloc='n' in config.sh..."
	@grep "^usemymalloc="    config.sh
	@grep "^usemymalloc='n'" config.sh >/dev/null || exit 1

perl.third: /usr/bin/atom perl.third.config perl
	atom -tool third -L. -all -gp -toolargs="-invalid -uninit heap+stack+copy -min 0" perl
	@echo "Now you may run perl.third and then study perl.3log."

# Pixie Perls (Tru64 and IRIX only)

perl.pixie.config: config.sh
	@echo "To build perl.pixie you must Configure -Doptimize=-g, checking..."
	@$(MAKE) perl.config.dashg

perl.pixie.atom: /usr/bin/atom perl
	atom -tool pixie -L. -all -toolargs="-quiet" perl

perl.pixie.irix: perl
	pixie perl

perl.pixie: /usr/bin/pixie perl.pixie.config perl
	if test -x /usr/bin/atom; then \
	  $(MAKE) perl.pixie.atom; \
	else \
	  $(MAKE) perl.pixie.irix; \
	fi
	@echo "Now you may run perl.pixie and then run pixie."

# Gprof Perl

perl.config.dashpg:
	@echo "Checking optimize='-pg' in config.sh..."
	@grep "^optimize="      config.sh
	@grep "^optimize='.*-pg.*'" config.sh >/dev/null || exit 1

perl.gprof.config: config.sh
	@echo "To build perl.gprof you must Configure -Doptimize=-pg, checking..."
	@$(MAKE) perl.config.dashpg

perl.gprof: /usr/bin/gprof perl.gprof.config
	@-rm -f perl
	$(MAKE) PERL_SUFFIX=.gprof PERL_PROFILE_LDFLAGS=-pg perl
	@echo "Now you may run perl.gprof and then run gprof perl.gprof."

# Gcov Perl

perl.config.gcov:
	@echo "To build perl.gcov you must use gcc 3.0 or newer, checking..."
	@echo "Checking gccversion in config.sh..."
	@grep "^gccversion="      config.sh
	@grep "^gccversion='[3-9]\." config.sh >/dev/null || exit 1
	@echo "To build perl.gcov you must Configure -Dccflags=-fprofile-arcs -ftest-coverage, checking..."
	@echo "Checking ccflags='-fprofile-arcs -ftest-coverage' in config.sh..."
	@grep "^ccflags="      config.sh
	@grep "^ccflags='.*-fprofile-arcs -ftest-coverage.*'" config.sh >/dev/null || exit 1

perl.gcov: perl.config.gcov
	@-rm -f perl
	$(MAKE) PERL_SUFFIX=.gcov PERL_PROFILE_LDFLAGS='' perl
	@echo "Now you may run perl.gcov and then run gcov some.c."

# Microperl.  This is just a convenience thing if one happens to
# build also the full Perl and therefore the real big Makefile:
# usually one should manually explicitly issue the below command.

.PHONY: microperl
microperl:
	$(MAKE) -f Makefile.micro

.PHONY: makeppport
makeppport: $(MINIPERL_EXE) $(CONFIGPM) $(nonxs_ext)
	$(MINIPERL) $(Icwd) mkppport


.PHONY: preplibrary
preplibrary: $(MINIPERL_EXE) $(CONFIGPM) $(PREPLIBRARY_LIBPERL)

$(CONFIGPM_FROM_CONFIG_SH): $(CONFIGPOD)

$(CONFIGPOD): config.sh $(MINIPERL_EXE) configpm Porting/Glossary lib/Config_git.pl
	$(MINIPERL) configpm

lib/ExtUtils/Miniperl.pm: miniperlmain.c $(MINIPERL_EXE) minimod.pl $(CONFIGPM)
	$(MINIPERL) minimod.pl > lib/ExtUtils/Miniperl.pm

lib/buildcustomize.pl: $(MINIPERL_EXE) write_buildcustomize.pl
	$(MINIPERL) write_buildcustomize.pl >lib/buildcustomize.pl

unidatafiles $(unidatafiles) pod/perluniprops.pod: uni.data

uni.data: $(MINIPERL_EXE) $(CONFIGPM) lib/unicore/mktables $(nonxs_ext)
	$(MINIPERL) $(Icwd) lib/unicore/mktables -C lib/unicore -P pod -maketest -makelist -p
#	Commented out so always runs, mktables looks at far more files than we
#	can in this makefile to decide if needs to run or not
#	touch uni.data

# $(PERL_EXE) and ext because buildtoc uses Text::Wrap uses re
# But also this ensures that all extensions are built before we try to scan
# them, which picks up Devel::PPPort's documentation.
pod/perltoc.pod: $(perltoc_pod_prereqs)  $(PERL_EXE) $(ext) pod/buildtoc
	$(RUN_PERL) -f -Ilib pod/buildtoc -q

pod/perlapi.pod: pod/perlintern.pod

pod/perlintern.pod: $(MINIPERL_EXE) autodoc.pl embed.fnc
	$(MINIPERL) autodoc.pl

pod/perlmodlib.pod: $(MINIPERL_EXE) pod/perlmodlib.PL MANIFEST
	$(MINIPERL) $(Icwd) pod/perlmodlib.PL -q

pod/perl5161delta.pod: pod/perldelta.pod
	$(LNS) perldelta.pod pod/perl5161delta.pod

extra.pods: $(MINIPERL_EXE)
	-@test ! -f extra.pods || rm -f `cat extra.pods`
	-@rm -f extra.pods
	-@for x in `grep -l '^=[a-z]' README.* | grep -v README.vms` ; do \
	    nx=`echo $$x | sed -e "s/README\.//"`; \
	    $(LNS) ../$$x "pod/perl"$$nx".pod" ; \
	    echo "pod/perl"$$nx".pod" >> extra.pods ; \
	done

extras.make: $(PERL_EXE)
	-@test ! -s extras.lst || PATH="`pwd`:${PATH}" PERL5LIB="`pwd`/lib" $(RUN_PERL) -Ilib -MCPAN -e '@ARGV&&make(@ARGV)' `cat extras.lst`

extras.test: $(PERL_EXE)
	-@test ! -s extras.lst || PATH="`pwd`:${PATH}" PERL5LIB="`pwd`/lib" $(RUN_PERL) -Ilib -MCPAN -e '@ARGV&&test(@ARGV)' `cat extras.lst`

extras.install: $(PERL_EXE)
	-@test ! -s extras.lst || PATH="`pwd`:${PATH}" PERL5LIB="`pwd`/lib" $(RUN_PERL) -Ilib -MCPAN -e '@ARGV&&install(@ARGV)' `cat extras.lst`

.PHONY: install install-strip install-all install-verbose install-silent \
	no-install install.perl install.man install.html

install_strip install-strip:
	$(MAKE) STRIPFLAGS=-s install DESTDIR="$(DESTDIR)"

install install_all install-all:
	$(MAKE) install.perl install.man STRIPFLAGS=$(STRIPFLAGS) DESTDIR="$(DESTDIR)"

install_verbose install-verbose:
	$(MAKE) install.perl install.man STRIPFLAGS=$(STRIPFLAGS) INSTALLFLAGS=-V DESTDIR="$(DESTDIR)"

install_silent install-silent:
	$(MAKE) install.perl install.man STRIPFLAGS=$(STRIPFLAGS) INSTALLFLAGS=-S DESTDIR="$(DESTDIR)"

no_install no-install:
	$(MAKE) install.perl install.man STRIPFLAGS=$(STRIPFLAGS) INSTALLFLAGS=-n DESTDIR="$(DESTDIR)"

# Set this to an empty string to avoid an attempt of rebuild before install
INSTALL_DEPENDENCE = all

install.perl:	$(INSTALL_DEPENDENCE) installperl
	$(RUN_PERL) installperl --destdir=$(DESTDIR) $(INSTALLFLAGS) $(STRIPFLAGS)
	-@test ! -s extras.lst || $(MAKE) extras.install

install.man:	all installman
	$(RUN_PERL) installman --destdir=$(DESTDIR) $(INSTALLFLAGS)

# XXX Experimental. Hardwired values, but useful for testing.
# Eventually Configure could ask for some of these values.
install.html: all installhtml
	-@test -f README.vms && cd vms && $(LNS) ../README.vms README_vms.pod && cd ..
	$(RUN_PERL) installhtml   \
      --podroot=. --podpath=. --recurse  \
      --htmldir=$(privlib)/html   \
      --htmlroot=$(privlib)/html  \
      --splithead=pod/perlipc     \
      --splititem=pod/perlfunc    \
      --ignore=Porting/Maintainers.pm,Porting/pumpkin.pod,Porting/repository.pod \
      --verbose


# I now supply perly.c with the kits, so the following section is
# used only if you force bison to run by saying
# 	make regen_perly
# You normally shouldn't remake perly.[ch].

.PHONY: regen_perly

run_byacc run-byacc:
	@echo "run_byacc is obsolete; try 'make regen_perly' instead"

# this outputs perly.h, perly.act and perly.tab
regen_perly regen-perly:
	perl regen_perly.pl

# We don't want to regenerate perly.c and perly.h, but they might
# appear out-of-date after a patch is applied or a new distribution is
# made.
perly.c: perly.y
	-@sh -c true

perly.h: perly.y
	-@sh -c true

SYM  = globvar.sym perlio.sym

SYMH = perlvars.h intrpvar.h

CHMOD_W = chmod +w

# The following files are generated automatically
#	embed.pl:	proto.h embed.h embedvar.h perlapi.h perlapi.c
#	opcode.pl:	opcode.h opnames.h pp_proto.h
#	regcomp.pl:	regnodes.h
#	warnings.pl:	warnings.h lib/warnings.pm
#	feature.pl:	feature.h lib/feature.pm
# The correct versions should be already supplied with the perl kit,
# in case you don't have perl available.
# To force them to be regenerated, run
#       perl regen.pl
# with your existing copy of perl
# (make regen_headers is kept for backwards compatibility)

AUTOGEN_FILES = opcode.h opnames.h pp_proto.h proto.h embed.h embedvar.h \
		perlapi.h perlapi.c regnodes.h warnings.h lib/warnings.pm \
		lib/feature.pm feature.h

.PHONY: regen_headers regen_all

regen:	FORCE
	-perl regen.pl
	-perl regen/uconfig_h.pl

regen_headers regen-headers:	FORCE
	-perl regen.pl -v
	-perl regen/uconfig_h.pl -v

regen_meta regen-meta:  META.yml

META.yml:   FORCE
	PATH="`pwd`:${PATH}" PERL5LIB="`pwd`/lib" $(RUN_PERL) -Ilib Porting/makemeta


regen_all regen-all: regen regen_meta

.PHONY:	manisort manicheck

manisort:	FORCE
	@perl Porting/manisort -q || (echo "WARNING: re-sorting MANIFEST"; \
		perl Porting/manisort -q -o MANIFEST; sh -c true)

manicheck:	FORCE
	perl Porting/manicheck

# Extensions:
# Names added to $(dynamic_ext) or $(static_ext) or $(nonxs_ext) will
# automatically get built.  There should ordinarily be no need to change
# any of this part of makefile.
#
# The dummy dependency is a place holder in case $(dynamic_ext) or
# $(static_ext) is empty.
#
# DynaLoader may be needed for extensions that use Makefile.PL.

$(DYNALOADER):	$(MINIPERL_EXE) lib/buildcustomize.pl preplibrary FORCE $(nonxs_ext)
	$(MINIPERL) make_ext.pl $@ MAKE=$(MAKE) LIBPERL_A=$(LIBPERL) LINKTYPE=static $(STATIC_LDFLAGS)

d_dummy $(dynamic_ext):	$(MINIPERL_EXE) lib/buildcustomize.pl preplibrary makeppport $(DYNALOADER) FORCE $(PERLEXPORT)
	$(MINIPERL) make_ext.pl $@ MAKE=$(MAKE) LIBPERL_A=$(LIBPERL) LINKTYPE=dynamic

s_dummy $(static_ext):	$(MINIPERL_EXE) lib/buildcustomize.pl preplibrary makeppport $(DYNALOADER) FORCE
	$(MINIPERL) make_ext.pl $@ MAKE=$(MAKE) LIBPERL_A=$(LIBPERL) LINKTYPE=static $(STATIC_LDFLAGS)

n_dummy $(nonxs_ext):	$(MINIPERL_EXE) lib/buildcustomize.pl preplibrary FORCE
	$(MINIPERL) make_ext.pl $@ MAKE=$(MAKE) LIBPERL_A=$(LIBPERL)

ext/Pod-Functions/pm_to_blib: cpan/Pod-Simple/pm_to_blib pod/perlfunc.pod

lib/auto/Math/BigInt/FastCalc/FastCalc.so: lib/auto/List/Util/Util.so
lib/auto/Unicode/Normalize/Normalize.so: uni.data

.PHONY: printconfig
printconfig:
	@eval `$(RUN_PERL) -Ilib -V:$(CONFIGVAR)`; echo $$$(CONFIGVAR)

.PHONY: clean _tidy _mopup _cleaner1 _cleaner2 \
	realclean _realcleaner clobber _clobber \
	distclean veryclean _verycleaner

clean:		_tidy _mopup 

realclean:	_realcleaner _mopup
	@echo "Note that '$(MAKE) realclean' does not delete config.sh or Policy.sh"

_clobber:
	-@rm -f Cross/run-* Cross/to-* Cross/from-*
	rm -f t/test_state
	rm -f config.sh cppstdin Policy.sh extras.lst

clobber:	_realcleaner _mopup _clobber

distclean:	clobber

# Like distclean but also removes emacs backups and *.orig.
veryclean:	_verycleaner _mopup _clobber
	-@rm -f Obsolete Wanted

# Do not 'make _mopup' directly.
_mopup:
	rm -f *$(OBJ_EXT) *$(LIB_EXT) all perlmain.c opmini.c perlmini.c generate_uudmap$(EXE_EXT) $(generated_headers)
	-rmdir .depending
	-@test -f extra.pods && rm -f `cat extra.pods`
	-@test -f vms/README_vms.pod && rm -f vms/README_vms.pod
	-rm -f perl.exp ext.libs $(generated_pods) uni.data opmini.o perlmini.o pod/roffitall
	-rm -f perl.export perl.dll perl.libexp perl.map perl.def
	-rm -f perl.loadmap miniperl.loadmap perl.prelmap miniperl.prelmap
	-rm -f perl.third lib*.so.perl.third perl.3log t/perl.third t/perl.3log
	-rm -f perl.pixie lib*.so.perl.pixie lib*.so.Addrs
	-rm -f perl.Addrs perl.Counts t/perl.Addrs t/perl.Counts *perl.xok
	-rm -f cygwin.c libperl*.def libperl*.dll cygperl*.dll *.exe.stackdump
	-rm -f $(PERL_EXE) $(MINIPERL_EXE) $(LIBPERL) libperl.* microperl
	-rm -f config.arch config.over $(DTRACE_H) runtests

# Do not 'make _tidy' directly.
_tidy:
	-cd pod; $(LDLIBPTH) $(MAKE) clean
	-cd utils; $(LDLIBPTH) $(MAKE) clean
	-cd x2p; $(LDLIBPTH) $(MAKE) clean
	-rm -f lib/Config_git.pl git_version.h
	-@for x in $(DYNALOADER) $(dynamic_ext) $(static_ext) $(nonxs_ext) ; do \
	$(MINIPERL) make_ext.pl --target=clean $$x MAKE=$(MAKE) ; \
	done

_cleaner1:
	-cd os2; rm -f Makefile
	-cd pod; $(LDLIBPTH) $(MAKE) $(CLEAN)
	-cd utils; $(LDLIBPTH) $(MAKE) $(CLEAN)
	-cd x2p; $(LDLIBPTH) $(MAKE) $(CLEAN)
	-@if test -f $(MINIPERL_EXE) ; then \
	for x in $(DYNALOADER) $(dynamic_ext) $(static_ext) $(nonxs_ext) ; do \
	$(MINIPERL) make_ext.pl --target=$(CLEAN) $$x MAKE=$(MAKE) ; \
	done ; \
	else \
	sh $(CLEAN).sh ; \
	fi
	rm -f realclean.sh veryclean.sh
	-for file in `find cpan dist ext -name ppport.h` ; do rm -f $$file; done

# Dear POSIX, thanks for making the default to xargs to be
# run once if nothhing is passed in. It is such a great help.

# Some systems do not support "?", so keep these files separate.
_cleaner2:
	-rm -f core.*perl.*.? t/core.perl.*.? .?*.c
	rm -f core *perl.core t/core t/*perl.core core.* t/core.*
	rm -f t/$(PERL_EXE) t/rantests
	rm -rf t/tmp*
	rm -f so_locations $(LIBPERL_NONSHR) $(MINIPERL_NONSHR)
	rm -rf $(addedbyconf)
	rm -f $(FIRSTMAKEFILE) $(FIRSTMAKEFILE).old makefile.old
	rm -f $(private)
	rm -rf $(unidatafiles) $(unidatadirs)
	rm -rf lib/auto
	rm -f lib/.exists lib/*/.exists lib/*/*/.exists
	rm -f h2ph.man pstruct
	rm -rf .config
	rm -f preload
	rm -rf lib/Encode lib/Compress lib/Hash lib/re
	rm -rf lib/TAP lib/Module/Pluggable lib/App
	rm -rf lib/mro
	rm -rf lib/IO/Compress lib/IO/Uncompress
	rm -f lib/ExtUtils/ParseXS/t/XSTest.c
	rm -f lib/ExtUtils/ParseXS/t/XSTest$(OBJ_EXT)
	rm -f lib/ExtUtils/ParseXS/t/XSTest$(DLSUFFIX)
	rm -fr lib/B
	rm -fr lib/CPAN lib/CPANPLUS
	rm -fr lib/ExtUtils/CBuilder
	rm -f pod2htmd.tmp
	rm -rf pod/perlfunc pod/perlipc
	-rmdir cpan/CPANPLUS-Dist-Build/t/dummy-cpanplus cpan/CPANPLUS/t/dummy-cpanplus cpan/CPANPLUS/t/dummy-localmirror
	-rmdir ext/B/lib
	-rmdir lib/Archive/Tar lib/Archive lib/Attribute
	-rmdir lib/CGI lib/Carp
	-rmdir lib/Data lib/Devel lib/Digest
	-rmdir lib/ExtUtils/Command lib/ExtUtils/Constant lib/ExtUtils/Liblist lib/ExtUtils/MakeMaker
	-rmdir lib/File/Spec lib/Filter/Util lib/Filter
	-rmdir lib/I18N/LangTags lib/IO/Socket lib/IO lib/IPC
	-rmdir lib/List/Util lib/List
	-rmdir lib/Locale/Maketext lib/Locale
	-rmdir lib/Log/Message lib/Log
	-rmdir lib/Math/Big* lib/Math
	-rmdir lib/Memoize lib/MIME
	-rmdir lib/Module/Build/Platform lib/Module/Build lib/Module/Load lib/Module
	-rmdir lib/Net/FTP lib/Object
	-rmdir lib/Parse/CPAN lib/Parse
	-rmdir lib/PerlIO/via lib/PerlIO
	-rmdir lib/Package lib/Params
	-rmdir lib/Pod/Perldoc lib/Pod/Simple lib/Pod/Text
	-rmdir lib/Sys lib/Scalar/Util lib/Scalar
	-rmdir lib/Term/UI lib/Thread lib/Tie/Hash
	-rmdir lib/Test/Builder/Tester lib/Test/Builder lib/Test
	-rmdir lib/Unicode/Collate
	-rmdir lib/XS/APItest lib/XS
	-rmdir lib/inc/latest lib/inc
	-rmdir lib/autodie/exception lib/autodie lib/encoding lib/threads
	-rm -f lib/ExtUtils/CBuilder/t/libcompilet.dll.a
	-rm -f lib/ExtUtils/ParseXS/t/libXSTest.dll.a

_realcleaner:
	@$(LDLIBPTH) $(MAKE) _cleaner1 CLEAN=distclean
	@$(LDLIBPTH) $(MAKE) _cleaner2

_verycleaner:
	@$(LDLIBPTH) $(MAKE) _cleaner1 CLEAN=veryclean
	@$(LDLIBPTH) $(MAKE) _cleaner2
	-rm -f *~ *.orig */*~ */*.orig */*/*~ */*/*.orig

.PHONY: lint
lint: $(c)
	rm -f *.ln
	lint $(lintflags) -DPERL_CORE -D_REENTRANT -DDEBUGGING -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 $(c)

.PHONY: splint
splint: $(c)
	splint $(splintflags) -DPERL_CORE -D_REENTRANT -DDEBUGGING -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 $(splintfiles)

# Need to unset during recursion to go out of loop.
# The README below ensures that the dependency list is never empty and
# that when MAKEDEPEND is empty $(FIRSTMAKEFILE) doesn't need rebuilding.

MAKEDEPEND = Makefile makedepend

$(FIRSTMAKEFILE):	README $(MAKEDEPEND)
	$(MAKE) depend MAKEDEPEND=

config.h: config_h.SH config.sh
	$(SHELL) config_h.SH

.PHONY: depend
depend: makedepend
	sh ./makedepend MAKE=$(MAKE)
	cd x2p; $(MAKE) depend

# Cannot postpone this until $firstmakefile is ready ;-)
makedepend: makedepend.SH config.sh
	sh ./makedepend.SH

runtests: runtests.SH config.sh
	sh ./runtests.SH

.PHONY: test check test_prep test_prep_nodll test_prep_pre \
	test_prep_reonly test_tty test-tty test_notty test-notty \
	utest ucheck test.utf8 check.utf8 test.torture torturetest \
	test.utf16 check.utf16 utest.utf16 ucheck.utf16 \
	test.third check.third utest.third ucheck.third test_notty.third \
	test.deparse test_notty.deparse test_harness test_harness_notty \
	minitest coretest test.taintwarn test-reonly _test

_test:
	echo >&2 The _test target is deprecated. Please upgrade your smoker
	PERL=./perl $(RUN_TESTS) choose

# Cannot delegate rebuilding of t/perl to make
# to allow interlaced test and minitest

# Architecture-neutral stuff:

test_prep_pre: preplibrary utilities $(nonxs_ext)

test_prep test-prep: test_prep_pre $(MINIPERL_EXE) $(unidatafiles) $(PERL_EXE) \
	$(dynamic_ext) $(TEST_PERL_DLL) runtests x2p/s2p x2p/find2perl \
	$(generated_pods)
	cd t && (rm -f $(PERL_EXE); $(LNS) ../$(PERL_EXE) $(PERL_EXE))

test_prep_reonly: $(MINIPERL_EXE) $(PERL_EXE) $(dynamic_ext_re) $(TEST_PERL_DLL)
	$(MINIPERL) make_ext.pl $(dynamic_ext_re) MAKE=$(MAKE) LIBPERL_A=$(LIBPERL) LINKTYPE=dynamic
	cd t && (rm -f $(PERL_EXE); $(LNS) ../$(PERL_EXE) $(PERL_EXE))

test check: test_prep
	$(RUN_TESTS) choose

test_tty test-tty: test_prep
	$(RUN_TESTS) tty

test_notty test-notty: test_prep
	$(RUN_TESTS) no-tty

utest ucheck test.utf8 check.utf8: test_prep
	TEST_ARGS=-utf8 $(RUN_TESTS) choose

coretest: test_prep
	TEST_ARGS=-core $(RUN_TESTS) choose

# Torture testing

test.torture torturetest:	test_prep
	TEST_ARGS=-torture $(RUN_TESTS) choose

# Targets for UTF16 testing:

minitest.utf16: minitest.prep
	- cd t && (rm -f $(PERL_EXE); $(LNS) ../$(MINIPERL_EXE) $(PERL_EXE)) \
		&& $(RUN_PERL) TEST -utf16 base/*.t comp/*.t cmd/*.t run/*.t io/*.t op/*.t uni/*.t </dev/tty

test.utf16 check.utf16: test_prep
	TEST_ARGS=-utf16 $(RUN_TESTS) choose

utest.utf16 ucheck.utf16: test_prep
	TEST_ARGS="-utf8 -utf16" $(RUN_TESTS) choose

# Targets for valgrind testing:

test_prep.valgrind: test_prep perl.valgrind

test.valgrind check.valgrind:	test_prep perl.valgrind.config
	PERL_VALGRIND=1 VALGRIND='$(VALGRIND)' $(RUN_TESTS) choose

utest.valgrind ucheck.valgrind: test_prep.valgrind perl.valgrind.config
	PERL_VALGRIND=1 TEST_ARGS=-utf8 $(RUN_TESTS) choose

test_notty.valgrind: test_prep.valgrind perl.valgrind.config
	PERL_VALGRIND=1 $(RUN_TESTS) no-tty

# Targets for Third Degree testing.

test_prep.third: test_prep perl.third
	cd t && (rm -f ./perl.third$(EXE_EXT); $(LNS) ../perl.third$(EXE_EXT) perl.third(EXE_EXT))

test.third check.third:	test_prep.third perl.third
	PERL=./perl.third PERL_3LOG=1 $(RUN_TESTS) choose

utest.third ucheck.third: test_prep.third perl.third
	PERL=./perl.third PERL_3LOG=1 TEST_ARGS=-utf8 $(RUN_TESTS) choose

test_notty.third: test_prep.third perl.third
	PERL=./perl.third PERL_3LOG=1 $(RUN_TESTS) choose

# Targets for Deparse testing.

test.deparse:	test_prep
	TEST_ARGS=-deparse $(RUN_TESTS) choose

test_notty.deparse:	test_prep
	TEST_ARGS=-deparse $(RUN_TESTS) no-tty

# Targets to run the test suite with -t

test.taintwarn:	test_prep
	TEST_ARGS=-taintwarn $(RUN_TESTS) choose

minitest.prep:
	-@test -f lib/Config.pm || $(MAKE) lib/Config.pm $(unidatafiles)
	@echo " "
	@echo "You may see some irrelevant test failures if you have been unable"
	@echo "to build lib/Config.pm, or the Unicode data files."
	@echo " "

# Can't depend on lib/Config.pm because that might be where miniperl
# is crashing.
minitest: $(MINIPERL_EXE) minitest.prep
	- cd t && (rm -f $(PERL_EXE); $(LNS) ../$(MINIPERL_EXE) $(PERL_EXE)) \
		&& $(RUN_PERL) TEST base/*.t comp/*.t cmd/*.t run/*.t io/*.t re/*.t op/*.t uni/*.t </dev/tty

# Test via harness

test_harness test-harness: test_prep
	TESTFILE=harness $(RUN_TESTS) choose

test_harness_notty: test_prep
	HARNESS_NOTTY=1 TESTFILE=harness $(RUN_TESTS) choose

test_reonly test-reonly: test_prep_reonly
	TEST_ARGS='-re \bre\/' TESTFILE=harness $(RUN_TESTS) choose


# Porting tests (well-formedness of pod, manifest, etc)

test_porting test-porting: test_prep
	cd t && $(RUN_PERL) harness porting/*.t ../lib/diagnostics.t

# Handy way to run perlbug -ok without having to install and run the
# installed perlbug. We don't re-run the tests here - we trust the user.
# Please *don't* use this unless all tests pass.
# If you want to report test failures, use "make nok" instead.

.PHONY: ok okfile oknack okfilenack nok nokfile noknack nokfilenack

ok:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -ok -s '(UNINSTALLED)'

okfile:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -ok -s '(UNINSTALLED)' -F perl.ok

oknack:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -ok -s '(UNINSTALLED)' -A

okfilenack:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -ok -s '(UNINSTALLED)' -F perl.ok -A

nok:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -nok -s '(UNINSTALLED)'

nokfile:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -nok -s '(UNINSTALLED)' -F perl.nok

noknack:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -nok -s '(UNINSTALLED)' -A

nokfilenack:	utilities
	$(RUN_PERL) -Ilib utils/perlbug -nok -s '(UNINSTALLED)' -F perl.nok -A

.PHONY: clist hlist shlist

clist:	$(c)
	echo $(c) | tr ' ' $(TRNL) >.clist

hlist:  $(h)
	echo $(h) | tr ' ' $(TRNL) >.hlist

shlist: $(sh)
	echo $(sh) | tr ' ' $(TRNL) >.shlist

Makefile: Makefile.SH ./config.sh
	$(SHELL) Makefile.SH

.PHONY: distcheck
distcheck: FORCE
	perl '-MExtUtils::Manifest=&fullcheck' -e 'fullcheck()'

.PHONY: ctags

ctags:
	ctags -f Tags -N --totals --languages=c --langmap=c:+.h --exclude=opmini.c --exclude=perlmini.c *.c *.h

# AUTOMATICALLY GENERATED MAKE DEPENDENCIES--PUT NOTHING BELOW THIS LINE
# If this runs make out of memory, delete /usr/include lines.
