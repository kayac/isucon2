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
av$(OBJ_EXT): /usr/include/_G_config.h
av$(OBJ_EXT): /usr/include/alloca.h
av$(OBJ_EXT): /usr/include/arpa/inet.h
av$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
av$(OBJ_EXT): /usr/include/asm-generic/errno.h
av$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
av$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
av$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
av$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
av$(OBJ_EXT): /usr/include/asm-x86_64/param.h
av$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
av$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
av$(OBJ_EXT): /usr/include/asm/errno.h
av$(OBJ_EXT): /usr/include/asm/ioctl.h
av$(OBJ_EXT): /usr/include/asm/ioctls.h
av$(OBJ_EXT): /usr/include/asm/param.h
av$(OBJ_EXT): /usr/include/asm/socket.h
av$(OBJ_EXT): /usr/include/asm/sockios.h
av$(OBJ_EXT): /usr/include/bits/byteswap.h
av$(OBJ_EXT): /usr/include/bits/confname.h
av$(OBJ_EXT): /usr/include/bits/dirent.h
av$(OBJ_EXT): /usr/include/bits/endian.h
av$(OBJ_EXT): /usr/include/bits/environments.h
av$(OBJ_EXT): /usr/include/bits/errno.h
av$(OBJ_EXT): /usr/include/bits/fcntl.h
av$(OBJ_EXT): /usr/include/bits/huge_val.h
av$(OBJ_EXT): /usr/include/bits/huge_valf.h
av$(OBJ_EXT): /usr/include/bits/huge_vall.h
av$(OBJ_EXT): /usr/include/bits/in.h
av$(OBJ_EXT): /usr/include/bits/inf.h
av$(OBJ_EXT): /usr/include/bits/ioctl-types.h
av$(OBJ_EXT): /usr/include/bits/ioctls.h
av$(OBJ_EXT): /usr/include/bits/ipc.h
av$(OBJ_EXT): /usr/include/bits/ipctypes.h
av$(OBJ_EXT): /usr/include/bits/local_lim.h
av$(OBJ_EXT): /usr/include/bits/locale.h
av$(OBJ_EXT): /usr/include/bits/mathcalls.h
av$(OBJ_EXT): /usr/include/bits/mathdef.h
av$(OBJ_EXT): /usr/include/bits/nan.h
av$(OBJ_EXT): /usr/include/bits/netdb.h
av$(OBJ_EXT): /usr/include/bits/posix1_lim.h
av$(OBJ_EXT): /usr/include/bits/posix2_lim.h
av$(OBJ_EXT): /usr/include/bits/posix_opt.h
av$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
av$(OBJ_EXT): /usr/include/bits/resource.h
av$(OBJ_EXT): /usr/include/bits/select.h
av$(OBJ_EXT): /usr/include/bits/sem.h
av$(OBJ_EXT): /usr/include/bits/setjmp.h
av$(OBJ_EXT): /usr/include/bits/sigaction.h
av$(OBJ_EXT): /usr/include/bits/sigcontext.h
av$(OBJ_EXT): /usr/include/bits/siginfo.h
av$(OBJ_EXT): /usr/include/bits/signum.h
av$(OBJ_EXT): /usr/include/bits/sigset.h
av$(OBJ_EXT): /usr/include/bits/sigstack.h
av$(OBJ_EXT): /usr/include/bits/sigthread.h
av$(OBJ_EXT): /usr/include/bits/sockaddr.h
av$(OBJ_EXT): /usr/include/bits/socket.h
av$(OBJ_EXT): /usr/include/bits/stat.h
av$(OBJ_EXT): /usr/include/bits/stdio_lim.h
av$(OBJ_EXT): /usr/include/bits/sys_errlist.h
av$(OBJ_EXT): /usr/include/bits/time.h
av$(OBJ_EXT): /usr/include/bits/types.h
av$(OBJ_EXT): /usr/include/bits/typesizes.h
av$(OBJ_EXT): /usr/include/bits/uio.h
av$(OBJ_EXT): /usr/include/bits/waitflags.h
av$(OBJ_EXT): /usr/include/bits/waitstatus.h
av$(OBJ_EXT): /usr/include/bits/wchar.h
av$(OBJ_EXT): /usr/include/bits/wordsize.h
av$(OBJ_EXT): /usr/include/bits/xopen_lim.h
av$(OBJ_EXT): /usr/include/ctype.h
av$(OBJ_EXT): /usr/include/dirent.h
av$(OBJ_EXT): /usr/include/endian.h
av$(OBJ_EXT): /usr/include/errno.h
av$(OBJ_EXT): /usr/include/fcntl.h
av$(OBJ_EXT): /usr/include/features.h
av$(OBJ_EXT): /usr/include/gconv.h
av$(OBJ_EXT): /usr/include/getopt.h
av$(OBJ_EXT): /usr/include/gnu/stubs-64.h
av$(OBJ_EXT): /usr/include/gnu/stubs.h
av$(OBJ_EXT): /usr/include/inttypes.h
av$(OBJ_EXT): /usr/include/libio.h
av$(OBJ_EXT): /usr/include/limits.h
av$(OBJ_EXT): /usr/include/linux/errno.h
av$(OBJ_EXT): /usr/include/linux/limits.h
av$(OBJ_EXT): /usr/include/linux/param.h
av$(OBJ_EXT): /usr/include/locale.h
av$(OBJ_EXT): /usr/include/math.h
av$(OBJ_EXT): /usr/include/netdb.h
av$(OBJ_EXT): /usr/include/netinet/in.h
av$(OBJ_EXT): /usr/include/rpc/netdb.h
av$(OBJ_EXT): /usr/include/setjmp.h
av$(OBJ_EXT): /usr/include/signal.h
av$(OBJ_EXT): /usr/include/stdint.h
av$(OBJ_EXT): /usr/include/stdio.h
av$(OBJ_EXT): /usr/include/stdlib.h
av$(OBJ_EXT): /usr/include/string.h
av$(OBJ_EXT): /usr/include/sys/cdefs.h
av$(OBJ_EXT): /usr/include/sys/file.h
av$(OBJ_EXT): /usr/include/sys/ioctl.h
av$(OBJ_EXT): /usr/include/sys/ipc.h
av$(OBJ_EXT): /usr/include/sys/param.h
av$(OBJ_EXT): /usr/include/sys/resource.h
av$(OBJ_EXT): /usr/include/sys/select.h
av$(OBJ_EXT): /usr/include/sys/sem.h
av$(OBJ_EXT): /usr/include/sys/socket.h
av$(OBJ_EXT): /usr/include/sys/stat.h
av$(OBJ_EXT): /usr/include/sys/sysmacros.h
av$(OBJ_EXT): /usr/include/sys/time.h
av$(OBJ_EXT): /usr/include/sys/times.h
av$(OBJ_EXT): /usr/include/sys/ttydefaults.h
av$(OBJ_EXT): /usr/include/sys/types.h
av$(OBJ_EXT): /usr/include/sys/ucontext.h
av$(OBJ_EXT): /usr/include/sys/uio.h
av$(OBJ_EXT): /usr/include/sys/wait.h
av$(OBJ_EXT): /usr/include/time.h
av$(OBJ_EXT): /usr/include/unistd.h
av$(OBJ_EXT): /usr/include/wchar.h
av$(OBJ_EXT): /usr/include/xlocale.h
av$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
av$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
av$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
av$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
av$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
av$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
av$(OBJ_EXT): EXTERN.h
av$(OBJ_EXT): av.c
av$(OBJ_EXT): av.h
av$(OBJ_EXT): config.h
av$(OBJ_EXT): cop.h
av$(OBJ_EXT): cv.h
av$(OBJ_EXT): embed.h
av$(OBJ_EXT): embedvar.h
av$(OBJ_EXT): form.h
av$(OBJ_EXT): gv.h
av$(OBJ_EXT): handy.h
av$(OBJ_EXT): hv.h
av$(OBJ_EXT): intrpvar.h
av$(OBJ_EXT): iperlsys.h
av$(OBJ_EXT): mg.h
av$(OBJ_EXT): mg_vtable.h
av$(OBJ_EXT): mydtrace.h
av$(OBJ_EXT): op.h
av$(OBJ_EXT): op_reg_common.h
av$(OBJ_EXT): opcode.h
av$(OBJ_EXT): opnames.h
av$(OBJ_EXT): overload.h
av$(OBJ_EXT): pad.h
av$(OBJ_EXT): parser.h
av$(OBJ_EXT): patchlevel.h
av$(OBJ_EXT): perl.h
av$(OBJ_EXT): perlio.h
av$(OBJ_EXT): perlvars.h
av$(OBJ_EXT): perly.h
av$(OBJ_EXT): pp.h
av$(OBJ_EXT): proto.h
av$(OBJ_EXT): regexp.h
av$(OBJ_EXT): scope.h
av$(OBJ_EXT): sv.h
av$(OBJ_EXT): thread.h
av$(OBJ_EXT): unixish.h
av$(OBJ_EXT): utf8.h
av$(OBJ_EXT): util.h
av$(OBJ_EXT): warnings.h
av$(OBJ_EXT): cflags
scope$(OBJ_EXT): /usr/include/_G_config.h
scope$(OBJ_EXT): /usr/include/alloca.h
scope$(OBJ_EXT): /usr/include/arpa/inet.h
scope$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
scope$(OBJ_EXT): /usr/include/asm-generic/errno.h
scope$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
scope$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
scope$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
scope$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
scope$(OBJ_EXT): /usr/include/asm-x86_64/param.h
scope$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
scope$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
scope$(OBJ_EXT): /usr/include/asm/errno.h
scope$(OBJ_EXT): /usr/include/asm/ioctl.h
scope$(OBJ_EXT): /usr/include/asm/ioctls.h
scope$(OBJ_EXT): /usr/include/asm/param.h
scope$(OBJ_EXT): /usr/include/asm/socket.h
scope$(OBJ_EXT): /usr/include/asm/sockios.h
scope$(OBJ_EXT): /usr/include/bits/byteswap.h
scope$(OBJ_EXT): /usr/include/bits/confname.h
scope$(OBJ_EXT): /usr/include/bits/dirent.h
scope$(OBJ_EXT): /usr/include/bits/endian.h
scope$(OBJ_EXT): /usr/include/bits/environments.h
scope$(OBJ_EXT): /usr/include/bits/errno.h
scope$(OBJ_EXT): /usr/include/bits/fcntl.h
scope$(OBJ_EXT): /usr/include/bits/huge_val.h
scope$(OBJ_EXT): /usr/include/bits/huge_valf.h
scope$(OBJ_EXT): /usr/include/bits/huge_vall.h
scope$(OBJ_EXT): /usr/include/bits/in.h
scope$(OBJ_EXT): /usr/include/bits/inf.h
scope$(OBJ_EXT): /usr/include/bits/ioctl-types.h
scope$(OBJ_EXT): /usr/include/bits/ioctls.h
scope$(OBJ_EXT): /usr/include/bits/ipc.h
scope$(OBJ_EXT): /usr/include/bits/ipctypes.h
scope$(OBJ_EXT): /usr/include/bits/local_lim.h
scope$(OBJ_EXT): /usr/include/bits/locale.h
scope$(OBJ_EXT): /usr/include/bits/mathcalls.h
scope$(OBJ_EXT): /usr/include/bits/mathdef.h
scope$(OBJ_EXT): /usr/include/bits/nan.h
scope$(OBJ_EXT): /usr/include/bits/netdb.h
scope$(OBJ_EXT): /usr/include/bits/posix1_lim.h
scope$(OBJ_EXT): /usr/include/bits/posix2_lim.h
scope$(OBJ_EXT): /usr/include/bits/posix_opt.h
scope$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
scope$(OBJ_EXT): /usr/include/bits/resource.h
scope$(OBJ_EXT): /usr/include/bits/select.h
scope$(OBJ_EXT): /usr/include/bits/sem.h
scope$(OBJ_EXT): /usr/include/bits/setjmp.h
scope$(OBJ_EXT): /usr/include/bits/sigaction.h
scope$(OBJ_EXT): /usr/include/bits/sigcontext.h
scope$(OBJ_EXT): /usr/include/bits/siginfo.h
scope$(OBJ_EXT): /usr/include/bits/signum.h
scope$(OBJ_EXT): /usr/include/bits/sigset.h
scope$(OBJ_EXT): /usr/include/bits/sigstack.h
scope$(OBJ_EXT): /usr/include/bits/sigthread.h
scope$(OBJ_EXT): /usr/include/bits/sockaddr.h
scope$(OBJ_EXT): /usr/include/bits/socket.h
scope$(OBJ_EXT): /usr/include/bits/stat.h
scope$(OBJ_EXT): /usr/include/bits/stdio_lim.h
scope$(OBJ_EXT): /usr/include/bits/sys_errlist.h
scope$(OBJ_EXT): /usr/include/bits/time.h
scope$(OBJ_EXT): /usr/include/bits/types.h
scope$(OBJ_EXT): /usr/include/bits/typesizes.h
scope$(OBJ_EXT): /usr/include/bits/uio.h
scope$(OBJ_EXT): /usr/include/bits/waitflags.h
scope$(OBJ_EXT): /usr/include/bits/waitstatus.h
scope$(OBJ_EXT): /usr/include/bits/wchar.h
scope$(OBJ_EXT): /usr/include/bits/wordsize.h
scope$(OBJ_EXT): /usr/include/bits/xopen_lim.h
scope$(OBJ_EXT): /usr/include/ctype.h
scope$(OBJ_EXT): /usr/include/dirent.h
scope$(OBJ_EXT): /usr/include/endian.h
scope$(OBJ_EXT): /usr/include/errno.h
scope$(OBJ_EXT): /usr/include/fcntl.h
scope$(OBJ_EXT): /usr/include/features.h
scope$(OBJ_EXT): /usr/include/gconv.h
scope$(OBJ_EXT): /usr/include/getopt.h
scope$(OBJ_EXT): /usr/include/gnu/stubs-64.h
scope$(OBJ_EXT): /usr/include/gnu/stubs.h
scope$(OBJ_EXT): /usr/include/inttypes.h
scope$(OBJ_EXT): /usr/include/libio.h
scope$(OBJ_EXT): /usr/include/limits.h
scope$(OBJ_EXT): /usr/include/linux/errno.h
scope$(OBJ_EXT): /usr/include/linux/limits.h
scope$(OBJ_EXT): /usr/include/linux/param.h
scope$(OBJ_EXT): /usr/include/locale.h
scope$(OBJ_EXT): /usr/include/math.h
scope$(OBJ_EXT): /usr/include/netdb.h
scope$(OBJ_EXT): /usr/include/netinet/in.h
scope$(OBJ_EXT): /usr/include/rpc/netdb.h
scope$(OBJ_EXT): /usr/include/setjmp.h
scope$(OBJ_EXT): /usr/include/signal.h
scope$(OBJ_EXT): /usr/include/stdint.h
scope$(OBJ_EXT): /usr/include/stdio.h
scope$(OBJ_EXT): /usr/include/stdlib.h
scope$(OBJ_EXT): /usr/include/string.h
scope$(OBJ_EXT): /usr/include/sys/cdefs.h
scope$(OBJ_EXT): /usr/include/sys/file.h
scope$(OBJ_EXT): /usr/include/sys/ioctl.h
scope$(OBJ_EXT): /usr/include/sys/ipc.h
scope$(OBJ_EXT): /usr/include/sys/param.h
scope$(OBJ_EXT): /usr/include/sys/resource.h
scope$(OBJ_EXT): /usr/include/sys/select.h
scope$(OBJ_EXT): /usr/include/sys/sem.h
scope$(OBJ_EXT): /usr/include/sys/socket.h
scope$(OBJ_EXT): /usr/include/sys/stat.h
scope$(OBJ_EXT): /usr/include/sys/sysmacros.h
scope$(OBJ_EXT): /usr/include/sys/time.h
scope$(OBJ_EXT): /usr/include/sys/times.h
scope$(OBJ_EXT): /usr/include/sys/ttydefaults.h
scope$(OBJ_EXT): /usr/include/sys/types.h
scope$(OBJ_EXT): /usr/include/sys/ucontext.h
scope$(OBJ_EXT): /usr/include/sys/uio.h
scope$(OBJ_EXT): /usr/include/sys/wait.h
scope$(OBJ_EXT): /usr/include/time.h
scope$(OBJ_EXT): /usr/include/unistd.h
scope$(OBJ_EXT): /usr/include/wchar.h
scope$(OBJ_EXT): /usr/include/xlocale.h
scope$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
scope$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
scope$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
scope$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
scope$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
scope$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
scope$(OBJ_EXT): EXTERN.h
scope$(OBJ_EXT): av.h
scope$(OBJ_EXT): config.h
scope$(OBJ_EXT): cop.h
scope$(OBJ_EXT): cv.h
scope$(OBJ_EXT): embed.h
scope$(OBJ_EXT): embedvar.h
scope$(OBJ_EXT): form.h
scope$(OBJ_EXT): gv.h
scope$(OBJ_EXT): handy.h
scope$(OBJ_EXT): hv.h
scope$(OBJ_EXT): intrpvar.h
scope$(OBJ_EXT): iperlsys.h
scope$(OBJ_EXT): mg.h
scope$(OBJ_EXT): mg_vtable.h
scope$(OBJ_EXT): mydtrace.h
scope$(OBJ_EXT): op.h
scope$(OBJ_EXT): op_reg_common.h
scope$(OBJ_EXT): opcode.h
scope$(OBJ_EXT): opnames.h
scope$(OBJ_EXT): overload.h
scope$(OBJ_EXT): pad.h
scope$(OBJ_EXT): parser.h
scope$(OBJ_EXT): patchlevel.h
scope$(OBJ_EXT): perl.h
scope$(OBJ_EXT): perlio.h
scope$(OBJ_EXT): perlvars.h
scope$(OBJ_EXT): perly.h
scope$(OBJ_EXT): pp.h
scope$(OBJ_EXT): proto.h
scope$(OBJ_EXT): regexp.h
scope$(OBJ_EXT): scope.c
scope$(OBJ_EXT): scope.h
scope$(OBJ_EXT): sv.h
scope$(OBJ_EXT): thread.h
scope$(OBJ_EXT): unixish.h
scope$(OBJ_EXT): utf8.h
scope$(OBJ_EXT): util.h
scope$(OBJ_EXT): warnings.h
scope$(OBJ_EXT): cflags
op$(OBJ_EXT): /usr/include/_G_config.h
op$(OBJ_EXT): /usr/include/alloca.h
op$(OBJ_EXT): /usr/include/arpa/inet.h
op$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
op$(OBJ_EXT): /usr/include/asm-generic/errno.h
op$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
op$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
op$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
op$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
op$(OBJ_EXT): /usr/include/asm-x86_64/param.h
op$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
op$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
op$(OBJ_EXT): /usr/include/asm/errno.h
op$(OBJ_EXT): /usr/include/asm/ioctl.h
op$(OBJ_EXT): /usr/include/asm/ioctls.h
op$(OBJ_EXT): /usr/include/asm/param.h
op$(OBJ_EXT): /usr/include/asm/socket.h
op$(OBJ_EXT): /usr/include/asm/sockios.h
op$(OBJ_EXT): /usr/include/bits/byteswap.h
op$(OBJ_EXT): /usr/include/bits/confname.h
op$(OBJ_EXT): /usr/include/bits/dirent.h
op$(OBJ_EXT): /usr/include/bits/endian.h
op$(OBJ_EXT): /usr/include/bits/environments.h
op$(OBJ_EXT): /usr/include/bits/errno.h
op$(OBJ_EXT): /usr/include/bits/fcntl.h
op$(OBJ_EXT): /usr/include/bits/huge_val.h
op$(OBJ_EXT): /usr/include/bits/huge_valf.h
op$(OBJ_EXT): /usr/include/bits/huge_vall.h
op$(OBJ_EXT): /usr/include/bits/in.h
op$(OBJ_EXT): /usr/include/bits/inf.h
op$(OBJ_EXT): /usr/include/bits/ioctl-types.h
op$(OBJ_EXT): /usr/include/bits/ioctls.h
op$(OBJ_EXT): /usr/include/bits/ipc.h
op$(OBJ_EXT): /usr/include/bits/ipctypes.h
op$(OBJ_EXT): /usr/include/bits/local_lim.h
op$(OBJ_EXT): /usr/include/bits/locale.h
op$(OBJ_EXT): /usr/include/bits/mathcalls.h
op$(OBJ_EXT): /usr/include/bits/mathdef.h
op$(OBJ_EXT): /usr/include/bits/nan.h
op$(OBJ_EXT): /usr/include/bits/netdb.h
op$(OBJ_EXT): /usr/include/bits/posix1_lim.h
op$(OBJ_EXT): /usr/include/bits/posix2_lim.h
op$(OBJ_EXT): /usr/include/bits/posix_opt.h
op$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
op$(OBJ_EXT): /usr/include/bits/resource.h
op$(OBJ_EXT): /usr/include/bits/select.h
op$(OBJ_EXT): /usr/include/bits/sem.h
op$(OBJ_EXT): /usr/include/bits/setjmp.h
op$(OBJ_EXT): /usr/include/bits/sigaction.h
op$(OBJ_EXT): /usr/include/bits/sigcontext.h
op$(OBJ_EXT): /usr/include/bits/siginfo.h
op$(OBJ_EXT): /usr/include/bits/signum.h
op$(OBJ_EXT): /usr/include/bits/sigset.h
op$(OBJ_EXT): /usr/include/bits/sigstack.h
op$(OBJ_EXT): /usr/include/bits/sigthread.h
op$(OBJ_EXT): /usr/include/bits/sockaddr.h
op$(OBJ_EXT): /usr/include/bits/socket.h
op$(OBJ_EXT): /usr/include/bits/stat.h
op$(OBJ_EXT): /usr/include/bits/stdio_lim.h
op$(OBJ_EXT): /usr/include/bits/sys_errlist.h
op$(OBJ_EXT): /usr/include/bits/time.h
op$(OBJ_EXT): /usr/include/bits/types.h
op$(OBJ_EXT): /usr/include/bits/typesizes.h
op$(OBJ_EXT): /usr/include/bits/uio.h
op$(OBJ_EXT): /usr/include/bits/waitflags.h
op$(OBJ_EXT): /usr/include/bits/waitstatus.h
op$(OBJ_EXT): /usr/include/bits/wchar.h
op$(OBJ_EXT): /usr/include/bits/wordsize.h
op$(OBJ_EXT): /usr/include/bits/xopen_lim.h
op$(OBJ_EXT): /usr/include/ctype.h
op$(OBJ_EXT): /usr/include/dirent.h
op$(OBJ_EXT): /usr/include/endian.h
op$(OBJ_EXT): /usr/include/errno.h
op$(OBJ_EXT): /usr/include/fcntl.h
op$(OBJ_EXT): /usr/include/features.h
op$(OBJ_EXT): /usr/include/gconv.h
op$(OBJ_EXT): /usr/include/getopt.h
op$(OBJ_EXT): /usr/include/gnu/stubs-64.h
op$(OBJ_EXT): /usr/include/gnu/stubs.h
op$(OBJ_EXT): /usr/include/inttypes.h
op$(OBJ_EXT): /usr/include/libio.h
op$(OBJ_EXT): /usr/include/limits.h
op$(OBJ_EXT): /usr/include/linux/errno.h
op$(OBJ_EXT): /usr/include/linux/limits.h
op$(OBJ_EXT): /usr/include/linux/param.h
op$(OBJ_EXT): /usr/include/locale.h
op$(OBJ_EXT): /usr/include/math.h
op$(OBJ_EXT): /usr/include/netdb.h
op$(OBJ_EXT): /usr/include/netinet/in.h
op$(OBJ_EXT): /usr/include/rpc/netdb.h
op$(OBJ_EXT): /usr/include/setjmp.h
op$(OBJ_EXT): /usr/include/signal.h
op$(OBJ_EXT): /usr/include/stdint.h
op$(OBJ_EXT): /usr/include/stdio.h
op$(OBJ_EXT): /usr/include/stdlib.h
op$(OBJ_EXT): /usr/include/string.h
op$(OBJ_EXT): /usr/include/sys/cdefs.h
op$(OBJ_EXT): /usr/include/sys/file.h
op$(OBJ_EXT): /usr/include/sys/ioctl.h
op$(OBJ_EXT): /usr/include/sys/ipc.h
op$(OBJ_EXT): /usr/include/sys/param.h
op$(OBJ_EXT): /usr/include/sys/resource.h
op$(OBJ_EXT): /usr/include/sys/select.h
op$(OBJ_EXT): /usr/include/sys/sem.h
op$(OBJ_EXT): /usr/include/sys/socket.h
op$(OBJ_EXT): /usr/include/sys/stat.h
op$(OBJ_EXT): /usr/include/sys/sysmacros.h
op$(OBJ_EXT): /usr/include/sys/time.h
op$(OBJ_EXT): /usr/include/sys/times.h
op$(OBJ_EXT): /usr/include/sys/ttydefaults.h
op$(OBJ_EXT): /usr/include/sys/types.h
op$(OBJ_EXT): /usr/include/sys/ucontext.h
op$(OBJ_EXT): /usr/include/sys/uio.h
op$(OBJ_EXT): /usr/include/sys/wait.h
op$(OBJ_EXT): /usr/include/time.h
op$(OBJ_EXT): /usr/include/unistd.h
op$(OBJ_EXT): /usr/include/wchar.h
op$(OBJ_EXT): /usr/include/xlocale.h
op$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
op$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
op$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
op$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
op$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
op$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
op$(OBJ_EXT): EXTERN.h
op$(OBJ_EXT): XSUB.h
op$(OBJ_EXT): av.h
op$(OBJ_EXT): config.h
op$(OBJ_EXT): cop.h
op$(OBJ_EXT): cv.h
op$(OBJ_EXT): embed.h
op$(OBJ_EXT): embedvar.h
op$(OBJ_EXT): feature.h
op$(OBJ_EXT): form.h
op$(OBJ_EXT): gv.h
op$(OBJ_EXT): handy.h
op$(OBJ_EXT): hv.h
op$(OBJ_EXT): intrpvar.h
op$(OBJ_EXT): iperlsys.h
op$(OBJ_EXT): keywords.h
op$(OBJ_EXT): mg.h
op$(OBJ_EXT): mg_vtable.h
op$(OBJ_EXT): mydtrace.h
op$(OBJ_EXT): op.c
op$(OBJ_EXT): op.h
op$(OBJ_EXT): op_reg_common.h
op$(OBJ_EXT): opcode.h
op$(OBJ_EXT): opnames.h
op$(OBJ_EXT): overload.h
op$(OBJ_EXT): pad.h
op$(OBJ_EXT): parser.h
op$(OBJ_EXT): patchlevel.h
op$(OBJ_EXT): perl.h
op$(OBJ_EXT): perlapi.h
op$(OBJ_EXT): perlio.h
op$(OBJ_EXT): perlvars.h
op$(OBJ_EXT): perly.h
op$(OBJ_EXT): pp.h
op$(OBJ_EXT): proto.h
op$(OBJ_EXT): regexp.h
op$(OBJ_EXT): scope.h
op$(OBJ_EXT): sv.h
op$(OBJ_EXT): thread.h
op$(OBJ_EXT): unixish.h
op$(OBJ_EXT): utf8.h
op$(OBJ_EXT): util.h
op$(OBJ_EXT): warnings.h
op$(OBJ_EXT): cflags
doop$(OBJ_EXT): /usr/include/_G_config.h
doop$(OBJ_EXT): /usr/include/alloca.h
doop$(OBJ_EXT): /usr/include/arpa/inet.h
doop$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
doop$(OBJ_EXT): /usr/include/asm-generic/errno.h
doop$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
doop$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
doop$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
doop$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
doop$(OBJ_EXT): /usr/include/asm-x86_64/param.h
doop$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
doop$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
doop$(OBJ_EXT): /usr/include/asm/errno.h
doop$(OBJ_EXT): /usr/include/asm/ioctl.h
doop$(OBJ_EXT): /usr/include/asm/ioctls.h
doop$(OBJ_EXT): /usr/include/asm/param.h
doop$(OBJ_EXT): /usr/include/asm/socket.h
doop$(OBJ_EXT): /usr/include/asm/sockios.h
doop$(OBJ_EXT): /usr/include/bits/byteswap.h
doop$(OBJ_EXT): /usr/include/bits/confname.h
doop$(OBJ_EXT): /usr/include/bits/dirent.h
doop$(OBJ_EXT): /usr/include/bits/endian.h
doop$(OBJ_EXT): /usr/include/bits/environments.h
doop$(OBJ_EXT): /usr/include/bits/errno.h
doop$(OBJ_EXT): /usr/include/bits/fcntl.h
doop$(OBJ_EXT): /usr/include/bits/huge_val.h
doop$(OBJ_EXT): /usr/include/bits/huge_valf.h
doop$(OBJ_EXT): /usr/include/bits/huge_vall.h
doop$(OBJ_EXT): /usr/include/bits/in.h
doop$(OBJ_EXT): /usr/include/bits/inf.h
doop$(OBJ_EXT): /usr/include/bits/ioctl-types.h
doop$(OBJ_EXT): /usr/include/bits/ioctls.h
doop$(OBJ_EXT): /usr/include/bits/ipc.h
doop$(OBJ_EXT): /usr/include/bits/ipctypes.h
doop$(OBJ_EXT): /usr/include/bits/local_lim.h
doop$(OBJ_EXT): /usr/include/bits/locale.h
doop$(OBJ_EXT): /usr/include/bits/mathcalls.h
doop$(OBJ_EXT): /usr/include/bits/mathdef.h
doop$(OBJ_EXT): /usr/include/bits/nan.h
doop$(OBJ_EXT): /usr/include/bits/netdb.h
doop$(OBJ_EXT): /usr/include/bits/posix1_lim.h
doop$(OBJ_EXT): /usr/include/bits/posix2_lim.h
doop$(OBJ_EXT): /usr/include/bits/posix_opt.h
doop$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
doop$(OBJ_EXT): /usr/include/bits/resource.h
doop$(OBJ_EXT): /usr/include/bits/select.h
doop$(OBJ_EXT): /usr/include/bits/sem.h
doop$(OBJ_EXT): /usr/include/bits/setjmp.h
doop$(OBJ_EXT): /usr/include/bits/sigaction.h
doop$(OBJ_EXT): /usr/include/bits/sigcontext.h
doop$(OBJ_EXT): /usr/include/bits/siginfo.h
doop$(OBJ_EXT): /usr/include/bits/signum.h
doop$(OBJ_EXT): /usr/include/bits/sigset.h
doop$(OBJ_EXT): /usr/include/bits/sigstack.h
doop$(OBJ_EXT): /usr/include/bits/sigthread.h
doop$(OBJ_EXT): /usr/include/bits/sockaddr.h
doop$(OBJ_EXT): /usr/include/bits/socket.h
doop$(OBJ_EXT): /usr/include/bits/stat.h
doop$(OBJ_EXT): /usr/include/bits/stdio_lim.h
doop$(OBJ_EXT): /usr/include/bits/sys_errlist.h
doop$(OBJ_EXT): /usr/include/bits/time.h
doop$(OBJ_EXT): /usr/include/bits/types.h
doop$(OBJ_EXT): /usr/include/bits/typesizes.h
doop$(OBJ_EXT): /usr/include/bits/uio.h
doop$(OBJ_EXT): /usr/include/bits/waitflags.h
doop$(OBJ_EXT): /usr/include/bits/waitstatus.h
doop$(OBJ_EXT): /usr/include/bits/wchar.h
doop$(OBJ_EXT): /usr/include/bits/wordsize.h
doop$(OBJ_EXT): /usr/include/bits/xopen_lim.h
doop$(OBJ_EXT): /usr/include/ctype.h
doop$(OBJ_EXT): /usr/include/dirent.h
doop$(OBJ_EXT): /usr/include/endian.h
doop$(OBJ_EXT): /usr/include/errno.h
doop$(OBJ_EXT): /usr/include/fcntl.h
doop$(OBJ_EXT): /usr/include/features.h
doop$(OBJ_EXT): /usr/include/gconv.h
doop$(OBJ_EXT): /usr/include/getopt.h
doop$(OBJ_EXT): /usr/include/gnu/stubs-64.h
doop$(OBJ_EXT): /usr/include/gnu/stubs.h
doop$(OBJ_EXT): /usr/include/inttypes.h
doop$(OBJ_EXT): /usr/include/libio.h
doop$(OBJ_EXT): /usr/include/limits.h
doop$(OBJ_EXT): /usr/include/linux/errno.h
doop$(OBJ_EXT): /usr/include/linux/limits.h
doop$(OBJ_EXT): /usr/include/linux/param.h
doop$(OBJ_EXT): /usr/include/locale.h
doop$(OBJ_EXT): /usr/include/math.h
doop$(OBJ_EXT): /usr/include/netdb.h
doop$(OBJ_EXT): /usr/include/netinet/in.h
doop$(OBJ_EXT): /usr/include/rpc/netdb.h
doop$(OBJ_EXT): /usr/include/setjmp.h
doop$(OBJ_EXT): /usr/include/signal.h
doop$(OBJ_EXT): /usr/include/stdint.h
doop$(OBJ_EXT): /usr/include/stdio.h
doop$(OBJ_EXT): /usr/include/stdlib.h
doop$(OBJ_EXT): /usr/include/string.h
doop$(OBJ_EXT): /usr/include/sys/cdefs.h
doop$(OBJ_EXT): /usr/include/sys/file.h
doop$(OBJ_EXT): /usr/include/sys/ioctl.h
doop$(OBJ_EXT): /usr/include/sys/ipc.h
doop$(OBJ_EXT): /usr/include/sys/param.h
doop$(OBJ_EXT): /usr/include/sys/resource.h
doop$(OBJ_EXT): /usr/include/sys/select.h
doop$(OBJ_EXT): /usr/include/sys/sem.h
doop$(OBJ_EXT): /usr/include/sys/socket.h
doop$(OBJ_EXT): /usr/include/sys/stat.h
doop$(OBJ_EXT): /usr/include/sys/sysmacros.h
doop$(OBJ_EXT): /usr/include/sys/time.h
doop$(OBJ_EXT): /usr/include/sys/times.h
doop$(OBJ_EXT): /usr/include/sys/ttydefaults.h
doop$(OBJ_EXT): /usr/include/sys/types.h
doop$(OBJ_EXT): /usr/include/sys/ucontext.h
doop$(OBJ_EXT): /usr/include/sys/uio.h
doop$(OBJ_EXT): /usr/include/sys/wait.h
doop$(OBJ_EXT): /usr/include/time.h
doop$(OBJ_EXT): /usr/include/unistd.h
doop$(OBJ_EXT): /usr/include/wchar.h
doop$(OBJ_EXT): /usr/include/xlocale.h
doop$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
doop$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
doop$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
doop$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
doop$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
doop$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
doop$(OBJ_EXT): EXTERN.h
doop$(OBJ_EXT): av.h
doop$(OBJ_EXT): config.h
doop$(OBJ_EXT): cop.h
doop$(OBJ_EXT): cv.h
doop$(OBJ_EXT): doop.c
doop$(OBJ_EXT): embed.h
doop$(OBJ_EXT): embedvar.h
doop$(OBJ_EXT): form.h
doop$(OBJ_EXT): gv.h
doop$(OBJ_EXT): handy.h
doop$(OBJ_EXT): hv.h
doop$(OBJ_EXT): intrpvar.h
doop$(OBJ_EXT): iperlsys.h
doop$(OBJ_EXT): mg.h
doop$(OBJ_EXT): mg_vtable.h
doop$(OBJ_EXT): mydtrace.h
doop$(OBJ_EXT): op.h
doop$(OBJ_EXT): op_reg_common.h
doop$(OBJ_EXT): opcode.h
doop$(OBJ_EXT): opnames.h
doop$(OBJ_EXT): overload.h
doop$(OBJ_EXT): pad.h
doop$(OBJ_EXT): parser.h
doop$(OBJ_EXT): patchlevel.h
doop$(OBJ_EXT): perl.h
doop$(OBJ_EXT): perlio.h
doop$(OBJ_EXT): perlvars.h
doop$(OBJ_EXT): perly.h
doop$(OBJ_EXT): pp.h
doop$(OBJ_EXT): proto.h
doop$(OBJ_EXT): regexp.h
doop$(OBJ_EXT): scope.h
doop$(OBJ_EXT): sv.h
doop$(OBJ_EXT): thread.h
doop$(OBJ_EXT): unixish.h
doop$(OBJ_EXT): utf8.h
doop$(OBJ_EXT): util.h
doop$(OBJ_EXT): warnings.h
doop$(OBJ_EXT): cflags
doio$(OBJ_EXT): /usr/include/_G_config.h
doio$(OBJ_EXT): /usr/include/alloca.h
doio$(OBJ_EXT): /usr/include/arpa/inet.h
doio$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
doio$(OBJ_EXT): /usr/include/asm-generic/errno.h
doio$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
doio$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
doio$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
doio$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
doio$(OBJ_EXT): /usr/include/asm-x86_64/param.h
doio$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
doio$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
doio$(OBJ_EXT): /usr/include/asm/errno.h
doio$(OBJ_EXT): /usr/include/asm/ioctl.h
doio$(OBJ_EXT): /usr/include/asm/ioctls.h
doio$(OBJ_EXT): /usr/include/asm/param.h
doio$(OBJ_EXT): /usr/include/asm/socket.h
doio$(OBJ_EXT): /usr/include/asm/sockios.h
doio$(OBJ_EXT): /usr/include/bits/byteswap.h
doio$(OBJ_EXT): /usr/include/bits/confname.h
doio$(OBJ_EXT): /usr/include/bits/dirent.h
doio$(OBJ_EXT): /usr/include/bits/endian.h
doio$(OBJ_EXT): /usr/include/bits/environments.h
doio$(OBJ_EXT): /usr/include/bits/errno.h
doio$(OBJ_EXT): /usr/include/bits/fcntl.h
doio$(OBJ_EXT): /usr/include/bits/huge_val.h
doio$(OBJ_EXT): /usr/include/bits/huge_valf.h
doio$(OBJ_EXT): /usr/include/bits/huge_vall.h
doio$(OBJ_EXT): /usr/include/bits/in.h
doio$(OBJ_EXT): /usr/include/bits/inf.h
doio$(OBJ_EXT): /usr/include/bits/ioctl-types.h
doio$(OBJ_EXT): /usr/include/bits/ioctls.h
doio$(OBJ_EXT): /usr/include/bits/ipc.h
doio$(OBJ_EXT): /usr/include/bits/ipctypes.h
doio$(OBJ_EXT): /usr/include/bits/local_lim.h
doio$(OBJ_EXT): /usr/include/bits/locale.h
doio$(OBJ_EXT): /usr/include/bits/mathcalls.h
doio$(OBJ_EXT): /usr/include/bits/mathdef.h
doio$(OBJ_EXT): /usr/include/bits/msq.h
doio$(OBJ_EXT): /usr/include/bits/nan.h
doio$(OBJ_EXT): /usr/include/bits/netdb.h
doio$(OBJ_EXT): /usr/include/bits/posix1_lim.h
doio$(OBJ_EXT): /usr/include/bits/posix2_lim.h
doio$(OBJ_EXT): /usr/include/bits/posix_opt.h
doio$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
doio$(OBJ_EXT): /usr/include/bits/resource.h
doio$(OBJ_EXT): /usr/include/bits/select.h
doio$(OBJ_EXT): /usr/include/bits/sem.h
doio$(OBJ_EXT): /usr/include/bits/setjmp.h
doio$(OBJ_EXT): /usr/include/bits/shm.h
doio$(OBJ_EXT): /usr/include/bits/sigaction.h
doio$(OBJ_EXT): /usr/include/bits/sigcontext.h
doio$(OBJ_EXT): /usr/include/bits/siginfo.h
doio$(OBJ_EXT): /usr/include/bits/signum.h
doio$(OBJ_EXT): /usr/include/bits/sigset.h
doio$(OBJ_EXT): /usr/include/bits/sigstack.h
doio$(OBJ_EXT): /usr/include/bits/sigthread.h
doio$(OBJ_EXT): /usr/include/bits/sockaddr.h
doio$(OBJ_EXT): /usr/include/bits/socket.h
doio$(OBJ_EXT): /usr/include/bits/stat.h
doio$(OBJ_EXT): /usr/include/bits/stdio_lim.h
doio$(OBJ_EXT): /usr/include/bits/sys_errlist.h
doio$(OBJ_EXT): /usr/include/bits/time.h
doio$(OBJ_EXT): /usr/include/bits/types.h
doio$(OBJ_EXT): /usr/include/bits/typesizes.h
doio$(OBJ_EXT): /usr/include/bits/uio.h
doio$(OBJ_EXT): /usr/include/bits/waitflags.h
doio$(OBJ_EXT): /usr/include/bits/waitstatus.h
doio$(OBJ_EXT): /usr/include/bits/wchar.h
doio$(OBJ_EXT): /usr/include/bits/wordsize.h
doio$(OBJ_EXT): /usr/include/bits/xopen_lim.h
doio$(OBJ_EXT): /usr/include/ctype.h
doio$(OBJ_EXT): /usr/include/dirent.h
doio$(OBJ_EXT): /usr/include/endian.h
doio$(OBJ_EXT): /usr/include/errno.h
doio$(OBJ_EXT): /usr/include/fcntl.h
doio$(OBJ_EXT): /usr/include/features.h
doio$(OBJ_EXT): /usr/include/gconv.h
doio$(OBJ_EXT): /usr/include/getopt.h
doio$(OBJ_EXT): /usr/include/gnu/stubs-64.h
doio$(OBJ_EXT): /usr/include/gnu/stubs.h
doio$(OBJ_EXT): /usr/include/inttypes.h
doio$(OBJ_EXT): /usr/include/libio.h
doio$(OBJ_EXT): /usr/include/limits.h
doio$(OBJ_EXT): /usr/include/linux/errno.h
doio$(OBJ_EXT): /usr/include/linux/limits.h
doio$(OBJ_EXT): /usr/include/linux/param.h
doio$(OBJ_EXT): /usr/include/locale.h
doio$(OBJ_EXT): /usr/include/math.h
doio$(OBJ_EXT): /usr/include/netdb.h
doio$(OBJ_EXT): /usr/include/netinet/in.h
doio$(OBJ_EXT): /usr/include/rpc/netdb.h
doio$(OBJ_EXT): /usr/include/setjmp.h
doio$(OBJ_EXT): /usr/include/signal.h
doio$(OBJ_EXT): /usr/include/stdint.h
doio$(OBJ_EXT): /usr/include/stdio.h
doio$(OBJ_EXT): /usr/include/stdlib.h
doio$(OBJ_EXT): /usr/include/string.h
doio$(OBJ_EXT): /usr/include/sys/cdefs.h
doio$(OBJ_EXT): /usr/include/sys/file.h
doio$(OBJ_EXT): /usr/include/sys/ioctl.h
doio$(OBJ_EXT): /usr/include/sys/ipc.h
doio$(OBJ_EXT): /usr/include/sys/msg.h
doio$(OBJ_EXT): /usr/include/sys/param.h
doio$(OBJ_EXT): /usr/include/sys/resource.h
doio$(OBJ_EXT): /usr/include/sys/select.h
doio$(OBJ_EXT): /usr/include/sys/sem.h
doio$(OBJ_EXT): /usr/include/sys/shm.h
doio$(OBJ_EXT): /usr/include/sys/socket.h
doio$(OBJ_EXT): /usr/include/sys/stat.h
doio$(OBJ_EXT): /usr/include/sys/sysmacros.h
doio$(OBJ_EXT): /usr/include/sys/time.h
doio$(OBJ_EXT): /usr/include/sys/times.h
doio$(OBJ_EXT): /usr/include/sys/ttydefaults.h
doio$(OBJ_EXT): /usr/include/sys/types.h
doio$(OBJ_EXT): /usr/include/sys/ucontext.h
doio$(OBJ_EXT): /usr/include/sys/uio.h
doio$(OBJ_EXT): /usr/include/sys/wait.h
doio$(OBJ_EXT): /usr/include/time.h
doio$(OBJ_EXT): /usr/include/unistd.h
doio$(OBJ_EXT): /usr/include/utime.h
doio$(OBJ_EXT): /usr/include/wchar.h
doio$(OBJ_EXT): /usr/include/xlocale.h
doio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
doio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
doio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
doio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
doio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
doio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
doio$(OBJ_EXT): EXTERN.h
doio$(OBJ_EXT): av.h
doio$(OBJ_EXT): config.h
doio$(OBJ_EXT): cop.h
doio$(OBJ_EXT): cv.h
doio$(OBJ_EXT): doio.c
doio$(OBJ_EXT): embed.h
doio$(OBJ_EXT): embedvar.h
doio$(OBJ_EXT): form.h
doio$(OBJ_EXT): gv.h
doio$(OBJ_EXT): handy.h
doio$(OBJ_EXT): hv.h
doio$(OBJ_EXT): intrpvar.h
doio$(OBJ_EXT): iperlsys.h
doio$(OBJ_EXT): mg.h
doio$(OBJ_EXT): mg_vtable.h
doio$(OBJ_EXT): mydtrace.h
doio$(OBJ_EXT): op.h
doio$(OBJ_EXT): op_reg_common.h
doio$(OBJ_EXT): opcode.h
doio$(OBJ_EXT): opnames.h
doio$(OBJ_EXT): overload.h
doio$(OBJ_EXT): pad.h
doio$(OBJ_EXT): parser.h
doio$(OBJ_EXT): patchlevel.h
doio$(OBJ_EXT): perl.h
doio$(OBJ_EXT): perlio.h
doio$(OBJ_EXT): perlvars.h
doio$(OBJ_EXT): perly.h
doio$(OBJ_EXT): pp.h
doio$(OBJ_EXT): proto.h
doio$(OBJ_EXT): regexp.h
doio$(OBJ_EXT): scope.h
doio$(OBJ_EXT): sv.h
doio$(OBJ_EXT): thread.h
doio$(OBJ_EXT): unixish.h
doio$(OBJ_EXT): utf8.h
doio$(OBJ_EXT): util.h
doio$(OBJ_EXT): warnings.h
doio$(OBJ_EXT): cflags
dump$(OBJ_EXT): /usr/include/_G_config.h
dump$(OBJ_EXT): /usr/include/alloca.h
dump$(OBJ_EXT): /usr/include/arpa/inet.h
dump$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
dump$(OBJ_EXT): /usr/include/asm-generic/errno.h
dump$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
dump$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
dump$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
dump$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
dump$(OBJ_EXT): /usr/include/asm-x86_64/param.h
dump$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
dump$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
dump$(OBJ_EXT): /usr/include/asm/errno.h
dump$(OBJ_EXT): /usr/include/asm/ioctl.h
dump$(OBJ_EXT): /usr/include/asm/ioctls.h
dump$(OBJ_EXT): /usr/include/asm/param.h
dump$(OBJ_EXT): /usr/include/asm/socket.h
dump$(OBJ_EXT): /usr/include/asm/sockios.h
dump$(OBJ_EXT): /usr/include/bits/byteswap.h
dump$(OBJ_EXT): /usr/include/bits/confname.h
dump$(OBJ_EXT): /usr/include/bits/dirent.h
dump$(OBJ_EXT): /usr/include/bits/endian.h
dump$(OBJ_EXT): /usr/include/bits/environments.h
dump$(OBJ_EXT): /usr/include/bits/errno.h
dump$(OBJ_EXT): /usr/include/bits/fcntl.h
dump$(OBJ_EXT): /usr/include/bits/huge_val.h
dump$(OBJ_EXT): /usr/include/bits/huge_valf.h
dump$(OBJ_EXT): /usr/include/bits/huge_vall.h
dump$(OBJ_EXT): /usr/include/bits/in.h
dump$(OBJ_EXT): /usr/include/bits/inf.h
dump$(OBJ_EXT): /usr/include/bits/ioctl-types.h
dump$(OBJ_EXT): /usr/include/bits/ioctls.h
dump$(OBJ_EXT): /usr/include/bits/ipc.h
dump$(OBJ_EXT): /usr/include/bits/ipctypes.h
dump$(OBJ_EXT): /usr/include/bits/local_lim.h
dump$(OBJ_EXT): /usr/include/bits/locale.h
dump$(OBJ_EXT): /usr/include/bits/mathcalls.h
dump$(OBJ_EXT): /usr/include/bits/mathdef.h
dump$(OBJ_EXT): /usr/include/bits/nan.h
dump$(OBJ_EXT): /usr/include/bits/netdb.h
dump$(OBJ_EXT): /usr/include/bits/posix1_lim.h
dump$(OBJ_EXT): /usr/include/bits/posix2_lim.h
dump$(OBJ_EXT): /usr/include/bits/posix_opt.h
dump$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
dump$(OBJ_EXT): /usr/include/bits/resource.h
dump$(OBJ_EXT): /usr/include/bits/select.h
dump$(OBJ_EXT): /usr/include/bits/sem.h
dump$(OBJ_EXT): /usr/include/bits/setjmp.h
dump$(OBJ_EXT): /usr/include/bits/sigaction.h
dump$(OBJ_EXT): /usr/include/bits/sigcontext.h
dump$(OBJ_EXT): /usr/include/bits/siginfo.h
dump$(OBJ_EXT): /usr/include/bits/signum.h
dump$(OBJ_EXT): /usr/include/bits/sigset.h
dump$(OBJ_EXT): /usr/include/bits/sigstack.h
dump$(OBJ_EXT): /usr/include/bits/sigthread.h
dump$(OBJ_EXT): /usr/include/bits/sockaddr.h
dump$(OBJ_EXT): /usr/include/bits/socket.h
dump$(OBJ_EXT): /usr/include/bits/stat.h
dump$(OBJ_EXT): /usr/include/bits/stdio_lim.h
dump$(OBJ_EXT): /usr/include/bits/sys_errlist.h
dump$(OBJ_EXT): /usr/include/bits/time.h
dump$(OBJ_EXT): /usr/include/bits/types.h
dump$(OBJ_EXT): /usr/include/bits/typesizes.h
dump$(OBJ_EXT): /usr/include/bits/uio.h
dump$(OBJ_EXT): /usr/include/bits/waitflags.h
dump$(OBJ_EXT): /usr/include/bits/waitstatus.h
dump$(OBJ_EXT): /usr/include/bits/wchar.h
dump$(OBJ_EXT): /usr/include/bits/wordsize.h
dump$(OBJ_EXT): /usr/include/bits/xopen_lim.h
dump$(OBJ_EXT): /usr/include/ctype.h
dump$(OBJ_EXT): /usr/include/dirent.h
dump$(OBJ_EXT): /usr/include/endian.h
dump$(OBJ_EXT): /usr/include/errno.h
dump$(OBJ_EXT): /usr/include/fcntl.h
dump$(OBJ_EXT): /usr/include/features.h
dump$(OBJ_EXT): /usr/include/gconv.h
dump$(OBJ_EXT): /usr/include/getopt.h
dump$(OBJ_EXT): /usr/include/gnu/stubs-64.h
dump$(OBJ_EXT): /usr/include/gnu/stubs.h
dump$(OBJ_EXT): /usr/include/inttypes.h
dump$(OBJ_EXT): /usr/include/libio.h
dump$(OBJ_EXT): /usr/include/limits.h
dump$(OBJ_EXT): /usr/include/linux/errno.h
dump$(OBJ_EXT): /usr/include/linux/limits.h
dump$(OBJ_EXT): /usr/include/linux/param.h
dump$(OBJ_EXT): /usr/include/locale.h
dump$(OBJ_EXT): /usr/include/math.h
dump$(OBJ_EXT): /usr/include/netdb.h
dump$(OBJ_EXT): /usr/include/netinet/in.h
dump$(OBJ_EXT): /usr/include/rpc/netdb.h
dump$(OBJ_EXT): /usr/include/setjmp.h
dump$(OBJ_EXT): /usr/include/signal.h
dump$(OBJ_EXT): /usr/include/stdint.h
dump$(OBJ_EXT): /usr/include/stdio.h
dump$(OBJ_EXT): /usr/include/stdlib.h
dump$(OBJ_EXT): /usr/include/string.h
dump$(OBJ_EXT): /usr/include/sys/cdefs.h
dump$(OBJ_EXT): /usr/include/sys/file.h
dump$(OBJ_EXT): /usr/include/sys/ioctl.h
dump$(OBJ_EXT): /usr/include/sys/ipc.h
dump$(OBJ_EXT): /usr/include/sys/param.h
dump$(OBJ_EXT): /usr/include/sys/resource.h
dump$(OBJ_EXT): /usr/include/sys/select.h
dump$(OBJ_EXT): /usr/include/sys/sem.h
dump$(OBJ_EXT): /usr/include/sys/socket.h
dump$(OBJ_EXT): /usr/include/sys/stat.h
dump$(OBJ_EXT): /usr/include/sys/sysmacros.h
dump$(OBJ_EXT): /usr/include/sys/time.h
dump$(OBJ_EXT): /usr/include/sys/times.h
dump$(OBJ_EXT): /usr/include/sys/ttydefaults.h
dump$(OBJ_EXT): /usr/include/sys/types.h
dump$(OBJ_EXT): /usr/include/sys/ucontext.h
dump$(OBJ_EXT): /usr/include/sys/uio.h
dump$(OBJ_EXT): /usr/include/sys/wait.h
dump$(OBJ_EXT): /usr/include/time.h
dump$(OBJ_EXT): /usr/include/unistd.h
dump$(OBJ_EXT): /usr/include/wchar.h
dump$(OBJ_EXT): /usr/include/xlocale.h
dump$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
dump$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
dump$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
dump$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
dump$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
dump$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
dump$(OBJ_EXT): EXTERN.h
dump$(OBJ_EXT): av.h
dump$(OBJ_EXT): config.h
dump$(OBJ_EXT): cop.h
dump$(OBJ_EXT): cv.h
dump$(OBJ_EXT): dump.c
dump$(OBJ_EXT): embed.h
dump$(OBJ_EXT): embedvar.h
dump$(OBJ_EXT): form.h
dump$(OBJ_EXT): gv.h
dump$(OBJ_EXT): handy.h
dump$(OBJ_EXT): hv.h
dump$(OBJ_EXT): intrpvar.h
dump$(OBJ_EXT): iperlsys.h
dump$(OBJ_EXT): mg.h
dump$(OBJ_EXT): mg_names.c
dump$(OBJ_EXT): mg_vtable.h
dump$(OBJ_EXT): mydtrace.h
dump$(OBJ_EXT): op.h
dump$(OBJ_EXT): op_reg_common.h
dump$(OBJ_EXT): opcode.h
dump$(OBJ_EXT): opnames.h
dump$(OBJ_EXT): overload.h
dump$(OBJ_EXT): pad.h
dump$(OBJ_EXT): parser.h
dump$(OBJ_EXT): patchlevel.h
dump$(OBJ_EXT): perl.h
dump$(OBJ_EXT): perlio.h
dump$(OBJ_EXT): perlvars.h
dump$(OBJ_EXT): perly.h
dump$(OBJ_EXT): pp.h
dump$(OBJ_EXT): proto.h
dump$(OBJ_EXT): regcharclass.h
dump$(OBJ_EXT): regcomp.h
dump$(OBJ_EXT): regexp.h
dump$(OBJ_EXT): regnodes.h
dump$(OBJ_EXT): scope.h
dump$(OBJ_EXT): sv.h
dump$(OBJ_EXT): thread.h
dump$(OBJ_EXT): unixish.h
dump$(OBJ_EXT): utf8.h
dump$(OBJ_EXT): util.h
dump$(OBJ_EXT): warnings.h
dump$(OBJ_EXT): cflags
gv$(OBJ_EXT): /usr/include/_G_config.h
gv$(OBJ_EXT): /usr/include/alloca.h
gv$(OBJ_EXT): /usr/include/arpa/inet.h
gv$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
gv$(OBJ_EXT): /usr/include/asm-generic/errno.h
gv$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
gv$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
gv$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
gv$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
gv$(OBJ_EXT): /usr/include/asm-x86_64/param.h
gv$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
gv$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
gv$(OBJ_EXT): /usr/include/asm/errno.h
gv$(OBJ_EXT): /usr/include/asm/ioctl.h
gv$(OBJ_EXT): /usr/include/asm/ioctls.h
gv$(OBJ_EXT): /usr/include/asm/param.h
gv$(OBJ_EXT): /usr/include/asm/socket.h
gv$(OBJ_EXT): /usr/include/asm/sockios.h
gv$(OBJ_EXT): /usr/include/bits/byteswap.h
gv$(OBJ_EXT): /usr/include/bits/confname.h
gv$(OBJ_EXT): /usr/include/bits/dirent.h
gv$(OBJ_EXT): /usr/include/bits/endian.h
gv$(OBJ_EXT): /usr/include/bits/environments.h
gv$(OBJ_EXT): /usr/include/bits/errno.h
gv$(OBJ_EXT): /usr/include/bits/fcntl.h
gv$(OBJ_EXT): /usr/include/bits/huge_val.h
gv$(OBJ_EXT): /usr/include/bits/huge_valf.h
gv$(OBJ_EXT): /usr/include/bits/huge_vall.h
gv$(OBJ_EXT): /usr/include/bits/in.h
gv$(OBJ_EXT): /usr/include/bits/inf.h
gv$(OBJ_EXT): /usr/include/bits/ioctl-types.h
gv$(OBJ_EXT): /usr/include/bits/ioctls.h
gv$(OBJ_EXT): /usr/include/bits/ipc.h
gv$(OBJ_EXT): /usr/include/bits/ipctypes.h
gv$(OBJ_EXT): /usr/include/bits/local_lim.h
gv$(OBJ_EXT): /usr/include/bits/locale.h
gv$(OBJ_EXT): /usr/include/bits/mathcalls.h
gv$(OBJ_EXT): /usr/include/bits/mathdef.h
gv$(OBJ_EXT): /usr/include/bits/nan.h
gv$(OBJ_EXT): /usr/include/bits/netdb.h
gv$(OBJ_EXT): /usr/include/bits/posix1_lim.h
gv$(OBJ_EXT): /usr/include/bits/posix2_lim.h
gv$(OBJ_EXT): /usr/include/bits/posix_opt.h
gv$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
gv$(OBJ_EXT): /usr/include/bits/resource.h
gv$(OBJ_EXT): /usr/include/bits/select.h
gv$(OBJ_EXT): /usr/include/bits/sem.h
gv$(OBJ_EXT): /usr/include/bits/setjmp.h
gv$(OBJ_EXT): /usr/include/bits/sigaction.h
gv$(OBJ_EXT): /usr/include/bits/sigcontext.h
gv$(OBJ_EXT): /usr/include/bits/siginfo.h
gv$(OBJ_EXT): /usr/include/bits/signum.h
gv$(OBJ_EXT): /usr/include/bits/sigset.h
gv$(OBJ_EXT): /usr/include/bits/sigstack.h
gv$(OBJ_EXT): /usr/include/bits/sigthread.h
gv$(OBJ_EXT): /usr/include/bits/sockaddr.h
gv$(OBJ_EXT): /usr/include/bits/socket.h
gv$(OBJ_EXT): /usr/include/bits/stat.h
gv$(OBJ_EXT): /usr/include/bits/stdio_lim.h
gv$(OBJ_EXT): /usr/include/bits/sys_errlist.h
gv$(OBJ_EXT): /usr/include/bits/time.h
gv$(OBJ_EXT): /usr/include/bits/types.h
gv$(OBJ_EXT): /usr/include/bits/typesizes.h
gv$(OBJ_EXT): /usr/include/bits/uio.h
gv$(OBJ_EXT): /usr/include/bits/waitflags.h
gv$(OBJ_EXT): /usr/include/bits/waitstatus.h
gv$(OBJ_EXT): /usr/include/bits/wchar.h
gv$(OBJ_EXT): /usr/include/bits/wordsize.h
gv$(OBJ_EXT): /usr/include/bits/xopen_lim.h
gv$(OBJ_EXT): /usr/include/ctype.h
gv$(OBJ_EXT): /usr/include/dirent.h
gv$(OBJ_EXT): /usr/include/endian.h
gv$(OBJ_EXT): /usr/include/errno.h
gv$(OBJ_EXT): /usr/include/fcntl.h
gv$(OBJ_EXT): /usr/include/features.h
gv$(OBJ_EXT): /usr/include/gconv.h
gv$(OBJ_EXT): /usr/include/getopt.h
gv$(OBJ_EXT): /usr/include/gnu/stubs-64.h
gv$(OBJ_EXT): /usr/include/gnu/stubs.h
gv$(OBJ_EXT): /usr/include/inttypes.h
gv$(OBJ_EXT): /usr/include/libio.h
gv$(OBJ_EXT): /usr/include/limits.h
gv$(OBJ_EXT): /usr/include/linux/errno.h
gv$(OBJ_EXT): /usr/include/linux/limits.h
gv$(OBJ_EXT): /usr/include/linux/param.h
gv$(OBJ_EXT): /usr/include/locale.h
gv$(OBJ_EXT): /usr/include/math.h
gv$(OBJ_EXT): /usr/include/netdb.h
gv$(OBJ_EXT): /usr/include/netinet/in.h
gv$(OBJ_EXT): /usr/include/rpc/netdb.h
gv$(OBJ_EXT): /usr/include/setjmp.h
gv$(OBJ_EXT): /usr/include/signal.h
gv$(OBJ_EXT): /usr/include/stdint.h
gv$(OBJ_EXT): /usr/include/stdio.h
gv$(OBJ_EXT): /usr/include/stdlib.h
gv$(OBJ_EXT): /usr/include/string.h
gv$(OBJ_EXT): /usr/include/sys/cdefs.h
gv$(OBJ_EXT): /usr/include/sys/file.h
gv$(OBJ_EXT): /usr/include/sys/ioctl.h
gv$(OBJ_EXT): /usr/include/sys/ipc.h
gv$(OBJ_EXT): /usr/include/sys/param.h
gv$(OBJ_EXT): /usr/include/sys/resource.h
gv$(OBJ_EXT): /usr/include/sys/select.h
gv$(OBJ_EXT): /usr/include/sys/sem.h
gv$(OBJ_EXT): /usr/include/sys/socket.h
gv$(OBJ_EXT): /usr/include/sys/stat.h
gv$(OBJ_EXT): /usr/include/sys/sysmacros.h
gv$(OBJ_EXT): /usr/include/sys/time.h
gv$(OBJ_EXT): /usr/include/sys/times.h
gv$(OBJ_EXT): /usr/include/sys/ttydefaults.h
gv$(OBJ_EXT): /usr/include/sys/types.h
gv$(OBJ_EXT): /usr/include/sys/ucontext.h
gv$(OBJ_EXT): /usr/include/sys/uio.h
gv$(OBJ_EXT): /usr/include/sys/wait.h
gv$(OBJ_EXT): /usr/include/time.h
gv$(OBJ_EXT): /usr/include/unistd.h
gv$(OBJ_EXT): /usr/include/wchar.h
gv$(OBJ_EXT): /usr/include/xlocale.h
gv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
gv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
gv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
gv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
gv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
gv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
gv$(OBJ_EXT): EXTERN.h
gv$(OBJ_EXT): XSUB.h
gv$(OBJ_EXT): av.h
gv$(OBJ_EXT): config.h
gv$(OBJ_EXT): cop.h
gv$(OBJ_EXT): cv.h
gv$(OBJ_EXT): embed.h
gv$(OBJ_EXT): embedvar.h
gv$(OBJ_EXT): feature.h
gv$(OBJ_EXT): form.h
gv$(OBJ_EXT): gv.c
gv$(OBJ_EXT): gv.h
gv$(OBJ_EXT): handy.h
gv$(OBJ_EXT): hv.h
gv$(OBJ_EXT): intrpvar.h
gv$(OBJ_EXT): iperlsys.h
gv$(OBJ_EXT): keywords.h
gv$(OBJ_EXT): mg.h
gv$(OBJ_EXT): mg_vtable.h
gv$(OBJ_EXT): mydtrace.h
gv$(OBJ_EXT): op.h
gv$(OBJ_EXT): op_reg_common.h
gv$(OBJ_EXT): opcode.h
gv$(OBJ_EXT): opnames.h
gv$(OBJ_EXT): overload.c
gv$(OBJ_EXT): overload.h
gv$(OBJ_EXT): pad.h
gv$(OBJ_EXT): parser.h
gv$(OBJ_EXT): patchlevel.h
gv$(OBJ_EXT): perl.h
gv$(OBJ_EXT): perlapi.h
gv$(OBJ_EXT): perlio.h
gv$(OBJ_EXT): perlvars.h
gv$(OBJ_EXT): perly.h
gv$(OBJ_EXT): pp.h
gv$(OBJ_EXT): proto.h
gv$(OBJ_EXT): regexp.h
gv$(OBJ_EXT): scope.h
gv$(OBJ_EXT): sv.h
gv$(OBJ_EXT): thread.h
gv$(OBJ_EXT): unixish.h
gv$(OBJ_EXT): utf8.h
gv$(OBJ_EXT): util.h
gv$(OBJ_EXT): warnings.h
gv$(OBJ_EXT): cflags
hv$(OBJ_EXT): /usr/include/_G_config.h
hv$(OBJ_EXT): /usr/include/alloca.h
hv$(OBJ_EXT): /usr/include/arpa/inet.h
hv$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
hv$(OBJ_EXT): /usr/include/asm-generic/errno.h
hv$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
hv$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
hv$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
hv$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
hv$(OBJ_EXT): /usr/include/asm-x86_64/param.h
hv$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
hv$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
hv$(OBJ_EXT): /usr/include/asm/errno.h
hv$(OBJ_EXT): /usr/include/asm/ioctl.h
hv$(OBJ_EXT): /usr/include/asm/ioctls.h
hv$(OBJ_EXT): /usr/include/asm/param.h
hv$(OBJ_EXT): /usr/include/asm/socket.h
hv$(OBJ_EXT): /usr/include/asm/sockios.h
hv$(OBJ_EXT): /usr/include/bits/byteswap.h
hv$(OBJ_EXT): /usr/include/bits/confname.h
hv$(OBJ_EXT): /usr/include/bits/dirent.h
hv$(OBJ_EXT): /usr/include/bits/endian.h
hv$(OBJ_EXT): /usr/include/bits/environments.h
hv$(OBJ_EXT): /usr/include/bits/errno.h
hv$(OBJ_EXT): /usr/include/bits/fcntl.h
hv$(OBJ_EXT): /usr/include/bits/huge_val.h
hv$(OBJ_EXT): /usr/include/bits/huge_valf.h
hv$(OBJ_EXT): /usr/include/bits/huge_vall.h
hv$(OBJ_EXT): /usr/include/bits/in.h
hv$(OBJ_EXT): /usr/include/bits/inf.h
hv$(OBJ_EXT): /usr/include/bits/ioctl-types.h
hv$(OBJ_EXT): /usr/include/bits/ioctls.h
hv$(OBJ_EXT): /usr/include/bits/ipc.h
hv$(OBJ_EXT): /usr/include/bits/ipctypes.h
hv$(OBJ_EXT): /usr/include/bits/local_lim.h
hv$(OBJ_EXT): /usr/include/bits/locale.h
hv$(OBJ_EXT): /usr/include/bits/mathcalls.h
hv$(OBJ_EXT): /usr/include/bits/mathdef.h
hv$(OBJ_EXT): /usr/include/bits/nan.h
hv$(OBJ_EXT): /usr/include/bits/netdb.h
hv$(OBJ_EXT): /usr/include/bits/posix1_lim.h
hv$(OBJ_EXT): /usr/include/bits/posix2_lim.h
hv$(OBJ_EXT): /usr/include/bits/posix_opt.h
hv$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
hv$(OBJ_EXT): /usr/include/bits/resource.h
hv$(OBJ_EXT): /usr/include/bits/select.h
hv$(OBJ_EXT): /usr/include/bits/sem.h
hv$(OBJ_EXT): /usr/include/bits/setjmp.h
hv$(OBJ_EXT): /usr/include/bits/sigaction.h
hv$(OBJ_EXT): /usr/include/bits/sigcontext.h
hv$(OBJ_EXT): /usr/include/bits/siginfo.h
hv$(OBJ_EXT): /usr/include/bits/signum.h
hv$(OBJ_EXT): /usr/include/bits/sigset.h
hv$(OBJ_EXT): /usr/include/bits/sigstack.h
hv$(OBJ_EXT): /usr/include/bits/sigthread.h
hv$(OBJ_EXT): /usr/include/bits/sockaddr.h
hv$(OBJ_EXT): /usr/include/bits/socket.h
hv$(OBJ_EXT): /usr/include/bits/stat.h
hv$(OBJ_EXT): /usr/include/bits/stdio_lim.h
hv$(OBJ_EXT): /usr/include/bits/sys_errlist.h
hv$(OBJ_EXT): /usr/include/bits/time.h
hv$(OBJ_EXT): /usr/include/bits/types.h
hv$(OBJ_EXT): /usr/include/bits/typesizes.h
hv$(OBJ_EXT): /usr/include/bits/uio.h
hv$(OBJ_EXT): /usr/include/bits/waitflags.h
hv$(OBJ_EXT): /usr/include/bits/waitstatus.h
hv$(OBJ_EXT): /usr/include/bits/wchar.h
hv$(OBJ_EXT): /usr/include/bits/wordsize.h
hv$(OBJ_EXT): /usr/include/bits/xopen_lim.h
hv$(OBJ_EXT): /usr/include/ctype.h
hv$(OBJ_EXT): /usr/include/dirent.h
hv$(OBJ_EXT): /usr/include/endian.h
hv$(OBJ_EXT): /usr/include/errno.h
hv$(OBJ_EXT): /usr/include/fcntl.h
hv$(OBJ_EXT): /usr/include/features.h
hv$(OBJ_EXT): /usr/include/gconv.h
hv$(OBJ_EXT): /usr/include/getopt.h
hv$(OBJ_EXT): /usr/include/gnu/stubs-64.h
hv$(OBJ_EXT): /usr/include/gnu/stubs.h
hv$(OBJ_EXT): /usr/include/inttypes.h
hv$(OBJ_EXT): /usr/include/libio.h
hv$(OBJ_EXT): /usr/include/limits.h
hv$(OBJ_EXT): /usr/include/linux/errno.h
hv$(OBJ_EXT): /usr/include/linux/limits.h
hv$(OBJ_EXT): /usr/include/linux/param.h
hv$(OBJ_EXT): /usr/include/locale.h
hv$(OBJ_EXT): /usr/include/math.h
hv$(OBJ_EXT): /usr/include/netdb.h
hv$(OBJ_EXT): /usr/include/netinet/in.h
hv$(OBJ_EXT): /usr/include/rpc/netdb.h
hv$(OBJ_EXT): /usr/include/setjmp.h
hv$(OBJ_EXT): /usr/include/signal.h
hv$(OBJ_EXT): /usr/include/stdint.h
hv$(OBJ_EXT): /usr/include/stdio.h
hv$(OBJ_EXT): /usr/include/stdlib.h
hv$(OBJ_EXT): /usr/include/string.h
hv$(OBJ_EXT): /usr/include/sys/cdefs.h
hv$(OBJ_EXT): /usr/include/sys/file.h
hv$(OBJ_EXT): /usr/include/sys/ioctl.h
hv$(OBJ_EXT): /usr/include/sys/ipc.h
hv$(OBJ_EXT): /usr/include/sys/param.h
hv$(OBJ_EXT): /usr/include/sys/resource.h
hv$(OBJ_EXT): /usr/include/sys/select.h
hv$(OBJ_EXT): /usr/include/sys/sem.h
hv$(OBJ_EXT): /usr/include/sys/socket.h
hv$(OBJ_EXT): /usr/include/sys/stat.h
hv$(OBJ_EXT): /usr/include/sys/sysmacros.h
hv$(OBJ_EXT): /usr/include/sys/time.h
hv$(OBJ_EXT): /usr/include/sys/times.h
hv$(OBJ_EXT): /usr/include/sys/ttydefaults.h
hv$(OBJ_EXT): /usr/include/sys/types.h
hv$(OBJ_EXT): /usr/include/sys/ucontext.h
hv$(OBJ_EXT): /usr/include/sys/uio.h
hv$(OBJ_EXT): /usr/include/sys/wait.h
hv$(OBJ_EXT): /usr/include/time.h
hv$(OBJ_EXT): /usr/include/unistd.h
hv$(OBJ_EXT): /usr/include/wchar.h
hv$(OBJ_EXT): /usr/include/xlocale.h
hv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
hv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
hv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
hv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
hv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
hv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
hv$(OBJ_EXT): EXTERN.h
hv$(OBJ_EXT): av.h
hv$(OBJ_EXT): config.h
hv$(OBJ_EXT): cop.h
hv$(OBJ_EXT): cv.h
hv$(OBJ_EXT): embed.h
hv$(OBJ_EXT): embedvar.h
hv$(OBJ_EXT): form.h
hv$(OBJ_EXT): gv.h
hv$(OBJ_EXT): handy.h
hv$(OBJ_EXT): hv.c
hv$(OBJ_EXT): hv.h
hv$(OBJ_EXT): intrpvar.h
hv$(OBJ_EXT): iperlsys.h
hv$(OBJ_EXT): mg.h
hv$(OBJ_EXT): mg_vtable.h
hv$(OBJ_EXT): mydtrace.h
hv$(OBJ_EXT): op.h
hv$(OBJ_EXT): op_reg_common.h
hv$(OBJ_EXT): opcode.h
hv$(OBJ_EXT): opnames.h
hv$(OBJ_EXT): overload.h
hv$(OBJ_EXT): pad.h
hv$(OBJ_EXT): parser.h
hv$(OBJ_EXT): patchlevel.h
hv$(OBJ_EXT): perl.h
hv$(OBJ_EXT): perlio.h
hv$(OBJ_EXT): perlvars.h
hv$(OBJ_EXT): perly.h
hv$(OBJ_EXT): pp.h
hv$(OBJ_EXT): proto.h
hv$(OBJ_EXT): regexp.h
hv$(OBJ_EXT): scope.h
hv$(OBJ_EXT): sv.h
hv$(OBJ_EXT): thread.h
hv$(OBJ_EXT): unixish.h
hv$(OBJ_EXT): utf8.h
hv$(OBJ_EXT): util.h
hv$(OBJ_EXT): warnings.h
hv$(OBJ_EXT): cflags
mg$(OBJ_EXT): /usr/include/_G_config.h
mg$(OBJ_EXT): /usr/include/alloca.h
mg$(OBJ_EXT): /usr/include/arpa/inet.h
mg$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
mg$(OBJ_EXT): /usr/include/asm-generic/errno.h
mg$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
mg$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
mg$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
mg$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
mg$(OBJ_EXT): /usr/include/asm-x86_64/param.h
mg$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
mg$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
mg$(OBJ_EXT): /usr/include/asm/errno.h
mg$(OBJ_EXT): /usr/include/asm/ioctl.h
mg$(OBJ_EXT): /usr/include/asm/ioctls.h
mg$(OBJ_EXT): /usr/include/asm/param.h
mg$(OBJ_EXT): /usr/include/asm/socket.h
mg$(OBJ_EXT): /usr/include/asm/sockios.h
mg$(OBJ_EXT): /usr/include/bits/byteswap.h
mg$(OBJ_EXT): /usr/include/bits/confname.h
mg$(OBJ_EXT): /usr/include/bits/dirent.h
mg$(OBJ_EXT): /usr/include/bits/endian.h
mg$(OBJ_EXT): /usr/include/bits/environments.h
mg$(OBJ_EXT): /usr/include/bits/errno.h
mg$(OBJ_EXT): /usr/include/bits/fcntl.h
mg$(OBJ_EXT): /usr/include/bits/huge_val.h
mg$(OBJ_EXT): /usr/include/bits/huge_valf.h
mg$(OBJ_EXT): /usr/include/bits/huge_vall.h
mg$(OBJ_EXT): /usr/include/bits/in.h
mg$(OBJ_EXT): /usr/include/bits/inf.h
mg$(OBJ_EXT): /usr/include/bits/ioctl-types.h
mg$(OBJ_EXT): /usr/include/bits/ioctls.h
mg$(OBJ_EXT): /usr/include/bits/ipc.h
mg$(OBJ_EXT): /usr/include/bits/ipctypes.h
mg$(OBJ_EXT): /usr/include/bits/local_lim.h
mg$(OBJ_EXT): /usr/include/bits/locale.h
mg$(OBJ_EXT): /usr/include/bits/mathcalls.h
mg$(OBJ_EXT): /usr/include/bits/mathdef.h
mg$(OBJ_EXT): /usr/include/bits/nan.h
mg$(OBJ_EXT): /usr/include/bits/netdb.h
mg$(OBJ_EXT): /usr/include/bits/posix1_lim.h
mg$(OBJ_EXT): /usr/include/bits/posix2_lim.h
mg$(OBJ_EXT): /usr/include/bits/posix_opt.h
mg$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
mg$(OBJ_EXT): /usr/include/bits/resource.h
mg$(OBJ_EXT): /usr/include/bits/select.h
mg$(OBJ_EXT): /usr/include/bits/sem.h
mg$(OBJ_EXT): /usr/include/bits/setjmp.h
mg$(OBJ_EXT): /usr/include/bits/sigaction.h
mg$(OBJ_EXT): /usr/include/bits/sigcontext.h
mg$(OBJ_EXT): /usr/include/bits/siginfo.h
mg$(OBJ_EXT): /usr/include/bits/signum.h
mg$(OBJ_EXT): /usr/include/bits/sigset.h
mg$(OBJ_EXT): /usr/include/bits/sigstack.h
mg$(OBJ_EXT): /usr/include/bits/sigthread.h
mg$(OBJ_EXT): /usr/include/bits/sockaddr.h
mg$(OBJ_EXT): /usr/include/bits/socket.h
mg$(OBJ_EXT): /usr/include/bits/stat.h
mg$(OBJ_EXT): /usr/include/bits/stdio_lim.h
mg$(OBJ_EXT): /usr/include/bits/sys_errlist.h
mg$(OBJ_EXT): /usr/include/bits/time.h
mg$(OBJ_EXT): /usr/include/bits/types.h
mg$(OBJ_EXT): /usr/include/bits/typesizes.h
mg$(OBJ_EXT): /usr/include/bits/uio.h
mg$(OBJ_EXT): /usr/include/bits/waitflags.h
mg$(OBJ_EXT): /usr/include/bits/waitstatus.h
mg$(OBJ_EXT): /usr/include/bits/wchar.h
mg$(OBJ_EXT): /usr/include/bits/wordsize.h
mg$(OBJ_EXT): /usr/include/bits/xopen_lim.h
mg$(OBJ_EXT): /usr/include/ctype.h
mg$(OBJ_EXT): /usr/include/dirent.h
mg$(OBJ_EXT): /usr/include/endian.h
mg$(OBJ_EXT): /usr/include/errno.h
mg$(OBJ_EXT): /usr/include/fcntl.h
mg$(OBJ_EXT): /usr/include/features.h
mg$(OBJ_EXT): /usr/include/gconv.h
mg$(OBJ_EXT): /usr/include/getopt.h
mg$(OBJ_EXT): /usr/include/gnu/stubs-64.h
mg$(OBJ_EXT): /usr/include/gnu/stubs.h
mg$(OBJ_EXT): /usr/include/grp.h
mg$(OBJ_EXT): /usr/include/inttypes.h
mg$(OBJ_EXT): /usr/include/libio.h
mg$(OBJ_EXT): /usr/include/limits.h
mg$(OBJ_EXT): /usr/include/linux/errno.h
mg$(OBJ_EXT): /usr/include/linux/limits.h
mg$(OBJ_EXT): /usr/include/linux/param.h
mg$(OBJ_EXT): /usr/include/linux/prctl.h
mg$(OBJ_EXT): /usr/include/locale.h
mg$(OBJ_EXT): /usr/include/math.h
mg$(OBJ_EXT): /usr/include/netdb.h
mg$(OBJ_EXT): /usr/include/netinet/in.h
mg$(OBJ_EXT): /usr/include/rpc/netdb.h
mg$(OBJ_EXT): /usr/include/setjmp.h
mg$(OBJ_EXT): /usr/include/signal.h
mg$(OBJ_EXT): /usr/include/stdint.h
mg$(OBJ_EXT): /usr/include/stdio.h
mg$(OBJ_EXT): /usr/include/stdlib.h
mg$(OBJ_EXT): /usr/include/string.h
mg$(OBJ_EXT): /usr/include/sys/cdefs.h
mg$(OBJ_EXT): /usr/include/sys/file.h
mg$(OBJ_EXT): /usr/include/sys/ioctl.h
mg$(OBJ_EXT): /usr/include/sys/ipc.h
mg$(OBJ_EXT): /usr/include/sys/param.h
mg$(OBJ_EXT): /usr/include/sys/prctl.h
mg$(OBJ_EXT): /usr/include/sys/resource.h
mg$(OBJ_EXT): /usr/include/sys/select.h
mg$(OBJ_EXT): /usr/include/sys/sem.h
mg$(OBJ_EXT): /usr/include/sys/socket.h
mg$(OBJ_EXT): /usr/include/sys/stat.h
mg$(OBJ_EXT): /usr/include/sys/sysmacros.h
mg$(OBJ_EXT): /usr/include/sys/time.h
mg$(OBJ_EXT): /usr/include/sys/times.h
mg$(OBJ_EXT): /usr/include/sys/ttydefaults.h
mg$(OBJ_EXT): /usr/include/sys/types.h
mg$(OBJ_EXT): /usr/include/sys/ucontext.h
mg$(OBJ_EXT): /usr/include/sys/uio.h
mg$(OBJ_EXT): /usr/include/sys/wait.h
mg$(OBJ_EXT): /usr/include/time.h
mg$(OBJ_EXT): /usr/include/unistd.h
mg$(OBJ_EXT): /usr/include/wchar.h
mg$(OBJ_EXT): /usr/include/xlocale.h
mg$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
mg$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
mg$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
mg$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
mg$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
mg$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
mg$(OBJ_EXT): EXTERN.h
mg$(OBJ_EXT): av.h
mg$(OBJ_EXT): config.h
mg$(OBJ_EXT): cop.h
mg$(OBJ_EXT): cv.h
mg$(OBJ_EXT): embed.h
mg$(OBJ_EXT): embedvar.h
mg$(OBJ_EXT): form.h
mg$(OBJ_EXT): gv.h
mg$(OBJ_EXT): handy.h
mg$(OBJ_EXT): hv.h
mg$(OBJ_EXT): intrpvar.h
mg$(OBJ_EXT): iperlsys.h
mg$(OBJ_EXT): mg.c
mg$(OBJ_EXT): mg.h
mg$(OBJ_EXT): mg_vtable.h
mg$(OBJ_EXT): mydtrace.h
mg$(OBJ_EXT): op.h
mg$(OBJ_EXT): op_reg_common.h
mg$(OBJ_EXT): opcode.h
mg$(OBJ_EXT): opnames.h
mg$(OBJ_EXT): overload.h
mg$(OBJ_EXT): pad.h
mg$(OBJ_EXT): parser.h
mg$(OBJ_EXT): patchlevel.h
mg$(OBJ_EXT): perl.h
mg$(OBJ_EXT): perlio.h
mg$(OBJ_EXT): perlvars.h
mg$(OBJ_EXT): perly.h
mg$(OBJ_EXT): pp.h
mg$(OBJ_EXT): proto.h
mg$(OBJ_EXT): regexp.h
mg$(OBJ_EXT): scope.h
mg$(OBJ_EXT): sv.h
mg$(OBJ_EXT): thread.h
mg$(OBJ_EXT): unixish.h
mg$(OBJ_EXT): utf8.h
mg$(OBJ_EXT): util.h
mg$(OBJ_EXT): warnings.h
mg$(OBJ_EXT): cflags
reentr$(OBJ_EXT): /usr/include/_G_config.h
reentr$(OBJ_EXT): /usr/include/alloca.h
reentr$(OBJ_EXT): /usr/include/arpa/inet.h
reentr$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
reentr$(OBJ_EXT): /usr/include/asm-generic/errno.h
reentr$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
reentr$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
reentr$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
reentr$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
reentr$(OBJ_EXT): /usr/include/asm-x86_64/param.h
reentr$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
reentr$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
reentr$(OBJ_EXT): /usr/include/asm/errno.h
reentr$(OBJ_EXT): /usr/include/asm/ioctl.h
reentr$(OBJ_EXT): /usr/include/asm/ioctls.h
reentr$(OBJ_EXT): /usr/include/asm/param.h
reentr$(OBJ_EXT): /usr/include/asm/socket.h
reentr$(OBJ_EXT): /usr/include/asm/sockios.h
reentr$(OBJ_EXT): /usr/include/bits/byteswap.h
reentr$(OBJ_EXT): /usr/include/bits/confname.h
reentr$(OBJ_EXT): /usr/include/bits/dirent.h
reentr$(OBJ_EXT): /usr/include/bits/endian.h
reentr$(OBJ_EXT): /usr/include/bits/environments.h
reentr$(OBJ_EXT): /usr/include/bits/errno.h
reentr$(OBJ_EXT): /usr/include/bits/fcntl.h
reentr$(OBJ_EXT): /usr/include/bits/huge_val.h
reentr$(OBJ_EXT): /usr/include/bits/huge_valf.h
reentr$(OBJ_EXT): /usr/include/bits/huge_vall.h
reentr$(OBJ_EXT): /usr/include/bits/in.h
reentr$(OBJ_EXT): /usr/include/bits/inf.h
reentr$(OBJ_EXT): /usr/include/bits/ioctl-types.h
reentr$(OBJ_EXT): /usr/include/bits/ioctls.h
reentr$(OBJ_EXT): /usr/include/bits/ipc.h
reentr$(OBJ_EXT): /usr/include/bits/ipctypes.h
reentr$(OBJ_EXT): /usr/include/bits/local_lim.h
reentr$(OBJ_EXT): /usr/include/bits/locale.h
reentr$(OBJ_EXT): /usr/include/bits/mathcalls.h
reentr$(OBJ_EXT): /usr/include/bits/mathdef.h
reentr$(OBJ_EXT): /usr/include/bits/nan.h
reentr$(OBJ_EXT): /usr/include/bits/netdb.h
reentr$(OBJ_EXT): /usr/include/bits/posix1_lim.h
reentr$(OBJ_EXT): /usr/include/bits/posix2_lim.h
reentr$(OBJ_EXT): /usr/include/bits/posix_opt.h
reentr$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
reentr$(OBJ_EXT): /usr/include/bits/resource.h
reentr$(OBJ_EXT): /usr/include/bits/select.h
reentr$(OBJ_EXT): /usr/include/bits/sem.h
reentr$(OBJ_EXT): /usr/include/bits/setjmp.h
reentr$(OBJ_EXT): /usr/include/bits/sigaction.h
reentr$(OBJ_EXT): /usr/include/bits/sigcontext.h
reentr$(OBJ_EXT): /usr/include/bits/siginfo.h
reentr$(OBJ_EXT): /usr/include/bits/signum.h
reentr$(OBJ_EXT): /usr/include/bits/sigset.h
reentr$(OBJ_EXT): /usr/include/bits/sigstack.h
reentr$(OBJ_EXT): /usr/include/bits/sigthread.h
reentr$(OBJ_EXT): /usr/include/bits/sockaddr.h
reentr$(OBJ_EXT): /usr/include/bits/socket.h
reentr$(OBJ_EXT): /usr/include/bits/stat.h
reentr$(OBJ_EXT): /usr/include/bits/stdio_lim.h
reentr$(OBJ_EXT): /usr/include/bits/sys_errlist.h
reentr$(OBJ_EXT): /usr/include/bits/time.h
reentr$(OBJ_EXT): /usr/include/bits/types.h
reentr$(OBJ_EXT): /usr/include/bits/typesizes.h
reentr$(OBJ_EXT): /usr/include/bits/uio.h
reentr$(OBJ_EXT): /usr/include/bits/waitflags.h
reentr$(OBJ_EXT): /usr/include/bits/waitstatus.h
reentr$(OBJ_EXT): /usr/include/bits/wchar.h
reentr$(OBJ_EXT): /usr/include/bits/wordsize.h
reentr$(OBJ_EXT): /usr/include/bits/xopen_lim.h
reentr$(OBJ_EXT): /usr/include/ctype.h
reentr$(OBJ_EXT): /usr/include/dirent.h
reentr$(OBJ_EXT): /usr/include/endian.h
reentr$(OBJ_EXT): /usr/include/errno.h
reentr$(OBJ_EXT): /usr/include/fcntl.h
reentr$(OBJ_EXT): /usr/include/features.h
reentr$(OBJ_EXT): /usr/include/gconv.h
reentr$(OBJ_EXT): /usr/include/getopt.h
reentr$(OBJ_EXT): /usr/include/gnu/stubs-64.h
reentr$(OBJ_EXT): /usr/include/gnu/stubs.h
reentr$(OBJ_EXT): /usr/include/inttypes.h
reentr$(OBJ_EXT): /usr/include/libio.h
reentr$(OBJ_EXT): /usr/include/limits.h
reentr$(OBJ_EXT): /usr/include/linux/errno.h
reentr$(OBJ_EXT): /usr/include/linux/limits.h
reentr$(OBJ_EXT): /usr/include/linux/param.h
reentr$(OBJ_EXT): /usr/include/locale.h
reentr$(OBJ_EXT): /usr/include/math.h
reentr$(OBJ_EXT): /usr/include/netdb.h
reentr$(OBJ_EXT): /usr/include/netinet/in.h
reentr$(OBJ_EXT): /usr/include/rpc/netdb.h
reentr$(OBJ_EXT): /usr/include/setjmp.h
reentr$(OBJ_EXT): /usr/include/signal.h
reentr$(OBJ_EXT): /usr/include/stdint.h
reentr$(OBJ_EXT): /usr/include/stdio.h
reentr$(OBJ_EXT): /usr/include/stdlib.h
reentr$(OBJ_EXT): /usr/include/string.h
reentr$(OBJ_EXT): /usr/include/sys/cdefs.h
reentr$(OBJ_EXT): /usr/include/sys/file.h
reentr$(OBJ_EXT): /usr/include/sys/ioctl.h
reentr$(OBJ_EXT): /usr/include/sys/ipc.h
reentr$(OBJ_EXT): /usr/include/sys/param.h
reentr$(OBJ_EXT): /usr/include/sys/resource.h
reentr$(OBJ_EXT): /usr/include/sys/select.h
reentr$(OBJ_EXT): /usr/include/sys/sem.h
reentr$(OBJ_EXT): /usr/include/sys/socket.h
reentr$(OBJ_EXT): /usr/include/sys/stat.h
reentr$(OBJ_EXT): /usr/include/sys/sysmacros.h
reentr$(OBJ_EXT): /usr/include/sys/time.h
reentr$(OBJ_EXT): /usr/include/sys/times.h
reentr$(OBJ_EXT): /usr/include/sys/ttydefaults.h
reentr$(OBJ_EXT): /usr/include/sys/types.h
reentr$(OBJ_EXT): /usr/include/sys/ucontext.h
reentr$(OBJ_EXT): /usr/include/sys/uio.h
reentr$(OBJ_EXT): /usr/include/sys/wait.h
reentr$(OBJ_EXT): /usr/include/time.h
reentr$(OBJ_EXT): /usr/include/unistd.h
reentr$(OBJ_EXT): /usr/include/wchar.h
reentr$(OBJ_EXT): /usr/include/xlocale.h
reentr$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
reentr$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
reentr$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
reentr$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
reentr$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
reentr$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
reentr$(OBJ_EXT): EXTERN.h
reentr$(OBJ_EXT): av.h
reentr$(OBJ_EXT): config.h
reentr$(OBJ_EXT): cop.h
reentr$(OBJ_EXT): cv.h
reentr$(OBJ_EXT): embed.h
reentr$(OBJ_EXT): embedvar.h
reentr$(OBJ_EXT): form.h
reentr$(OBJ_EXT): gv.h
reentr$(OBJ_EXT): handy.h
reentr$(OBJ_EXT): hv.h
reentr$(OBJ_EXT): intrpvar.h
reentr$(OBJ_EXT): iperlsys.h
reentr$(OBJ_EXT): mg.h
reentr$(OBJ_EXT): mg_vtable.h
reentr$(OBJ_EXT): mydtrace.h
reentr$(OBJ_EXT): op.h
reentr$(OBJ_EXT): op_reg_common.h
reentr$(OBJ_EXT): opcode.h
reentr$(OBJ_EXT): opnames.h
reentr$(OBJ_EXT): overload.h
reentr$(OBJ_EXT): pad.h
reentr$(OBJ_EXT): parser.h
reentr$(OBJ_EXT): patchlevel.h
reentr$(OBJ_EXT): perl.h
reentr$(OBJ_EXT): perlio.h
reentr$(OBJ_EXT): perlvars.h
reentr$(OBJ_EXT): perly.h
reentr$(OBJ_EXT): pp.h
reentr$(OBJ_EXT): proto.h
reentr$(OBJ_EXT): reentr.c
reentr$(OBJ_EXT): reentr.h
reentr$(OBJ_EXT): regexp.h
reentr$(OBJ_EXT): scope.h
reentr$(OBJ_EXT): sv.h
reentr$(OBJ_EXT): thread.h
reentr$(OBJ_EXT): unixish.h
reentr$(OBJ_EXT): utf8.h
reentr$(OBJ_EXT): util.h
reentr$(OBJ_EXT): warnings.h
reentr$(OBJ_EXT): cflags
mro$(OBJ_EXT): /usr/include/_G_config.h
mro$(OBJ_EXT): /usr/include/alloca.h
mro$(OBJ_EXT): /usr/include/arpa/inet.h
mro$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
mro$(OBJ_EXT): /usr/include/asm-generic/errno.h
mro$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
mro$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
mro$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
mro$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
mro$(OBJ_EXT): /usr/include/asm-x86_64/param.h
mro$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
mro$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
mro$(OBJ_EXT): /usr/include/asm/errno.h
mro$(OBJ_EXT): /usr/include/asm/ioctl.h
mro$(OBJ_EXT): /usr/include/asm/ioctls.h
mro$(OBJ_EXT): /usr/include/asm/param.h
mro$(OBJ_EXT): /usr/include/asm/socket.h
mro$(OBJ_EXT): /usr/include/asm/sockios.h
mro$(OBJ_EXT): /usr/include/bits/byteswap.h
mro$(OBJ_EXT): /usr/include/bits/confname.h
mro$(OBJ_EXT): /usr/include/bits/dirent.h
mro$(OBJ_EXT): /usr/include/bits/endian.h
mro$(OBJ_EXT): /usr/include/bits/environments.h
mro$(OBJ_EXT): /usr/include/bits/errno.h
mro$(OBJ_EXT): /usr/include/bits/fcntl.h
mro$(OBJ_EXT): /usr/include/bits/huge_val.h
mro$(OBJ_EXT): /usr/include/bits/huge_valf.h
mro$(OBJ_EXT): /usr/include/bits/huge_vall.h
mro$(OBJ_EXT): /usr/include/bits/in.h
mro$(OBJ_EXT): /usr/include/bits/inf.h
mro$(OBJ_EXT): /usr/include/bits/ioctl-types.h
mro$(OBJ_EXT): /usr/include/bits/ioctls.h
mro$(OBJ_EXT): /usr/include/bits/ipc.h
mro$(OBJ_EXT): /usr/include/bits/ipctypes.h
mro$(OBJ_EXT): /usr/include/bits/local_lim.h
mro$(OBJ_EXT): /usr/include/bits/locale.h
mro$(OBJ_EXT): /usr/include/bits/mathcalls.h
mro$(OBJ_EXT): /usr/include/bits/mathdef.h
mro$(OBJ_EXT): /usr/include/bits/nan.h
mro$(OBJ_EXT): /usr/include/bits/netdb.h
mro$(OBJ_EXT): /usr/include/bits/posix1_lim.h
mro$(OBJ_EXT): /usr/include/bits/posix2_lim.h
mro$(OBJ_EXT): /usr/include/bits/posix_opt.h
mro$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
mro$(OBJ_EXT): /usr/include/bits/resource.h
mro$(OBJ_EXT): /usr/include/bits/select.h
mro$(OBJ_EXT): /usr/include/bits/sem.h
mro$(OBJ_EXT): /usr/include/bits/setjmp.h
mro$(OBJ_EXT): /usr/include/bits/sigaction.h
mro$(OBJ_EXT): /usr/include/bits/sigcontext.h
mro$(OBJ_EXT): /usr/include/bits/siginfo.h
mro$(OBJ_EXT): /usr/include/bits/signum.h
mro$(OBJ_EXT): /usr/include/bits/sigset.h
mro$(OBJ_EXT): /usr/include/bits/sigstack.h
mro$(OBJ_EXT): /usr/include/bits/sigthread.h
mro$(OBJ_EXT): /usr/include/bits/sockaddr.h
mro$(OBJ_EXT): /usr/include/bits/socket.h
mro$(OBJ_EXT): /usr/include/bits/stat.h
mro$(OBJ_EXT): /usr/include/bits/stdio_lim.h
mro$(OBJ_EXT): /usr/include/bits/sys_errlist.h
mro$(OBJ_EXT): /usr/include/bits/time.h
mro$(OBJ_EXT): /usr/include/bits/types.h
mro$(OBJ_EXT): /usr/include/bits/typesizes.h
mro$(OBJ_EXT): /usr/include/bits/uio.h
mro$(OBJ_EXT): /usr/include/bits/waitflags.h
mro$(OBJ_EXT): /usr/include/bits/waitstatus.h
mro$(OBJ_EXT): /usr/include/bits/wchar.h
mro$(OBJ_EXT): /usr/include/bits/wordsize.h
mro$(OBJ_EXT): /usr/include/bits/xopen_lim.h
mro$(OBJ_EXT): /usr/include/ctype.h
mro$(OBJ_EXT): /usr/include/dirent.h
mro$(OBJ_EXT): /usr/include/endian.h
mro$(OBJ_EXT): /usr/include/errno.h
mro$(OBJ_EXT): /usr/include/fcntl.h
mro$(OBJ_EXT): /usr/include/features.h
mro$(OBJ_EXT): /usr/include/gconv.h
mro$(OBJ_EXT): /usr/include/getopt.h
mro$(OBJ_EXT): /usr/include/gnu/stubs-64.h
mro$(OBJ_EXT): /usr/include/gnu/stubs.h
mro$(OBJ_EXT): /usr/include/inttypes.h
mro$(OBJ_EXT): /usr/include/libio.h
mro$(OBJ_EXT): /usr/include/limits.h
mro$(OBJ_EXT): /usr/include/linux/errno.h
mro$(OBJ_EXT): /usr/include/linux/limits.h
mro$(OBJ_EXT): /usr/include/linux/param.h
mro$(OBJ_EXT): /usr/include/locale.h
mro$(OBJ_EXT): /usr/include/math.h
mro$(OBJ_EXT): /usr/include/netdb.h
mro$(OBJ_EXT): /usr/include/netinet/in.h
mro$(OBJ_EXT): /usr/include/rpc/netdb.h
mro$(OBJ_EXT): /usr/include/setjmp.h
mro$(OBJ_EXT): /usr/include/signal.h
mro$(OBJ_EXT): /usr/include/stdint.h
mro$(OBJ_EXT): /usr/include/stdio.h
mro$(OBJ_EXT): /usr/include/stdlib.h
mro$(OBJ_EXT): /usr/include/string.h
mro$(OBJ_EXT): /usr/include/sys/cdefs.h
mro$(OBJ_EXT): /usr/include/sys/file.h
mro$(OBJ_EXT): /usr/include/sys/ioctl.h
mro$(OBJ_EXT): /usr/include/sys/ipc.h
mro$(OBJ_EXT): /usr/include/sys/param.h
mro$(OBJ_EXT): /usr/include/sys/resource.h
mro$(OBJ_EXT): /usr/include/sys/select.h
mro$(OBJ_EXT): /usr/include/sys/sem.h
mro$(OBJ_EXT): /usr/include/sys/socket.h
mro$(OBJ_EXT): /usr/include/sys/stat.h
mro$(OBJ_EXT): /usr/include/sys/sysmacros.h
mro$(OBJ_EXT): /usr/include/sys/time.h
mro$(OBJ_EXT): /usr/include/sys/times.h
mro$(OBJ_EXT): /usr/include/sys/ttydefaults.h
mro$(OBJ_EXT): /usr/include/sys/types.h
mro$(OBJ_EXT): /usr/include/sys/ucontext.h
mro$(OBJ_EXT): /usr/include/sys/uio.h
mro$(OBJ_EXT): /usr/include/sys/wait.h
mro$(OBJ_EXT): /usr/include/time.h
mro$(OBJ_EXT): /usr/include/unistd.h
mro$(OBJ_EXT): /usr/include/wchar.h
mro$(OBJ_EXT): /usr/include/xlocale.h
mro$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
mro$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
mro$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
mro$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
mro$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
mro$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
mro$(OBJ_EXT): EXTERN.h
mro$(OBJ_EXT): XSUB.h
mro$(OBJ_EXT): av.h
mro$(OBJ_EXT): config.h
mro$(OBJ_EXT): cop.h
mro$(OBJ_EXT): cv.h
mro$(OBJ_EXT): embed.h
mro$(OBJ_EXT): embedvar.h
mro$(OBJ_EXT): form.h
mro$(OBJ_EXT): gv.h
mro$(OBJ_EXT): handy.h
mro$(OBJ_EXT): hv.h
mro$(OBJ_EXT): intrpvar.h
mro$(OBJ_EXT): iperlsys.h
mro$(OBJ_EXT): mg.h
mro$(OBJ_EXT): mg_vtable.h
mro$(OBJ_EXT): mro.c
mro$(OBJ_EXT): mydtrace.h
mro$(OBJ_EXT): op.h
mro$(OBJ_EXT): op_reg_common.h
mro$(OBJ_EXT): opcode.h
mro$(OBJ_EXT): opnames.h
mro$(OBJ_EXT): overload.h
mro$(OBJ_EXT): pad.h
mro$(OBJ_EXT): parser.h
mro$(OBJ_EXT): patchlevel.h
mro$(OBJ_EXT): perl.h
mro$(OBJ_EXT): perlapi.h
mro$(OBJ_EXT): perlio.h
mro$(OBJ_EXT): perlvars.h
mro$(OBJ_EXT): perly.h
mro$(OBJ_EXT): pp.h
mro$(OBJ_EXT): proto.h
mro$(OBJ_EXT): regexp.h
mro$(OBJ_EXT): scope.h
mro$(OBJ_EXT): sv.h
mro$(OBJ_EXT): thread.h
mro$(OBJ_EXT): unixish.h
mro$(OBJ_EXT): utf8.h
mro$(OBJ_EXT): util.h
mro$(OBJ_EXT): warnings.h
mro$(OBJ_EXT): cflags
perl$(OBJ_EXT): /usr/include/_G_config.h
perl$(OBJ_EXT): /usr/include/alloca.h
perl$(OBJ_EXT): /usr/include/arpa/inet.h
perl$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
perl$(OBJ_EXT): /usr/include/asm-generic/errno.h
perl$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
perl$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
perl$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
perl$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
perl$(OBJ_EXT): /usr/include/asm-x86_64/param.h
perl$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
perl$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
perl$(OBJ_EXT): /usr/include/asm/errno.h
perl$(OBJ_EXT): /usr/include/asm/ioctl.h
perl$(OBJ_EXT): /usr/include/asm/ioctls.h
perl$(OBJ_EXT): /usr/include/asm/param.h
perl$(OBJ_EXT): /usr/include/asm/socket.h
perl$(OBJ_EXT): /usr/include/asm/sockios.h
perl$(OBJ_EXT): /usr/include/bits/byteswap.h
perl$(OBJ_EXT): /usr/include/bits/confname.h
perl$(OBJ_EXT): /usr/include/bits/dirent.h
perl$(OBJ_EXT): /usr/include/bits/endian.h
perl$(OBJ_EXT): /usr/include/bits/environments.h
perl$(OBJ_EXT): /usr/include/bits/errno.h
perl$(OBJ_EXT): /usr/include/bits/fcntl.h
perl$(OBJ_EXT): /usr/include/bits/huge_val.h
perl$(OBJ_EXT): /usr/include/bits/huge_valf.h
perl$(OBJ_EXT): /usr/include/bits/huge_vall.h
perl$(OBJ_EXT): /usr/include/bits/in.h
perl$(OBJ_EXT): /usr/include/bits/inf.h
perl$(OBJ_EXT): /usr/include/bits/ioctl-types.h
perl$(OBJ_EXT): /usr/include/bits/ioctls.h
perl$(OBJ_EXT): /usr/include/bits/ipc.h
perl$(OBJ_EXT): /usr/include/bits/ipctypes.h
perl$(OBJ_EXT): /usr/include/bits/local_lim.h
perl$(OBJ_EXT): /usr/include/bits/locale.h
perl$(OBJ_EXT): /usr/include/bits/mathcalls.h
perl$(OBJ_EXT): /usr/include/bits/mathdef.h
perl$(OBJ_EXT): /usr/include/bits/nan.h
perl$(OBJ_EXT): /usr/include/bits/netdb.h
perl$(OBJ_EXT): /usr/include/bits/posix1_lim.h
perl$(OBJ_EXT): /usr/include/bits/posix2_lim.h
perl$(OBJ_EXT): /usr/include/bits/posix_opt.h
perl$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
perl$(OBJ_EXT): /usr/include/bits/resource.h
perl$(OBJ_EXT): /usr/include/bits/select.h
perl$(OBJ_EXT): /usr/include/bits/sem.h
perl$(OBJ_EXT): /usr/include/bits/setjmp.h
perl$(OBJ_EXT): /usr/include/bits/sigaction.h
perl$(OBJ_EXT): /usr/include/bits/sigcontext.h
perl$(OBJ_EXT): /usr/include/bits/siginfo.h
perl$(OBJ_EXT): /usr/include/bits/signum.h
perl$(OBJ_EXT): /usr/include/bits/sigset.h
perl$(OBJ_EXT): /usr/include/bits/sigstack.h
perl$(OBJ_EXT): /usr/include/bits/sigthread.h
perl$(OBJ_EXT): /usr/include/bits/sockaddr.h
perl$(OBJ_EXT): /usr/include/bits/socket.h
perl$(OBJ_EXT): /usr/include/bits/stat.h
perl$(OBJ_EXT): /usr/include/bits/stdio_lim.h
perl$(OBJ_EXT): /usr/include/bits/sys_errlist.h
perl$(OBJ_EXT): /usr/include/bits/time.h
perl$(OBJ_EXT): /usr/include/bits/types.h
perl$(OBJ_EXT): /usr/include/bits/typesizes.h
perl$(OBJ_EXT): /usr/include/bits/uio.h
perl$(OBJ_EXT): /usr/include/bits/waitflags.h
perl$(OBJ_EXT): /usr/include/bits/waitstatus.h
perl$(OBJ_EXT): /usr/include/bits/wchar.h
perl$(OBJ_EXT): /usr/include/bits/wordsize.h
perl$(OBJ_EXT): /usr/include/bits/xopen_lim.h
perl$(OBJ_EXT): /usr/include/ctype.h
perl$(OBJ_EXT): /usr/include/dirent.h
perl$(OBJ_EXT): /usr/include/endian.h
perl$(OBJ_EXT): /usr/include/errno.h
perl$(OBJ_EXT): /usr/include/fcntl.h
perl$(OBJ_EXT): /usr/include/features.h
perl$(OBJ_EXT): /usr/include/gconv.h
perl$(OBJ_EXT): /usr/include/getopt.h
perl$(OBJ_EXT): /usr/include/gnu/stubs-64.h
perl$(OBJ_EXT): /usr/include/gnu/stubs.h
perl$(OBJ_EXT): /usr/include/inttypes.h
perl$(OBJ_EXT): /usr/include/libio.h
perl$(OBJ_EXT): /usr/include/limits.h
perl$(OBJ_EXT): /usr/include/linux/errno.h
perl$(OBJ_EXT): /usr/include/linux/limits.h
perl$(OBJ_EXT): /usr/include/linux/param.h
perl$(OBJ_EXT): /usr/include/locale.h
perl$(OBJ_EXT): /usr/include/math.h
perl$(OBJ_EXT): /usr/include/netdb.h
perl$(OBJ_EXT): /usr/include/netinet/in.h
perl$(OBJ_EXT): /usr/include/rpc/netdb.h
perl$(OBJ_EXT): /usr/include/setjmp.h
perl$(OBJ_EXT): /usr/include/signal.h
perl$(OBJ_EXT): /usr/include/stdint.h
perl$(OBJ_EXT): /usr/include/stdio.h
perl$(OBJ_EXT): /usr/include/stdlib.h
perl$(OBJ_EXT): /usr/include/string.h
perl$(OBJ_EXT): /usr/include/sys/cdefs.h
perl$(OBJ_EXT): /usr/include/sys/file.h
perl$(OBJ_EXT): /usr/include/sys/ioctl.h
perl$(OBJ_EXT): /usr/include/sys/ipc.h
perl$(OBJ_EXT): /usr/include/sys/param.h
perl$(OBJ_EXT): /usr/include/sys/resource.h
perl$(OBJ_EXT): /usr/include/sys/select.h
perl$(OBJ_EXT): /usr/include/sys/sem.h
perl$(OBJ_EXT): /usr/include/sys/socket.h
perl$(OBJ_EXT): /usr/include/sys/stat.h
perl$(OBJ_EXT): /usr/include/sys/sysmacros.h
perl$(OBJ_EXT): /usr/include/sys/time.h
perl$(OBJ_EXT): /usr/include/sys/times.h
perl$(OBJ_EXT): /usr/include/sys/ttydefaults.h
perl$(OBJ_EXT): /usr/include/sys/types.h
perl$(OBJ_EXT): /usr/include/sys/ucontext.h
perl$(OBJ_EXT): /usr/include/sys/uio.h
perl$(OBJ_EXT): /usr/include/sys/wait.h
perl$(OBJ_EXT): /usr/include/time.h
perl$(OBJ_EXT): /usr/include/unistd.h
perl$(OBJ_EXT): /usr/include/wchar.h
perl$(OBJ_EXT): /usr/include/xlocale.h
perl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
perl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
perl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
perl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
perl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
perl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
perl$(OBJ_EXT): EXTERN.h
perl$(OBJ_EXT): XSUB.h
perl$(OBJ_EXT): av.h
perl$(OBJ_EXT): config.h
perl$(OBJ_EXT): cop.h
perl$(OBJ_EXT): cv.h
perl$(OBJ_EXT): embed.h
perl$(OBJ_EXT): embedvar.h
perl$(OBJ_EXT): form.h
perl$(OBJ_EXT): gv.h
perl$(OBJ_EXT): handy.h
perl$(OBJ_EXT): hv.h
perl$(OBJ_EXT): intrpvar.h
perl$(OBJ_EXT): iperlsys.h
perl$(OBJ_EXT): mg.h
perl$(OBJ_EXT): mg_vtable.h
perl$(OBJ_EXT): mydtrace.h
perl$(OBJ_EXT): op.h
perl$(OBJ_EXT): op_reg_common.h
perl$(OBJ_EXT): opcode.h
perl$(OBJ_EXT): opnames.h
perl$(OBJ_EXT): overload.h
perl$(OBJ_EXT): pad.h
perl$(OBJ_EXT): parser.h
perl$(OBJ_EXT): patchlevel.h
perl$(OBJ_EXT): perl.c
perl$(OBJ_EXT): perl.h
perl$(OBJ_EXT): perlapi.h
perl$(OBJ_EXT): perlio.h
perl$(OBJ_EXT): perlvars.h
perl$(OBJ_EXT): perly.h
perl$(OBJ_EXT): pp.h
perl$(OBJ_EXT): proto.h
perl$(OBJ_EXT): regexp.h
perl$(OBJ_EXT): scope.h
perl$(OBJ_EXT): sv.h
perl$(OBJ_EXT): thread.h
perl$(OBJ_EXT): unixish.h
perl$(OBJ_EXT): utf8.h
perl$(OBJ_EXT): util.h
perl$(OBJ_EXT): warnings.h
perl$(OBJ_EXT): cflags
perly$(OBJ_EXT): /usr/include/_G_config.h
perly$(OBJ_EXT): /usr/include/alloca.h
perly$(OBJ_EXT): /usr/include/arpa/inet.h
perly$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
perly$(OBJ_EXT): /usr/include/asm-generic/errno.h
perly$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
perly$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
perly$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
perly$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
perly$(OBJ_EXT): /usr/include/asm-x86_64/param.h
perly$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
perly$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
perly$(OBJ_EXT): /usr/include/asm/errno.h
perly$(OBJ_EXT): /usr/include/asm/ioctl.h
perly$(OBJ_EXT): /usr/include/asm/ioctls.h
perly$(OBJ_EXT): /usr/include/asm/param.h
perly$(OBJ_EXT): /usr/include/asm/socket.h
perly$(OBJ_EXT): /usr/include/asm/sockios.h
perly$(OBJ_EXT): /usr/include/bits/byteswap.h
perly$(OBJ_EXT): /usr/include/bits/confname.h
perly$(OBJ_EXT): /usr/include/bits/dirent.h
perly$(OBJ_EXT): /usr/include/bits/endian.h
perly$(OBJ_EXT): /usr/include/bits/environments.h
perly$(OBJ_EXT): /usr/include/bits/errno.h
perly$(OBJ_EXT): /usr/include/bits/fcntl.h
perly$(OBJ_EXT): /usr/include/bits/huge_val.h
perly$(OBJ_EXT): /usr/include/bits/huge_valf.h
perly$(OBJ_EXT): /usr/include/bits/huge_vall.h
perly$(OBJ_EXT): /usr/include/bits/in.h
perly$(OBJ_EXT): /usr/include/bits/inf.h
perly$(OBJ_EXT): /usr/include/bits/ioctl-types.h
perly$(OBJ_EXT): /usr/include/bits/ioctls.h
perly$(OBJ_EXT): /usr/include/bits/ipc.h
perly$(OBJ_EXT): /usr/include/bits/ipctypes.h
perly$(OBJ_EXT): /usr/include/bits/local_lim.h
perly$(OBJ_EXT): /usr/include/bits/locale.h
perly$(OBJ_EXT): /usr/include/bits/mathcalls.h
perly$(OBJ_EXT): /usr/include/bits/mathdef.h
perly$(OBJ_EXT): /usr/include/bits/nan.h
perly$(OBJ_EXT): /usr/include/bits/netdb.h
perly$(OBJ_EXT): /usr/include/bits/posix1_lim.h
perly$(OBJ_EXT): /usr/include/bits/posix2_lim.h
perly$(OBJ_EXT): /usr/include/bits/posix_opt.h
perly$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
perly$(OBJ_EXT): /usr/include/bits/resource.h
perly$(OBJ_EXT): /usr/include/bits/select.h
perly$(OBJ_EXT): /usr/include/bits/sem.h
perly$(OBJ_EXT): /usr/include/bits/setjmp.h
perly$(OBJ_EXT): /usr/include/bits/sigaction.h
perly$(OBJ_EXT): /usr/include/bits/sigcontext.h
perly$(OBJ_EXT): /usr/include/bits/siginfo.h
perly$(OBJ_EXT): /usr/include/bits/signum.h
perly$(OBJ_EXT): /usr/include/bits/sigset.h
perly$(OBJ_EXT): /usr/include/bits/sigstack.h
perly$(OBJ_EXT): /usr/include/bits/sigthread.h
perly$(OBJ_EXT): /usr/include/bits/sockaddr.h
perly$(OBJ_EXT): /usr/include/bits/socket.h
perly$(OBJ_EXT): /usr/include/bits/stat.h
perly$(OBJ_EXT): /usr/include/bits/stdio_lim.h
perly$(OBJ_EXT): /usr/include/bits/sys_errlist.h
perly$(OBJ_EXT): /usr/include/bits/time.h
perly$(OBJ_EXT): /usr/include/bits/types.h
perly$(OBJ_EXT): /usr/include/bits/typesizes.h
perly$(OBJ_EXT): /usr/include/bits/uio.h
perly$(OBJ_EXT): /usr/include/bits/waitflags.h
perly$(OBJ_EXT): /usr/include/bits/waitstatus.h
perly$(OBJ_EXT): /usr/include/bits/wchar.h
perly$(OBJ_EXT): /usr/include/bits/wordsize.h
perly$(OBJ_EXT): /usr/include/bits/xopen_lim.h
perly$(OBJ_EXT): /usr/include/ctype.h
perly$(OBJ_EXT): /usr/include/dirent.h
perly$(OBJ_EXT): /usr/include/endian.h
perly$(OBJ_EXT): /usr/include/errno.h
perly$(OBJ_EXT): /usr/include/fcntl.h
perly$(OBJ_EXT): /usr/include/features.h
perly$(OBJ_EXT): /usr/include/gconv.h
perly$(OBJ_EXT): /usr/include/getopt.h
perly$(OBJ_EXT): /usr/include/gnu/stubs-64.h
perly$(OBJ_EXT): /usr/include/gnu/stubs.h
perly$(OBJ_EXT): /usr/include/inttypes.h
perly$(OBJ_EXT): /usr/include/libio.h
perly$(OBJ_EXT): /usr/include/limits.h
perly$(OBJ_EXT): /usr/include/linux/errno.h
perly$(OBJ_EXT): /usr/include/linux/limits.h
perly$(OBJ_EXT): /usr/include/linux/param.h
perly$(OBJ_EXT): /usr/include/locale.h
perly$(OBJ_EXT): /usr/include/math.h
perly$(OBJ_EXT): /usr/include/netdb.h
perly$(OBJ_EXT): /usr/include/netinet/in.h
perly$(OBJ_EXT): /usr/include/rpc/netdb.h
perly$(OBJ_EXT): /usr/include/setjmp.h
perly$(OBJ_EXT): /usr/include/signal.h
perly$(OBJ_EXT): /usr/include/stdint.h
perly$(OBJ_EXT): /usr/include/stdio.h
perly$(OBJ_EXT): /usr/include/stdlib.h
perly$(OBJ_EXT): /usr/include/string.h
perly$(OBJ_EXT): /usr/include/sys/cdefs.h
perly$(OBJ_EXT): /usr/include/sys/file.h
perly$(OBJ_EXT): /usr/include/sys/ioctl.h
perly$(OBJ_EXT): /usr/include/sys/ipc.h
perly$(OBJ_EXT): /usr/include/sys/param.h
perly$(OBJ_EXT): /usr/include/sys/resource.h
perly$(OBJ_EXT): /usr/include/sys/select.h
perly$(OBJ_EXT): /usr/include/sys/sem.h
perly$(OBJ_EXT): /usr/include/sys/socket.h
perly$(OBJ_EXT): /usr/include/sys/stat.h
perly$(OBJ_EXT): /usr/include/sys/sysmacros.h
perly$(OBJ_EXT): /usr/include/sys/time.h
perly$(OBJ_EXT): /usr/include/sys/times.h
perly$(OBJ_EXT): /usr/include/sys/ttydefaults.h
perly$(OBJ_EXT): /usr/include/sys/types.h
perly$(OBJ_EXT): /usr/include/sys/ucontext.h
perly$(OBJ_EXT): /usr/include/sys/uio.h
perly$(OBJ_EXT): /usr/include/sys/wait.h
perly$(OBJ_EXT): /usr/include/time.h
perly$(OBJ_EXT): /usr/include/unistd.h
perly$(OBJ_EXT): /usr/include/wchar.h
perly$(OBJ_EXT): /usr/include/xlocale.h
perly$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
perly$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
perly$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
perly$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
perly$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
perly$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
perly$(OBJ_EXT): EXTERN.h
perly$(OBJ_EXT): av.h
perly$(OBJ_EXT): config.h
perly$(OBJ_EXT): cop.h
perly$(OBJ_EXT): cv.h
perly$(OBJ_EXT): embed.h
perly$(OBJ_EXT): embedvar.h
perly$(OBJ_EXT): form.h
perly$(OBJ_EXT): gv.h
perly$(OBJ_EXT): handy.h
perly$(OBJ_EXT): hv.h
perly$(OBJ_EXT): intrpvar.h
perly$(OBJ_EXT): iperlsys.h
perly$(OBJ_EXT): mg.h
perly$(OBJ_EXT): mg_vtable.h
perly$(OBJ_EXT): mydtrace.h
perly$(OBJ_EXT): op.h
perly$(OBJ_EXT): op_reg_common.h
perly$(OBJ_EXT): opcode.h
perly$(OBJ_EXT): opnames.h
perly$(OBJ_EXT): overload.h
perly$(OBJ_EXT): pad.h
perly$(OBJ_EXT): parser.h
perly$(OBJ_EXT): patchlevel.h
perly$(OBJ_EXT): perl.h
perly$(OBJ_EXT): perlio.h
perly$(OBJ_EXT): perlvars.h
perly$(OBJ_EXT): perly.act
perly$(OBJ_EXT): perly.c
perly$(OBJ_EXT): perly.h
perly$(OBJ_EXT): perly.tab
perly$(OBJ_EXT): perly.y
perly$(OBJ_EXT): pp.h
perly$(OBJ_EXT): proto.h
perly$(OBJ_EXT): regexp.h
perly$(OBJ_EXT): scope.h
perly$(OBJ_EXT): sv.h
perly$(OBJ_EXT): thread.h
perly$(OBJ_EXT): unixish.h
perly$(OBJ_EXT): utf8.h
perly$(OBJ_EXT): util.h
perly$(OBJ_EXT): warnings.h
perly$(OBJ_EXT): cflags
pp$(OBJ_EXT): /usr/include/_G_config.h
pp$(OBJ_EXT): /usr/include/alloca.h
pp$(OBJ_EXT): /usr/include/arpa/inet.h
pp$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
pp$(OBJ_EXT): /usr/include/asm-generic/errno.h
pp$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
pp$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
pp$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
pp$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
pp$(OBJ_EXT): /usr/include/asm-x86_64/param.h
pp$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
pp$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
pp$(OBJ_EXT): /usr/include/asm/errno.h
pp$(OBJ_EXT): /usr/include/asm/ioctl.h
pp$(OBJ_EXT): /usr/include/asm/ioctls.h
pp$(OBJ_EXT): /usr/include/asm/param.h
pp$(OBJ_EXT): /usr/include/asm/socket.h
pp$(OBJ_EXT): /usr/include/asm/sockios.h
pp$(OBJ_EXT): /usr/include/bits/byteswap.h
pp$(OBJ_EXT): /usr/include/bits/confname.h
pp$(OBJ_EXT): /usr/include/bits/dirent.h
pp$(OBJ_EXT): /usr/include/bits/endian.h
pp$(OBJ_EXT): /usr/include/bits/environments.h
pp$(OBJ_EXT): /usr/include/bits/errno.h
pp$(OBJ_EXT): /usr/include/bits/fcntl.h
pp$(OBJ_EXT): /usr/include/bits/huge_val.h
pp$(OBJ_EXT): /usr/include/bits/huge_valf.h
pp$(OBJ_EXT): /usr/include/bits/huge_vall.h
pp$(OBJ_EXT): /usr/include/bits/in.h
pp$(OBJ_EXT): /usr/include/bits/inf.h
pp$(OBJ_EXT): /usr/include/bits/ioctl-types.h
pp$(OBJ_EXT): /usr/include/bits/ioctls.h
pp$(OBJ_EXT): /usr/include/bits/ipc.h
pp$(OBJ_EXT): /usr/include/bits/ipctypes.h
pp$(OBJ_EXT): /usr/include/bits/local_lim.h
pp$(OBJ_EXT): /usr/include/bits/locale.h
pp$(OBJ_EXT): /usr/include/bits/mathcalls.h
pp$(OBJ_EXT): /usr/include/bits/mathdef.h
pp$(OBJ_EXT): /usr/include/bits/nan.h
pp$(OBJ_EXT): /usr/include/bits/netdb.h
pp$(OBJ_EXT): /usr/include/bits/posix1_lim.h
pp$(OBJ_EXT): /usr/include/bits/posix2_lim.h
pp$(OBJ_EXT): /usr/include/bits/posix_opt.h
pp$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
pp$(OBJ_EXT): /usr/include/bits/resource.h
pp$(OBJ_EXT): /usr/include/bits/select.h
pp$(OBJ_EXT): /usr/include/bits/sem.h
pp$(OBJ_EXT): /usr/include/bits/setjmp.h
pp$(OBJ_EXT): /usr/include/bits/sigaction.h
pp$(OBJ_EXT): /usr/include/bits/sigcontext.h
pp$(OBJ_EXT): /usr/include/bits/siginfo.h
pp$(OBJ_EXT): /usr/include/bits/signum.h
pp$(OBJ_EXT): /usr/include/bits/sigset.h
pp$(OBJ_EXT): /usr/include/bits/sigstack.h
pp$(OBJ_EXT): /usr/include/bits/sigthread.h
pp$(OBJ_EXT): /usr/include/bits/sockaddr.h
pp$(OBJ_EXT): /usr/include/bits/socket.h
pp$(OBJ_EXT): /usr/include/bits/stat.h
pp$(OBJ_EXT): /usr/include/bits/stdio_lim.h
pp$(OBJ_EXT): /usr/include/bits/sys_errlist.h
pp$(OBJ_EXT): /usr/include/bits/time.h
pp$(OBJ_EXT): /usr/include/bits/types.h
pp$(OBJ_EXT): /usr/include/bits/typesizes.h
pp$(OBJ_EXT): /usr/include/bits/uio.h
pp$(OBJ_EXT): /usr/include/bits/waitflags.h
pp$(OBJ_EXT): /usr/include/bits/waitstatus.h
pp$(OBJ_EXT): /usr/include/bits/wchar.h
pp$(OBJ_EXT): /usr/include/bits/wordsize.h
pp$(OBJ_EXT): /usr/include/bits/xopen_lim.h
pp$(OBJ_EXT): /usr/include/ctype.h
pp$(OBJ_EXT): /usr/include/dirent.h
pp$(OBJ_EXT): /usr/include/endian.h
pp$(OBJ_EXT): /usr/include/errno.h
pp$(OBJ_EXT): /usr/include/fcntl.h
pp$(OBJ_EXT): /usr/include/features.h
pp$(OBJ_EXT): /usr/include/gconv.h
pp$(OBJ_EXT): /usr/include/getopt.h
pp$(OBJ_EXT): /usr/include/gnu/stubs-64.h
pp$(OBJ_EXT): /usr/include/gnu/stubs.h
pp$(OBJ_EXT): /usr/include/inttypes.h
pp$(OBJ_EXT): /usr/include/libio.h
pp$(OBJ_EXT): /usr/include/limits.h
pp$(OBJ_EXT): /usr/include/linux/errno.h
pp$(OBJ_EXT): /usr/include/linux/limits.h
pp$(OBJ_EXT): /usr/include/linux/param.h
pp$(OBJ_EXT): /usr/include/locale.h
pp$(OBJ_EXT): /usr/include/math.h
pp$(OBJ_EXT): /usr/include/netdb.h
pp$(OBJ_EXT): /usr/include/netinet/in.h
pp$(OBJ_EXT): /usr/include/rpc/netdb.h
pp$(OBJ_EXT): /usr/include/setjmp.h
pp$(OBJ_EXT): /usr/include/signal.h
pp$(OBJ_EXT): /usr/include/stdint.h
pp$(OBJ_EXT): /usr/include/stdio.h
pp$(OBJ_EXT): /usr/include/stdlib.h
pp$(OBJ_EXT): /usr/include/string.h
pp$(OBJ_EXT): /usr/include/sys/cdefs.h
pp$(OBJ_EXT): /usr/include/sys/file.h
pp$(OBJ_EXT): /usr/include/sys/ioctl.h
pp$(OBJ_EXT): /usr/include/sys/ipc.h
pp$(OBJ_EXT): /usr/include/sys/param.h
pp$(OBJ_EXT): /usr/include/sys/resource.h
pp$(OBJ_EXT): /usr/include/sys/select.h
pp$(OBJ_EXT): /usr/include/sys/sem.h
pp$(OBJ_EXT): /usr/include/sys/socket.h
pp$(OBJ_EXT): /usr/include/sys/stat.h
pp$(OBJ_EXT): /usr/include/sys/sysmacros.h
pp$(OBJ_EXT): /usr/include/sys/time.h
pp$(OBJ_EXT): /usr/include/sys/times.h
pp$(OBJ_EXT): /usr/include/sys/ttydefaults.h
pp$(OBJ_EXT): /usr/include/sys/types.h
pp$(OBJ_EXT): /usr/include/sys/ucontext.h
pp$(OBJ_EXT): /usr/include/sys/uio.h
pp$(OBJ_EXT): /usr/include/sys/wait.h
pp$(OBJ_EXT): /usr/include/time.h
pp$(OBJ_EXT): /usr/include/unistd.h
pp$(OBJ_EXT): /usr/include/wchar.h
pp$(OBJ_EXT): /usr/include/xlocale.h
pp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
pp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
pp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
pp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
pp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
pp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
pp$(OBJ_EXT): EXTERN.h
pp$(OBJ_EXT): av.h
pp$(OBJ_EXT): config.h
pp$(OBJ_EXT): cop.h
pp$(OBJ_EXT): cv.h
pp$(OBJ_EXT): embed.h
pp$(OBJ_EXT): embedvar.h
pp$(OBJ_EXT): form.h
pp$(OBJ_EXT): gv.h
pp$(OBJ_EXT): handy.h
pp$(OBJ_EXT): hv.h
pp$(OBJ_EXT): intrpvar.h
pp$(OBJ_EXT): iperlsys.h
pp$(OBJ_EXT): keywords.h
pp$(OBJ_EXT): mg.h
pp$(OBJ_EXT): mg_vtable.h
pp$(OBJ_EXT): mydtrace.h
pp$(OBJ_EXT): op.h
pp$(OBJ_EXT): op_reg_common.h
pp$(OBJ_EXT): opcode.h
pp$(OBJ_EXT): opnames.h
pp$(OBJ_EXT): overload.h
pp$(OBJ_EXT): pad.h
pp$(OBJ_EXT): parser.h
pp$(OBJ_EXT): patchlevel.h
pp$(OBJ_EXT): perl.h
pp$(OBJ_EXT): perlio.h
pp$(OBJ_EXT): perlvars.h
pp$(OBJ_EXT): perly.h
pp$(OBJ_EXT): pp.c
pp$(OBJ_EXT): pp.h
pp$(OBJ_EXT): proto.h
pp$(OBJ_EXT): reentr.h
pp$(OBJ_EXT): regexp.h
pp$(OBJ_EXT): scope.h
pp$(OBJ_EXT): sv.h
pp$(OBJ_EXT): thread.h
pp$(OBJ_EXT): unixish.h
pp$(OBJ_EXT): utf8.h
pp$(OBJ_EXT): util.h
pp$(OBJ_EXT): warnings.h
pp$(OBJ_EXT): cflags
pp_hot$(OBJ_EXT): /usr/include/_G_config.h
pp_hot$(OBJ_EXT): /usr/include/alloca.h
pp_hot$(OBJ_EXT): /usr/include/arpa/inet.h
pp_hot$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
pp_hot$(OBJ_EXT): /usr/include/asm-generic/errno.h
pp_hot$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
pp_hot$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
pp_hot$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
pp_hot$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
pp_hot$(OBJ_EXT): /usr/include/asm-x86_64/param.h
pp_hot$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
pp_hot$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
pp_hot$(OBJ_EXT): /usr/include/asm/errno.h
pp_hot$(OBJ_EXT): /usr/include/asm/ioctl.h
pp_hot$(OBJ_EXT): /usr/include/asm/ioctls.h
pp_hot$(OBJ_EXT): /usr/include/asm/param.h
pp_hot$(OBJ_EXT): /usr/include/asm/socket.h
pp_hot$(OBJ_EXT): /usr/include/asm/sockios.h
pp_hot$(OBJ_EXT): /usr/include/bits/byteswap.h
pp_hot$(OBJ_EXT): /usr/include/bits/confname.h
pp_hot$(OBJ_EXT): /usr/include/bits/dirent.h
pp_hot$(OBJ_EXT): /usr/include/bits/endian.h
pp_hot$(OBJ_EXT): /usr/include/bits/environments.h
pp_hot$(OBJ_EXT): /usr/include/bits/errno.h
pp_hot$(OBJ_EXT): /usr/include/bits/fcntl.h
pp_hot$(OBJ_EXT): /usr/include/bits/huge_val.h
pp_hot$(OBJ_EXT): /usr/include/bits/huge_valf.h
pp_hot$(OBJ_EXT): /usr/include/bits/huge_vall.h
pp_hot$(OBJ_EXT): /usr/include/bits/in.h
pp_hot$(OBJ_EXT): /usr/include/bits/inf.h
pp_hot$(OBJ_EXT): /usr/include/bits/ioctl-types.h
pp_hot$(OBJ_EXT): /usr/include/bits/ioctls.h
pp_hot$(OBJ_EXT): /usr/include/bits/ipc.h
pp_hot$(OBJ_EXT): /usr/include/bits/ipctypes.h
pp_hot$(OBJ_EXT): /usr/include/bits/local_lim.h
pp_hot$(OBJ_EXT): /usr/include/bits/locale.h
pp_hot$(OBJ_EXT): /usr/include/bits/mathcalls.h
pp_hot$(OBJ_EXT): /usr/include/bits/mathdef.h
pp_hot$(OBJ_EXT): /usr/include/bits/nan.h
pp_hot$(OBJ_EXT): /usr/include/bits/netdb.h
pp_hot$(OBJ_EXT): /usr/include/bits/posix1_lim.h
pp_hot$(OBJ_EXT): /usr/include/bits/posix2_lim.h
pp_hot$(OBJ_EXT): /usr/include/bits/posix_opt.h
pp_hot$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
pp_hot$(OBJ_EXT): /usr/include/bits/resource.h
pp_hot$(OBJ_EXT): /usr/include/bits/select.h
pp_hot$(OBJ_EXT): /usr/include/bits/sem.h
pp_hot$(OBJ_EXT): /usr/include/bits/setjmp.h
pp_hot$(OBJ_EXT): /usr/include/bits/sigaction.h
pp_hot$(OBJ_EXT): /usr/include/bits/sigcontext.h
pp_hot$(OBJ_EXT): /usr/include/bits/siginfo.h
pp_hot$(OBJ_EXT): /usr/include/bits/signum.h
pp_hot$(OBJ_EXT): /usr/include/bits/sigset.h
pp_hot$(OBJ_EXT): /usr/include/bits/sigstack.h
pp_hot$(OBJ_EXT): /usr/include/bits/sigthread.h
pp_hot$(OBJ_EXT): /usr/include/bits/sockaddr.h
pp_hot$(OBJ_EXT): /usr/include/bits/socket.h
pp_hot$(OBJ_EXT): /usr/include/bits/stat.h
pp_hot$(OBJ_EXT): /usr/include/bits/stdio_lim.h
pp_hot$(OBJ_EXT): /usr/include/bits/sys_errlist.h
pp_hot$(OBJ_EXT): /usr/include/bits/time.h
pp_hot$(OBJ_EXT): /usr/include/bits/types.h
pp_hot$(OBJ_EXT): /usr/include/bits/typesizes.h
pp_hot$(OBJ_EXT): /usr/include/bits/uio.h
pp_hot$(OBJ_EXT): /usr/include/bits/waitflags.h
pp_hot$(OBJ_EXT): /usr/include/bits/waitstatus.h
pp_hot$(OBJ_EXT): /usr/include/bits/wchar.h
pp_hot$(OBJ_EXT): /usr/include/bits/wordsize.h
pp_hot$(OBJ_EXT): /usr/include/bits/xopen_lim.h
pp_hot$(OBJ_EXT): /usr/include/ctype.h
pp_hot$(OBJ_EXT): /usr/include/dirent.h
pp_hot$(OBJ_EXT): /usr/include/endian.h
pp_hot$(OBJ_EXT): /usr/include/errno.h
pp_hot$(OBJ_EXT): /usr/include/fcntl.h
pp_hot$(OBJ_EXT): /usr/include/features.h
pp_hot$(OBJ_EXT): /usr/include/gconv.h
pp_hot$(OBJ_EXT): /usr/include/getopt.h
pp_hot$(OBJ_EXT): /usr/include/gnu/stubs-64.h
pp_hot$(OBJ_EXT): /usr/include/gnu/stubs.h
pp_hot$(OBJ_EXT): /usr/include/inttypes.h
pp_hot$(OBJ_EXT): /usr/include/libio.h
pp_hot$(OBJ_EXT): /usr/include/limits.h
pp_hot$(OBJ_EXT): /usr/include/linux/errno.h
pp_hot$(OBJ_EXT): /usr/include/linux/limits.h
pp_hot$(OBJ_EXT): /usr/include/linux/param.h
pp_hot$(OBJ_EXT): /usr/include/locale.h
pp_hot$(OBJ_EXT): /usr/include/math.h
pp_hot$(OBJ_EXT): /usr/include/netdb.h
pp_hot$(OBJ_EXT): /usr/include/netinet/in.h
pp_hot$(OBJ_EXT): /usr/include/rpc/netdb.h
pp_hot$(OBJ_EXT): /usr/include/setjmp.h
pp_hot$(OBJ_EXT): /usr/include/signal.h
pp_hot$(OBJ_EXT): /usr/include/stdint.h
pp_hot$(OBJ_EXT): /usr/include/stdio.h
pp_hot$(OBJ_EXT): /usr/include/stdlib.h
pp_hot$(OBJ_EXT): /usr/include/string.h
pp_hot$(OBJ_EXT): /usr/include/sys/cdefs.h
pp_hot$(OBJ_EXT): /usr/include/sys/file.h
pp_hot$(OBJ_EXT): /usr/include/sys/ioctl.h
pp_hot$(OBJ_EXT): /usr/include/sys/ipc.h
pp_hot$(OBJ_EXT): /usr/include/sys/param.h
pp_hot$(OBJ_EXT): /usr/include/sys/resource.h
pp_hot$(OBJ_EXT): /usr/include/sys/select.h
pp_hot$(OBJ_EXT): /usr/include/sys/sem.h
pp_hot$(OBJ_EXT): /usr/include/sys/socket.h
pp_hot$(OBJ_EXT): /usr/include/sys/stat.h
pp_hot$(OBJ_EXT): /usr/include/sys/sysmacros.h
pp_hot$(OBJ_EXT): /usr/include/sys/time.h
pp_hot$(OBJ_EXT): /usr/include/sys/times.h
pp_hot$(OBJ_EXT): /usr/include/sys/ttydefaults.h
pp_hot$(OBJ_EXT): /usr/include/sys/types.h
pp_hot$(OBJ_EXT): /usr/include/sys/ucontext.h
pp_hot$(OBJ_EXT): /usr/include/sys/uio.h
pp_hot$(OBJ_EXT): /usr/include/sys/wait.h
pp_hot$(OBJ_EXT): /usr/include/time.h
pp_hot$(OBJ_EXT): /usr/include/unistd.h
pp_hot$(OBJ_EXT): /usr/include/wchar.h
pp_hot$(OBJ_EXT): /usr/include/xlocale.h
pp_hot$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
pp_hot$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
pp_hot$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
pp_hot$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
pp_hot$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
pp_hot$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
pp_hot$(OBJ_EXT): EXTERN.h
pp_hot$(OBJ_EXT): av.h
pp_hot$(OBJ_EXT): config.h
pp_hot$(OBJ_EXT): cop.h
pp_hot$(OBJ_EXT): cv.h
pp_hot$(OBJ_EXT): embed.h
pp_hot$(OBJ_EXT): embedvar.h
pp_hot$(OBJ_EXT): form.h
pp_hot$(OBJ_EXT): gv.h
pp_hot$(OBJ_EXT): handy.h
pp_hot$(OBJ_EXT): hv.h
pp_hot$(OBJ_EXT): intrpvar.h
pp_hot$(OBJ_EXT): iperlsys.h
pp_hot$(OBJ_EXT): mg.h
pp_hot$(OBJ_EXT): mg_vtable.h
pp_hot$(OBJ_EXT): mydtrace.h
pp_hot$(OBJ_EXT): op.h
pp_hot$(OBJ_EXT): op_reg_common.h
pp_hot$(OBJ_EXT): opcode.h
pp_hot$(OBJ_EXT): opnames.h
pp_hot$(OBJ_EXT): overload.h
pp_hot$(OBJ_EXT): pad.h
pp_hot$(OBJ_EXT): parser.h
pp_hot$(OBJ_EXT): patchlevel.h
pp_hot$(OBJ_EXT): perl.h
pp_hot$(OBJ_EXT): perlio.h
pp_hot$(OBJ_EXT): perlvars.h
pp_hot$(OBJ_EXT): perly.h
pp_hot$(OBJ_EXT): pp.h
pp_hot$(OBJ_EXT): pp_hot.c
pp_hot$(OBJ_EXT): proto.h
pp_hot$(OBJ_EXT): regexp.h
pp_hot$(OBJ_EXT): scope.h
pp_hot$(OBJ_EXT): sv.h
pp_hot$(OBJ_EXT): thread.h
pp_hot$(OBJ_EXT): unixish.h
pp_hot$(OBJ_EXT): utf8.h
pp_hot$(OBJ_EXT): util.h
pp_hot$(OBJ_EXT): warnings.h
pp_hot$(OBJ_EXT): cflags
pp_ctl$(OBJ_EXT): /usr/include/_G_config.h
pp_ctl$(OBJ_EXT): /usr/include/alloca.h
pp_ctl$(OBJ_EXT): /usr/include/arpa/inet.h
pp_ctl$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
pp_ctl$(OBJ_EXT): /usr/include/asm-generic/errno.h
pp_ctl$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
pp_ctl$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
pp_ctl$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
pp_ctl$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
pp_ctl$(OBJ_EXT): /usr/include/asm-x86_64/param.h
pp_ctl$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
pp_ctl$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
pp_ctl$(OBJ_EXT): /usr/include/asm/errno.h
pp_ctl$(OBJ_EXT): /usr/include/asm/ioctl.h
pp_ctl$(OBJ_EXT): /usr/include/asm/ioctls.h
pp_ctl$(OBJ_EXT): /usr/include/asm/param.h
pp_ctl$(OBJ_EXT): /usr/include/asm/socket.h
pp_ctl$(OBJ_EXT): /usr/include/asm/sockios.h
pp_ctl$(OBJ_EXT): /usr/include/bits/byteswap.h
pp_ctl$(OBJ_EXT): /usr/include/bits/confname.h
pp_ctl$(OBJ_EXT): /usr/include/bits/dirent.h
pp_ctl$(OBJ_EXT): /usr/include/bits/endian.h
pp_ctl$(OBJ_EXT): /usr/include/bits/environments.h
pp_ctl$(OBJ_EXT): /usr/include/bits/errno.h
pp_ctl$(OBJ_EXT): /usr/include/bits/fcntl.h
pp_ctl$(OBJ_EXT): /usr/include/bits/huge_val.h
pp_ctl$(OBJ_EXT): /usr/include/bits/huge_valf.h
pp_ctl$(OBJ_EXT): /usr/include/bits/huge_vall.h
pp_ctl$(OBJ_EXT): /usr/include/bits/in.h
pp_ctl$(OBJ_EXT): /usr/include/bits/inf.h
pp_ctl$(OBJ_EXT): /usr/include/bits/ioctl-types.h
pp_ctl$(OBJ_EXT): /usr/include/bits/ioctls.h
pp_ctl$(OBJ_EXT): /usr/include/bits/ipc.h
pp_ctl$(OBJ_EXT): /usr/include/bits/ipctypes.h
pp_ctl$(OBJ_EXT): /usr/include/bits/local_lim.h
pp_ctl$(OBJ_EXT): /usr/include/bits/locale.h
pp_ctl$(OBJ_EXT): /usr/include/bits/mathcalls.h
pp_ctl$(OBJ_EXT): /usr/include/bits/mathdef.h
pp_ctl$(OBJ_EXT): /usr/include/bits/nan.h
pp_ctl$(OBJ_EXT): /usr/include/bits/netdb.h
pp_ctl$(OBJ_EXT): /usr/include/bits/posix1_lim.h
pp_ctl$(OBJ_EXT): /usr/include/bits/posix2_lim.h
pp_ctl$(OBJ_EXT): /usr/include/bits/posix_opt.h
pp_ctl$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
pp_ctl$(OBJ_EXT): /usr/include/bits/resource.h
pp_ctl$(OBJ_EXT): /usr/include/bits/select.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sem.h
pp_ctl$(OBJ_EXT): /usr/include/bits/setjmp.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sigaction.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sigcontext.h
pp_ctl$(OBJ_EXT): /usr/include/bits/siginfo.h
pp_ctl$(OBJ_EXT): /usr/include/bits/signum.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sigset.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sigstack.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sigthread.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sockaddr.h
pp_ctl$(OBJ_EXT): /usr/include/bits/socket.h
pp_ctl$(OBJ_EXT): /usr/include/bits/stat.h
pp_ctl$(OBJ_EXT): /usr/include/bits/stdio_lim.h
pp_ctl$(OBJ_EXT): /usr/include/bits/sys_errlist.h
pp_ctl$(OBJ_EXT): /usr/include/bits/time.h
pp_ctl$(OBJ_EXT): /usr/include/bits/types.h
pp_ctl$(OBJ_EXT): /usr/include/bits/typesizes.h
pp_ctl$(OBJ_EXT): /usr/include/bits/uio.h
pp_ctl$(OBJ_EXT): /usr/include/bits/waitflags.h
pp_ctl$(OBJ_EXT): /usr/include/bits/waitstatus.h
pp_ctl$(OBJ_EXT): /usr/include/bits/wchar.h
pp_ctl$(OBJ_EXT): /usr/include/bits/wordsize.h
pp_ctl$(OBJ_EXT): /usr/include/bits/xopen_lim.h
pp_ctl$(OBJ_EXT): /usr/include/ctype.h
pp_ctl$(OBJ_EXT): /usr/include/dirent.h
pp_ctl$(OBJ_EXT): /usr/include/endian.h
pp_ctl$(OBJ_EXT): /usr/include/errno.h
pp_ctl$(OBJ_EXT): /usr/include/fcntl.h
pp_ctl$(OBJ_EXT): /usr/include/features.h
pp_ctl$(OBJ_EXT): /usr/include/gconv.h
pp_ctl$(OBJ_EXT): /usr/include/getopt.h
pp_ctl$(OBJ_EXT): /usr/include/gnu/stubs-64.h
pp_ctl$(OBJ_EXT): /usr/include/gnu/stubs.h
pp_ctl$(OBJ_EXT): /usr/include/inttypes.h
pp_ctl$(OBJ_EXT): /usr/include/libio.h
pp_ctl$(OBJ_EXT): /usr/include/limits.h
pp_ctl$(OBJ_EXT): /usr/include/linux/errno.h
pp_ctl$(OBJ_EXT): /usr/include/linux/limits.h
pp_ctl$(OBJ_EXT): /usr/include/linux/param.h
pp_ctl$(OBJ_EXT): /usr/include/locale.h
pp_ctl$(OBJ_EXT): /usr/include/math.h
pp_ctl$(OBJ_EXT): /usr/include/netdb.h
pp_ctl$(OBJ_EXT): /usr/include/netinet/in.h
pp_ctl$(OBJ_EXT): /usr/include/rpc/netdb.h
pp_ctl$(OBJ_EXT): /usr/include/setjmp.h
pp_ctl$(OBJ_EXT): /usr/include/signal.h
pp_ctl$(OBJ_EXT): /usr/include/stdint.h
pp_ctl$(OBJ_EXT): /usr/include/stdio.h
pp_ctl$(OBJ_EXT): /usr/include/stdlib.h
pp_ctl$(OBJ_EXT): /usr/include/string.h
pp_ctl$(OBJ_EXT): /usr/include/sys/cdefs.h
pp_ctl$(OBJ_EXT): /usr/include/sys/file.h
pp_ctl$(OBJ_EXT): /usr/include/sys/ioctl.h
pp_ctl$(OBJ_EXT): /usr/include/sys/ipc.h
pp_ctl$(OBJ_EXT): /usr/include/sys/param.h
pp_ctl$(OBJ_EXT): /usr/include/sys/resource.h
pp_ctl$(OBJ_EXT): /usr/include/sys/select.h
pp_ctl$(OBJ_EXT): /usr/include/sys/sem.h
pp_ctl$(OBJ_EXT): /usr/include/sys/socket.h
pp_ctl$(OBJ_EXT): /usr/include/sys/stat.h
pp_ctl$(OBJ_EXT): /usr/include/sys/sysmacros.h
pp_ctl$(OBJ_EXT): /usr/include/sys/time.h
pp_ctl$(OBJ_EXT): /usr/include/sys/times.h
pp_ctl$(OBJ_EXT): /usr/include/sys/ttydefaults.h
pp_ctl$(OBJ_EXT): /usr/include/sys/types.h
pp_ctl$(OBJ_EXT): /usr/include/sys/ucontext.h
pp_ctl$(OBJ_EXT): /usr/include/sys/uio.h
pp_ctl$(OBJ_EXT): /usr/include/sys/wait.h
pp_ctl$(OBJ_EXT): /usr/include/time.h
pp_ctl$(OBJ_EXT): /usr/include/unistd.h
pp_ctl$(OBJ_EXT): /usr/include/wchar.h
pp_ctl$(OBJ_EXT): /usr/include/xlocale.h
pp_ctl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
pp_ctl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
pp_ctl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
pp_ctl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
pp_ctl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
pp_ctl$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
pp_ctl$(OBJ_EXT): EXTERN.h
pp_ctl$(OBJ_EXT): av.h
pp_ctl$(OBJ_EXT): config.h
pp_ctl$(OBJ_EXT): cop.h
pp_ctl$(OBJ_EXT): cv.h
pp_ctl$(OBJ_EXT): embed.h
pp_ctl$(OBJ_EXT): embedvar.h
pp_ctl$(OBJ_EXT): form.h
pp_ctl$(OBJ_EXT): gv.h
pp_ctl$(OBJ_EXT): handy.h
pp_ctl$(OBJ_EXT): hv.h
pp_ctl$(OBJ_EXT): intrpvar.h
pp_ctl$(OBJ_EXT): iperlsys.h
pp_ctl$(OBJ_EXT): mg.h
pp_ctl$(OBJ_EXT): mg_vtable.h
pp_ctl$(OBJ_EXT): mydtrace.h
pp_ctl$(OBJ_EXT): op.h
pp_ctl$(OBJ_EXT): op_reg_common.h
pp_ctl$(OBJ_EXT): opcode.h
pp_ctl$(OBJ_EXT): opnames.h
pp_ctl$(OBJ_EXT): overload.h
pp_ctl$(OBJ_EXT): pad.h
pp_ctl$(OBJ_EXT): parser.h
pp_ctl$(OBJ_EXT): patchlevel.h
pp_ctl$(OBJ_EXT): perl.h
pp_ctl$(OBJ_EXT): perlio.h
pp_ctl$(OBJ_EXT): perlvars.h
pp_ctl$(OBJ_EXT): perly.h
pp_ctl$(OBJ_EXT): pp.h
pp_ctl$(OBJ_EXT): pp_ctl.c
pp_ctl$(OBJ_EXT): proto.h
pp_ctl$(OBJ_EXT): regexp.h
pp_ctl$(OBJ_EXT): scope.h
pp_ctl$(OBJ_EXT): sv.h
pp_ctl$(OBJ_EXT): thread.h
pp_ctl$(OBJ_EXT): unixish.h
pp_ctl$(OBJ_EXT): utf8.h
pp_ctl$(OBJ_EXT): util.h
pp_ctl$(OBJ_EXT): warnings.h
pp_ctl$(OBJ_EXT): cflags
pp_sys$(OBJ_EXT): /usr/include/_G_config.h
pp_sys$(OBJ_EXT): /usr/include/alloca.h
pp_sys$(OBJ_EXT): /usr/include/arpa/inet.h
pp_sys$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
pp_sys$(OBJ_EXT): /usr/include/asm-generic/errno.h
pp_sys$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
pp_sys$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
pp_sys$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
pp_sys$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
pp_sys$(OBJ_EXT): /usr/include/asm-x86_64/param.h
pp_sys$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
pp_sys$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
pp_sys$(OBJ_EXT): /usr/include/asm/errno.h
pp_sys$(OBJ_EXT): /usr/include/asm/ioctl.h
pp_sys$(OBJ_EXT): /usr/include/asm/ioctls.h
pp_sys$(OBJ_EXT): /usr/include/asm/param.h
pp_sys$(OBJ_EXT): /usr/include/asm/socket.h
pp_sys$(OBJ_EXT): /usr/include/asm/sockios.h
pp_sys$(OBJ_EXT): /usr/include/bits/byteswap.h
pp_sys$(OBJ_EXT): /usr/include/bits/confname.h
pp_sys$(OBJ_EXT): /usr/include/bits/dirent.h
pp_sys$(OBJ_EXT): /usr/include/bits/endian.h
pp_sys$(OBJ_EXT): /usr/include/bits/environments.h
pp_sys$(OBJ_EXT): /usr/include/bits/errno.h
pp_sys$(OBJ_EXT): /usr/include/bits/fcntl.h
pp_sys$(OBJ_EXT): /usr/include/bits/huge_val.h
pp_sys$(OBJ_EXT): /usr/include/bits/huge_valf.h
pp_sys$(OBJ_EXT): /usr/include/bits/huge_vall.h
pp_sys$(OBJ_EXT): /usr/include/bits/in.h
pp_sys$(OBJ_EXT): /usr/include/bits/inf.h
pp_sys$(OBJ_EXT): /usr/include/bits/ioctl-types.h
pp_sys$(OBJ_EXT): /usr/include/bits/ioctls.h
pp_sys$(OBJ_EXT): /usr/include/bits/ipc.h
pp_sys$(OBJ_EXT): /usr/include/bits/ipctypes.h
pp_sys$(OBJ_EXT): /usr/include/bits/local_lim.h
pp_sys$(OBJ_EXT): /usr/include/bits/locale.h
pp_sys$(OBJ_EXT): /usr/include/bits/mathcalls.h
pp_sys$(OBJ_EXT): /usr/include/bits/mathdef.h
pp_sys$(OBJ_EXT): /usr/include/bits/nan.h
pp_sys$(OBJ_EXT): /usr/include/bits/netdb.h
pp_sys$(OBJ_EXT): /usr/include/bits/posix1_lim.h
pp_sys$(OBJ_EXT): /usr/include/bits/posix2_lim.h
pp_sys$(OBJ_EXT): /usr/include/bits/posix_opt.h
pp_sys$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
pp_sys$(OBJ_EXT): /usr/include/bits/resource.h
pp_sys$(OBJ_EXT): /usr/include/bits/select.h
pp_sys$(OBJ_EXT): /usr/include/bits/sem.h
pp_sys$(OBJ_EXT): /usr/include/bits/setjmp.h
pp_sys$(OBJ_EXT): /usr/include/bits/sigaction.h
pp_sys$(OBJ_EXT): /usr/include/bits/sigcontext.h
pp_sys$(OBJ_EXT): /usr/include/bits/siginfo.h
pp_sys$(OBJ_EXT): /usr/include/bits/signum.h
pp_sys$(OBJ_EXT): /usr/include/bits/sigset.h
pp_sys$(OBJ_EXT): /usr/include/bits/sigstack.h
pp_sys$(OBJ_EXT): /usr/include/bits/sigthread.h
pp_sys$(OBJ_EXT): /usr/include/bits/sockaddr.h
pp_sys$(OBJ_EXT): /usr/include/bits/socket.h
pp_sys$(OBJ_EXT): /usr/include/bits/stat.h
pp_sys$(OBJ_EXT): /usr/include/bits/stdio_lim.h
pp_sys$(OBJ_EXT): /usr/include/bits/sys_errlist.h
pp_sys$(OBJ_EXT): /usr/include/bits/time.h
pp_sys$(OBJ_EXT): /usr/include/bits/types.h
pp_sys$(OBJ_EXT): /usr/include/bits/typesizes.h
pp_sys$(OBJ_EXT): /usr/include/bits/uio.h
pp_sys$(OBJ_EXT): /usr/include/bits/waitflags.h
pp_sys$(OBJ_EXT): /usr/include/bits/waitstatus.h
pp_sys$(OBJ_EXT): /usr/include/bits/wchar.h
pp_sys$(OBJ_EXT): /usr/include/bits/wordsize.h
pp_sys$(OBJ_EXT): /usr/include/bits/xopen_lim.h
pp_sys$(OBJ_EXT): /usr/include/ctype.h
pp_sys$(OBJ_EXT): /usr/include/dirent.h
pp_sys$(OBJ_EXT): /usr/include/endian.h
pp_sys$(OBJ_EXT): /usr/include/errno.h
pp_sys$(OBJ_EXT): /usr/include/fcntl.h
pp_sys$(OBJ_EXT): /usr/include/features.h
pp_sys$(OBJ_EXT): /usr/include/gconv.h
pp_sys$(OBJ_EXT): /usr/include/getopt.h
pp_sys$(OBJ_EXT): /usr/include/gnu/stubs-64.h
pp_sys$(OBJ_EXT): /usr/include/gnu/stubs.h
pp_sys$(OBJ_EXT): /usr/include/grp.h
pp_sys$(OBJ_EXT): /usr/include/inttypes.h
pp_sys$(OBJ_EXT): /usr/include/libio.h
pp_sys$(OBJ_EXT): /usr/include/limits.h
pp_sys$(OBJ_EXT): /usr/include/linux/errno.h
pp_sys$(OBJ_EXT): /usr/include/linux/limits.h
pp_sys$(OBJ_EXT): /usr/include/linux/param.h
pp_sys$(OBJ_EXT): /usr/include/locale.h
pp_sys$(OBJ_EXT): /usr/include/math.h
pp_sys$(OBJ_EXT): /usr/include/netdb.h
pp_sys$(OBJ_EXT): /usr/include/netinet/in.h
pp_sys$(OBJ_EXT): /usr/include/paths.h
pp_sys$(OBJ_EXT): /usr/include/pwd.h
pp_sys$(OBJ_EXT): /usr/include/rpc/netdb.h
pp_sys$(OBJ_EXT): /usr/include/setjmp.h
pp_sys$(OBJ_EXT): /usr/include/shadow.h
pp_sys$(OBJ_EXT): /usr/include/signal.h
pp_sys$(OBJ_EXT): /usr/include/stdint.h
pp_sys$(OBJ_EXT): /usr/include/stdio.h
pp_sys$(OBJ_EXT): /usr/include/stdlib.h
pp_sys$(OBJ_EXT): /usr/include/string.h
pp_sys$(OBJ_EXT): /usr/include/sys/cdefs.h
pp_sys$(OBJ_EXT): /usr/include/sys/file.h
pp_sys$(OBJ_EXT): /usr/include/sys/ioctl.h
pp_sys$(OBJ_EXT): /usr/include/sys/ipc.h
pp_sys$(OBJ_EXT): /usr/include/sys/param.h
pp_sys$(OBJ_EXT): /usr/include/sys/resource.h
pp_sys$(OBJ_EXT): /usr/include/sys/select.h
pp_sys$(OBJ_EXT): /usr/include/sys/sem.h
pp_sys$(OBJ_EXT): /usr/include/sys/socket.h
pp_sys$(OBJ_EXT): /usr/include/sys/stat.h
pp_sys$(OBJ_EXT): /usr/include/sys/sysmacros.h
pp_sys$(OBJ_EXT): /usr/include/sys/time.h
pp_sys$(OBJ_EXT): /usr/include/sys/times.h
pp_sys$(OBJ_EXT): /usr/include/sys/ttydefaults.h
pp_sys$(OBJ_EXT): /usr/include/sys/types.h
pp_sys$(OBJ_EXT): /usr/include/sys/ucontext.h
pp_sys$(OBJ_EXT): /usr/include/sys/uio.h
pp_sys$(OBJ_EXT): /usr/include/sys/wait.h
pp_sys$(OBJ_EXT): /usr/include/time.h
pp_sys$(OBJ_EXT): /usr/include/unistd.h
pp_sys$(OBJ_EXT): /usr/include/utime.h
pp_sys$(OBJ_EXT): /usr/include/wchar.h
pp_sys$(OBJ_EXT): /usr/include/xlocale.h
pp_sys$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
pp_sys$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
pp_sys$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
pp_sys$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
pp_sys$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
pp_sys$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
pp_sys$(OBJ_EXT): EXTERN.h
pp_sys$(OBJ_EXT): av.h
pp_sys$(OBJ_EXT): config.h
pp_sys$(OBJ_EXT): cop.h
pp_sys$(OBJ_EXT): cv.h
pp_sys$(OBJ_EXT): embed.h
pp_sys$(OBJ_EXT): embedvar.h
pp_sys$(OBJ_EXT): form.h
pp_sys$(OBJ_EXT): gv.h
pp_sys$(OBJ_EXT): handy.h
pp_sys$(OBJ_EXT): hv.h
pp_sys$(OBJ_EXT): intrpvar.h
pp_sys$(OBJ_EXT): iperlsys.h
pp_sys$(OBJ_EXT): mg.h
pp_sys$(OBJ_EXT): mg_vtable.h
pp_sys$(OBJ_EXT): mydtrace.h
pp_sys$(OBJ_EXT): op.h
pp_sys$(OBJ_EXT): op_reg_common.h
pp_sys$(OBJ_EXT): opcode.h
pp_sys$(OBJ_EXT): opnames.h
pp_sys$(OBJ_EXT): overload.h
pp_sys$(OBJ_EXT): pad.h
pp_sys$(OBJ_EXT): parser.h
pp_sys$(OBJ_EXT): patchlevel.h
pp_sys$(OBJ_EXT): perl.h
pp_sys$(OBJ_EXT): perlio.h
pp_sys$(OBJ_EXT): perlvars.h
pp_sys$(OBJ_EXT): perly.h
pp_sys$(OBJ_EXT): pp.h
pp_sys$(OBJ_EXT): pp_sys.c
pp_sys$(OBJ_EXT): proto.h
pp_sys$(OBJ_EXT): reentr.h
pp_sys$(OBJ_EXT): regexp.h
pp_sys$(OBJ_EXT): scope.h
pp_sys$(OBJ_EXT): sv.h
pp_sys$(OBJ_EXT): thread.h
pp_sys$(OBJ_EXT): time64.c
pp_sys$(OBJ_EXT): time64.h
pp_sys$(OBJ_EXT): time64_config.h
pp_sys$(OBJ_EXT): unixish.h
pp_sys$(OBJ_EXT): utf8.h
pp_sys$(OBJ_EXT): util.h
pp_sys$(OBJ_EXT): warnings.h
pp_sys$(OBJ_EXT): cflags
regcomp$(OBJ_EXT): /usr/include/_G_config.h
regcomp$(OBJ_EXT): /usr/include/alloca.h
regcomp$(OBJ_EXT): /usr/include/arpa/inet.h
regcomp$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
regcomp$(OBJ_EXT): /usr/include/asm-generic/errno.h
regcomp$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
regcomp$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
regcomp$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
regcomp$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
regcomp$(OBJ_EXT): /usr/include/asm-x86_64/param.h
regcomp$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
regcomp$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
regcomp$(OBJ_EXT): /usr/include/asm/errno.h
regcomp$(OBJ_EXT): /usr/include/asm/ioctl.h
regcomp$(OBJ_EXT): /usr/include/asm/ioctls.h
regcomp$(OBJ_EXT): /usr/include/asm/param.h
regcomp$(OBJ_EXT): /usr/include/asm/socket.h
regcomp$(OBJ_EXT): /usr/include/asm/sockios.h
regcomp$(OBJ_EXT): /usr/include/bits/byteswap.h
regcomp$(OBJ_EXT): /usr/include/bits/confname.h
regcomp$(OBJ_EXT): /usr/include/bits/dirent.h
regcomp$(OBJ_EXT): /usr/include/bits/endian.h
regcomp$(OBJ_EXT): /usr/include/bits/environments.h
regcomp$(OBJ_EXT): /usr/include/bits/errno.h
regcomp$(OBJ_EXT): /usr/include/bits/fcntl.h
regcomp$(OBJ_EXT): /usr/include/bits/huge_val.h
regcomp$(OBJ_EXT): /usr/include/bits/huge_valf.h
regcomp$(OBJ_EXT): /usr/include/bits/huge_vall.h
regcomp$(OBJ_EXT): /usr/include/bits/in.h
regcomp$(OBJ_EXT): /usr/include/bits/inf.h
regcomp$(OBJ_EXT): /usr/include/bits/ioctl-types.h
regcomp$(OBJ_EXT): /usr/include/bits/ioctls.h
regcomp$(OBJ_EXT): /usr/include/bits/ipc.h
regcomp$(OBJ_EXT): /usr/include/bits/ipctypes.h
regcomp$(OBJ_EXT): /usr/include/bits/local_lim.h
regcomp$(OBJ_EXT): /usr/include/bits/locale.h
regcomp$(OBJ_EXT): /usr/include/bits/mathcalls.h
regcomp$(OBJ_EXT): /usr/include/bits/mathdef.h
regcomp$(OBJ_EXT): /usr/include/bits/nan.h
regcomp$(OBJ_EXT): /usr/include/bits/netdb.h
regcomp$(OBJ_EXT): /usr/include/bits/posix1_lim.h
regcomp$(OBJ_EXT): /usr/include/bits/posix2_lim.h
regcomp$(OBJ_EXT): /usr/include/bits/posix_opt.h
regcomp$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
regcomp$(OBJ_EXT): /usr/include/bits/resource.h
regcomp$(OBJ_EXT): /usr/include/bits/select.h
regcomp$(OBJ_EXT): /usr/include/bits/sem.h
regcomp$(OBJ_EXT): /usr/include/bits/setjmp.h
regcomp$(OBJ_EXT): /usr/include/bits/sigaction.h
regcomp$(OBJ_EXT): /usr/include/bits/sigcontext.h
regcomp$(OBJ_EXT): /usr/include/bits/siginfo.h
regcomp$(OBJ_EXT): /usr/include/bits/signum.h
regcomp$(OBJ_EXT): /usr/include/bits/sigset.h
regcomp$(OBJ_EXT): /usr/include/bits/sigstack.h
regcomp$(OBJ_EXT): /usr/include/bits/sigthread.h
regcomp$(OBJ_EXT): /usr/include/bits/sockaddr.h
regcomp$(OBJ_EXT): /usr/include/bits/socket.h
regcomp$(OBJ_EXT): /usr/include/bits/stat.h
regcomp$(OBJ_EXT): /usr/include/bits/stdio_lim.h
regcomp$(OBJ_EXT): /usr/include/bits/sys_errlist.h
regcomp$(OBJ_EXT): /usr/include/bits/time.h
regcomp$(OBJ_EXT): /usr/include/bits/types.h
regcomp$(OBJ_EXT): /usr/include/bits/typesizes.h
regcomp$(OBJ_EXT): /usr/include/bits/uio.h
regcomp$(OBJ_EXT): /usr/include/bits/waitflags.h
regcomp$(OBJ_EXT): /usr/include/bits/waitstatus.h
regcomp$(OBJ_EXT): /usr/include/bits/wchar.h
regcomp$(OBJ_EXT): /usr/include/bits/wordsize.h
regcomp$(OBJ_EXT): /usr/include/bits/xopen_lim.h
regcomp$(OBJ_EXT): /usr/include/ctype.h
regcomp$(OBJ_EXT): /usr/include/dirent.h
regcomp$(OBJ_EXT): /usr/include/endian.h
regcomp$(OBJ_EXT): /usr/include/errno.h
regcomp$(OBJ_EXT): /usr/include/fcntl.h
regcomp$(OBJ_EXT): /usr/include/features.h
regcomp$(OBJ_EXT): /usr/include/gconv.h
regcomp$(OBJ_EXT): /usr/include/getopt.h
regcomp$(OBJ_EXT): /usr/include/gnu/stubs-64.h
regcomp$(OBJ_EXT): /usr/include/gnu/stubs.h
regcomp$(OBJ_EXT): /usr/include/inttypes.h
regcomp$(OBJ_EXT): /usr/include/libio.h
regcomp$(OBJ_EXT): /usr/include/limits.h
regcomp$(OBJ_EXT): /usr/include/linux/errno.h
regcomp$(OBJ_EXT): /usr/include/linux/limits.h
regcomp$(OBJ_EXT): /usr/include/linux/param.h
regcomp$(OBJ_EXT): /usr/include/locale.h
regcomp$(OBJ_EXT): /usr/include/math.h
regcomp$(OBJ_EXT): /usr/include/netdb.h
regcomp$(OBJ_EXT): /usr/include/netinet/in.h
regcomp$(OBJ_EXT): /usr/include/rpc/netdb.h
regcomp$(OBJ_EXT): /usr/include/setjmp.h
regcomp$(OBJ_EXT): /usr/include/signal.h
regcomp$(OBJ_EXT): /usr/include/stdint.h
regcomp$(OBJ_EXT): /usr/include/stdio.h
regcomp$(OBJ_EXT): /usr/include/stdlib.h
regcomp$(OBJ_EXT): /usr/include/string.h
regcomp$(OBJ_EXT): /usr/include/sys/cdefs.h
regcomp$(OBJ_EXT): /usr/include/sys/file.h
regcomp$(OBJ_EXT): /usr/include/sys/ioctl.h
regcomp$(OBJ_EXT): /usr/include/sys/ipc.h
regcomp$(OBJ_EXT): /usr/include/sys/param.h
regcomp$(OBJ_EXT): /usr/include/sys/resource.h
regcomp$(OBJ_EXT): /usr/include/sys/select.h
regcomp$(OBJ_EXT): /usr/include/sys/sem.h
regcomp$(OBJ_EXT): /usr/include/sys/socket.h
regcomp$(OBJ_EXT): /usr/include/sys/stat.h
regcomp$(OBJ_EXT): /usr/include/sys/sysmacros.h
regcomp$(OBJ_EXT): /usr/include/sys/time.h
regcomp$(OBJ_EXT): /usr/include/sys/times.h
regcomp$(OBJ_EXT): /usr/include/sys/ttydefaults.h
regcomp$(OBJ_EXT): /usr/include/sys/types.h
regcomp$(OBJ_EXT): /usr/include/sys/ucontext.h
regcomp$(OBJ_EXT): /usr/include/sys/uio.h
regcomp$(OBJ_EXT): /usr/include/sys/wait.h
regcomp$(OBJ_EXT): /usr/include/time.h
regcomp$(OBJ_EXT): /usr/include/unistd.h
regcomp$(OBJ_EXT): /usr/include/wchar.h
regcomp$(OBJ_EXT): /usr/include/xlocale.h
regcomp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
regcomp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
regcomp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
regcomp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
regcomp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
regcomp$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
regcomp$(OBJ_EXT): EXTERN.h
regcomp$(OBJ_EXT): INTERN.h
regcomp$(OBJ_EXT): av.h
regcomp$(OBJ_EXT): charclass_invlists.h
regcomp$(OBJ_EXT): config.h
regcomp$(OBJ_EXT): cop.h
regcomp$(OBJ_EXT): cv.h
regcomp$(OBJ_EXT): dquote_static.c
regcomp$(OBJ_EXT): embed.h
regcomp$(OBJ_EXT): embedvar.h
regcomp$(OBJ_EXT): form.h
regcomp$(OBJ_EXT): gv.h
regcomp$(OBJ_EXT): handy.h
regcomp$(OBJ_EXT): hv.h
regcomp$(OBJ_EXT): intrpvar.h
regcomp$(OBJ_EXT): iperlsys.h
regcomp$(OBJ_EXT): mg.h
regcomp$(OBJ_EXT): mg_vtable.h
regcomp$(OBJ_EXT): mydtrace.h
regcomp$(OBJ_EXT): op.h
regcomp$(OBJ_EXT): op_reg_common.h
regcomp$(OBJ_EXT): opcode.h
regcomp$(OBJ_EXT): opnames.h
regcomp$(OBJ_EXT): overload.h
regcomp$(OBJ_EXT): pad.h
regcomp$(OBJ_EXT): parser.h
regcomp$(OBJ_EXT): patchlevel.h
regcomp$(OBJ_EXT): perl.h
regcomp$(OBJ_EXT): perlio.h
regcomp$(OBJ_EXT): perlvars.h
regcomp$(OBJ_EXT): perly.h
regcomp$(OBJ_EXT): pp.h
regcomp$(OBJ_EXT): proto.h
regcomp$(OBJ_EXT): regcharclass.h
regcomp$(OBJ_EXT): regcomp.c
regcomp$(OBJ_EXT): regcomp.h
regcomp$(OBJ_EXT): regexp.h
regcomp$(OBJ_EXT): regnodes.h
regcomp$(OBJ_EXT): scope.h
regcomp$(OBJ_EXT): sv.h
regcomp$(OBJ_EXT): thread.h
regcomp$(OBJ_EXT): unixish.h
regcomp$(OBJ_EXT): utf8.h
regcomp$(OBJ_EXT): util.h
regcomp$(OBJ_EXT): warnings.h
regcomp$(OBJ_EXT): cflags
regexec$(OBJ_EXT): /usr/include/_G_config.h
regexec$(OBJ_EXT): /usr/include/alloca.h
regexec$(OBJ_EXT): /usr/include/arpa/inet.h
regexec$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
regexec$(OBJ_EXT): /usr/include/asm-generic/errno.h
regexec$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
regexec$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
regexec$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
regexec$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
regexec$(OBJ_EXT): /usr/include/asm-x86_64/param.h
regexec$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
regexec$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
regexec$(OBJ_EXT): /usr/include/asm/errno.h
regexec$(OBJ_EXT): /usr/include/asm/ioctl.h
regexec$(OBJ_EXT): /usr/include/asm/ioctls.h
regexec$(OBJ_EXT): /usr/include/asm/param.h
regexec$(OBJ_EXT): /usr/include/asm/socket.h
regexec$(OBJ_EXT): /usr/include/asm/sockios.h
regexec$(OBJ_EXT): /usr/include/bits/byteswap.h
regexec$(OBJ_EXT): /usr/include/bits/confname.h
regexec$(OBJ_EXT): /usr/include/bits/dirent.h
regexec$(OBJ_EXT): /usr/include/bits/endian.h
regexec$(OBJ_EXT): /usr/include/bits/environments.h
regexec$(OBJ_EXT): /usr/include/bits/errno.h
regexec$(OBJ_EXT): /usr/include/bits/fcntl.h
regexec$(OBJ_EXT): /usr/include/bits/huge_val.h
regexec$(OBJ_EXT): /usr/include/bits/huge_valf.h
regexec$(OBJ_EXT): /usr/include/bits/huge_vall.h
regexec$(OBJ_EXT): /usr/include/bits/in.h
regexec$(OBJ_EXT): /usr/include/bits/inf.h
regexec$(OBJ_EXT): /usr/include/bits/ioctl-types.h
regexec$(OBJ_EXT): /usr/include/bits/ioctls.h
regexec$(OBJ_EXT): /usr/include/bits/ipc.h
regexec$(OBJ_EXT): /usr/include/bits/ipctypes.h
regexec$(OBJ_EXT): /usr/include/bits/local_lim.h
regexec$(OBJ_EXT): /usr/include/bits/locale.h
regexec$(OBJ_EXT): /usr/include/bits/mathcalls.h
regexec$(OBJ_EXT): /usr/include/bits/mathdef.h
regexec$(OBJ_EXT): /usr/include/bits/nan.h
regexec$(OBJ_EXT): /usr/include/bits/netdb.h
regexec$(OBJ_EXT): /usr/include/bits/posix1_lim.h
regexec$(OBJ_EXT): /usr/include/bits/posix2_lim.h
regexec$(OBJ_EXT): /usr/include/bits/posix_opt.h
regexec$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
regexec$(OBJ_EXT): /usr/include/bits/resource.h
regexec$(OBJ_EXT): /usr/include/bits/select.h
regexec$(OBJ_EXT): /usr/include/bits/sem.h
regexec$(OBJ_EXT): /usr/include/bits/setjmp.h
regexec$(OBJ_EXT): /usr/include/bits/sigaction.h
regexec$(OBJ_EXT): /usr/include/bits/sigcontext.h
regexec$(OBJ_EXT): /usr/include/bits/siginfo.h
regexec$(OBJ_EXT): /usr/include/bits/signum.h
regexec$(OBJ_EXT): /usr/include/bits/sigset.h
regexec$(OBJ_EXT): /usr/include/bits/sigstack.h
regexec$(OBJ_EXT): /usr/include/bits/sigthread.h
regexec$(OBJ_EXT): /usr/include/bits/sockaddr.h
regexec$(OBJ_EXT): /usr/include/bits/socket.h
regexec$(OBJ_EXT): /usr/include/bits/stat.h
regexec$(OBJ_EXT): /usr/include/bits/stdio_lim.h
regexec$(OBJ_EXT): /usr/include/bits/sys_errlist.h
regexec$(OBJ_EXT): /usr/include/bits/time.h
regexec$(OBJ_EXT): /usr/include/bits/types.h
regexec$(OBJ_EXT): /usr/include/bits/typesizes.h
regexec$(OBJ_EXT): /usr/include/bits/uio.h
regexec$(OBJ_EXT): /usr/include/bits/waitflags.h
regexec$(OBJ_EXT): /usr/include/bits/waitstatus.h
regexec$(OBJ_EXT): /usr/include/bits/wchar.h
regexec$(OBJ_EXT): /usr/include/bits/wordsize.h
regexec$(OBJ_EXT): /usr/include/bits/xopen_lim.h
regexec$(OBJ_EXT): /usr/include/ctype.h
regexec$(OBJ_EXT): /usr/include/dirent.h
regexec$(OBJ_EXT): /usr/include/endian.h
regexec$(OBJ_EXT): /usr/include/errno.h
regexec$(OBJ_EXT): /usr/include/fcntl.h
regexec$(OBJ_EXT): /usr/include/features.h
regexec$(OBJ_EXT): /usr/include/gconv.h
regexec$(OBJ_EXT): /usr/include/getopt.h
regexec$(OBJ_EXT): /usr/include/gnu/stubs-64.h
regexec$(OBJ_EXT): /usr/include/gnu/stubs.h
regexec$(OBJ_EXT): /usr/include/inttypes.h
regexec$(OBJ_EXT): /usr/include/libio.h
regexec$(OBJ_EXT): /usr/include/limits.h
regexec$(OBJ_EXT): /usr/include/linux/errno.h
regexec$(OBJ_EXT): /usr/include/linux/limits.h
regexec$(OBJ_EXT): /usr/include/linux/param.h
regexec$(OBJ_EXT): /usr/include/locale.h
regexec$(OBJ_EXT): /usr/include/math.h
regexec$(OBJ_EXT): /usr/include/netdb.h
regexec$(OBJ_EXT): /usr/include/netinet/in.h
regexec$(OBJ_EXT): /usr/include/rpc/netdb.h
regexec$(OBJ_EXT): /usr/include/setjmp.h
regexec$(OBJ_EXT): /usr/include/signal.h
regexec$(OBJ_EXT): /usr/include/stdint.h
regexec$(OBJ_EXT): /usr/include/stdio.h
regexec$(OBJ_EXT): /usr/include/stdlib.h
regexec$(OBJ_EXT): /usr/include/string.h
regexec$(OBJ_EXT): /usr/include/sys/cdefs.h
regexec$(OBJ_EXT): /usr/include/sys/file.h
regexec$(OBJ_EXT): /usr/include/sys/ioctl.h
regexec$(OBJ_EXT): /usr/include/sys/ipc.h
regexec$(OBJ_EXT): /usr/include/sys/param.h
regexec$(OBJ_EXT): /usr/include/sys/resource.h
regexec$(OBJ_EXT): /usr/include/sys/select.h
regexec$(OBJ_EXT): /usr/include/sys/sem.h
regexec$(OBJ_EXT): /usr/include/sys/socket.h
regexec$(OBJ_EXT): /usr/include/sys/stat.h
regexec$(OBJ_EXT): /usr/include/sys/sysmacros.h
regexec$(OBJ_EXT): /usr/include/sys/time.h
regexec$(OBJ_EXT): /usr/include/sys/times.h
regexec$(OBJ_EXT): /usr/include/sys/ttydefaults.h
regexec$(OBJ_EXT): /usr/include/sys/types.h
regexec$(OBJ_EXT): /usr/include/sys/ucontext.h
regexec$(OBJ_EXT): /usr/include/sys/uio.h
regexec$(OBJ_EXT): /usr/include/sys/wait.h
regexec$(OBJ_EXT): /usr/include/time.h
regexec$(OBJ_EXT): /usr/include/unistd.h
regexec$(OBJ_EXT): /usr/include/wchar.h
regexec$(OBJ_EXT): /usr/include/xlocale.h
regexec$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
regexec$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
regexec$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
regexec$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
regexec$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
regexec$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
regexec$(OBJ_EXT): EXTERN.h
regexec$(OBJ_EXT): av.h
regexec$(OBJ_EXT): config.h
regexec$(OBJ_EXT): cop.h
regexec$(OBJ_EXT): cv.h
regexec$(OBJ_EXT): embed.h
regexec$(OBJ_EXT): embedvar.h
regexec$(OBJ_EXT): form.h
regexec$(OBJ_EXT): gv.h
regexec$(OBJ_EXT): handy.h
regexec$(OBJ_EXT): hv.h
regexec$(OBJ_EXT): intrpvar.h
regexec$(OBJ_EXT): iperlsys.h
regexec$(OBJ_EXT): mg.h
regexec$(OBJ_EXT): mg_vtable.h
regexec$(OBJ_EXT): mydtrace.h
regexec$(OBJ_EXT): op.h
regexec$(OBJ_EXT): op_reg_common.h
regexec$(OBJ_EXT): opcode.h
regexec$(OBJ_EXT): opnames.h
regexec$(OBJ_EXT): overload.h
regexec$(OBJ_EXT): pad.h
regexec$(OBJ_EXT): parser.h
regexec$(OBJ_EXT): patchlevel.h
regexec$(OBJ_EXT): perl.h
regexec$(OBJ_EXT): perlio.h
regexec$(OBJ_EXT): perlvars.h
regexec$(OBJ_EXT): perly.h
regexec$(OBJ_EXT): pp.h
regexec$(OBJ_EXT): proto.h
regexec$(OBJ_EXT): regcharclass.h
regexec$(OBJ_EXT): regcomp.h
regexec$(OBJ_EXT): regexec.c
regexec$(OBJ_EXT): regexp.h
regexec$(OBJ_EXT): regnodes.h
regexec$(OBJ_EXT): scope.h
regexec$(OBJ_EXT): sv.h
regexec$(OBJ_EXT): thread.h
regexec$(OBJ_EXT): unixish.h
regexec$(OBJ_EXT): utf8.h
regexec$(OBJ_EXT): util.h
regexec$(OBJ_EXT): warnings.h
regexec$(OBJ_EXT): cflags
utf8$(OBJ_EXT): /usr/include/_G_config.h
utf8$(OBJ_EXT): /usr/include/alloca.h
utf8$(OBJ_EXT): /usr/include/arpa/inet.h
utf8$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
utf8$(OBJ_EXT): /usr/include/asm-generic/errno.h
utf8$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
utf8$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
utf8$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
utf8$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
utf8$(OBJ_EXT): /usr/include/asm-x86_64/param.h
utf8$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
utf8$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
utf8$(OBJ_EXT): /usr/include/asm/errno.h
utf8$(OBJ_EXT): /usr/include/asm/ioctl.h
utf8$(OBJ_EXT): /usr/include/asm/ioctls.h
utf8$(OBJ_EXT): /usr/include/asm/param.h
utf8$(OBJ_EXT): /usr/include/asm/socket.h
utf8$(OBJ_EXT): /usr/include/asm/sockios.h
utf8$(OBJ_EXT): /usr/include/bits/byteswap.h
utf8$(OBJ_EXT): /usr/include/bits/confname.h
utf8$(OBJ_EXT): /usr/include/bits/dirent.h
utf8$(OBJ_EXT): /usr/include/bits/endian.h
utf8$(OBJ_EXT): /usr/include/bits/environments.h
utf8$(OBJ_EXT): /usr/include/bits/errno.h
utf8$(OBJ_EXT): /usr/include/bits/fcntl.h
utf8$(OBJ_EXT): /usr/include/bits/huge_val.h
utf8$(OBJ_EXT): /usr/include/bits/huge_valf.h
utf8$(OBJ_EXT): /usr/include/bits/huge_vall.h
utf8$(OBJ_EXT): /usr/include/bits/in.h
utf8$(OBJ_EXT): /usr/include/bits/inf.h
utf8$(OBJ_EXT): /usr/include/bits/ioctl-types.h
utf8$(OBJ_EXT): /usr/include/bits/ioctls.h
utf8$(OBJ_EXT): /usr/include/bits/ipc.h
utf8$(OBJ_EXT): /usr/include/bits/ipctypes.h
utf8$(OBJ_EXT): /usr/include/bits/local_lim.h
utf8$(OBJ_EXT): /usr/include/bits/locale.h
utf8$(OBJ_EXT): /usr/include/bits/mathcalls.h
utf8$(OBJ_EXT): /usr/include/bits/mathdef.h
utf8$(OBJ_EXT): /usr/include/bits/nan.h
utf8$(OBJ_EXT): /usr/include/bits/netdb.h
utf8$(OBJ_EXT): /usr/include/bits/posix1_lim.h
utf8$(OBJ_EXT): /usr/include/bits/posix2_lim.h
utf8$(OBJ_EXT): /usr/include/bits/posix_opt.h
utf8$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
utf8$(OBJ_EXT): /usr/include/bits/resource.h
utf8$(OBJ_EXT): /usr/include/bits/select.h
utf8$(OBJ_EXT): /usr/include/bits/sem.h
utf8$(OBJ_EXT): /usr/include/bits/setjmp.h
utf8$(OBJ_EXT): /usr/include/bits/sigaction.h
utf8$(OBJ_EXT): /usr/include/bits/sigcontext.h
utf8$(OBJ_EXT): /usr/include/bits/siginfo.h
utf8$(OBJ_EXT): /usr/include/bits/signum.h
utf8$(OBJ_EXT): /usr/include/bits/sigset.h
utf8$(OBJ_EXT): /usr/include/bits/sigstack.h
utf8$(OBJ_EXT): /usr/include/bits/sigthread.h
utf8$(OBJ_EXT): /usr/include/bits/sockaddr.h
utf8$(OBJ_EXT): /usr/include/bits/socket.h
utf8$(OBJ_EXT): /usr/include/bits/stat.h
utf8$(OBJ_EXT): /usr/include/bits/stdio_lim.h
utf8$(OBJ_EXT): /usr/include/bits/sys_errlist.h
utf8$(OBJ_EXT): /usr/include/bits/time.h
utf8$(OBJ_EXT): /usr/include/bits/types.h
utf8$(OBJ_EXT): /usr/include/bits/typesizes.h
utf8$(OBJ_EXT): /usr/include/bits/uio.h
utf8$(OBJ_EXT): /usr/include/bits/waitflags.h
utf8$(OBJ_EXT): /usr/include/bits/waitstatus.h
utf8$(OBJ_EXT): /usr/include/bits/wchar.h
utf8$(OBJ_EXT): /usr/include/bits/wordsize.h
utf8$(OBJ_EXT): /usr/include/bits/xopen_lim.h
utf8$(OBJ_EXT): /usr/include/ctype.h
utf8$(OBJ_EXT): /usr/include/dirent.h
utf8$(OBJ_EXT): /usr/include/endian.h
utf8$(OBJ_EXT): /usr/include/errno.h
utf8$(OBJ_EXT): /usr/include/fcntl.h
utf8$(OBJ_EXT): /usr/include/features.h
utf8$(OBJ_EXT): /usr/include/gconv.h
utf8$(OBJ_EXT): /usr/include/getopt.h
utf8$(OBJ_EXT): /usr/include/gnu/stubs-64.h
utf8$(OBJ_EXT): /usr/include/gnu/stubs.h
utf8$(OBJ_EXT): /usr/include/inttypes.h
utf8$(OBJ_EXT): /usr/include/libio.h
utf8$(OBJ_EXT): /usr/include/limits.h
utf8$(OBJ_EXT): /usr/include/linux/errno.h
utf8$(OBJ_EXT): /usr/include/linux/limits.h
utf8$(OBJ_EXT): /usr/include/linux/param.h
utf8$(OBJ_EXT): /usr/include/locale.h
utf8$(OBJ_EXT): /usr/include/math.h
utf8$(OBJ_EXT): /usr/include/netdb.h
utf8$(OBJ_EXT): /usr/include/netinet/in.h
utf8$(OBJ_EXT): /usr/include/rpc/netdb.h
utf8$(OBJ_EXT): /usr/include/setjmp.h
utf8$(OBJ_EXT): /usr/include/signal.h
utf8$(OBJ_EXT): /usr/include/stdint.h
utf8$(OBJ_EXT): /usr/include/stdio.h
utf8$(OBJ_EXT): /usr/include/stdlib.h
utf8$(OBJ_EXT): /usr/include/string.h
utf8$(OBJ_EXT): /usr/include/sys/cdefs.h
utf8$(OBJ_EXT): /usr/include/sys/file.h
utf8$(OBJ_EXT): /usr/include/sys/ioctl.h
utf8$(OBJ_EXT): /usr/include/sys/ipc.h
utf8$(OBJ_EXT): /usr/include/sys/param.h
utf8$(OBJ_EXT): /usr/include/sys/resource.h
utf8$(OBJ_EXT): /usr/include/sys/select.h
utf8$(OBJ_EXT): /usr/include/sys/sem.h
utf8$(OBJ_EXT): /usr/include/sys/socket.h
utf8$(OBJ_EXT): /usr/include/sys/stat.h
utf8$(OBJ_EXT): /usr/include/sys/sysmacros.h
utf8$(OBJ_EXT): /usr/include/sys/time.h
utf8$(OBJ_EXT): /usr/include/sys/times.h
utf8$(OBJ_EXT): /usr/include/sys/ttydefaults.h
utf8$(OBJ_EXT): /usr/include/sys/types.h
utf8$(OBJ_EXT): /usr/include/sys/ucontext.h
utf8$(OBJ_EXT): /usr/include/sys/uio.h
utf8$(OBJ_EXT): /usr/include/sys/wait.h
utf8$(OBJ_EXT): /usr/include/time.h
utf8$(OBJ_EXT): /usr/include/unistd.h
utf8$(OBJ_EXT): /usr/include/wchar.h
utf8$(OBJ_EXT): /usr/include/xlocale.h
utf8$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
utf8$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
utf8$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
utf8$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
utf8$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
utf8$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
utf8$(OBJ_EXT): EXTERN.h
utf8$(OBJ_EXT): av.h
utf8$(OBJ_EXT): config.h
utf8$(OBJ_EXT): cop.h
utf8$(OBJ_EXT): cv.h
utf8$(OBJ_EXT): embed.h
utf8$(OBJ_EXT): embedvar.h
utf8$(OBJ_EXT): form.h
utf8$(OBJ_EXT): gv.h
utf8$(OBJ_EXT): handy.h
utf8$(OBJ_EXT): hv.h
utf8$(OBJ_EXT): intrpvar.h
utf8$(OBJ_EXT): iperlsys.h
utf8$(OBJ_EXT): mg.h
utf8$(OBJ_EXT): mg_vtable.h
utf8$(OBJ_EXT): mydtrace.h
utf8$(OBJ_EXT): op.h
utf8$(OBJ_EXT): op_reg_common.h
utf8$(OBJ_EXT): opcode.h
utf8$(OBJ_EXT): opnames.h
utf8$(OBJ_EXT): overload.h
utf8$(OBJ_EXT): pad.h
utf8$(OBJ_EXT): parser.h
utf8$(OBJ_EXT): patchlevel.h
utf8$(OBJ_EXT): perl.h
utf8$(OBJ_EXT): perlio.h
utf8$(OBJ_EXT): perlvars.h
utf8$(OBJ_EXT): perly.h
utf8$(OBJ_EXT): pp.h
utf8$(OBJ_EXT): proto.h
utf8$(OBJ_EXT): regexp.h
utf8$(OBJ_EXT): scope.h
utf8$(OBJ_EXT): sv.h
utf8$(OBJ_EXT): thread.h
utf8$(OBJ_EXT): unixish.h
utf8$(OBJ_EXT): utf8.c
utf8$(OBJ_EXT): utf8.h
utf8$(OBJ_EXT): util.h
utf8$(OBJ_EXT): warnings.h
utf8$(OBJ_EXT): cflags
sv$(OBJ_EXT): /usr/include/_G_config.h
sv$(OBJ_EXT): /usr/include/alloca.h
sv$(OBJ_EXT): /usr/include/arpa/inet.h
sv$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
sv$(OBJ_EXT): /usr/include/asm-generic/errno.h
sv$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
sv$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
sv$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
sv$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
sv$(OBJ_EXT): /usr/include/asm-x86_64/param.h
sv$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
sv$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
sv$(OBJ_EXT): /usr/include/asm/errno.h
sv$(OBJ_EXT): /usr/include/asm/ioctl.h
sv$(OBJ_EXT): /usr/include/asm/ioctls.h
sv$(OBJ_EXT): /usr/include/asm/param.h
sv$(OBJ_EXT): /usr/include/asm/socket.h
sv$(OBJ_EXT): /usr/include/asm/sockios.h
sv$(OBJ_EXT): /usr/include/bits/byteswap.h
sv$(OBJ_EXT): /usr/include/bits/confname.h
sv$(OBJ_EXT): /usr/include/bits/dirent.h
sv$(OBJ_EXT): /usr/include/bits/endian.h
sv$(OBJ_EXT): /usr/include/bits/environments.h
sv$(OBJ_EXT): /usr/include/bits/errno.h
sv$(OBJ_EXT): /usr/include/bits/fcntl.h
sv$(OBJ_EXT): /usr/include/bits/huge_val.h
sv$(OBJ_EXT): /usr/include/bits/huge_valf.h
sv$(OBJ_EXT): /usr/include/bits/huge_vall.h
sv$(OBJ_EXT): /usr/include/bits/in.h
sv$(OBJ_EXT): /usr/include/bits/inf.h
sv$(OBJ_EXT): /usr/include/bits/ioctl-types.h
sv$(OBJ_EXT): /usr/include/bits/ioctls.h
sv$(OBJ_EXT): /usr/include/bits/ipc.h
sv$(OBJ_EXT): /usr/include/bits/ipctypes.h
sv$(OBJ_EXT): /usr/include/bits/local_lim.h
sv$(OBJ_EXT): /usr/include/bits/locale.h
sv$(OBJ_EXT): /usr/include/bits/mathcalls.h
sv$(OBJ_EXT): /usr/include/bits/mathdef.h
sv$(OBJ_EXT): /usr/include/bits/nan.h
sv$(OBJ_EXT): /usr/include/bits/netdb.h
sv$(OBJ_EXT): /usr/include/bits/posix1_lim.h
sv$(OBJ_EXT): /usr/include/bits/posix2_lim.h
sv$(OBJ_EXT): /usr/include/bits/posix_opt.h
sv$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
sv$(OBJ_EXT): /usr/include/bits/resource.h
sv$(OBJ_EXT): /usr/include/bits/select.h
sv$(OBJ_EXT): /usr/include/bits/sem.h
sv$(OBJ_EXT): /usr/include/bits/setjmp.h
sv$(OBJ_EXT): /usr/include/bits/sigaction.h
sv$(OBJ_EXT): /usr/include/bits/sigcontext.h
sv$(OBJ_EXT): /usr/include/bits/siginfo.h
sv$(OBJ_EXT): /usr/include/bits/signum.h
sv$(OBJ_EXT): /usr/include/bits/sigset.h
sv$(OBJ_EXT): /usr/include/bits/sigstack.h
sv$(OBJ_EXT): /usr/include/bits/sigthread.h
sv$(OBJ_EXT): /usr/include/bits/sockaddr.h
sv$(OBJ_EXT): /usr/include/bits/socket.h
sv$(OBJ_EXT): /usr/include/bits/stat.h
sv$(OBJ_EXT): /usr/include/bits/stdio_lim.h
sv$(OBJ_EXT): /usr/include/bits/sys_errlist.h
sv$(OBJ_EXT): /usr/include/bits/time.h
sv$(OBJ_EXT): /usr/include/bits/types.h
sv$(OBJ_EXT): /usr/include/bits/typesizes.h
sv$(OBJ_EXT): /usr/include/bits/uio.h
sv$(OBJ_EXT): /usr/include/bits/waitflags.h
sv$(OBJ_EXT): /usr/include/bits/waitstatus.h
sv$(OBJ_EXT): /usr/include/bits/wchar.h
sv$(OBJ_EXT): /usr/include/bits/wordsize.h
sv$(OBJ_EXT): /usr/include/bits/xopen_lim.h
sv$(OBJ_EXT): /usr/include/ctype.h
sv$(OBJ_EXT): /usr/include/dirent.h
sv$(OBJ_EXT): /usr/include/endian.h
sv$(OBJ_EXT): /usr/include/errno.h
sv$(OBJ_EXT): /usr/include/fcntl.h
sv$(OBJ_EXT): /usr/include/features.h
sv$(OBJ_EXT): /usr/include/gconv.h
sv$(OBJ_EXT): /usr/include/getopt.h
sv$(OBJ_EXT): /usr/include/gnu/stubs-64.h
sv$(OBJ_EXT): /usr/include/gnu/stubs.h
sv$(OBJ_EXT): /usr/include/inttypes.h
sv$(OBJ_EXT): /usr/include/libio.h
sv$(OBJ_EXT): /usr/include/limits.h
sv$(OBJ_EXT): /usr/include/linux/errno.h
sv$(OBJ_EXT): /usr/include/linux/limits.h
sv$(OBJ_EXT): /usr/include/linux/param.h
sv$(OBJ_EXT): /usr/include/locale.h
sv$(OBJ_EXT): /usr/include/math.h
sv$(OBJ_EXT): /usr/include/netdb.h
sv$(OBJ_EXT): /usr/include/netinet/in.h
sv$(OBJ_EXT): /usr/include/rpc/netdb.h
sv$(OBJ_EXT): /usr/include/setjmp.h
sv$(OBJ_EXT): /usr/include/signal.h
sv$(OBJ_EXT): /usr/include/stdint.h
sv$(OBJ_EXT): /usr/include/stdio.h
sv$(OBJ_EXT): /usr/include/stdlib.h
sv$(OBJ_EXT): /usr/include/string.h
sv$(OBJ_EXT): /usr/include/sys/cdefs.h
sv$(OBJ_EXT): /usr/include/sys/file.h
sv$(OBJ_EXT): /usr/include/sys/ioctl.h
sv$(OBJ_EXT): /usr/include/sys/ipc.h
sv$(OBJ_EXT): /usr/include/sys/param.h
sv$(OBJ_EXT): /usr/include/sys/resource.h
sv$(OBJ_EXT): /usr/include/sys/select.h
sv$(OBJ_EXT): /usr/include/sys/sem.h
sv$(OBJ_EXT): /usr/include/sys/socket.h
sv$(OBJ_EXT): /usr/include/sys/stat.h
sv$(OBJ_EXT): /usr/include/sys/sysmacros.h
sv$(OBJ_EXT): /usr/include/sys/time.h
sv$(OBJ_EXT): /usr/include/sys/times.h
sv$(OBJ_EXT): /usr/include/sys/ttydefaults.h
sv$(OBJ_EXT): /usr/include/sys/types.h
sv$(OBJ_EXT): /usr/include/sys/ucontext.h
sv$(OBJ_EXT): /usr/include/sys/uio.h
sv$(OBJ_EXT): /usr/include/sys/wait.h
sv$(OBJ_EXT): /usr/include/time.h
sv$(OBJ_EXT): /usr/include/unistd.h
sv$(OBJ_EXT): /usr/include/wchar.h
sv$(OBJ_EXT): /usr/include/xlocale.h
sv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
sv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
sv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
sv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
sv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
sv$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
sv$(OBJ_EXT): EXTERN.h
sv$(OBJ_EXT): av.h
sv$(OBJ_EXT): config.h
sv$(OBJ_EXT): cop.h
sv$(OBJ_EXT): cv.h
sv$(OBJ_EXT): embed.h
sv$(OBJ_EXT): embedvar.h
sv$(OBJ_EXT): form.h
sv$(OBJ_EXT): gv.h
sv$(OBJ_EXT): handy.h
sv$(OBJ_EXT): hv.h
sv$(OBJ_EXT): intrpvar.h
sv$(OBJ_EXT): iperlsys.h
sv$(OBJ_EXT): mg.h
sv$(OBJ_EXT): mg_vtable.h
sv$(OBJ_EXT): mydtrace.h
sv$(OBJ_EXT): op.h
sv$(OBJ_EXT): op_reg_common.h
sv$(OBJ_EXT): opcode.h
sv$(OBJ_EXT): opnames.h
sv$(OBJ_EXT): overload.h
sv$(OBJ_EXT): pad.h
sv$(OBJ_EXT): parser.h
sv$(OBJ_EXT): patchlevel.h
sv$(OBJ_EXT): perl.h
sv$(OBJ_EXT): perlio.h
sv$(OBJ_EXT): perlvars.h
sv$(OBJ_EXT): perly.h
sv$(OBJ_EXT): pp.h
sv$(OBJ_EXT): proto.h
sv$(OBJ_EXT): regcharclass.h
sv$(OBJ_EXT): regcomp.h
sv$(OBJ_EXT): regexp.h
sv$(OBJ_EXT): regnodes.h
sv$(OBJ_EXT): scope.h
sv$(OBJ_EXT): sv.c
sv$(OBJ_EXT): sv.h
sv$(OBJ_EXT): thread.h
sv$(OBJ_EXT): unixish.h
sv$(OBJ_EXT): utf8.h
sv$(OBJ_EXT): util.h
sv$(OBJ_EXT): warnings.h
sv$(OBJ_EXT): cflags
taint$(OBJ_EXT): /usr/include/_G_config.h
taint$(OBJ_EXT): /usr/include/alloca.h
taint$(OBJ_EXT): /usr/include/arpa/inet.h
taint$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
taint$(OBJ_EXT): /usr/include/asm-generic/errno.h
taint$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
taint$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
taint$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
taint$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
taint$(OBJ_EXT): /usr/include/asm-x86_64/param.h
taint$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
taint$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
taint$(OBJ_EXT): /usr/include/asm/errno.h
taint$(OBJ_EXT): /usr/include/asm/ioctl.h
taint$(OBJ_EXT): /usr/include/asm/ioctls.h
taint$(OBJ_EXT): /usr/include/asm/param.h
taint$(OBJ_EXT): /usr/include/asm/socket.h
taint$(OBJ_EXT): /usr/include/asm/sockios.h
taint$(OBJ_EXT): /usr/include/bits/byteswap.h
taint$(OBJ_EXT): /usr/include/bits/confname.h
taint$(OBJ_EXT): /usr/include/bits/dirent.h
taint$(OBJ_EXT): /usr/include/bits/endian.h
taint$(OBJ_EXT): /usr/include/bits/environments.h
taint$(OBJ_EXT): /usr/include/bits/errno.h
taint$(OBJ_EXT): /usr/include/bits/fcntl.h
taint$(OBJ_EXT): /usr/include/bits/huge_val.h
taint$(OBJ_EXT): /usr/include/bits/huge_valf.h
taint$(OBJ_EXT): /usr/include/bits/huge_vall.h
taint$(OBJ_EXT): /usr/include/bits/in.h
taint$(OBJ_EXT): /usr/include/bits/inf.h
taint$(OBJ_EXT): /usr/include/bits/ioctl-types.h
taint$(OBJ_EXT): /usr/include/bits/ioctls.h
taint$(OBJ_EXT): /usr/include/bits/ipc.h
taint$(OBJ_EXT): /usr/include/bits/ipctypes.h
taint$(OBJ_EXT): /usr/include/bits/local_lim.h
taint$(OBJ_EXT): /usr/include/bits/locale.h
taint$(OBJ_EXT): /usr/include/bits/mathcalls.h
taint$(OBJ_EXT): /usr/include/bits/mathdef.h
taint$(OBJ_EXT): /usr/include/bits/nan.h
taint$(OBJ_EXT): /usr/include/bits/netdb.h
taint$(OBJ_EXT): /usr/include/bits/posix1_lim.h
taint$(OBJ_EXT): /usr/include/bits/posix2_lim.h
taint$(OBJ_EXT): /usr/include/bits/posix_opt.h
taint$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
taint$(OBJ_EXT): /usr/include/bits/resource.h
taint$(OBJ_EXT): /usr/include/bits/select.h
taint$(OBJ_EXT): /usr/include/bits/sem.h
taint$(OBJ_EXT): /usr/include/bits/setjmp.h
taint$(OBJ_EXT): /usr/include/bits/sigaction.h
taint$(OBJ_EXT): /usr/include/bits/sigcontext.h
taint$(OBJ_EXT): /usr/include/bits/siginfo.h
taint$(OBJ_EXT): /usr/include/bits/signum.h
taint$(OBJ_EXT): /usr/include/bits/sigset.h
taint$(OBJ_EXT): /usr/include/bits/sigstack.h
taint$(OBJ_EXT): /usr/include/bits/sigthread.h
taint$(OBJ_EXT): /usr/include/bits/sockaddr.h
taint$(OBJ_EXT): /usr/include/bits/socket.h
taint$(OBJ_EXT): /usr/include/bits/stat.h
taint$(OBJ_EXT): /usr/include/bits/stdio_lim.h
taint$(OBJ_EXT): /usr/include/bits/sys_errlist.h
taint$(OBJ_EXT): /usr/include/bits/time.h
taint$(OBJ_EXT): /usr/include/bits/types.h
taint$(OBJ_EXT): /usr/include/bits/typesizes.h
taint$(OBJ_EXT): /usr/include/bits/uio.h
taint$(OBJ_EXT): /usr/include/bits/waitflags.h
taint$(OBJ_EXT): /usr/include/bits/waitstatus.h
taint$(OBJ_EXT): /usr/include/bits/wchar.h
taint$(OBJ_EXT): /usr/include/bits/wordsize.h
taint$(OBJ_EXT): /usr/include/bits/xopen_lim.h
taint$(OBJ_EXT): /usr/include/ctype.h
taint$(OBJ_EXT): /usr/include/dirent.h
taint$(OBJ_EXT): /usr/include/endian.h
taint$(OBJ_EXT): /usr/include/errno.h
taint$(OBJ_EXT): /usr/include/fcntl.h
taint$(OBJ_EXT): /usr/include/features.h
taint$(OBJ_EXT): /usr/include/gconv.h
taint$(OBJ_EXT): /usr/include/getopt.h
taint$(OBJ_EXT): /usr/include/gnu/stubs-64.h
taint$(OBJ_EXT): /usr/include/gnu/stubs.h
taint$(OBJ_EXT): /usr/include/inttypes.h
taint$(OBJ_EXT): /usr/include/libio.h
taint$(OBJ_EXT): /usr/include/limits.h
taint$(OBJ_EXT): /usr/include/linux/errno.h
taint$(OBJ_EXT): /usr/include/linux/limits.h
taint$(OBJ_EXT): /usr/include/linux/param.h
taint$(OBJ_EXT): /usr/include/locale.h
taint$(OBJ_EXT): /usr/include/math.h
taint$(OBJ_EXT): /usr/include/netdb.h
taint$(OBJ_EXT): /usr/include/netinet/in.h
taint$(OBJ_EXT): /usr/include/rpc/netdb.h
taint$(OBJ_EXT): /usr/include/setjmp.h
taint$(OBJ_EXT): /usr/include/signal.h
taint$(OBJ_EXT): /usr/include/stdint.h
taint$(OBJ_EXT): /usr/include/stdio.h
taint$(OBJ_EXT): /usr/include/stdlib.h
taint$(OBJ_EXT): /usr/include/string.h
taint$(OBJ_EXT): /usr/include/sys/cdefs.h
taint$(OBJ_EXT): /usr/include/sys/file.h
taint$(OBJ_EXT): /usr/include/sys/ioctl.h
taint$(OBJ_EXT): /usr/include/sys/ipc.h
taint$(OBJ_EXT): /usr/include/sys/param.h
taint$(OBJ_EXT): /usr/include/sys/resource.h
taint$(OBJ_EXT): /usr/include/sys/select.h
taint$(OBJ_EXT): /usr/include/sys/sem.h
taint$(OBJ_EXT): /usr/include/sys/socket.h
taint$(OBJ_EXT): /usr/include/sys/stat.h
taint$(OBJ_EXT): /usr/include/sys/sysmacros.h
taint$(OBJ_EXT): /usr/include/sys/time.h
taint$(OBJ_EXT): /usr/include/sys/times.h
taint$(OBJ_EXT): /usr/include/sys/ttydefaults.h
taint$(OBJ_EXT): /usr/include/sys/types.h
taint$(OBJ_EXT): /usr/include/sys/ucontext.h
taint$(OBJ_EXT): /usr/include/sys/uio.h
taint$(OBJ_EXT): /usr/include/sys/wait.h
taint$(OBJ_EXT): /usr/include/time.h
taint$(OBJ_EXT): /usr/include/unistd.h
taint$(OBJ_EXT): /usr/include/wchar.h
taint$(OBJ_EXT): /usr/include/xlocale.h
taint$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
taint$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
taint$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
taint$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
taint$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
taint$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
taint$(OBJ_EXT): EXTERN.h
taint$(OBJ_EXT): av.h
taint$(OBJ_EXT): config.h
taint$(OBJ_EXT): cop.h
taint$(OBJ_EXT): cv.h
taint$(OBJ_EXT): embed.h
taint$(OBJ_EXT): embedvar.h
taint$(OBJ_EXT): form.h
taint$(OBJ_EXT): gv.h
taint$(OBJ_EXT): handy.h
taint$(OBJ_EXT): hv.h
taint$(OBJ_EXT): intrpvar.h
taint$(OBJ_EXT): iperlsys.h
taint$(OBJ_EXT): mg.h
taint$(OBJ_EXT): mg_vtable.h
taint$(OBJ_EXT): mydtrace.h
taint$(OBJ_EXT): op.h
taint$(OBJ_EXT): op_reg_common.h
taint$(OBJ_EXT): opcode.h
taint$(OBJ_EXT): opnames.h
taint$(OBJ_EXT): overload.h
taint$(OBJ_EXT): pad.h
taint$(OBJ_EXT): parser.h
taint$(OBJ_EXT): patchlevel.h
taint$(OBJ_EXT): perl.h
taint$(OBJ_EXT): perlio.h
taint$(OBJ_EXT): perlvars.h
taint$(OBJ_EXT): perly.h
taint$(OBJ_EXT): pp.h
taint$(OBJ_EXT): proto.h
taint$(OBJ_EXT): regexp.h
taint$(OBJ_EXT): scope.h
taint$(OBJ_EXT): sv.h
taint$(OBJ_EXT): taint.c
taint$(OBJ_EXT): thread.h
taint$(OBJ_EXT): unixish.h
taint$(OBJ_EXT): utf8.h
taint$(OBJ_EXT): util.h
taint$(OBJ_EXT): warnings.h
taint$(OBJ_EXT): cflags
toke$(OBJ_EXT): /usr/include/_G_config.h
toke$(OBJ_EXT): /usr/include/alloca.h
toke$(OBJ_EXT): /usr/include/arpa/inet.h
toke$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
toke$(OBJ_EXT): /usr/include/asm-generic/errno.h
toke$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
toke$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
toke$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
toke$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
toke$(OBJ_EXT): /usr/include/asm-x86_64/param.h
toke$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
toke$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
toke$(OBJ_EXT): /usr/include/asm/errno.h
toke$(OBJ_EXT): /usr/include/asm/ioctl.h
toke$(OBJ_EXT): /usr/include/asm/ioctls.h
toke$(OBJ_EXT): /usr/include/asm/param.h
toke$(OBJ_EXT): /usr/include/asm/socket.h
toke$(OBJ_EXT): /usr/include/asm/sockios.h
toke$(OBJ_EXT): /usr/include/bits/byteswap.h
toke$(OBJ_EXT): /usr/include/bits/confname.h
toke$(OBJ_EXT): /usr/include/bits/dirent.h
toke$(OBJ_EXT): /usr/include/bits/endian.h
toke$(OBJ_EXT): /usr/include/bits/environments.h
toke$(OBJ_EXT): /usr/include/bits/errno.h
toke$(OBJ_EXT): /usr/include/bits/fcntl.h
toke$(OBJ_EXT): /usr/include/bits/huge_val.h
toke$(OBJ_EXT): /usr/include/bits/huge_valf.h
toke$(OBJ_EXT): /usr/include/bits/huge_vall.h
toke$(OBJ_EXT): /usr/include/bits/in.h
toke$(OBJ_EXT): /usr/include/bits/inf.h
toke$(OBJ_EXT): /usr/include/bits/ioctl-types.h
toke$(OBJ_EXT): /usr/include/bits/ioctls.h
toke$(OBJ_EXT): /usr/include/bits/ipc.h
toke$(OBJ_EXT): /usr/include/bits/ipctypes.h
toke$(OBJ_EXT): /usr/include/bits/local_lim.h
toke$(OBJ_EXT): /usr/include/bits/locale.h
toke$(OBJ_EXT): /usr/include/bits/mathcalls.h
toke$(OBJ_EXT): /usr/include/bits/mathdef.h
toke$(OBJ_EXT): /usr/include/bits/nan.h
toke$(OBJ_EXT): /usr/include/bits/netdb.h
toke$(OBJ_EXT): /usr/include/bits/posix1_lim.h
toke$(OBJ_EXT): /usr/include/bits/posix2_lim.h
toke$(OBJ_EXT): /usr/include/bits/posix_opt.h
toke$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
toke$(OBJ_EXT): /usr/include/bits/resource.h
toke$(OBJ_EXT): /usr/include/bits/select.h
toke$(OBJ_EXT): /usr/include/bits/sem.h
toke$(OBJ_EXT): /usr/include/bits/setjmp.h
toke$(OBJ_EXT): /usr/include/bits/sigaction.h
toke$(OBJ_EXT): /usr/include/bits/sigcontext.h
toke$(OBJ_EXT): /usr/include/bits/siginfo.h
toke$(OBJ_EXT): /usr/include/bits/signum.h
toke$(OBJ_EXT): /usr/include/bits/sigset.h
toke$(OBJ_EXT): /usr/include/bits/sigstack.h
toke$(OBJ_EXT): /usr/include/bits/sigthread.h
toke$(OBJ_EXT): /usr/include/bits/sockaddr.h
toke$(OBJ_EXT): /usr/include/bits/socket.h
toke$(OBJ_EXT): /usr/include/bits/stat.h
toke$(OBJ_EXT): /usr/include/bits/stdio_lim.h
toke$(OBJ_EXT): /usr/include/bits/sys_errlist.h
toke$(OBJ_EXT): /usr/include/bits/time.h
toke$(OBJ_EXT): /usr/include/bits/types.h
toke$(OBJ_EXT): /usr/include/bits/typesizes.h
toke$(OBJ_EXT): /usr/include/bits/uio.h
toke$(OBJ_EXT): /usr/include/bits/waitflags.h
toke$(OBJ_EXT): /usr/include/bits/waitstatus.h
toke$(OBJ_EXT): /usr/include/bits/wchar.h
toke$(OBJ_EXT): /usr/include/bits/wordsize.h
toke$(OBJ_EXT): /usr/include/bits/xopen_lim.h
toke$(OBJ_EXT): /usr/include/ctype.h
toke$(OBJ_EXT): /usr/include/dirent.h
toke$(OBJ_EXT): /usr/include/endian.h
toke$(OBJ_EXT): /usr/include/errno.h
toke$(OBJ_EXT): /usr/include/fcntl.h
toke$(OBJ_EXT): /usr/include/features.h
toke$(OBJ_EXT): /usr/include/gconv.h
toke$(OBJ_EXT): /usr/include/getopt.h
toke$(OBJ_EXT): /usr/include/gnu/stubs-64.h
toke$(OBJ_EXT): /usr/include/gnu/stubs.h
toke$(OBJ_EXT): /usr/include/inttypes.h
toke$(OBJ_EXT): /usr/include/libio.h
toke$(OBJ_EXT): /usr/include/limits.h
toke$(OBJ_EXT): /usr/include/linux/errno.h
toke$(OBJ_EXT): /usr/include/linux/limits.h
toke$(OBJ_EXT): /usr/include/linux/param.h
toke$(OBJ_EXT): /usr/include/locale.h
toke$(OBJ_EXT): /usr/include/math.h
toke$(OBJ_EXT): /usr/include/netdb.h
toke$(OBJ_EXT): /usr/include/netinet/in.h
toke$(OBJ_EXT): /usr/include/rpc/netdb.h
toke$(OBJ_EXT): /usr/include/setjmp.h
toke$(OBJ_EXT): /usr/include/signal.h
toke$(OBJ_EXT): /usr/include/stdint.h
toke$(OBJ_EXT): /usr/include/stdio.h
toke$(OBJ_EXT): /usr/include/stdlib.h
toke$(OBJ_EXT): /usr/include/string.h
toke$(OBJ_EXT): /usr/include/sys/cdefs.h
toke$(OBJ_EXT): /usr/include/sys/file.h
toke$(OBJ_EXT): /usr/include/sys/ioctl.h
toke$(OBJ_EXT): /usr/include/sys/ipc.h
toke$(OBJ_EXT): /usr/include/sys/param.h
toke$(OBJ_EXT): /usr/include/sys/resource.h
toke$(OBJ_EXT): /usr/include/sys/select.h
toke$(OBJ_EXT): /usr/include/sys/sem.h
toke$(OBJ_EXT): /usr/include/sys/socket.h
toke$(OBJ_EXT): /usr/include/sys/stat.h
toke$(OBJ_EXT): /usr/include/sys/sysmacros.h
toke$(OBJ_EXT): /usr/include/sys/time.h
toke$(OBJ_EXT): /usr/include/sys/times.h
toke$(OBJ_EXT): /usr/include/sys/ttydefaults.h
toke$(OBJ_EXT): /usr/include/sys/types.h
toke$(OBJ_EXT): /usr/include/sys/ucontext.h
toke$(OBJ_EXT): /usr/include/sys/uio.h
toke$(OBJ_EXT): /usr/include/sys/wait.h
toke$(OBJ_EXT): /usr/include/time.h
toke$(OBJ_EXT): /usr/include/unistd.h
toke$(OBJ_EXT): /usr/include/wchar.h
toke$(OBJ_EXT): /usr/include/xlocale.h
toke$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
toke$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
toke$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
toke$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
toke$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
toke$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
toke$(OBJ_EXT): EXTERN.h
toke$(OBJ_EXT): av.h
toke$(OBJ_EXT): config.h
toke$(OBJ_EXT): cop.h
toke$(OBJ_EXT): cv.h
toke$(OBJ_EXT): dquote_static.c
toke$(OBJ_EXT): embed.h
toke$(OBJ_EXT): embedvar.h
toke$(OBJ_EXT): feature.h
toke$(OBJ_EXT): form.h
toke$(OBJ_EXT): gv.h
toke$(OBJ_EXT): handy.h
toke$(OBJ_EXT): hv.h
toke$(OBJ_EXT): intrpvar.h
toke$(OBJ_EXT): iperlsys.h
toke$(OBJ_EXT): keywords.h
toke$(OBJ_EXT): mg.h
toke$(OBJ_EXT): mg_vtable.h
toke$(OBJ_EXT): mydtrace.h
toke$(OBJ_EXT): op.h
toke$(OBJ_EXT): op_reg_common.h
toke$(OBJ_EXT): opcode.h
toke$(OBJ_EXT): opnames.h
toke$(OBJ_EXT): overload.h
toke$(OBJ_EXT): pad.h
toke$(OBJ_EXT): parser.h
toke$(OBJ_EXT): patchlevel.h
toke$(OBJ_EXT): perl.h
toke$(OBJ_EXT): perlio.h
toke$(OBJ_EXT): perlvars.h
toke$(OBJ_EXT): perly.h
toke$(OBJ_EXT): pp.h
toke$(OBJ_EXT): proto.h
toke$(OBJ_EXT): regexp.h
toke$(OBJ_EXT): scope.h
toke$(OBJ_EXT): sv.h
toke$(OBJ_EXT): thread.h
toke$(OBJ_EXT): toke.c
toke$(OBJ_EXT): unixish.h
toke$(OBJ_EXT): utf8.h
toke$(OBJ_EXT): util.h
toke$(OBJ_EXT): warnings.h
toke$(OBJ_EXT): cflags
util$(OBJ_EXT): /usr/include/_G_config.h
util$(OBJ_EXT): /usr/include/alloca.h
util$(OBJ_EXT): /usr/include/arpa/inet.h
util$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
util$(OBJ_EXT): /usr/include/asm-generic/errno.h
util$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
util$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
util$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
util$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
util$(OBJ_EXT): /usr/include/asm-x86_64/param.h
util$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
util$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
util$(OBJ_EXT): /usr/include/asm/errno.h
util$(OBJ_EXT): /usr/include/asm/ioctl.h
util$(OBJ_EXT): /usr/include/asm/ioctls.h
util$(OBJ_EXT): /usr/include/asm/param.h
util$(OBJ_EXT): /usr/include/asm/socket.h
util$(OBJ_EXT): /usr/include/asm/sockios.h
util$(OBJ_EXT): /usr/include/bits/byteswap.h
util$(OBJ_EXT): /usr/include/bits/confname.h
util$(OBJ_EXT): /usr/include/bits/dirent.h
util$(OBJ_EXT): /usr/include/bits/endian.h
util$(OBJ_EXT): /usr/include/bits/environments.h
util$(OBJ_EXT): /usr/include/bits/errno.h
util$(OBJ_EXT): /usr/include/bits/fcntl.h
util$(OBJ_EXT): /usr/include/bits/huge_val.h
util$(OBJ_EXT): /usr/include/bits/huge_valf.h
util$(OBJ_EXT): /usr/include/bits/huge_vall.h
util$(OBJ_EXT): /usr/include/bits/in.h
util$(OBJ_EXT): /usr/include/bits/inf.h
util$(OBJ_EXT): /usr/include/bits/ioctl-types.h
util$(OBJ_EXT): /usr/include/bits/ioctls.h
util$(OBJ_EXT): /usr/include/bits/ipc.h
util$(OBJ_EXT): /usr/include/bits/ipctypes.h
util$(OBJ_EXT): /usr/include/bits/local_lim.h
util$(OBJ_EXT): /usr/include/bits/locale.h
util$(OBJ_EXT): /usr/include/bits/mathcalls.h
util$(OBJ_EXT): /usr/include/bits/mathdef.h
util$(OBJ_EXT): /usr/include/bits/nan.h
util$(OBJ_EXT): /usr/include/bits/netdb.h
util$(OBJ_EXT): /usr/include/bits/posix1_lim.h
util$(OBJ_EXT): /usr/include/bits/posix2_lim.h
util$(OBJ_EXT): /usr/include/bits/posix_opt.h
util$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
util$(OBJ_EXT): /usr/include/bits/resource.h
util$(OBJ_EXT): /usr/include/bits/select.h
util$(OBJ_EXT): /usr/include/bits/sem.h
util$(OBJ_EXT): /usr/include/bits/setjmp.h
util$(OBJ_EXT): /usr/include/bits/sigaction.h
util$(OBJ_EXT): /usr/include/bits/sigcontext.h
util$(OBJ_EXT): /usr/include/bits/siginfo.h
util$(OBJ_EXT): /usr/include/bits/signum.h
util$(OBJ_EXT): /usr/include/bits/sigset.h
util$(OBJ_EXT): /usr/include/bits/sigstack.h
util$(OBJ_EXT): /usr/include/bits/sigthread.h
util$(OBJ_EXT): /usr/include/bits/sockaddr.h
util$(OBJ_EXT): /usr/include/bits/socket.h
util$(OBJ_EXT): /usr/include/bits/stat.h
util$(OBJ_EXT): /usr/include/bits/stdio_lim.h
util$(OBJ_EXT): /usr/include/bits/sys_errlist.h
util$(OBJ_EXT): /usr/include/bits/time.h
util$(OBJ_EXT): /usr/include/bits/types.h
util$(OBJ_EXT): /usr/include/bits/typesizes.h
util$(OBJ_EXT): /usr/include/bits/uio.h
util$(OBJ_EXT): /usr/include/bits/waitflags.h
util$(OBJ_EXT): /usr/include/bits/waitstatus.h
util$(OBJ_EXT): /usr/include/bits/wchar.h
util$(OBJ_EXT): /usr/include/bits/wordsize.h
util$(OBJ_EXT): /usr/include/bits/xopen_lim.h
util$(OBJ_EXT): /usr/include/ctype.h
util$(OBJ_EXT): /usr/include/dirent.h
util$(OBJ_EXT): /usr/include/endian.h
util$(OBJ_EXT): /usr/include/errno.h
util$(OBJ_EXT): /usr/include/fcntl.h
util$(OBJ_EXT): /usr/include/features.h
util$(OBJ_EXT): /usr/include/gconv.h
util$(OBJ_EXT): /usr/include/getopt.h
util$(OBJ_EXT): /usr/include/gnu/stubs-64.h
util$(OBJ_EXT): /usr/include/gnu/stubs.h
util$(OBJ_EXT): /usr/include/inttypes.h
util$(OBJ_EXT): /usr/include/libio.h
util$(OBJ_EXT): /usr/include/limits.h
util$(OBJ_EXT): /usr/include/linux/errno.h
util$(OBJ_EXT): /usr/include/linux/limits.h
util$(OBJ_EXT): /usr/include/linux/param.h
util$(OBJ_EXT): /usr/include/locale.h
util$(OBJ_EXT): /usr/include/math.h
util$(OBJ_EXT): /usr/include/netdb.h
util$(OBJ_EXT): /usr/include/netinet/in.h
util$(OBJ_EXT): /usr/include/rpc/netdb.h
util$(OBJ_EXT): /usr/include/setjmp.h
util$(OBJ_EXT): /usr/include/signal.h
util$(OBJ_EXT): /usr/include/stdint.h
util$(OBJ_EXT): /usr/include/stdio.h
util$(OBJ_EXT): /usr/include/stdlib.h
util$(OBJ_EXT): /usr/include/string.h
util$(OBJ_EXT): /usr/include/sys/cdefs.h
util$(OBJ_EXT): /usr/include/sys/file.h
util$(OBJ_EXT): /usr/include/sys/ioctl.h
util$(OBJ_EXT): /usr/include/sys/ipc.h
util$(OBJ_EXT): /usr/include/sys/param.h
util$(OBJ_EXT): /usr/include/sys/resource.h
util$(OBJ_EXT): /usr/include/sys/select.h
util$(OBJ_EXT): /usr/include/sys/sem.h
util$(OBJ_EXT): /usr/include/sys/socket.h
util$(OBJ_EXT): /usr/include/sys/stat.h
util$(OBJ_EXT): /usr/include/sys/sysmacros.h
util$(OBJ_EXT): /usr/include/sys/time.h
util$(OBJ_EXT): /usr/include/sys/times.h
util$(OBJ_EXT): /usr/include/sys/ttydefaults.h
util$(OBJ_EXT): /usr/include/sys/types.h
util$(OBJ_EXT): /usr/include/sys/ucontext.h
util$(OBJ_EXT): /usr/include/sys/uio.h
util$(OBJ_EXT): /usr/include/sys/wait.h
util$(OBJ_EXT): /usr/include/time.h
util$(OBJ_EXT): /usr/include/unistd.h
util$(OBJ_EXT): /usr/include/wchar.h
util$(OBJ_EXT): /usr/include/xlocale.h
util$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
util$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
util$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
util$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
util$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
util$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
util$(OBJ_EXT): EXTERN.h
util$(OBJ_EXT): av.h
util$(OBJ_EXT): config.h
util$(OBJ_EXT): cop.h
util$(OBJ_EXT): cv.h
util$(OBJ_EXT): embed.h
util$(OBJ_EXT): embedvar.h
util$(OBJ_EXT): form.h
util$(OBJ_EXT): gv.h
util$(OBJ_EXT): handy.h
util$(OBJ_EXT): hv.h
util$(OBJ_EXT): intrpvar.h
util$(OBJ_EXT): iperlsys.h
util$(OBJ_EXT): mg.h
util$(OBJ_EXT): mg_vtable.h
util$(OBJ_EXT): mydtrace.h
util$(OBJ_EXT): op.h
util$(OBJ_EXT): op_reg_common.h
util$(OBJ_EXT): opcode.h
util$(OBJ_EXT): opnames.h
util$(OBJ_EXT): overload.h
util$(OBJ_EXT): pad.h
util$(OBJ_EXT): parser.h
util$(OBJ_EXT): patchlevel.h
util$(OBJ_EXT): perl.h
util$(OBJ_EXT): perlio.h
util$(OBJ_EXT): perliol.h
util$(OBJ_EXT): perlvars.h
util$(OBJ_EXT): perly.h
util$(OBJ_EXT): pp.h
util$(OBJ_EXT): proto.h
util$(OBJ_EXT): regexp.h
util$(OBJ_EXT): scope.h
util$(OBJ_EXT): sv.h
util$(OBJ_EXT): thread.h
util$(OBJ_EXT): unixish.h
util$(OBJ_EXT): utf8.h
util$(OBJ_EXT): util.c
util$(OBJ_EXT): util.h
util$(OBJ_EXT): warnings.h
util$(OBJ_EXT): cflags
deb$(OBJ_EXT): /usr/include/_G_config.h
deb$(OBJ_EXT): /usr/include/alloca.h
deb$(OBJ_EXT): /usr/include/arpa/inet.h
deb$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
deb$(OBJ_EXT): /usr/include/asm-generic/errno.h
deb$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
deb$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
deb$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
deb$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
deb$(OBJ_EXT): /usr/include/asm-x86_64/param.h
deb$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
deb$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
deb$(OBJ_EXT): /usr/include/asm/errno.h
deb$(OBJ_EXT): /usr/include/asm/ioctl.h
deb$(OBJ_EXT): /usr/include/asm/ioctls.h
deb$(OBJ_EXT): /usr/include/asm/param.h
deb$(OBJ_EXT): /usr/include/asm/socket.h
deb$(OBJ_EXT): /usr/include/asm/sockios.h
deb$(OBJ_EXT): /usr/include/bits/byteswap.h
deb$(OBJ_EXT): /usr/include/bits/confname.h
deb$(OBJ_EXT): /usr/include/bits/dirent.h
deb$(OBJ_EXT): /usr/include/bits/endian.h
deb$(OBJ_EXT): /usr/include/bits/environments.h
deb$(OBJ_EXT): /usr/include/bits/errno.h
deb$(OBJ_EXT): /usr/include/bits/fcntl.h
deb$(OBJ_EXT): /usr/include/bits/huge_val.h
deb$(OBJ_EXT): /usr/include/bits/huge_valf.h
deb$(OBJ_EXT): /usr/include/bits/huge_vall.h
deb$(OBJ_EXT): /usr/include/bits/in.h
deb$(OBJ_EXT): /usr/include/bits/inf.h
deb$(OBJ_EXT): /usr/include/bits/ioctl-types.h
deb$(OBJ_EXT): /usr/include/bits/ioctls.h
deb$(OBJ_EXT): /usr/include/bits/ipc.h
deb$(OBJ_EXT): /usr/include/bits/ipctypes.h
deb$(OBJ_EXT): /usr/include/bits/local_lim.h
deb$(OBJ_EXT): /usr/include/bits/locale.h
deb$(OBJ_EXT): /usr/include/bits/mathcalls.h
deb$(OBJ_EXT): /usr/include/bits/mathdef.h
deb$(OBJ_EXT): /usr/include/bits/nan.h
deb$(OBJ_EXT): /usr/include/bits/netdb.h
deb$(OBJ_EXT): /usr/include/bits/posix1_lim.h
deb$(OBJ_EXT): /usr/include/bits/posix2_lim.h
deb$(OBJ_EXT): /usr/include/bits/posix_opt.h
deb$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
deb$(OBJ_EXT): /usr/include/bits/resource.h
deb$(OBJ_EXT): /usr/include/bits/select.h
deb$(OBJ_EXT): /usr/include/bits/sem.h
deb$(OBJ_EXT): /usr/include/bits/setjmp.h
deb$(OBJ_EXT): /usr/include/bits/sigaction.h
deb$(OBJ_EXT): /usr/include/bits/sigcontext.h
deb$(OBJ_EXT): /usr/include/bits/siginfo.h
deb$(OBJ_EXT): /usr/include/bits/signum.h
deb$(OBJ_EXT): /usr/include/bits/sigset.h
deb$(OBJ_EXT): /usr/include/bits/sigstack.h
deb$(OBJ_EXT): /usr/include/bits/sigthread.h
deb$(OBJ_EXT): /usr/include/bits/sockaddr.h
deb$(OBJ_EXT): /usr/include/bits/socket.h
deb$(OBJ_EXT): /usr/include/bits/stat.h
deb$(OBJ_EXT): /usr/include/bits/stdio_lim.h
deb$(OBJ_EXT): /usr/include/bits/sys_errlist.h
deb$(OBJ_EXT): /usr/include/bits/time.h
deb$(OBJ_EXT): /usr/include/bits/types.h
deb$(OBJ_EXT): /usr/include/bits/typesizes.h
deb$(OBJ_EXT): /usr/include/bits/uio.h
deb$(OBJ_EXT): /usr/include/bits/waitflags.h
deb$(OBJ_EXT): /usr/include/bits/waitstatus.h
deb$(OBJ_EXT): /usr/include/bits/wchar.h
deb$(OBJ_EXT): /usr/include/bits/wordsize.h
deb$(OBJ_EXT): /usr/include/bits/xopen_lim.h
deb$(OBJ_EXT): /usr/include/ctype.h
deb$(OBJ_EXT): /usr/include/dirent.h
deb$(OBJ_EXT): /usr/include/endian.h
deb$(OBJ_EXT): /usr/include/errno.h
deb$(OBJ_EXT): /usr/include/fcntl.h
deb$(OBJ_EXT): /usr/include/features.h
deb$(OBJ_EXT): /usr/include/gconv.h
deb$(OBJ_EXT): /usr/include/getopt.h
deb$(OBJ_EXT): /usr/include/gnu/stubs-64.h
deb$(OBJ_EXT): /usr/include/gnu/stubs.h
deb$(OBJ_EXT): /usr/include/inttypes.h
deb$(OBJ_EXT): /usr/include/libio.h
deb$(OBJ_EXT): /usr/include/limits.h
deb$(OBJ_EXT): /usr/include/linux/errno.h
deb$(OBJ_EXT): /usr/include/linux/limits.h
deb$(OBJ_EXT): /usr/include/linux/param.h
deb$(OBJ_EXT): /usr/include/locale.h
deb$(OBJ_EXT): /usr/include/math.h
deb$(OBJ_EXT): /usr/include/netdb.h
deb$(OBJ_EXT): /usr/include/netinet/in.h
deb$(OBJ_EXT): /usr/include/rpc/netdb.h
deb$(OBJ_EXT): /usr/include/setjmp.h
deb$(OBJ_EXT): /usr/include/signal.h
deb$(OBJ_EXT): /usr/include/stdint.h
deb$(OBJ_EXT): /usr/include/stdio.h
deb$(OBJ_EXT): /usr/include/stdlib.h
deb$(OBJ_EXT): /usr/include/string.h
deb$(OBJ_EXT): /usr/include/sys/cdefs.h
deb$(OBJ_EXT): /usr/include/sys/file.h
deb$(OBJ_EXT): /usr/include/sys/ioctl.h
deb$(OBJ_EXT): /usr/include/sys/ipc.h
deb$(OBJ_EXT): /usr/include/sys/param.h
deb$(OBJ_EXT): /usr/include/sys/resource.h
deb$(OBJ_EXT): /usr/include/sys/select.h
deb$(OBJ_EXT): /usr/include/sys/sem.h
deb$(OBJ_EXT): /usr/include/sys/socket.h
deb$(OBJ_EXT): /usr/include/sys/stat.h
deb$(OBJ_EXT): /usr/include/sys/sysmacros.h
deb$(OBJ_EXT): /usr/include/sys/time.h
deb$(OBJ_EXT): /usr/include/sys/times.h
deb$(OBJ_EXT): /usr/include/sys/ttydefaults.h
deb$(OBJ_EXT): /usr/include/sys/types.h
deb$(OBJ_EXT): /usr/include/sys/ucontext.h
deb$(OBJ_EXT): /usr/include/sys/uio.h
deb$(OBJ_EXT): /usr/include/sys/wait.h
deb$(OBJ_EXT): /usr/include/time.h
deb$(OBJ_EXT): /usr/include/unistd.h
deb$(OBJ_EXT): /usr/include/wchar.h
deb$(OBJ_EXT): /usr/include/xlocale.h
deb$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
deb$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
deb$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
deb$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
deb$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
deb$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
deb$(OBJ_EXT): EXTERN.h
deb$(OBJ_EXT): av.h
deb$(OBJ_EXT): config.h
deb$(OBJ_EXT): cop.h
deb$(OBJ_EXT): cv.h
deb$(OBJ_EXT): deb.c
deb$(OBJ_EXT): embed.h
deb$(OBJ_EXT): embedvar.h
deb$(OBJ_EXT): form.h
deb$(OBJ_EXT): gv.h
deb$(OBJ_EXT): handy.h
deb$(OBJ_EXT): hv.h
deb$(OBJ_EXT): intrpvar.h
deb$(OBJ_EXT): iperlsys.h
deb$(OBJ_EXT): mg.h
deb$(OBJ_EXT): mg_vtable.h
deb$(OBJ_EXT): mydtrace.h
deb$(OBJ_EXT): op.h
deb$(OBJ_EXT): op_reg_common.h
deb$(OBJ_EXT): opcode.h
deb$(OBJ_EXT): opnames.h
deb$(OBJ_EXT): overload.h
deb$(OBJ_EXT): pad.h
deb$(OBJ_EXT): parser.h
deb$(OBJ_EXT): patchlevel.h
deb$(OBJ_EXT): perl.h
deb$(OBJ_EXT): perlio.h
deb$(OBJ_EXT): perlvars.h
deb$(OBJ_EXT): perly.h
deb$(OBJ_EXT): pp.h
deb$(OBJ_EXT): proto.h
deb$(OBJ_EXT): regexp.h
deb$(OBJ_EXT): scope.h
deb$(OBJ_EXT): sv.h
deb$(OBJ_EXT): thread.h
deb$(OBJ_EXT): unixish.h
deb$(OBJ_EXT): utf8.h
deb$(OBJ_EXT): util.h
deb$(OBJ_EXT): warnings.h
deb$(OBJ_EXT): cflags
run$(OBJ_EXT): /usr/include/_G_config.h
run$(OBJ_EXT): /usr/include/alloca.h
run$(OBJ_EXT): /usr/include/arpa/inet.h
run$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
run$(OBJ_EXT): /usr/include/asm-generic/errno.h
run$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
run$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
run$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
run$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
run$(OBJ_EXT): /usr/include/asm-x86_64/param.h
run$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
run$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
run$(OBJ_EXT): /usr/include/asm/errno.h
run$(OBJ_EXT): /usr/include/asm/ioctl.h
run$(OBJ_EXT): /usr/include/asm/ioctls.h
run$(OBJ_EXT): /usr/include/asm/param.h
run$(OBJ_EXT): /usr/include/asm/socket.h
run$(OBJ_EXT): /usr/include/asm/sockios.h
run$(OBJ_EXT): /usr/include/bits/byteswap.h
run$(OBJ_EXT): /usr/include/bits/confname.h
run$(OBJ_EXT): /usr/include/bits/dirent.h
run$(OBJ_EXT): /usr/include/bits/endian.h
run$(OBJ_EXT): /usr/include/bits/environments.h
run$(OBJ_EXT): /usr/include/bits/errno.h
run$(OBJ_EXT): /usr/include/bits/fcntl.h
run$(OBJ_EXT): /usr/include/bits/huge_val.h
run$(OBJ_EXT): /usr/include/bits/huge_valf.h
run$(OBJ_EXT): /usr/include/bits/huge_vall.h
run$(OBJ_EXT): /usr/include/bits/in.h
run$(OBJ_EXT): /usr/include/bits/inf.h
run$(OBJ_EXT): /usr/include/bits/ioctl-types.h
run$(OBJ_EXT): /usr/include/bits/ioctls.h
run$(OBJ_EXT): /usr/include/bits/ipc.h
run$(OBJ_EXT): /usr/include/bits/ipctypes.h
run$(OBJ_EXT): /usr/include/bits/local_lim.h
run$(OBJ_EXT): /usr/include/bits/locale.h
run$(OBJ_EXT): /usr/include/bits/mathcalls.h
run$(OBJ_EXT): /usr/include/bits/mathdef.h
run$(OBJ_EXT): /usr/include/bits/nan.h
run$(OBJ_EXT): /usr/include/bits/netdb.h
run$(OBJ_EXT): /usr/include/bits/posix1_lim.h
run$(OBJ_EXT): /usr/include/bits/posix2_lim.h
run$(OBJ_EXT): /usr/include/bits/posix_opt.h
run$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
run$(OBJ_EXT): /usr/include/bits/resource.h
run$(OBJ_EXT): /usr/include/bits/select.h
run$(OBJ_EXT): /usr/include/bits/sem.h
run$(OBJ_EXT): /usr/include/bits/setjmp.h
run$(OBJ_EXT): /usr/include/bits/sigaction.h
run$(OBJ_EXT): /usr/include/bits/sigcontext.h
run$(OBJ_EXT): /usr/include/bits/siginfo.h
run$(OBJ_EXT): /usr/include/bits/signum.h
run$(OBJ_EXT): /usr/include/bits/sigset.h
run$(OBJ_EXT): /usr/include/bits/sigstack.h
run$(OBJ_EXT): /usr/include/bits/sigthread.h
run$(OBJ_EXT): /usr/include/bits/sockaddr.h
run$(OBJ_EXT): /usr/include/bits/socket.h
run$(OBJ_EXT): /usr/include/bits/stat.h
run$(OBJ_EXT): /usr/include/bits/stdio_lim.h
run$(OBJ_EXT): /usr/include/bits/sys_errlist.h
run$(OBJ_EXT): /usr/include/bits/time.h
run$(OBJ_EXT): /usr/include/bits/types.h
run$(OBJ_EXT): /usr/include/bits/typesizes.h
run$(OBJ_EXT): /usr/include/bits/uio.h
run$(OBJ_EXT): /usr/include/bits/waitflags.h
run$(OBJ_EXT): /usr/include/bits/waitstatus.h
run$(OBJ_EXT): /usr/include/bits/wchar.h
run$(OBJ_EXT): /usr/include/bits/wordsize.h
run$(OBJ_EXT): /usr/include/bits/xopen_lim.h
run$(OBJ_EXT): /usr/include/ctype.h
run$(OBJ_EXT): /usr/include/dirent.h
run$(OBJ_EXT): /usr/include/endian.h
run$(OBJ_EXT): /usr/include/errno.h
run$(OBJ_EXT): /usr/include/fcntl.h
run$(OBJ_EXT): /usr/include/features.h
run$(OBJ_EXT): /usr/include/gconv.h
run$(OBJ_EXT): /usr/include/getopt.h
run$(OBJ_EXT): /usr/include/gnu/stubs-64.h
run$(OBJ_EXT): /usr/include/gnu/stubs.h
run$(OBJ_EXT): /usr/include/inttypes.h
run$(OBJ_EXT): /usr/include/libio.h
run$(OBJ_EXT): /usr/include/limits.h
run$(OBJ_EXT): /usr/include/linux/errno.h
run$(OBJ_EXT): /usr/include/linux/limits.h
run$(OBJ_EXT): /usr/include/linux/param.h
run$(OBJ_EXT): /usr/include/locale.h
run$(OBJ_EXT): /usr/include/math.h
run$(OBJ_EXT): /usr/include/netdb.h
run$(OBJ_EXT): /usr/include/netinet/in.h
run$(OBJ_EXT): /usr/include/rpc/netdb.h
run$(OBJ_EXT): /usr/include/setjmp.h
run$(OBJ_EXT): /usr/include/signal.h
run$(OBJ_EXT): /usr/include/stdint.h
run$(OBJ_EXT): /usr/include/stdio.h
run$(OBJ_EXT): /usr/include/stdlib.h
run$(OBJ_EXT): /usr/include/string.h
run$(OBJ_EXT): /usr/include/sys/cdefs.h
run$(OBJ_EXT): /usr/include/sys/file.h
run$(OBJ_EXT): /usr/include/sys/ioctl.h
run$(OBJ_EXT): /usr/include/sys/ipc.h
run$(OBJ_EXT): /usr/include/sys/param.h
run$(OBJ_EXT): /usr/include/sys/resource.h
run$(OBJ_EXT): /usr/include/sys/select.h
run$(OBJ_EXT): /usr/include/sys/sem.h
run$(OBJ_EXT): /usr/include/sys/socket.h
run$(OBJ_EXT): /usr/include/sys/stat.h
run$(OBJ_EXT): /usr/include/sys/sysmacros.h
run$(OBJ_EXT): /usr/include/sys/time.h
run$(OBJ_EXT): /usr/include/sys/times.h
run$(OBJ_EXT): /usr/include/sys/ttydefaults.h
run$(OBJ_EXT): /usr/include/sys/types.h
run$(OBJ_EXT): /usr/include/sys/ucontext.h
run$(OBJ_EXT): /usr/include/sys/uio.h
run$(OBJ_EXT): /usr/include/sys/wait.h
run$(OBJ_EXT): /usr/include/time.h
run$(OBJ_EXT): /usr/include/unistd.h
run$(OBJ_EXT): /usr/include/wchar.h
run$(OBJ_EXT): /usr/include/xlocale.h
run$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
run$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
run$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
run$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
run$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
run$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
run$(OBJ_EXT): EXTERN.h
run$(OBJ_EXT): av.h
run$(OBJ_EXT): config.h
run$(OBJ_EXT): cop.h
run$(OBJ_EXT): cv.h
run$(OBJ_EXT): embed.h
run$(OBJ_EXT): embedvar.h
run$(OBJ_EXT): form.h
run$(OBJ_EXT): gv.h
run$(OBJ_EXT): handy.h
run$(OBJ_EXT): hv.h
run$(OBJ_EXT): intrpvar.h
run$(OBJ_EXT): iperlsys.h
run$(OBJ_EXT): mg.h
run$(OBJ_EXT): mg_vtable.h
run$(OBJ_EXT): mydtrace.h
run$(OBJ_EXT): op.h
run$(OBJ_EXT): op_reg_common.h
run$(OBJ_EXT): opcode.h
run$(OBJ_EXT): opnames.h
run$(OBJ_EXT): overload.h
run$(OBJ_EXT): pad.h
run$(OBJ_EXT): parser.h
run$(OBJ_EXT): patchlevel.h
run$(OBJ_EXT): perl.h
run$(OBJ_EXT): perlio.h
run$(OBJ_EXT): perlvars.h
run$(OBJ_EXT): perly.h
run$(OBJ_EXT): pp.h
run$(OBJ_EXT): proto.h
run$(OBJ_EXT): regexp.h
run$(OBJ_EXT): run.c
run$(OBJ_EXT): scope.h
run$(OBJ_EXT): sv.h
run$(OBJ_EXT): thread.h
run$(OBJ_EXT): unixish.h
run$(OBJ_EXT): utf8.h
run$(OBJ_EXT): util.h
run$(OBJ_EXT): warnings.h
run$(OBJ_EXT): cflags
universal$(OBJ_EXT): /usr/include/_G_config.h
universal$(OBJ_EXT): /usr/include/alloca.h
universal$(OBJ_EXT): /usr/include/arpa/inet.h
universal$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
universal$(OBJ_EXT): /usr/include/asm-generic/errno.h
universal$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
universal$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
universal$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
universal$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
universal$(OBJ_EXT): /usr/include/asm-x86_64/param.h
universal$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
universal$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
universal$(OBJ_EXT): /usr/include/asm/errno.h
universal$(OBJ_EXT): /usr/include/asm/ioctl.h
universal$(OBJ_EXT): /usr/include/asm/ioctls.h
universal$(OBJ_EXT): /usr/include/asm/param.h
universal$(OBJ_EXT): /usr/include/asm/socket.h
universal$(OBJ_EXT): /usr/include/asm/sockios.h
universal$(OBJ_EXT): /usr/include/bits/byteswap.h
universal$(OBJ_EXT): /usr/include/bits/confname.h
universal$(OBJ_EXT): /usr/include/bits/dirent.h
universal$(OBJ_EXT): /usr/include/bits/endian.h
universal$(OBJ_EXT): /usr/include/bits/environments.h
universal$(OBJ_EXT): /usr/include/bits/errno.h
universal$(OBJ_EXT): /usr/include/bits/fcntl.h
universal$(OBJ_EXT): /usr/include/bits/huge_val.h
universal$(OBJ_EXT): /usr/include/bits/huge_valf.h
universal$(OBJ_EXT): /usr/include/bits/huge_vall.h
universal$(OBJ_EXT): /usr/include/bits/in.h
universal$(OBJ_EXT): /usr/include/bits/inf.h
universal$(OBJ_EXT): /usr/include/bits/ioctl-types.h
universal$(OBJ_EXT): /usr/include/bits/ioctls.h
universal$(OBJ_EXT): /usr/include/bits/ipc.h
universal$(OBJ_EXT): /usr/include/bits/ipctypes.h
universal$(OBJ_EXT): /usr/include/bits/local_lim.h
universal$(OBJ_EXT): /usr/include/bits/locale.h
universal$(OBJ_EXT): /usr/include/bits/mathcalls.h
universal$(OBJ_EXT): /usr/include/bits/mathdef.h
universal$(OBJ_EXT): /usr/include/bits/nan.h
universal$(OBJ_EXT): /usr/include/bits/netdb.h
universal$(OBJ_EXT): /usr/include/bits/posix1_lim.h
universal$(OBJ_EXT): /usr/include/bits/posix2_lim.h
universal$(OBJ_EXT): /usr/include/bits/posix_opt.h
universal$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
universal$(OBJ_EXT): /usr/include/bits/resource.h
universal$(OBJ_EXT): /usr/include/bits/select.h
universal$(OBJ_EXT): /usr/include/bits/sem.h
universal$(OBJ_EXT): /usr/include/bits/setjmp.h
universal$(OBJ_EXT): /usr/include/bits/sigaction.h
universal$(OBJ_EXT): /usr/include/bits/sigcontext.h
universal$(OBJ_EXT): /usr/include/bits/siginfo.h
universal$(OBJ_EXT): /usr/include/bits/signum.h
universal$(OBJ_EXT): /usr/include/bits/sigset.h
universal$(OBJ_EXT): /usr/include/bits/sigstack.h
universal$(OBJ_EXT): /usr/include/bits/sigthread.h
universal$(OBJ_EXT): /usr/include/bits/sockaddr.h
universal$(OBJ_EXT): /usr/include/bits/socket.h
universal$(OBJ_EXT): /usr/include/bits/stat.h
universal$(OBJ_EXT): /usr/include/bits/stdio_lim.h
universal$(OBJ_EXT): /usr/include/bits/sys_errlist.h
universal$(OBJ_EXT): /usr/include/bits/time.h
universal$(OBJ_EXT): /usr/include/bits/types.h
universal$(OBJ_EXT): /usr/include/bits/typesizes.h
universal$(OBJ_EXT): /usr/include/bits/uio.h
universal$(OBJ_EXT): /usr/include/bits/waitflags.h
universal$(OBJ_EXT): /usr/include/bits/waitstatus.h
universal$(OBJ_EXT): /usr/include/bits/wchar.h
universal$(OBJ_EXT): /usr/include/bits/wordsize.h
universal$(OBJ_EXT): /usr/include/bits/xopen_lim.h
universal$(OBJ_EXT): /usr/include/ctype.h
universal$(OBJ_EXT): /usr/include/dirent.h
universal$(OBJ_EXT): /usr/include/endian.h
universal$(OBJ_EXT): /usr/include/errno.h
universal$(OBJ_EXT): /usr/include/fcntl.h
universal$(OBJ_EXT): /usr/include/features.h
universal$(OBJ_EXT): /usr/include/gconv.h
universal$(OBJ_EXT): /usr/include/getopt.h
universal$(OBJ_EXT): /usr/include/gnu/stubs-64.h
universal$(OBJ_EXT): /usr/include/gnu/stubs.h
universal$(OBJ_EXT): /usr/include/inttypes.h
universal$(OBJ_EXT): /usr/include/libio.h
universal$(OBJ_EXT): /usr/include/limits.h
universal$(OBJ_EXT): /usr/include/linux/errno.h
universal$(OBJ_EXT): /usr/include/linux/limits.h
universal$(OBJ_EXT): /usr/include/linux/param.h
universal$(OBJ_EXT): /usr/include/locale.h
universal$(OBJ_EXT): /usr/include/math.h
universal$(OBJ_EXT): /usr/include/netdb.h
universal$(OBJ_EXT): /usr/include/netinet/in.h
universal$(OBJ_EXT): /usr/include/rpc/netdb.h
universal$(OBJ_EXT): /usr/include/setjmp.h
universal$(OBJ_EXT): /usr/include/signal.h
universal$(OBJ_EXT): /usr/include/stdint.h
universal$(OBJ_EXT): /usr/include/stdio.h
universal$(OBJ_EXT): /usr/include/stdlib.h
universal$(OBJ_EXT): /usr/include/string.h
universal$(OBJ_EXT): /usr/include/sys/cdefs.h
universal$(OBJ_EXT): /usr/include/sys/file.h
universal$(OBJ_EXT): /usr/include/sys/ioctl.h
universal$(OBJ_EXT): /usr/include/sys/ipc.h
universal$(OBJ_EXT): /usr/include/sys/param.h
universal$(OBJ_EXT): /usr/include/sys/resource.h
universal$(OBJ_EXT): /usr/include/sys/select.h
universal$(OBJ_EXT): /usr/include/sys/sem.h
universal$(OBJ_EXT): /usr/include/sys/socket.h
universal$(OBJ_EXT): /usr/include/sys/stat.h
universal$(OBJ_EXT): /usr/include/sys/sysmacros.h
universal$(OBJ_EXT): /usr/include/sys/time.h
universal$(OBJ_EXT): /usr/include/sys/times.h
universal$(OBJ_EXT): /usr/include/sys/ttydefaults.h
universal$(OBJ_EXT): /usr/include/sys/types.h
universal$(OBJ_EXT): /usr/include/sys/ucontext.h
universal$(OBJ_EXT): /usr/include/sys/uio.h
universal$(OBJ_EXT): /usr/include/sys/wait.h
universal$(OBJ_EXT): /usr/include/time.h
universal$(OBJ_EXT): /usr/include/unistd.h
universal$(OBJ_EXT): /usr/include/wchar.h
universal$(OBJ_EXT): /usr/include/xlocale.h
universal$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
universal$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
universal$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
universal$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
universal$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
universal$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
universal$(OBJ_EXT): EXTERN.h
universal$(OBJ_EXT): XSUB.h
universal$(OBJ_EXT): av.h
universal$(OBJ_EXT): config.h
universal$(OBJ_EXT): cop.h
universal$(OBJ_EXT): cv.h
universal$(OBJ_EXT): embed.h
universal$(OBJ_EXT): embedvar.h
universal$(OBJ_EXT): form.h
universal$(OBJ_EXT): gv.h
universal$(OBJ_EXT): handy.h
universal$(OBJ_EXT): hv.h
universal$(OBJ_EXT): intrpvar.h
universal$(OBJ_EXT): iperlsys.h
universal$(OBJ_EXT): mg.h
universal$(OBJ_EXT): mg_vtable.h
universal$(OBJ_EXT): mydtrace.h
universal$(OBJ_EXT): op.h
universal$(OBJ_EXT): op_reg_common.h
universal$(OBJ_EXT): opcode.h
universal$(OBJ_EXT): opnames.h
universal$(OBJ_EXT): overload.h
universal$(OBJ_EXT): pad.h
universal$(OBJ_EXT): parser.h
universal$(OBJ_EXT): patchlevel.h
universal$(OBJ_EXT): perl.h
universal$(OBJ_EXT): perlapi.h
universal$(OBJ_EXT): perlio.h
universal$(OBJ_EXT): perliol.h
universal$(OBJ_EXT): perlvars.h
universal$(OBJ_EXT): perly.h
universal$(OBJ_EXT): pp.h
universal$(OBJ_EXT): proto.h
universal$(OBJ_EXT): regexp.h
universal$(OBJ_EXT): scope.h
universal$(OBJ_EXT): sv.h
universal$(OBJ_EXT): thread.h
universal$(OBJ_EXT): universal.c
universal$(OBJ_EXT): unixish.h
universal$(OBJ_EXT): utf8.h
universal$(OBJ_EXT): util.h
universal$(OBJ_EXT): warnings.h
universal$(OBJ_EXT): cflags
pad$(OBJ_EXT): /usr/include/_G_config.h
pad$(OBJ_EXT): /usr/include/alloca.h
pad$(OBJ_EXT): /usr/include/arpa/inet.h
pad$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
pad$(OBJ_EXT): /usr/include/asm-generic/errno.h
pad$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
pad$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
pad$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
pad$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
pad$(OBJ_EXT): /usr/include/asm-x86_64/param.h
pad$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
pad$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
pad$(OBJ_EXT): /usr/include/asm/errno.h
pad$(OBJ_EXT): /usr/include/asm/ioctl.h
pad$(OBJ_EXT): /usr/include/asm/ioctls.h
pad$(OBJ_EXT): /usr/include/asm/param.h
pad$(OBJ_EXT): /usr/include/asm/socket.h
pad$(OBJ_EXT): /usr/include/asm/sockios.h
pad$(OBJ_EXT): /usr/include/bits/byteswap.h
pad$(OBJ_EXT): /usr/include/bits/confname.h
pad$(OBJ_EXT): /usr/include/bits/dirent.h
pad$(OBJ_EXT): /usr/include/bits/endian.h
pad$(OBJ_EXT): /usr/include/bits/environments.h
pad$(OBJ_EXT): /usr/include/bits/errno.h
pad$(OBJ_EXT): /usr/include/bits/fcntl.h
pad$(OBJ_EXT): /usr/include/bits/huge_val.h
pad$(OBJ_EXT): /usr/include/bits/huge_valf.h
pad$(OBJ_EXT): /usr/include/bits/huge_vall.h
pad$(OBJ_EXT): /usr/include/bits/in.h
pad$(OBJ_EXT): /usr/include/bits/inf.h
pad$(OBJ_EXT): /usr/include/bits/ioctl-types.h
pad$(OBJ_EXT): /usr/include/bits/ioctls.h
pad$(OBJ_EXT): /usr/include/bits/ipc.h
pad$(OBJ_EXT): /usr/include/bits/ipctypes.h
pad$(OBJ_EXT): /usr/include/bits/local_lim.h
pad$(OBJ_EXT): /usr/include/bits/locale.h
pad$(OBJ_EXT): /usr/include/bits/mathcalls.h
pad$(OBJ_EXT): /usr/include/bits/mathdef.h
pad$(OBJ_EXT): /usr/include/bits/nan.h
pad$(OBJ_EXT): /usr/include/bits/netdb.h
pad$(OBJ_EXT): /usr/include/bits/posix1_lim.h
pad$(OBJ_EXT): /usr/include/bits/posix2_lim.h
pad$(OBJ_EXT): /usr/include/bits/posix_opt.h
pad$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
pad$(OBJ_EXT): /usr/include/bits/resource.h
pad$(OBJ_EXT): /usr/include/bits/select.h
pad$(OBJ_EXT): /usr/include/bits/sem.h
pad$(OBJ_EXT): /usr/include/bits/setjmp.h
pad$(OBJ_EXT): /usr/include/bits/sigaction.h
pad$(OBJ_EXT): /usr/include/bits/sigcontext.h
pad$(OBJ_EXT): /usr/include/bits/siginfo.h
pad$(OBJ_EXT): /usr/include/bits/signum.h
pad$(OBJ_EXT): /usr/include/bits/sigset.h
pad$(OBJ_EXT): /usr/include/bits/sigstack.h
pad$(OBJ_EXT): /usr/include/bits/sigthread.h
pad$(OBJ_EXT): /usr/include/bits/sockaddr.h
pad$(OBJ_EXT): /usr/include/bits/socket.h
pad$(OBJ_EXT): /usr/include/bits/stat.h
pad$(OBJ_EXT): /usr/include/bits/stdio_lim.h
pad$(OBJ_EXT): /usr/include/bits/sys_errlist.h
pad$(OBJ_EXT): /usr/include/bits/time.h
pad$(OBJ_EXT): /usr/include/bits/types.h
pad$(OBJ_EXT): /usr/include/bits/typesizes.h
pad$(OBJ_EXT): /usr/include/bits/uio.h
pad$(OBJ_EXT): /usr/include/bits/waitflags.h
pad$(OBJ_EXT): /usr/include/bits/waitstatus.h
pad$(OBJ_EXT): /usr/include/bits/wchar.h
pad$(OBJ_EXT): /usr/include/bits/wordsize.h
pad$(OBJ_EXT): /usr/include/bits/xopen_lim.h
pad$(OBJ_EXT): /usr/include/ctype.h
pad$(OBJ_EXT): /usr/include/dirent.h
pad$(OBJ_EXT): /usr/include/endian.h
pad$(OBJ_EXT): /usr/include/errno.h
pad$(OBJ_EXT): /usr/include/fcntl.h
pad$(OBJ_EXT): /usr/include/features.h
pad$(OBJ_EXT): /usr/include/gconv.h
pad$(OBJ_EXT): /usr/include/getopt.h
pad$(OBJ_EXT): /usr/include/gnu/stubs-64.h
pad$(OBJ_EXT): /usr/include/gnu/stubs.h
pad$(OBJ_EXT): /usr/include/inttypes.h
pad$(OBJ_EXT): /usr/include/libio.h
pad$(OBJ_EXT): /usr/include/limits.h
pad$(OBJ_EXT): /usr/include/linux/errno.h
pad$(OBJ_EXT): /usr/include/linux/limits.h
pad$(OBJ_EXT): /usr/include/linux/param.h
pad$(OBJ_EXT): /usr/include/locale.h
pad$(OBJ_EXT): /usr/include/math.h
pad$(OBJ_EXT): /usr/include/netdb.h
pad$(OBJ_EXT): /usr/include/netinet/in.h
pad$(OBJ_EXT): /usr/include/rpc/netdb.h
pad$(OBJ_EXT): /usr/include/setjmp.h
pad$(OBJ_EXT): /usr/include/signal.h
pad$(OBJ_EXT): /usr/include/stdint.h
pad$(OBJ_EXT): /usr/include/stdio.h
pad$(OBJ_EXT): /usr/include/stdlib.h
pad$(OBJ_EXT): /usr/include/string.h
pad$(OBJ_EXT): /usr/include/sys/cdefs.h
pad$(OBJ_EXT): /usr/include/sys/file.h
pad$(OBJ_EXT): /usr/include/sys/ioctl.h
pad$(OBJ_EXT): /usr/include/sys/ipc.h
pad$(OBJ_EXT): /usr/include/sys/param.h
pad$(OBJ_EXT): /usr/include/sys/resource.h
pad$(OBJ_EXT): /usr/include/sys/select.h
pad$(OBJ_EXT): /usr/include/sys/sem.h
pad$(OBJ_EXT): /usr/include/sys/socket.h
pad$(OBJ_EXT): /usr/include/sys/stat.h
pad$(OBJ_EXT): /usr/include/sys/sysmacros.h
pad$(OBJ_EXT): /usr/include/sys/time.h
pad$(OBJ_EXT): /usr/include/sys/times.h
pad$(OBJ_EXT): /usr/include/sys/ttydefaults.h
pad$(OBJ_EXT): /usr/include/sys/types.h
pad$(OBJ_EXT): /usr/include/sys/ucontext.h
pad$(OBJ_EXT): /usr/include/sys/uio.h
pad$(OBJ_EXT): /usr/include/sys/wait.h
pad$(OBJ_EXT): /usr/include/time.h
pad$(OBJ_EXT): /usr/include/unistd.h
pad$(OBJ_EXT): /usr/include/wchar.h
pad$(OBJ_EXT): /usr/include/xlocale.h
pad$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
pad$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
pad$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
pad$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
pad$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
pad$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
pad$(OBJ_EXT): EXTERN.h
pad$(OBJ_EXT): av.h
pad$(OBJ_EXT): config.h
pad$(OBJ_EXT): cop.h
pad$(OBJ_EXT): cv.h
pad$(OBJ_EXT): embed.h
pad$(OBJ_EXT): embedvar.h
pad$(OBJ_EXT): form.h
pad$(OBJ_EXT): gv.h
pad$(OBJ_EXT): handy.h
pad$(OBJ_EXT): hv.h
pad$(OBJ_EXT): intrpvar.h
pad$(OBJ_EXT): iperlsys.h
pad$(OBJ_EXT): keywords.h
pad$(OBJ_EXT): mg.h
pad$(OBJ_EXT): mg_vtable.h
pad$(OBJ_EXT): mydtrace.h
pad$(OBJ_EXT): op.h
pad$(OBJ_EXT): op_reg_common.h
pad$(OBJ_EXT): opcode.h
pad$(OBJ_EXT): opnames.h
pad$(OBJ_EXT): overload.h
pad$(OBJ_EXT): pad.c
pad$(OBJ_EXT): pad.h
pad$(OBJ_EXT): parser.h
pad$(OBJ_EXT): patchlevel.h
pad$(OBJ_EXT): perl.h
pad$(OBJ_EXT): perlio.h
pad$(OBJ_EXT): perlvars.h
pad$(OBJ_EXT): perly.h
pad$(OBJ_EXT): pp.h
pad$(OBJ_EXT): proto.h
pad$(OBJ_EXT): regexp.h
pad$(OBJ_EXT): scope.h
pad$(OBJ_EXT): sv.h
pad$(OBJ_EXT): thread.h
pad$(OBJ_EXT): unixish.h
pad$(OBJ_EXT): utf8.h
pad$(OBJ_EXT): util.h
pad$(OBJ_EXT): warnings.h
pad$(OBJ_EXT): cflags
globals$(OBJ_EXT): /usr/include/_G_config.h
globals$(OBJ_EXT): /usr/include/alloca.h
globals$(OBJ_EXT): /usr/include/arpa/inet.h
globals$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
globals$(OBJ_EXT): /usr/include/asm-generic/errno.h
globals$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
globals$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
globals$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
globals$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
globals$(OBJ_EXT): /usr/include/asm-x86_64/param.h
globals$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
globals$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
globals$(OBJ_EXT): /usr/include/asm/errno.h
globals$(OBJ_EXT): /usr/include/asm/ioctl.h
globals$(OBJ_EXT): /usr/include/asm/ioctls.h
globals$(OBJ_EXT): /usr/include/asm/param.h
globals$(OBJ_EXT): /usr/include/asm/socket.h
globals$(OBJ_EXT): /usr/include/asm/sockios.h
globals$(OBJ_EXT): /usr/include/bits/byteswap.h
globals$(OBJ_EXT): /usr/include/bits/confname.h
globals$(OBJ_EXT): /usr/include/bits/dirent.h
globals$(OBJ_EXT): /usr/include/bits/endian.h
globals$(OBJ_EXT): /usr/include/bits/environments.h
globals$(OBJ_EXT): /usr/include/bits/errno.h
globals$(OBJ_EXT): /usr/include/bits/fcntl.h
globals$(OBJ_EXT): /usr/include/bits/huge_val.h
globals$(OBJ_EXT): /usr/include/bits/huge_valf.h
globals$(OBJ_EXT): /usr/include/bits/huge_vall.h
globals$(OBJ_EXT): /usr/include/bits/in.h
globals$(OBJ_EXT): /usr/include/bits/inf.h
globals$(OBJ_EXT): /usr/include/bits/ioctl-types.h
globals$(OBJ_EXT): /usr/include/bits/ioctls.h
globals$(OBJ_EXT): /usr/include/bits/ipc.h
globals$(OBJ_EXT): /usr/include/bits/ipctypes.h
globals$(OBJ_EXT): /usr/include/bits/local_lim.h
globals$(OBJ_EXT): /usr/include/bits/locale.h
globals$(OBJ_EXT): /usr/include/bits/mathcalls.h
globals$(OBJ_EXT): /usr/include/bits/mathdef.h
globals$(OBJ_EXT): /usr/include/bits/nan.h
globals$(OBJ_EXT): /usr/include/bits/netdb.h
globals$(OBJ_EXT): /usr/include/bits/posix1_lim.h
globals$(OBJ_EXT): /usr/include/bits/posix2_lim.h
globals$(OBJ_EXT): /usr/include/bits/posix_opt.h
globals$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
globals$(OBJ_EXT): /usr/include/bits/resource.h
globals$(OBJ_EXT): /usr/include/bits/select.h
globals$(OBJ_EXT): /usr/include/bits/sem.h
globals$(OBJ_EXT): /usr/include/bits/setjmp.h
globals$(OBJ_EXT): /usr/include/bits/sigaction.h
globals$(OBJ_EXT): /usr/include/bits/sigcontext.h
globals$(OBJ_EXT): /usr/include/bits/siginfo.h
globals$(OBJ_EXT): /usr/include/bits/signum.h
globals$(OBJ_EXT): /usr/include/bits/sigset.h
globals$(OBJ_EXT): /usr/include/bits/sigstack.h
globals$(OBJ_EXT): /usr/include/bits/sigthread.h
globals$(OBJ_EXT): /usr/include/bits/sockaddr.h
globals$(OBJ_EXT): /usr/include/bits/socket.h
globals$(OBJ_EXT): /usr/include/bits/stat.h
globals$(OBJ_EXT): /usr/include/bits/stdio_lim.h
globals$(OBJ_EXT): /usr/include/bits/sys_errlist.h
globals$(OBJ_EXT): /usr/include/bits/time.h
globals$(OBJ_EXT): /usr/include/bits/types.h
globals$(OBJ_EXT): /usr/include/bits/typesizes.h
globals$(OBJ_EXT): /usr/include/bits/uio.h
globals$(OBJ_EXT): /usr/include/bits/waitflags.h
globals$(OBJ_EXT): /usr/include/bits/waitstatus.h
globals$(OBJ_EXT): /usr/include/bits/wchar.h
globals$(OBJ_EXT): /usr/include/bits/wordsize.h
globals$(OBJ_EXT): /usr/include/bits/xopen_lim.h
globals$(OBJ_EXT): /usr/include/ctype.h
globals$(OBJ_EXT): /usr/include/dirent.h
globals$(OBJ_EXT): /usr/include/endian.h
globals$(OBJ_EXT): /usr/include/errno.h
globals$(OBJ_EXT): /usr/include/fcntl.h
globals$(OBJ_EXT): /usr/include/features.h
globals$(OBJ_EXT): /usr/include/gconv.h
globals$(OBJ_EXT): /usr/include/getopt.h
globals$(OBJ_EXT): /usr/include/gnu/stubs-64.h
globals$(OBJ_EXT): /usr/include/gnu/stubs.h
globals$(OBJ_EXT): /usr/include/inttypes.h
globals$(OBJ_EXT): /usr/include/libio.h
globals$(OBJ_EXT): /usr/include/limits.h
globals$(OBJ_EXT): /usr/include/linux/errno.h
globals$(OBJ_EXT): /usr/include/linux/limits.h
globals$(OBJ_EXT): /usr/include/linux/param.h
globals$(OBJ_EXT): /usr/include/locale.h
globals$(OBJ_EXT): /usr/include/math.h
globals$(OBJ_EXT): /usr/include/netdb.h
globals$(OBJ_EXT): /usr/include/netinet/in.h
globals$(OBJ_EXT): /usr/include/rpc/netdb.h
globals$(OBJ_EXT): /usr/include/setjmp.h
globals$(OBJ_EXT): /usr/include/signal.h
globals$(OBJ_EXT): /usr/include/stdint.h
globals$(OBJ_EXT): /usr/include/stdio.h
globals$(OBJ_EXT): /usr/include/stdlib.h
globals$(OBJ_EXT): /usr/include/string.h
globals$(OBJ_EXT): /usr/include/sys/cdefs.h
globals$(OBJ_EXT): /usr/include/sys/file.h
globals$(OBJ_EXT): /usr/include/sys/ioctl.h
globals$(OBJ_EXT): /usr/include/sys/ipc.h
globals$(OBJ_EXT): /usr/include/sys/param.h
globals$(OBJ_EXT): /usr/include/sys/resource.h
globals$(OBJ_EXT): /usr/include/sys/select.h
globals$(OBJ_EXT): /usr/include/sys/sem.h
globals$(OBJ_EXT): /usr/include/sys/socket.h
globals$(OBJ_EXT): /usr/include/sys/stat.h
globals$(OBJ_EXT): /usr/include/sys/sysmacros.h
globals$(OBJ_EXT): /usr/include/sys/time.h
globals$(OBJ_EXT): /usr/include/sys/times.h
globals$(OBJ_EXT): /usr/include/sys/ttydefaults.h
globals$(OBJ_EXT): /usr/include/sys/types.h
globals$(OBJ_EXT): /usr/include/sys/ucontext.h
globals$(OBJ_EXT): /usr/include/sys/uio.h
globals$(OBJ_EXT): /usr/include/sys/wait.h
globals$(OBJ_EXT): /usr/include/time.h
globals$(OBJ_EXT): /usr/include/unistd.h
globals$(OBJ_EXT): /usr/include/wchar.h
globals$(OBJ_EXT): /usr/include/xlocale.h
globals$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
globals$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
globals$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
globals$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
globals$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
globals$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
globals$(OBJ_EXT): INTERN.h
globals$(OBJ_EXT): av.h
globals$(OBJ_EXT): config.h
globals$(OBJ_EXT): cop.h
globals$(OBJ_EXT): cv.h
globals$(OBJ_EXT): embed.h
globals$(OBJ_EXT): embedvar.h
globals$(OBJ_EXT): form.h
globals$(OBJ_EXT): globals.c
globals$(OBJ_EXT): gv.h
globals$(OBJ_EXT): handy.h
globals$(OBJ_EXT): hv.h
globals$(OBJ_EXT): intrpvar.h
globals$(OBJ_EXT): iperlsys.h
globals$(OBJ_EXT): l1_char_class_tab.h
globals$(OBJ_EXT): mg.h
globals$(OBJ_EXT): mg_vtable.h
globals$(OBJ_EXT): mydtrace.h
globals$(OBJ_EXT): op.h
globals$(OBJ_EXT): op_reg_common.h
globals$(OBJ_EXT): opcode.h
globals$(OBJ_EXT): opnames.h
globals$(OBJ_EXT): overload.h
globals$(OBJ_EXT): pad.h
globals$(OBJ_EXT): parser.h
globals$(OBJ_EXT): patchlevel.h
globals$(OBJ_EXT): perl.h
globals$(OBJ_EXT): perlapi.h
globals$(OBJ_EXT): perlio.h
globals$(OBJ_EXT): perlvars.h
globals$(OBJ_EXT): perly.h
globals$(OBJ_EXT): pp.h
globals$(OBJ_EXT): proto.h
globals$(OBJ_EXT): regexp.h
globals$(OBJ_EXT): scope.h
globals$(OBJ_EXT): sv.h
globals$(OBJ_EXT): thread.h
globals$(OBJ_EXT): unixish.h
globals$(OBJ_EXT): utf8.h
globals$(OBJ_EXT): util.h
globals$(OBJ_EXT): warnings.h
globals$(OBJ_EXT): cflags
keywords$(OBJ_EXT): /usr/include/_G_config.h
keywords$(OBJ_EXT): /usr/include/alloca.h
keywords$(OBJ_EXT): /usr/include/arpa/inet.h
keywords$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
keywords$(OBJ_EXT): /usr/include/asm-generic/errno.h
keywords$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
keywords$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
keywords$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
keywords$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
keywords$(OBJ_EXT): /usr/include/asm-x86_64/param.h
keywords$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
keywords$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
keywords$(OBJ_EXT): /usr/include/asm/errno.h
keywords$(OBJ_EXT): /usr/include/asm/ioctl.h
keywords$(OBJ_EXT): /usr/include/asm/ioctls.h
keywords$(OBJ_EXT): /usr/include/asm/param.h
keywords$(OBJ_EXT): /usr/include/asm/socket.h
keywords$(OBJ_EXT): /usr/include/asm/sockios.h
keywords$(OBJ_EXT): /usr/include/bits/byteswap.h
keywords$(OBJ_EXT): /usr/include/bits/confname.h
keywords$(OBJ_EXT): /usr/include/bits/dirent.h
keywords$(OBJ_EXT): /usr/include/bits/endian.h
keywords$(OBJ_EXT): /usr/include/bits/environments.h
keywords$(OBJ_EXT): /usr/include/bits/errno.h
keywords$(OBJ_EXT): /usr/include/bits/fcntl.h
keywords$(OBJ_EXT): /usr/include/bits/huge_val.h
keywords$(OBJ_EXT): /usr/include/bits/huge_valf.h
keywords$(OBJ_EXT): /usr/include/bits/huge_vall.h
keywords$(OBJ_EXT): /usr/include/bits/in.h
keywords$(OBJ_EXT): /usr/include/bits/inf.h
keywords$(OBJ_EXT): /usr/include/bits/ioctl-types.h
keywords$(OBJ_EXT): /usr/include/bits/ioctls.h
keywords$(OBJ_EXT): /usr/include/bits/ipc.h
keywords$(OBJ_EXT): /usr/include/bits/ipctypes.h
keywords$(OBJ_EXT): /usr/include/bits/local_lim.h
keywords$(OBJ_EXT): /usr/include/bits/locale.h
keywords$(OBJ_EXT): /usr/include/bits/mathcalls.h
keywords$(OBJ_EXT): /usr/include/bits/mathdef.h
keywords$(OBJ_EXT): /usr/include/bits/nan.h
keywords$(OBJ_EXT): /usr/include/bits/netdb.h
keywords$(OBJ_EXT): /usr/include/bits/posix1_lim.h
keywords$(OBJ_EXT): /usr/include/bits/posix2_lim.h
keywords$(OBJ_EXT): /usr/include/bits/posix_opt.h
keywords$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
keywords$(OBJ_EXT): /usr/include/bits/resource.h
keywords$(OBJ_EXT): /usr/include/bits/select.h
keywords$(OBJ_EXT): /usr/include/bits/sem.h
keywords$(OBJ_EXT): /usr/include/bits/setjmp.h
keywords$(OBJ_EXT): /usr/include/bits/sigaction.h
keywords$(OBJ_EXT): /usr/include/bits/sigcontext.h
keywords$(OBJ_EXT): /usr/include/bits/siginfo.h
keywords$(OBJ_EXT): /usr/include/bits/signum.h
keywords$(OBJ_EXT): /usr/include/bits/sigset.h
keywords$(OBJ_EXT): /usr/include/bits/sigstack.h
keywords$(OBJ_EXT): /usr/include/bits/sigthread.h
keywords$(OBJ_EXT): /usr/include/bits/sockaddr.h
keywords$(OBJ_EXT): /usr/include/bits/socket.h
keywords$(OBJ_EXT): /usr/include/bits/stat.h
keywords$(OBJ_EXT): /usr/include/bits/stdio_lim.h
keywords$(OBJ_EXT): /usr/include/bits/sys_errlist.h
keywords$(OBJ_EXT): /usr/include/bits/time.h
keywords$(OBJ_EXT): /usr/include/bits/types.h
keywords$(OBJ_EXT): /usr/include/bits/typesizes.h
keywords$(OBJ_EXT): /usr/include/bits/uio.h
keywords$(OBJ_EXT): /usr/include/bits/waitflags.h
keywords$(OBJ_EXT): /usr/include/bits/waitstatus.h
keywords$(OBJ_EXT): /usr/include/bits/wchar.h
keywords$(OBJ_EXT): /usr/include/bits/wordsize.h
keywords$(OBJ_EXT): /usr/include/bits/xopen_lim.h
keywords$(OBJ_EXT): /usr/include/ctype.h
keywords$(OBJ_EXT): /usr/include/dirent.h
keywords$(OBJ_EXT): /usr/include/endian.h
keywords$(OBJ_EXT): /usr/include/errno.h
keywords$(OBJ_EXT): /usr/include/fcntl.h
keywords$(OBJ_EXT): /usr/include/features.h
keywords$(OBJ_EXT): /usr/include/gconv.h
keywords$(OBJ_EXT): /usr/include/getopt.h
keywords$(OBJ_EXT): /usr/include/gnu/stubs-64.h
keywords$(OBJ_EXT): /usr/include/gnu/stubs.h
keywords$(OBJ_EXT): /usr/include/inttypes.h
keywords$(OBJ_EXT): /usr/include/libio.h
keywords$(OBJ_EXT): /usr/include/limits.h
keywords$(OBJ_EXT): /usr/include/linux/errno.h
keywords$(OBJ_EXT): /usr/include/linux/limits.h
keywords$(OBJ_EXT): /usr/include/linux/param.h
keywords$(OBJ_EXT): /usr/include/locale.h
keywords$(OBJ_EXT): /usr/include/math.h
keywords$(OBJ_EXT): /usr/include/netdb.h
keywords$(OBJ_EXT): /usr/include/netinet/in.h
keywords$(OBJ_EXT): /usr/include/rpc/netdb.h
keywords$(OBJ_EXT): /usr/include/setjmp.h
keywords$(OBJ_EXT): /usr/include/signal.h
keywords$(OBJ_EXT): /usr/include/stdint.h
keywords$(OBJ_EXT): /usr/include/stdio.h
keywords$(OBJ_EXT): /usr/include/stdlib.h
keywords$(OBJ_EXT): /usr/include/string.h
keywords$(OBJ_EXT): /usr/include/sys/cdefs.h
keywords$(OBJ_EXT): /usr/include/sys/file.h
keywords$(OBJ_EXT): /usr/include/sys/ioctl.h
keywords$(OBJ_EXT): /usr/include/sys/ipc.h
keywords$(OBJ_EXT): /usr/include/sys/param.h
keywords$(OBJ_EXT): /usr/include/sys/resource.h
keywords$(OBJ_EXT): /usr/include/sys/select.h
keywords$(OBJ_EXT): /usr/include/sys/sem.h
keywords$(OBJ_EXT): /usr/include/sys/socket.h
keywords$(OBJ_EXT): /usr/include/sys/stat.h
keywords$(OBJ_EXT): /usr/include/sys/sysmacros.h
keywords$(OBJ_EXT): /usr/include/sys/time.h
keywords$(OBJ_EXT): /usr/include/sys/times.h
keywords$(OBJ_EXT): /usr/include/sys/ttydefaults.h
keywords$(OBJ_EXT): /usr/include/sys/types.h
keywords$(OBJ_EXT): /usr/include/sys/ucontext.h
keywords$(OBJ_EXT): /usr/include/sys/uio.h
keywords$(OBJ_EXT): /usr/include/sys/wait.h
keywords$(OBJ_EXT): /usr/include/time.h
keywords$(OBJ_EXT): /usr/include/unistd.h
keywords$(OBJ_EXT): /usr/include/wchar.h
keywords$(OBJ_EXT): /usr/include/xlocale.h
keywords$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
keywords$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
keywords$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
keywords$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
keywords$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
keywords$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
keywords$(OBJ_EXT): EXTERN.h
keywords$(OBJ_EXT): av.h
keywords$(OBJ_EXT): config.h
keywords$(OBJ_EXT): cop.h
keywords$(OBJ_EXT): cv.h
keywords$(OBJ_EXT): embed.h
keywords$(OBJ_EXT): embedvar.h
keywords$(OBJ_EXT): feature.h
keywords$(OBJ_EXT): form.h
keywords$(OBJ_EXT): gv.h
keywords$(OBJ_EXT): handy.h
keywords$(OBJ_EXT): hv.h
keywords$(OBJ_EXT): intrpvar.h
keywords$(OBJ_EXT): iperlsys.h
keywords$(OBJ_EXT): keywords.c
keywords$(OBJ_EXT): keywords.h
keywords$(OBJ_EXT): mg.h
keywords$(OBJ_EXT): mg_vtable.h
keywords$(OBJ_EXT): mydtrace.h
keywords$(OBJ_EXT): op.h
keywords$(OBJ_EXT): op_reg_common.h
keywords$(OBJ_EXT): opcode.h
keywords$(OBJ_EXT): opnames.h
keywords$(OBJ_EXT): overload.h
keywords$(OBJ_EXT): pad.h
keywords$(OBJ_EXT): parser.h
keywords$(OBJ_EXT): patchlevel.h
keywords$(OBJ_EXT): perl.h
keywords$(OBJ_EXT): perlio.h
keywords$(OBJ_EXT): perlvars.h
keywords$(OBJ_EXT): perly.h
keywords$(OBJ_EXT): pp.h
keywords$(OBJ_EXT): proto.h
keywords$(OBJ_EXT): regexp.h
keywords$(OBJ_EXT): scope.h
keywords$(OBJ_EXT): sv.h
keywords$(OBJ_EXT): thread.h
keywords$(OBJ_EXT): unixish.h
keywords$(OBJ_EXT): utf8.h
keywords$(OBJ_EXT): util.h
keywords$(OBJ_EXT): warnings.h
keywords$(OBJ_EXT): cflags
perlio$(OBJ_EXT): /usr/include/_G_config.h
perlio$(OBJ_EXT): /usr/include/alloca.h
perlio$(OBJ_EXT): /usr/include/arpa/inet.h
perlio$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
perlio$(OBJ_EXT): /usr/include/asm-generic/errno.h
perlio$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
perlio$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
perlio$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
perlio$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
perlio$(OBJ_EXT): /usr/include/asm-x86_64/param.h
perlio$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
perlio$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
perlio$(OBJ_EXT): /usr/include/asm/errno.h
perlio$(OBJ_EXT): /usr/include/asm/ioctl.h
perlio$(OBJ_EXT): /usr/include/asm/ioctls.h
perlio$(OBJ_EXT): /usr/include/asm/param.h
perlio$(OBJ_EXT): /usr/include/asm/socket.h
perlio$(OBJ_EXT): /usr/include/asm/sockios.h
perlio$(OBJ_EXT): /usr/include/bits/byteswap.h
perlio$(OBJ_EXT): /usr/include/bits/confname.h
perlio$(OBJ_EXT): /usr/include/bits/dirent.h
perlio$(OBJ_EXT): /usr/include/bits/endian.h
perlio$(OBJ_EXT): /usr/include/bits/environments.h
perlio$(OBJ_EXT): /usr/include/bits/errno.h
perlio$(OBJ_EXT): /usr/include/bits/fcntl.h
perlio$(OBJ_EXT): /usr/include/bits/huge_val.h
perlio$(OBJ_EXT): /usr/include/bits/huge_valf.h
perlio$(OBJ_EXT): /usr/include/bits/huge_vall.h
perlio$(OBJ_EXT): /usr/include/bits/in.h
perlio$(OBJ_EXT): /usr/include/bits/inf.h
perlio$(OBJ_EXT): /usr/include/bits/ioctl-types.h
perlio$(OBJ_EXT): /usr/include/bits/ioctls.h
perlio$(OBJ_EXT): /usr/include/bits/ipc.h
perlio$(OBJ_EXT): /usr/include/bits/ipctypes.h
perlio$(OBJ_EXT): /usr/include/bits/local_lim.h
perlio$(OBJ_EXT): /usr/include/bits/locale.h
perlio$(OBJ_EXT): /usr/include/bits/mathcalls.h
perlio$(OBJ_EXT): /usr/include/bits/mathdef.h
perlio$(OBJ_EXT): /usr/include/bits/nan.h
perlio$(OBJ_EXT): /usr/include/bits/netdb.h
perlio$(OBJ_EXT): /usr/include/bits/posix1_lim.h
perlio$(OBJ_EXT): /usr/include/bits/posix2_lim.h
perlio$(OBJ_EXT): /usr/include/bits/posix_opt.h
perlio$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
perlio$(OBJ_EXT): /usr/include/bits/resource.h
perlio$(OBJ_EXT): /usr/include/bits/select.h
perlio$(OBJ_EXT): /usr/include/bits/sem.h
perlio$(OBJ_EXT): /usr/include/bits/setjmp.h
perlio$(OBJ_EXT): /usr/include/bits/sigaction.h
perlio$(OBJ_EXT): /usr/include/bits/sigcontext.h
perlio$(OBJ_EXT): /usr/include/bits/siginfo.h
perlio$(OBJ_EXT): /usr/include/bits/signum.h
perlio$(OBJ_EXT): /usr/include/bits/sigset.h
perlio$(OBJ_EXT): /usr/include/bits/sigstack.h
perlio$(OBJ_EXT): /usr/include/bits/sigthread.h
perlio$(OBJ_EXT): /usr/include/bits/sockaddr.h
perlio$(OBJ_EXT): /usr/include/bits/socket.h
perlio$(OBJ_EXT): /usr/include/bits/stat.h
perlio$(OBJ_EXT): /usr/include/bits/stdio_lim.h
perlio$(OBJ_EXT): /usr/include/bits/sys_errlist.h
perlio$(OBJ_EXT): /usr/include/bits/time.h
perlio$(OBJ_EXT): /usr/include/bits/types.h
perlio$(OBJ_EXT): /usr/include/bits/typesizes.h
perlio$(OBJ_EXT): /usr/include/bits/uio.h
perlio$(OBJ_EXT): /usr/include/bits/waitflags.h
perlio$(OBJ_EXT): /usr/include/bits/waitstatus.h
perlio$(OBJ_EXT): /usr/include/bits/wchar.h
perlio$(OBJ_EXT): /usr/include/bits/wordsize.h
perlio$(OBJ_EXT): /usr/include/bits/xopen_lim.h
perlio$(OBJ_EXT): /usr/include/ctype.h
perlio$(OBJ_EXT): /usr/include/dirent.h
perlio$(OBJ_EXT): /usr/include/endian.h
perlio$(OBJ_EXT): /usr/include/errno.h
perlio$(OBJ_EXT): /usr/include/fcntl.h
perlio$(OBJ_EXT): /usr/include/features.h
perlio$(OBJ_EXT): /usr/include/gconv.h
perlio$(OBJ_EXT): /usr/include/getopt.h
perlio$(OBJ_EXT): /usr/include/gnu/stubs-64.h
perlio$(OBJ_EXT): /usr/include/gnu/stubs.h
perlio$(OBJ_EXT): /usr/include/inttypes.h
perlio$(OBJ_EXT): /usr/include/libio.h
perlio$(OBJ_EXT): /usr/include/limits.h
perlio$(OBJ_EXT): /usr/include/linux/errno.h
perlio$(OBJ_EXT): /usr/include/linux/limits.h
perlio$(OBJ_EXT): /usr/include/linux/param.h
perlio$(OBJ_EXT): /usr/include/locale.h
perlio$(OBJ_EXT): /usr/include/math.h
perlio$(OBJ_EXT): /usr/include/netdb.h
perlio$(OBJ_EXT): /usr/include/netinet/in.h
perlio$(OBJ_EXT): /usr/include/rpc/netdb.h
perlio$(OBJ_EXT): /usr/include/setjmp.h
perlio$(OBJ_EXT): /usr/include/signal.h
perlio$(OBJ_EXT): /usr/include/stdint.h
perlio$(OBJ_EXT): /usr/include/stdio.h
perlio$(OBJ_EXT): /usr/include/stdlib.h
perlio$(OBJ_EXT): /usr/include/string.h
perlio$(OBJ_EXT): /usr/include/sys/cdefs.h
perlio$(OBJ_EXT): /usr/include/sys/file.h
perlio$(OBJ_EXT): /usr/include/sys/ioctl.h
perlio$(OBJ_EXT): /usr/include/sys/ipc.h
perlio$(OBJ_EXT): /usr/include/sys/param.h
perlio$(OBJ_EXT): /usr/include/sys/resource.h
perlio$(OBJ_EXT): /usr/include/sys/select.h
perlio$(OBJ_EXT): /usr/include/sys/sem.h
perlio$(OBJ_EXT): /usr/include/sys/socket.h
perlio$(OBJ_EXT): /usr/include/sys/stat.h
perlio$(OBJ_EXT): /usr/include/sys/sysmacros.h
perlio$(OBJ_EXT): /usr/include/sys/time.h
perlio$(OBJ_EXT): /usr/include/sys/times.h
perlio$(OBJ_EXT): /usr/include/sys/ttydefaults.h
perlio$(OBJ_EXT): /usr/include/sys/types.h
perlio$(OBJ_EXT): /usr/include/sys/ucontext.h
perlio$(OBJ_EXT): /usr/include/sys/uio.h
perlio$(OBJ_EXT): /usr/include/sys/wait.h
perlio$(OBJ_EXT): /usr/include/time.h
perlio$(OBJ_EXT): /usr/include/unistd.h
perlio$(OBJ_EXT): /usr/include/wchar.h
perlio$(OBJ_EXT): /usr/include/xlocale.h
perlio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
perlio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
perlio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
perlio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
perlio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
perlio$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
perlio$(OBJ_EXT): EXTERN.h
perlio$(OBJ_EXT): XSUB.h
perlio$(OBJ_EXT): av.h
perlio$(OBJ_EXT): config.h
perlio$(OBJ_EXT): cop.h
perlio$(OBJ_EXT): cv.h
perlio$(OBJ_EXT): embed.h
perlio$(OBJ_EXT): embedvar.h
perlio$(OBJ_EXT): form.h
perlio$(OBJ_EXT): gv.h
perlio$(OBJ_EXT): handy.h
perlio$(OBJ_EXT): hv.h
perlio$(OBJ_EXT): intrpvar.h
perlio$(OBJ_EXT): iperlsys.h
perlio$(OBJ_EXT): mg.h
perlio$(OBJ_EXT): mg_vtable.h
perlio$(OBJ_EXT): mydtrace.h
perlio$(OBJ_EXT): op.h
perlio$(OBJ_EXT): op_reg_common.h
perlio$(OBJ_EXT): opcode.h
perlio$(OBJ_EXT): opnames.h
perlio$(OBJ_EXT): overload.h
perlio$(OBJ_EXT): pad.h
perlio$(OBJ_EXT): parser.h
perlio$(OBJ_EXT): patchlevel.h
perlio$(OBJ_EXT): perl.h
perlio$(OBJ_EXT): perlapi.h
perlio$(OBJ_EXT): perlio.c
perlio$(OBJ_EXT): perlio.h
perlio$(OBJ_EXT): perliol.h
perlio$(OBJ_EXT): perlvars.h
perlio$(OBJ_EXT): perly.h
perlio$(OBJ_EXT): pp.h
perlio$(OBJ_EXT): proto.h
perlio$(OBJ_EXT): regexp.h
perlio$(OBJ_EXT): scope.h
perlio$(OBJ_EXT): sv.h
perlio$(OBJ_EXT): thread.h
perlio$(OBJ_EXT): unixish.h
perlio$(OBJ_EXT): utf8.h
perlio$(OBJ_EXT): util.h
perlio$(OBJ_EXT): warnings.h
perlio$(OBJ_EXT): cflags
perlapi$(OBJ_EXT): /usr/include/_G_config.h
perlapi$(OBJ_EXT): /usr/include/alloca.h
perlapi$(OBJ_EXT): /usr/include/arpa/inet.h
perlapi$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
perlapi$(OBJ_EXT): /usr/include/asm-generic/errno.h
perlapi$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
perlapi$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
perlapi$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
perlapi$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
perlapi$(OBJ_EXT): /usr/include/asm-x86_64/param.h
perlapi$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
perlapi$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
perlapi$(OBJ_EXT): /usr/include/asm/errno.h
perlapi$(OBJ_EXT): /usr/include/asm/ioctl.h
perlapi$(OBJ_EXT): /usr/include/asm/ioctls.h
perlapi$(OBJ_EXT): /usr/include/asm/param.h
perlapi$(OBJ_EXT): /usr/include/asm/socket.h
perlapi$(OBJ_EXT): /usr/include/asm/sockios.h
perlapi$(OBJ_EXT): /usr/include/bits/byteswap.h
perlapi$(OBJ_EXT): /usr/include/bits/confname.h
perlapi$(OBJ_EXT): /usr/include/bits/dirent.h
perlapi$(OBJ_EXT): /usr/include/bits/endian.h
perlapi$(OBJ_EXT): /usr/include/bits/environments.h
perlapi$(OBJ_EXT): /usr/include/bits/errno.h
perlapi$(OBJ_EXT): /usr/include/bits/fcntl.h
perlapi$(OBJ_EXT): /usr/include/bits/huge_val.h
perlapi$(OBJ_EXT): /usr/include/bits/huge_valf.h
perlapi$(OBJ_EXT): /usr/include/bits/huge_vall.h
perlapi$(OBJ_EXT): /usr/include/bits/in.h
perlapi$(OBJ_EXT): /usr/include/bits/inf.h
perlapi$(OBJ_EXT): /usr/include/bits/ioctl-types.h
perlapi$(OBJ_EXT): /usr/include/bits/ioctls.h
perlapi$(OBJ_EXT): /usr/include/bits/ipc.h
perlapi$(OBJ_EXT): /usr/include/bits/ipctypes.h
perlapi$(OBJ_EXT): /usr/include/bits/local_lim.h
perlapi$(OBJ_EXT): /usr/include/bits/locale.h
perlapi$(OBJ_EXT): /usr/include/bits/mathcalls.h
perlapi$(OBJ_EXT): /usr/include/bits/mathdef.h
perlapi$(OBJ_EXT): /usr/include/bits/nan.h
perlapi$(OBJ_EXT): /usr/include/bits/netdb.h
perlapi$(OBJ_EXT): /usr/include/bits/posix1_lim.h
perlapi$(OBJ_EXT): /usr/include/bits/posix2_lim.h
perlapi$(OBJ_EXT): /usr/include/bits/posix_opt.h
perlapi$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
perlapi$(OBJ_EXT): /usr/include/bits/resource.h
perlapi$(OBJ_EXT): /usr/include/bits/select.h
perlapi$(OBJ_EXT): /usr/include/bits/sem.h
perlapi$(OBJ_EXT): /usr/include/bits/setjmp.h
perlapi$(OBJ_EXT): /usr/include/bits/sigaction.h
perlapi$(OBJ_EXT): /usr/include/bits/sigcontext.h
perlapi$(OBJ_EXT): /usr/include/bits/siginfo.h
perlapi$(OBJ_EXT): /usr/include/bits/signum.h
perlapi$(OBJ_EXT): /usr/include/bits/sigset.h
perlapi$(OBJ_EXT): /usr/include/bits/sigstack.h
perlapi$(OBJ_EXT): /usr/include/bits/sigthread.h
perlapi$(OBJ_EXT): /usr/include/bits/sockaddr.h
perlapi$(OBJ_EXT): /usr/include/bits/socket.h
perlapi$(OBJ_EXT): /usr/include/bits/stat.h
perlapi$(OBJ_EXT): /usr/include/bits/stdio_lim.h
perlapi$(OBJ_EXT): /usr/include/bits/sys_errlist.h
perlapi$(OBJ_EXT): /usr/include/bits/time.h
perlapi$(OBJ_EXT): /usr/include/bits/types.h
perlapi$(OBJ_EXT): /usr/include/bits/typesizes.h
perlapi$(OBJ_EXT): /usr/include/bits/uio.h
perlapi$(OBJ_EXT): /usr/include/bits/waitflags.h
perlapi$(OBJ_EXT): /usr/include/bits/waitstatus.h
perlapi$(OBJ_EXT): /usr/include/bits/wchar.h
perlapi$(OBJ_EXT): /usr/include/bits/wordsize.h
perlapi$(OBJ_EXT): /usr/include/bits/xopen_lim.h
perlapi$(OBJ_EXT): /usr/include/ctype.h
perlapi$(OBJ_EXT): /usr/include/dirent.h
perlapi$(OBJ_EXT): /usr/include/endian.h
perlapi$(OBJ_EXT): /usr/include/errno.h
perlapi$(OBJ_EXT): /usr/include/fcntl.h
perlapi$(OBJ_EXT): /usr/include/features.h
perlapi$(OBJ_EXT): /usr/include/gconv.h
perlapi$(OBJ_EXT): /usr/include/getopt.h
perlapi$(OBJ_EXT): /usr/include/gnu/stubs-64.h
perlapi$(OBJ_EXT): /usr/include/gnu/stubs.h
perlapi$(OBJ_EXT): /usr/include/inttypes.h
perlapi$(OBJ_EXT): /usr/include/libio.h
perlapi$(OBJ_EXT): /usr/include/limits.h
perlapi$(OBJ_EXT): /usr/include/linux/errno.h
perlapi$(OBJ_EXT): /usr/include/linux/limits.h
perlapi$(OBJ_EXT): /usr/include/linux/param.h
perlapi$(OBJ_EXT): /usr/include/locale.h
perlapi$(OBJ_EXT): /usr/include/math.h
perlapi$(OBJ_EXT): /usr/include/netdb.h
perlapi$(OBJ_EXT): /usr/include/netinet/in.h
perlapi$(OBJ_EXT): /usr/include/rpc/netdb.h
perlapi$(OBJ_EXT): /usr/include/setjmp.h
perlapi$(OBJ_EXT): /usr/include/signal.h
perlapi$(OBJ_EXT): /usr/include/stdint.h
perlapi$(OBJ_EXT): /usr/include/stdio.h
perlapi$(OBJ_EXT): /usr/include/stdlib.h
perlapi$(OBJ_EXT): /usr/include/string.h
perlapi$(OBJ_EXT): /usr/include/sys/cdefs.h
perlapi$(OBJ_EXT): /usr/include/sys/file.h
perlapi$(OBJ_EXT): /usr/include/sys/ioctl.h
perlapi$(OBJ_EXT): /usr/include/sys/ipc.h
perlapi$(OBJ_EXT): /usr/include/sys/param.h
perlapi$(OBJ_EXT): /usr/include/sys/resource.h
perlapi$(OBJ_EXT): /usr/include/sys/select.h
perlapi$(OBJ_EXT): /usr/include/sys/sem.h
perlapi$(OBJ_EXT): /usr/include/sys/socket.h
perlapi$(OBJ_EXT): /usr/include/sys/stat.h
perlapi$(OBJ_EXT): /usr/include/sys/sysmacros.h
perlapi$(OBJ_EXT): /usr/include/sys/time.h
perlapi$(OBJ_EXT): /usr/include/sys/times.h
perlapi$(OBJ_EXT): /usr/include/sys/ttydefaults.h
perlapi$(OBJ_EXT): /usr/include/sys/types.h
perlapi$(OBJ_EXT): /usr/include/sys/ucontext.h
perlapi$(OBJ_EXT): /usr/include/sys/uio.h
perlapi$(OBJ_EXT): /usr/include/sys/wait.h
perlapi$(OBJ_EXT): /usr/include/time.h
perlapi$(OBJ_EXT): /usr/include/unistd.h
perlapi$(OBJ_EXT): /usr/include/wchar.h
perlapi$(OBJ_EXT): /usr/include/xlocale.h
perlapi$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
perlapi$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
perlapi$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
perlapi$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
perlapi$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
perlapi$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
perlapi$(OBJ_EXT): EXTERN.h
perlapi$(OBJ_EXT): av.h
perlapi$(OBJ_EXT): config.h
perlapi$(OBJ_EXT): cop.h
perlapi$(OBJ_EXT): cv.h
perlapi$(OBJ_EXT): embed.h
perlapi$(OBJ_EXT): embedvar.h
perlapi$(OBJ_EXT): form.h
perlapi$(OBJ_EXT): gv.h
perlapi$(OBJ_EXT): handy.h
perlapi$(OBJ_EXT): hv.h
perlapi$(OBJ_EXT): intrpvar.h
perlapi$(OBJ_EXT): iperlsys.h
perlapi$(OBJ_EXT): mg.h
perlapi$(OBJ_EXT): mg_vtable.h
perlapi$(OBJ_EXT): mydtrace.h
perlapi$(OBJ_EXT): op.h
perlapi$(OBJ_EXT): op_reg_common.h
perlapi$(OBJ_EXT): opcode.h
perlapi$(OBJ_EXT): opnames.h
perlapi$(OBJ_EXT): overload.h
perlapi$(OBJ_EXT): pad.h
perlapi$(OBJ_EXT): parser.h
perlapi$(OBJ_EXT): patchlevel.h
perlapi$(OBJ_EXT): perl.h
perlapi$(OBJ_EXT): perlapi.c
perlapi$(OBJ_EXT): perlapi.h
perlapi$(OBJ_EXT): perlio.h
perlapi$(OBJ_EXT): perlvars.h
perlapi$(OBJ_EXT): perly.h
perlapi$(OBJ_EXT): pp.h
perlapi$(OBJ_EXT): proto.h
perlapi$(OBJ_EXT): regexp.h
perlapi$(OBJ_EXT): scope.h
perlapi$(OBJ_EXT): sv.h
perlapi$(OBJ_EXT): thread.h
perlapi$(OBJ_EXT): unixish.h
perlapi$(OBJ_EXT): utf8.h
perlapi$(OBJ_EXT): util.h
perlapi$(OBJ_EXT): warnings.h
perlapi$(OBJ_EXT): cflags
numeric$(OBJ_EXT): /usr/include/_G_config.h
numeric$(OBJ_EXT): /usr/include/alloca.h
numeric$(OBJ_EXT): /usr/include/arpa/inet.h
numeric$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
numeric$(OBJ_EXT): /usr/include/asm-generic/errno.h
numeric$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
numeric$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
numeric$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
numeric$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
numeric$(OBJ_EXT): /usr/include/asm-x86_64/param.h
numeric$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
numeric$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
numeric$(OBJ_EXT): /usr/include/asm/errno.h
numeric$(OBJ_EXT): /usr/include/asm/ioctl.h
numeric$(OBJ_EXT): /usr/include/asm/ioctls.h
numeric$(OBJ_EXT): /usr/include/asm/param.h
numeric$(OBJ_EXT): /usr/include/asm/socket.h
numeric$(OBJ_EXT): /usr/include/asm/sockios.h
numeric$(OBJ_EXT): /usr/include/bits/byteswap.h
numeric$(OBJ_EXT): /usr/include/bits/confname.h
numeric$(OBJ_EXT): /usr/include/bits/dirent.h
numeric$(OBJ_EXT): /usr/include/bits/endian.h
numeric$(OBJ_EXT): /usr/include/bits/environments.h
numeric$(OBJ_EXT): /usr/include/bits/errno.h
numeric$(OBJ_EXT): /usr/include/bits/fcntl.h
numeric$(OBJ_EXT): /usr/include/bits/huge_val.h
numeric$(OBJ_EXT): /usr/include/bits/huge_valf.h
numeric$(OBJ_EXT): /usr/include/bits/huge_vall.h
numeric$(OBJ_EXT): /usr/include/bits/in.h
numeric$(OBJ_EXT): /usr/include/bits/inf.h
numeric$(OBJ_EXT): /usr/include/bits/ioctl-types.h
numeric$(OBJ_EXT): /usr/include/bits/ioctls.h
numeric$(OBJ_EXT): /usr/include/bits/ipc.h
numeric$(OBJ_EXT): /usr/include/bits/ipctypes.h
numeric$(OBJ_EXT): /usr/include/bits/local_lim.h
numeric$(OBJ_EXT): /usr/include/bits/locale.h
numeric$(OBJ_EXT): /usr/include/bits/mathcalls.h
numeric$(OBJ_EXT): /usr/include/bits/mathdef.h
numeric$(OBJ_EXT): /usr/include/bits/nan.h
numeric$(OBJ_EXT): /usr/include/bits/netdb.h
numeric$(OBJ_EXT): /usr/include/bits/posix1_lim.h
numeric$(OBJ_EXT): /usr/include/bits/posix2_lim.h
numeric$(OBJ_EXT): /usr/include/bits/posix_opt.h
numeric$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
numeric$(OBJ_EXT): /usr/include/bits/resource.h
numeric$(OBJ_EXT): /usr/include/bits/select.h
numeric$(OBJ_EXT): /usr/include/bits/sem.h
numeric$(OBJ_EXT): /usr/include/bits/setjmp.h
numeric$(OBJ_EXT): /usr/include/bits/sigaction.h
numeric$(OBJ_EXT): /usr/include/bits/sigcontext.h
numeric$(OBJ_EXT): /usr/include/bits/siginfo.h
numeric$(OBJ_EXT): /usr/include/bits/signum.h
numeric$(OBJ_EXT): /usr/include/bits/sigset.h
numeric$(OBJ_EXT): /usr/include/bits/sigstack.h
numeric$(OBJ_EXT): /usr/include/bits/sigthread.h
numeric$(OBJ_EXT): /usr/include/bits/sockaddr.h
numeric$(OBJ_EXT): /usr/include/bits/socket.h
numeric$(OBJ_EXT): /usr/include/bits/stat.h
numeric$(OBJ_EXT): /usr/include/bits/stdio_lim.h
numeric$(OBJ_EXT): /usr/include/bits/sys_errlist.h
numeric$(OBJ_EXT): /usr/include/bits/time.h
numeric$(OBJ_EXT): /usr/include/bits/types.h
numeric$(OBJ_EXT): /usr/include/bits/typesizes.h
numeric$(OBJ_EXT): /usr/include/bits/uio.h
numeric$(OBJ_EXT): /usr/include/bits/waitflags.h
numeric$(OBJ_EXT): /usr/include/bits/waitstatus.h
numeric$(OBJ_EXT): /usr/include/bits/wchar.h
numeric$(OBJ_EXT): /usr/include/bits/wordsize.h
numeric$(OBJ_EXT): /usr/include/bits/xopen_lim.h
numeric$(OBJ_EXT): /usr/include/ctype.h
numeric$(OBJ_EXT): /usr/include/dirent.h
numeric$(OBJ_EXT): /usr/include/endian.h
numeric$(OBJ_EXT): /usr/include/errno.h
numeric$(OBJ_EXT): /usr/include/fcntl.h
numeric$(OBJ_EXT): /usr/include/features.h
numeric$(OBJ_EXT): /usr/include/gconv.h
numeric$(OBJ_EXT): /usr/include/getopt.h
numeric$(OBJ_EXT): /usr/include/gnu/stubs-64.h
numeric$(OBJ_EXT): /usr/include/gnu/stubs.h
numeric$(OBJ_EXT): /usr/include/inttypes.h
numeric$(OBJ_EXT): /usr/include/libio.h
numeric$(OBJ_EXT): /usr/include/limits.h
numeric$(OBJ_EXT): /usr/include/linux/errno.h
numeric$(OBJ_EXT): /usr/include/linux/limits.h
numeric$(OBJ_EXT): /usr/include/linux/param.h
numeric$(OBJ_EXT): /usr/include/locale.h
numeric$(OBJ_EXT): /usr/include/math.h
numeric$(OBJ_EXT): /usr/include/netdb.h
numeric$(OBJ_EXT): /usr/include/netinet/in.h
numeric$(OBJ_EXT): /usr/include/rpc/netdb.h
numeric$(OBJ_EXT): /usr/include/setjmp.h
numeric$(OBJ_EXT): /usr/include/signal.h
numeric$(OBJ_EXT): /usr/include/stdint.h
numeric$(OBJ_EXT): /usr/include/stdio.h
numeric$(OBJ_EXT): /usr/include/stdlib.h
numeric$(OBJ_EXT): /usr/include/string.h
numeric$(OBJ_EXT): /usr/include/sys/cdefs.h
numeric$(OBJ_EXT): /usr/include/sys/file.h
numeric$(OBJ_EXT): /usr/include/sys/ioctl.h
numeric$(OBJ_EXT): /usr/include/sys/ipc.h
numeric$(OBJ_EXT): /usr/include/sys/param.h
numeric$(OBJ_EXT): /usr/include/sys/resource.h
numeric$(OBJ_EXT): /usr/include/sys/select.h
numeric$(OBJ_EXT): /usr/include/sys/sem.h
numeric$(OBJ_EXT): /usr/include/sys/socket.h
numeric$(OBJ_EXT): /usr/include/sys/stat.h
numeric$(OBJ_EXT): /usr/include/sys/sysmacros.h
numeric$(OBJ_EXT): /usr/include/sys/time.h
numeric$(OBJ_EXT): /usr/include/sys/times.h
numeric$(OBJ_EXT): /usr/include/sys/ttydefaults.h
numeric$(OBJ_EXT): /usr/include/sys/types.h
numeric$(OBJ_EXT): /usr/include/sys/ucontext.h
numeric$(OBJ_EXT): /usr/include/sys/uio.h
numeric$(OBJ_EXT): /usr/include/sys/wait.h
numeric$(OBJ_EXT): /usr/include/time.h
numeric$(OBJ_EXT): /usr/include/unistd.h
numeric$(OBJ_EXT): /usr/include/wchar.h
numeric$(OBJ_EXT): /usr/include/xlocale.h
numeric$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
numeric$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
numeric$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
numeric$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
numeric$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
numeric$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
numeric$(OBJ_EXT): EXTERN.h
numeric$(OBJ_EXT): av.h
numeric$(OBJ_EXT): config.h
numeric$(OBJ_EXT): cop.h
numeric$(OBJ_EXT): cv.h
numeric$(OBJ_EXT): embed.h
numeric$(OBJ_EXT): embedvar.h
numeric$(OBJ_EXT): form.h
numeric$(OBJ_EXT): gv.h
numeric$(OBJ_EXT): handy.h
numeric$(OBJ_EXT): hv.h
numeric$(OBJ_EXT): intrpvar.h
numeric$(OBJ_EXT): iperlsys.h
numeric$(OBJ_EXT): mg.h
numeric$(OBJ_EXT): mg_vtable.h
numeric$(OBJ_EXT): mydtrace.h
numeric$(OBJ_EXT): numeric.c
numeric$(OBJ_EXT): op.h
numeric$(OBJ_EXT): op_reg_common.h
numeric$(OBJ_EXT): opcode.h
numeric$(OBJ_EXT): opnames.h
numeric$(OBJ_EXT): overload.h
numeric$(OBJ_EXT): pad.h
numeric$(OBJ_EXT): parser.h
numeric$(OBJ_EXT): patchlevel.h
numeric$(OBJ_EXT): perl.h
numeric$(OBJ_EXT): perlio.h
numeric$(OBJ_EXT): perlvars.h
numeric$(OBJ_EXT): perly.h
numeric$(OBJ_EXT): pp.h
numeric$(OBJ_EXT): proto.h
numeric$(OBJ_EXT): regexp.h
numeric$(OBJ_EXT): scope.h
numeric$(OBJ_EXT): sv.h
numeric$(OBJ_EXT): thread.h
numeric$(OBJ_EXT): unixish.h
numeric$(OBJ_EXT): utf8.h
numeric$(OBJ_EXT): util.h
numeric$(OBJ_EXT): warnings.h
numeric$(OBJ_EXT): cflags
mathoms$(OBJ_EXT): /usr/include/_G_config.h
mathoms$(OBJ_EXT): /usr/include/alloca.h
mathoms$(OBJ_EXT): /usr/include/arpa/inet.h
mathoms$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
mathoms$(OBJ_EXT): /usr/include/asm-generic/errno.h
mathoms$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
mathoms$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
mathoms$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
mathoms$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
mathoms$(OBJ_EXT): /usr/include/asm-x86_64/param.h
mathoms$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
mathoms$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
mathoms$(OBJ_EXT): /usr/include/asm/errno.h
mathoms$(OBJ_EXT): /usr/include/asm/ioctl.h
mathoms$(OBJ_EXT): /usr/include/asm/ioctls.h
mathoms$(OBJ_EXT): /usr/include/asm/param.h
mathoms$(OBJ_EXT): /usr/include/asm/socket.h
mathoms$(OBJ_EXT): /usr/include/asm/sockios.h
mathoms$(OBJ_EXT): /usr/include/bits/byteswap.h
mathoms$(OBJ_EXT): /usr/include/bits/confname.h
mathoms$(OBJ_EXT): /usr/include/bits/dirent.h
mathoms$(OBJ_EXT): /usr/include/bits/endian.h
mathoms$(OBJ_EXT): /usr/include/bits/environments.h
mathoms$(OBJ_EXT): /usr/include/bits/errno.h
mathoms$(OBJ_EXT): /usr/include/bits/fcntl.h
mathoms$(OBJ_EXT): /usr/include/bits/huge_val.h
mathoms$(OBJ_EXT): /usr/include/bits/huge_valf.h
mathoms$(OBJ_EXT): /usr/include/bits/huge_vall.h
mathoms$(OBJ_EXT): /usr/include/bits/in.h
mathoms$(OBJ_EXT): /usr/include/bits/inf.h
mathoms$(OBJ_EXT): /usr/include/bits/ioctl-types.h
mathoms$(OBJ_EXT): /usr/include/bits/ioctls.h
mathoms$(OBJ_EXT): /usr/include/bits/ipc.h
mathoms$(OBJ_EXT): /usr/include/bits/ipctypes.h
mathoms$(OBJ_EXT): /usr/include/bits/local_lim.h
mathoms$(OBJ_EXT): /usr/include/bits/locale.h
mathoms$(OBJ_EXT): /usr/include/bits/mathcalls.h
mathoms$(OBJ_EXT): /usr/include/bits/mathdef.h
mathoms$(OBJ_EXT): /usr/include/bits/nan.h
mathoms$(OBJ_EXT): /usr/include/bits/netdb.h
mathoms$(OBJ_EXT): /usr/include/bits/posix1_lim.h
mathoms$(OBJ_EXT): /usr/include/bits/posix2_lim.h
mathoms$(OBJ_EXT): /usr/include/bits/posix_opt.h
mathoms$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
mathoms$(OBJ_EXT): /usr/include/bits/resource.h
mathoms$(OBJ_EXT): /usr/include/bits/select.h
mathoms$(OBJ_EXT): /usr/include/bits/sem.h
mathoms$(OBJ_EXT): /usr/include/bits/setjmp.h
mathoms$(OBJ_EXT): /usr/include/bits/sigaction.h
mathoms$(OBJ_EXT): /usr/include/bits/sigcontext.h
mathoms$(OBJ_EXT): /usr/include/bits/siginfo.h
mathoms$(OBJ_EXT): /usr/include/bits/signum.h
mathoms$(OBJ_EXT): /usr/include/bits/sigset.h
mathoms$(OBJ_EXT): /usr/include/bits/sigstack.h
mathoms$(OBJ_EXT): /usr/include/bits/sigthread.h
mathoms$(OBJ_EXT): /usr/include/bits/sockaddr.h
mathoms$(OBJ_EXT): /usr/include/bits/socket.h
mathoms$(OBJ_EXT): /usr/include/bits/stat.h
mathoms$(OBJ_EXT): /usr/include/bits/stdio_lim.h
mathoms$(OBJ_EXT): /usr/include/bits/sys_errlist.h
mathoms$(OBJ_EXT): /usr/include/bits/time.h
mathoms$(OBJ_EXT): /usr/include/bits/types.h
mathoms$(OBJ_EXT): /usr/include/bits/typesizes.h
mathoms$(OBJ_EXT): /usr/include/bits/uio.h
mathoms$(OBJ_EXT): /usr/include/bits/waitflags.h
mathoms$(OBJ_EXT): /usr/include/bits/waitstatus.h
mathoms$(OBJ_EXT): /usr/include/bits/wchar.h
mathoms$(OBJ_EXT): /usr/include/bits/wordsize.h
mathoms$(OBJ_EXT): /usr/include/bits/xopen_lim.h
mathoms$(OBJ_EXT): /usr/include/ctype.h
mathoms$(OBJ_EXT): /usr/include/dirent.h
mathoms$(OBJ_EXT): /usr/include/endian.h
mathoms$(OBJ_EXT): /usr/include/errno.h
mathoms$(OBJ_EXT): /usr/include/fcntl.h
mathoms$(OBJ_EXT): /usr/include/features.h
mathoms$(OBJ_EXT): /usr/include/gconv.h
mathoms$(OBJ_EXT): /usr/include/getopt.h
mathoms$(OBJ_EXT): /usr/include/gnu/stubs-64.h
mathoms$(OBJ_EXT): /usr/include/gnu/stubs.h
mathoms$(OBJ_EXT): /usr/include/inttypes.h
mathoms$(OBJ_EXT): /usr/include/libio.h
mathoms$(OBJ_EXT): /usr/include/limits.h
mathoms$(OBJ_EXT): /usr/include/linux/errno.h
mathoms$(OBJ_EXT): /usr/include/linux/limits.h
mathoms$(OBJ_EXT): /usr/include/linux/param.h
mathoms$(OBJ_EXT): /usr/include/locale.h
mathoms$(OBJ_EXT): /usr/include/math.h
mathoms$(OBJ_EXT): /usr/include/netdb.h
mathoms$(OBJ_EXT): /usr/include/netinet/in.h
mathoms$(OBJ_EXT): /usr/include/rpc/netdb.h
mathoms$(OBJ_EXT): /usr/include/setjmp.h
mathoms$(OBJ_EXT): /usr/include/signal.h
mathoms$(OBJ_EXT): /usr/include/stdint.h
mathoms$(OBJ_EXT): /usr/include/stdio.h
mathoms$(OBJ_EXT): /usr/include/stdlib.h
mathoms$(OBJ_EXT): /usr/include/string.h
mathoms$(OBJ_EXT): /usr/include/sys/cdefs.h
mathoms$(OBJ_EXT): /usr/include/sys/file.h
mathoms$(OBJ_EXT): /usr/include/sys/ioctl.h
mathoms$(OBJ_EXT): /usr/include/sys/ipc.h
mathoms$(OBJ_EXT): /usr/include/sys/param.h
mathoms$(OBJ_EXT): /usr/include/sys/resource.h
mathoms$(OBJ_EXT): /usr/include/sys/select.h
mathoms$(OBJ_EXT): /usr/include/sys/sem.h
mathoms$(OBJ_EXT): /usr/include/sys/socket.h
mathoms$(OBJ_EXT): /usr/include/sys/stat.h
mathoms$(OBJ_EXT): /usr/include/sys/sysmacros.h
mathoms$(OBJ_EXT): /usr/include/sys/time.h
mathoms$(OBJ_EXT): /usr/include/sys/times.h
mathoms$(OBJ_EXT): /usr/include/sys/ttydefaults.h
mathoms$(OBJ_EXT): /usr/include/sys/types.h
mathoms$(OBJ_EXT): /usr/include/sys/ucontext.h
mathoms$(OBJ_EXT): /usr/include/sys/uio.h
mathoms$(OBJ_EXT): /usr/include/sys/wait.h
mathoms$(OBJ_EXT): /usr/include/time.h
mathoms$(OBJ_EXT): /usr/include/unistd.h
mathoms$(OBJ_EXT): /usr/include/wchar.h
mathoms$(OBJ_EXT): /usr/include/xlocale.h
mathoms$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
mathoms$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
mathoms$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
mathoms$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
mathoms$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
mathoms$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
mathoms$(OBJ_EXT): EXTERN.h
mathoms$(OBJ_EXT): av.h
mathoms$(OBJ_EXT): config.h
mathoms$(OBJ_EXT): cop.h
mathoms$(OBJ_EXT): cv.h
mathoms$(OBJ_EXT): embed.h
mathoms$(OBJ_EXT): embedvar.h
mathoms$(OBJ_EXT): form.h
mathoms$(OBJ_EXT): gv.h
mathoms$(OBJ_EXT): handy.h
mathoms$(OBJ_EXT): hv.h
mathoms$(OBJ_EXT): intrpvar.h
mathoms$(OBJ_EXT): iperlsys.h
mathoms$(OBJ_EXT): mathoms.c
mathoms$(OBJ_EXT): mg.h
mathoms$(OBJ_EXT): mg_vtable.h
mathoms$(OBJ_EXT): mydtrace.h
mathoms$(OBJ_EXT): op.h
mathoms$(OBJ_EXT): op_reg_common.h
mathoms$(OBJ_EXT): opcode.h
mathoms$(OBJ_EXT): opnames.h
mathoms$(OBJ_EXT): overload.h
mathoms$(OBJ_EXT): pad.h
mathoms$(OBJ_EXT): parser.h
mathoms$(OBJ_EXT): patchlevel.h
mathoms$(OBJ_EXT): perl.h
mathoms$(OBJ_EXT): perlio.h
mathoms$(OBJ_EXT): perlvars.h
mathoms$(OBJ_EXT): perly.h
mathoms$(OBJ_EXT): pp.h
mathoms$(OBJ_EXT): proto.h
mathoms$(OBJ_EXT): regexp.h
mathoms$(OBJ_EXT): scope.h
mathoms$(OBJ_EXT): sv.h
mathoms$(OBJ_EXT): thread.h
mathoms$(OBJ_EXT): unixish.h
mathoms$(OBJ_EXT): utf8.h
mathoms$(OBJ_EXT): util.h
mathoms$(OBJ_EXT): warnings.h
mathoms$(OBJ_EXT): cflags
locale$(OBJ_EXT): /usr/include/_G_config.h
locale$(OBJ_EXT): /usr/include/alloca.h
locale$(OBJ_EXT): /usr/include/arpa/inet.h
locale$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
locale$(OBJ_EXT): /usr/include/asm-generic/errno.h
locale$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
locale$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
locale$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
locale$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
locale$(OBJ_EXT): /usr/include/asm-x86_64/param.h
locale$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
locale$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
locale$(OBJ_EXT): /usr/include/asm/errno.h
locale$(OBJ_EXT): /usr/include/asm/ioctl.h
locale$(OBJ_EXT): /usr/include/asm/ioctls.h
locale$(OBJ_EXT): /usr/include/asm/param.h
locale$(OBJ_EXT): /usr/include/asm/socket.h
locale$(OBJ_EXT): /usr/include/asm/sockios.h
locale$(OBJ_EXT): /usr/include/bits/byteswap.h
locale$(OBJ_EXT): /usr/include/bits/confname.h
locale$(OBJ_EXT): /usr/include/bits/dirent.h
locale$(OBJ_EXT): /usr/include/bits/endian.h
locale$(OBJ_EXT): /usr/include/bits/environments.h
locale$(OBJ_EXT): /usr/include/bits/errno.h
locale$(OBJ_EXT): /usr/include/bits/fcntl.h
locale$(OBJ_EXT): /usr/include/bits/huge_val.h
locale$(OBJ_EXT): /usr/include/bits/huge_valf.h
locale$(OBJ_EXT): /usr/include/bits/huge_vall.h
locale$(OBJ_EXT): /usr/include/bits/in.h
locale$(OBJ_EXT): /usr/include/bits/inf.h
locale$(OBJ_EXT): /usr/include/bits/ioctl-types.h
locale$(OBJ_EXT): /usr/include/bits/ioctls.h
locale$(OBJ_EXT): /usr/include/bits/ipc.h
locale$(OBJ_EXT): /usr/include/bits/ipctypes.h
locale$(OBJ_EXT): /usr/include/bits/local_lim.h
locale$(OBJ_EXT): /usr/include/bits/locale.h
locale$(OBJ_EXT): /usr/include/bits/mathcalls.h
locale$(OBJ_EXT): /usr/include/bits/mathdef.h
locale$(OBJ_EXT): /usr/include/bits/nan.h
locale$(OBJ_EXT): /usr/include/bits/netdb.h
locale$(OBJ_EXT): /usr/include/bits/posix1_lim.h
locale$(OBJ_EXT): /usr/include/bits/posix2_lim.h
locale$(OBJ_EXT): /usr/include/bits/posix_opt.h
locale$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
locale$(OBJ_EXT): /usr/include/bits/resource.h
locale$(OBJ_EXT): /usr/include/bits/select.h
locale$(OBJ_EXT): /usr/include/bits/sem.h
locale$(OBJ_EXT): /usr/include/bits/setjmp.h
locale$(OBJ_EXT): /usr/include/bits/sigaction.h
locale$(OBJ_EXT): /usr/include/bits/sigcontext.h
locale$(OBJ_EXT): /usr/include/bits/siginfo.h
locale$(OBJ_EXT): /usr/include/bits/signum.h
locale$(OBJ_EXT): /usr/include/bits/sigset.h
locale$(OBJ_EXT): /usr/include/bits/sigstack.h
locale$(OBJ_EXT): /usr/include/bits/sigthread.h
locale$(OBJ_EXT): /usr/include/bits/sockaddr.h
locale$(OBJ_EXT): /usr/include/bits/socket.h
locale$(OBJ_EXT): /usr/include/bits/stat.h
locale$(OBJ_EXT): /usr/include/bits/stdio_lim.h
locale$(OBJ_EXT): /usr/include/bits/sys_errlist.h
locale$(OBJ_EXT): /usr/include/bits/time.h
locale$(OBJ_EXT): /usr/include/bits/types.h
locale$(OBJ_EXT): /usr/include/bits/typesizes.h
locale$(OBJ_EXT): /usr/include/bits/uio.h
locale$(OBJ_EXT): /usr/include/bits/waitflags.h
locale$(OBJ_EXT): /usr/include/bits/waitstatus.h
locale$(OBJ_EXT): /usr/include/bits/wchar.h
locale$(OBJ_EXT): /usr/include/bits/wordsize.h
locale$(OBJ_EXT): /usr/include/bits/xopen_lim.h
locale$(OBJ_EXT): /usr/include/ctype.h
locale$(OBJ_EXT): /usr/include/dirent.h
locale$(OBJ_EXT): /usr/include/endian.h
locale$(OBJ_EXT): /usr/include/errno.h
locale$(OBJ_EXT): /usr/include/fcntl.h
locale$(OBJ_EXT): /usr/include/features.h
locale$(OBJ_EXT): /usr/include/gconv.h
locale$(OBJ_EXT): /usr/include/getopt.h
locale$(OBJ_EXT): /usr/include/gnu/stubs-64.h
locale$(OBJ_EXT): /usr/include/gnu/stubs.h
locale$(OBJ_EXT): /usr/include/inttypes.h
locale$(OBJ_EXT): /usr/include/langinfo.h
locale$(OBJ_EXT): /usr/include/libio.h
locale$(OBJ_EXT): /usr/include/limits.h
locale$(OBJ_EXT): /usr/include/linux/errno.h
locale$(OBJ_EXT): /usr/include/linux/limits.h
locale$(OBJ_EXT): /usr/include/linux/param.h
locale$(OBJ_EXT): /usr/include/locale.h
locale$(OBJ_EXT): /usr/include/math.h
locale$(OBJ_EXT): /usr/include/netdb.h
locale$(OBJ_EXT): /usr/include/netinet/in.h
locale$(OBJ_EXT): /usr/include/nl_types.h
locale$(OBJ_EXT): /usr/include/rpc/netdb.h
locale$(OBJ_EXT): /usr/include/setjmp.h
locale$(OBJ_EXT): /usr/include/signal.h
locale$(OBJ_EXT): /usr/include/stdint.h
locale$(OBJ_EXT): /usr/include/stdio.h
locale$(OBJ_EXT): /usr/include/stdlib.h
locale$(OBJ_EXT): /usr/include/string.h
locale$(OBJ_EXT): /usr/include/sys/cdefs.h
locale$(OBJ_EXT): /usr/include/sys/file.h
locale$(OBJ_EXT): /usr/include/sys/ioctl.h
locale$(OBJ_EXT): /usr/include/sys/ipc.h
locale$(OBJ_EXT): /usr/include/sys/param.h
locale$(OBJ_EXT): /usr/include/sys/resource.h
locale$(OBJ_EXT): /usr/include/sys/select.h
locale$(OBJ_EXT): /usr/include/sys/sem.h
locale$(OBJ_EXT): /usr/include/sys/socket.h
locale$(OBJ_EXT): /usr/include/sys/stat.h
locale$(OBJ_EXT): /usr/include/sys/sysmacros.h
locale$(OBJ_EXT): /usr/include/sys/time.h
locale$(OBJ_EXT): /usr/include/sys/times.h
locale$(OBJ_EXT): /usr/include/sys/ttydefaults.h
locale$(OBJ_EXT): /usr/include/sys/types.h
locale$(OBJ_EXT): /usr/include/sys/ucontext.h
locale$(OBJ_EXT): /usr/include/sys/uio.h
locale$(OBJ_EXT): /usr/include/sys/wait.h
locale$(OBJ_EXT): /usr/include/time.h
locale$(OBJ_EXT): /usr/include/unistd.h
locale$(OBJ_EXT): /usr/include/wchar.h
locale$(OBJ_EXT): /usr/include/xlocale.h
locale$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
locale$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
locale$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
locale$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
locale$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
locale$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
locale$(OBJ_EXT): EXTERN.h
locale$(OBJ_EXT): av.h
locale$(OBJ_EXT): config.h
locale$(OBJ_EXT): cop.h
locale$(OBJ_EXT): cv.h
locale$(OBJ_EXT): embed.h
locale$(OBJ_EXT): embedvar.h
locale$(OBJ_EXT): form.h
locale$(OBJ_EXT): gv.h
locale$(OBJ_EXT): handy.h
locale$(OBJ_EXT): hv.h
locale$(OBJ_EXT): intrpvar.h
locale$(OBJ_EXT): iperlsys.h
locale$(OBJ_EXT): locale.c
locale$(OBJ_EXT): mg.h
locale$(OBJ_EXT): mg_vtable.h
locale$(OBJ_EXT): mydtrace.h
locale$(OBJ_EXT): op.h
locale$(OBJ_EXT): op_reg_common.h
locale$(OBJ_EXT): opcode.h
locale$(OBJ_EXT): opnames.h
locale$(OBJ_EXT): overload.h
locale$(OBJ_EXT): pad.h
locale$(OBJ_EXT): parser.h
locale$(OBJ_EXT): patchlevel.h
locale$(OBJ_EXT): perl.h
locale$(OBJ_EXT): perlio.h
locale$(OBJ_EXT): perlvars.h
locale$(OBJ_EXT): perly.h
locale$(OBJ_EXT): pp.h
locale$(OBJ_EXT): proto.h
locale$(OBJ_EXT): reentr.h
locale$(OBJ_EXT): regexp.h
locale$(OBJ_EXT): scope.h
locale$(OBJ_EXT): sv.h
locale$(OBJ_EXT): thread.h
locale$(OBJ_EXT): unixish.h
locale$(OBJ_EXT): utf8.h
locale$(OBJ_EXT): util.h
locale$(OBJ_EXT): warnings.h
locale$(OBJ_EXT): cflags
pp_pack$(OBJ_EXT): /usr/include/_G_config.h
pp_pack$(OBJ_EXT): /usr/include/alloca.h
pp_pack$(OBJ_EXT): /usr/include/arpa/inet.h
pp_pack$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
pp_pack$(OBJ_EXT): /usr/include/asm-generic/errno.h
pp_pack$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
pp_pack$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
pp_pack$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
pp_pack$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
pp_pack$(OBJ_EXT): /usr/include/asm-x86_64/param.h
pp_pack$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
pp_pack$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
pp_pack$(OBJ_EXT): /usr/include/asm/errno.h
pp_pack$(OBJ_EXT): /usr/include/asm/ioctl.h
pp_pack$(OBJ_EXT): /usr/include/asm/ioctls.h
pp_pack$(OBJ_EXT): /usr/include/asm/param.h
pp_pack$(OBJ_EXT): /usr/include/asm/socket.h
pp_pack$(OBJ_EXT): /usr/include/asm/sockios.h
pp_pack$(OBJ_EXT): /usr/include/bits/byteswap.h
pp_pack$(OBJ_EXT): /usr/include/bits/confname.h
pp_pack$(OBJ_EXT): /usr/include/bits/dirent.h
pp_pack$(OBJ_EXT): /usr/include/bits/endian.h
pp_pack$(OBJ_EXT): /usr/include/bits/environments.h
pp_pack$(OBJ_EXT): /usr/include/bits/errno.h
pp_pack$(OBJ_EXT): /usr/include/bits/fcntl.h
pp_pack$(OBJ_EXT): /usr/include/bits/huge_val.h
pp_pack$(OBJ_EXT): /usr/include/bits/huge_valf.h
pp_pack$(OBJ_EXT): /usr/include/bits/huge_vall.h
pp_pack$(OBJ_EXT): /usr/include/bits/in.h
pp_pack$(OBJ_EXT): /usr/include/bits/inf.h
pp_pack$(OBJ_EXT): /usr/include/bits/ioctl-types.h
pp_pack$(OBJ_EXT): /usr/include/bits/ioctls.h
pp_pack$(OBJ_EXT): /usr/include/bits/ipc.h
pp_pack$(OBJ_EXT): /usr/include/bits/ipctypes.h
pp_pack$(OBJ_EXT): /usr/include/bits/local_lim.h
pp_pack$(OBJ_EXT): /usr/include/bits/locale.h
pp_pack$(OBJ_EXT): /usr/include/bits/mathcalls.h
pp_pack$(OBJ_EXT): /usr/include/bits/mathdef.h
pp_pack$(OBJ_EXT): /usr/include/bits/nan.h
pp_pack$(OBJ_EXT): /usr/include/bits/netdb.h
pp_pack$(OBJ_EXT): /usr/include/bits/posix1_lim.h
pp_pack$(OBJ_EXT): /usr/include/bits/posix2_lim.h
pp_pack$(OBJ_EXT): /usr/include/bits/posix_opt.h
pp_pack$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
pp_pack$(OBJ_EXT): /usr/include/bits/resource.h
pp_pack$(OBJ_EXT): /usr/include/bits/select.h
pp_pack$(OBJ_EXT): /usr/include/bits/sem.h
pp_pack$(OBJ_EXT): /usr/include/bits/setjmp.h
pp_pack$(OBJ_EXT): /usr/include/bits/sigaction.h
pp_pack$(OBJ_EXT): /usr/include/bits/sigcontext.h
pp_pack$(OBJ_EXT): /usr/include/bits/siginfo.h
pp_pack$(OBJ_EXT): /usr/include/bits/signum.h
pp_pack$(OBJ_EXT): /usr/include/bits/sigset.h
pp_pack$(OBJ_EXT): /usr/include/bits/sigstack.h
pp_pack$(OBJ_EXT): /usr/include/bits/sigthread.h
pp_pack$(OBJ_EXT): /usr/include/bits/sockaddr.h
pp_pack$(OBJ_EXT): /usr/include/bits/socket.h
pp_pack$(OBJ_EXT): /usr/include/bits/stat.h
pp_pack$(OBJ_EXT): /usr/include/bits/stdio_lim.h
pp_pack$(OBJ_EXT): /usr/include/bits/sys_errlist.h
pp_pack$(OBJ_EXT): /usr/include/bits/time.h
pp_pack$(OBJ_EXT): /usr/include/bits/types.h
pp_pack$(OBJ_EXT): /usr/include/bits/typesizes.h
pp_pack$(OBJ_EXT): /usr/include/bits/uio.h
pp_pack$(OBJ_EXT): /usr/include/bits/waitflags.h
pp_pack$(OBJ_EXT): /usr/include/bits/waitstatus.h
pp_pack$(OBJ_EXT): /usr/include/bits/wchar.h
pp_pack$(OBJ_EXT): /usr/include/bits/wordsize.h
pp_pack$(OBJ_EXT): /usr/include/bits/xopen_lim.h
pp_pack$(OBJ_EXT): /usr/include/ctype.h
pp_pack$(OBJ_EXT): /usr/include/dirent.h
pp_pack$(OBJ_EXT): /usr/include/endian.h
pp_pack$(OBJ_EXT): /usr/include/errno.h
pp_pack$(OBJ_EXT): /usr/include/fcntl.h
pp_pack$(OBJ_EXT): /usr/include/features.h
pp_pack$(OBJ_EXT): /usr/include/gconv.h
pp_pack$(OBJ_EXT): /usr/include/getopt.h
pp_pack$(OBJ_EXT): /usr/include/gnu/stubs-64.h
pp_pack$(OBJ_EXT): /usr/include/gnu/stubs.h
pp_pack$(OBJ_EXT): /usr/include/inttypes.h
pp_pack$(OBJ_EXT): /usr/include/libio.h
pp_pack$(OBJ_EXT): /usr/include/limits.h
pp_pack$(OBJ_EXT): /usr/include/linux/errno.h
pp_pack$(OBJ_EXT): /usr/include/linux/limits.h
pp_pack$(OBJ_EXT): /usr/include/linux/param.h
pp_pack$(OBJ_EXT): /usr/include/locale.h
pp_pack$(OBJ_EXT): /usr/include/math.h
pp_pack$(OBJ_EXT): /usr/include/netdb.h
pp_pack$(OBJ_EXT): /usr/include/netinet/in.h
pp_pack$(OBJ_EXT): /usr/include/rpc/netdb.h
pp_pack$(OBJ_EXT): /usr/include/setjmp.h
pp_pack$(OBJ_EXT): /usr/include/signal.h
pp_pack$(OBJ_EXT): /usr/include/stdint.h
pp_pack$(OBJ_EXT): /usr/include/stdio.h
pp_pack$(OBJ_EXT): /usr/include/stdlib.h
pp_pack$(OBJ_EXT): /usr/include/string.h
pp_pack$(OBJ_EXT): /usr/include/sys/cdefs.h
pp_pack$(OBJ_EXT): /usr/include/sys/file.h
pp_pack$(OBJ_EXT): /usr/include/sys/ioctl.h
pp_pack$(OBJ_EXT): /usr/include/sys/ipc.h
pp_pack$(OBJ_EXT): /usr/include/sys/param.h
pp_pack$(OBJ_EXT): /usr/include/sys/resource.h
pp_pack$(OBJ_EXT): /usr/include/sys/select.h
pp_pack$(OBJ_EXT): /usr/include/sys/sem.h
pp_pack$(OBJ_EXT): /usr/include/sys/socket.h
pp_pack$(OBJ_EXT): /usr/include/sys/stat.h
pp_pack$(OBJ_EXT): /usr/include/sys/sysmacros.h
pp_pack$(OBJ_EXT): /usr/include/sys/time.h
pp_pack$(OBJ_EXT): /usr/include/sys/times.h
pp_pack$(OBJ_EXT): /usr/include/sys/ttydefaults.h
pp_pack$(OBJ_EXT): /usr/include/sys/types.h
pp_pack$(OBJ_EXT): /usr/include/sys/ucontext.h
pp_pack$(OBJ_EXT): /usr/include/sys/uio.h
pp_pack$(OBJ_EXT): /usr/include/sys/wait.h
pp_pack$(OBJ_EXT): /usr/include/time.h
pp_pack$(OBJ_EXT): /usr/include/unistd.h
pp_pack$(OBJ_EXT): /usr/include/wchar.h
pp_pack$(OBJ_EXT): /usr/include/xlocale.h
pp_pack$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
pp_pack$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
pp_pack$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
pp_pack$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
pp_pack$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
pp_pack$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
pp_pack$(OBJ_EXT): EXTERN.h
pp_pack$(OBJ_EXT): av.h
pp_pack$(OBJ_EXT): config.h
pp_pack$(OBJ_EXT): cop.h
pp_pack$(OBJ_EXT): cv.h
pp_pack$(OBJ_EXT): embed.h
pp_pack$(OBJ_EXT): embedvar.h
pp_pack$(OBJ_EXT): form.h
pp_pack$(OBJ_EXT): gv.h
pp_pack$(OBJ_EXT): handy.h
pp_pack$(OBJ_EXT): hv.h
pp_pack$(OBJ_EXT): intrpvar.h
pp_pack$(OBJ_EXT): iperlsys.h
pp_pack$(OBJ_EXT): mg.h
pp_pack$(OBJ_EXT): mg_vtable.h
pp_pack$(OBJ_EXT): mydtrace.h
pp_pack$(OBJ_EXT): op.h
pp_pack$(OBJ_EXT): op_reg_common.h
pp_pack$(OBJ_EXT): opcode.h
pp_pack$(OBJ_EXT): opnames.h
pp_pack$(OBJ_EXT): overload.h
pp_pack$(OBJ_EXT): pad.h
pp_pack$(OBJ_EXT): parser.h
pp_pack$(OBJ_EXT): patchlevel.h
pp_pack$(OBJ_EXT): perl.h
pp_pack$(OBJ_EXT): perlio.h
pp_pack$(OBJ_EXT): perlvars.h
pp_pack$(OBJ_EXT): perly.h
pp_pack$(OBJ_EXT): pp.h
pp_pack$(OBJ_EXT): pp_pack.c
pp_pack$(OBJ_EXT): proto.h
pp_pack$(OBJ_EXT): regexp.h
pp_pack$(OBJ_EXT): scope.h
pp_pack$(OBJ_EXT): sv.h
pp_pack$(OBJ_EXT): thread.h
pp_pack$(OBJ_EXT): unixish.h
pp_pack$(OBJ_EXT): utf8.h
pp_pack$(OBJ_EXT): util.h
pp_pack$(OBJ_EXT): warnings.h
pp_pack$(OBJ_EXT): cflags
pp_sort$(OBJ_EXT): /usr/include/_G_config.h
pp_sort$(OBJ_EXT): /usr/include/alloca.h
pp_sort$(OBJ_EXT): /usr/include/arpa/inet.h
pp_sort$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
pp_sort$(OBJ_EXT): /usr/include/asm-generic/errno.h
pp_sort$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
pp_sort$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
pp_sort$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
pp_sort$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
pp_sort$(OBJ_EXT): /usr/include/asm-x86_64/param.h
pp_sort$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
pp_sort$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
pp_sort$(OBJ_EXT): /usr/include/asm/errno.h
pp_sort$(OBJ_EXT): /usr/include/asm/ioctl.h
pp_sort$(OBJ_EXT): /usr/include/asm/ioctls.h
pp_sort$(OBJ_EXT): /usr/include/asm/param.h
pp_sort$(OBJ_EXT): /usr/include/asm/socket.h
pp_sort$(OBJ_EXT): /usr/include/asm/sockios.h
pp_sort$(OBJ_EXT): /usr/include/bits/byteswap.h
pp_sort$(OBJ_EXT): /usr/include/bits/confname.h
pp_sort$(OBJ_EXT): /usr/include/bits/dirent.h
pp_sort$(OBJ_EXT): /usr/include/bits/endian.h
pp_sort$(OBJ_EXT): /usr/include/bits/environments.h
pp_sort$(OBJ_EXT): /usr/include/bits/errno.h
pp_sort$(OBJ_EXT): /usr/include/bits/fcntl.h
pp_sort$(OBJ_EXT): /usr/include/bits/huge_val.h
pp_sort$(OBJ_EXT): /usr/include/bits/huge_valf.h
pp_sort$(OBJ_EXT): /usr/include/bits/huge_vall.h
pp_sort$(OBJ_EXT): /usr/include/bits/in.h
pp_sort$(OBJ_EXT): /usr/include/bits/inf.h
pp_sort$(OBJ_EXT): /usr/include/bits/ioctl-types.h
pp_sort$(OBJ_EXT): /usr/include/bits/ioctls.h
pp_sort$(OBJ_EXT): /usr/include/bits/ipc.h
pp_sort$(OBJ_EXT): /usr/include/bits/ipctypes.h
pp_sort$(OBJ_EXT): /usr/include/bits/local_lim.h
pp_sort$(OBJ_EXT): /usr/include/bits/locale.h
pp_sort$(OBJ_EXT): /usr/include/bits/mathcalls.h
pp_sort$(OBJ_EXT): /usr/include/bits/mathdef.h
pp_sort$(OBJ_EXT): /usr/include/bits/nan.h
pp_sort$(OBJ_EXT): /usr/include/bits/netdb.h
pp_sort$(OBJ_EXT): /usr/include/bits/posix1_lim.h
pp_sort$(OBJ_EXT): /usr/include/bits/posix2_lim.h
pp_sort$(OBJ_EXT): /usr/include/bits/posix_opt.h
pp_sort$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
pp_sort$(OBJ_EXT): /usr/include/bits/resource.h
pp_sort$(OBJ_EXT): /usr/include/bits/select.h
pp_sort$(OBJ_EXT): /usr/include/bits/sem.h
pp_sort$(OBJ_EXT): /usr/include/bits/setjmp.h
pp_sort$(OBJ_EXT): /usr/include/bits/sigaction.h
pp_sort$(OBJ_EXT): /usr/include/bits/sigcontext.h
pp_sort$(OBJ_EXT): /usr/include/bits/siginfo.h
pp_sort$(OBJ_EXT): /usr/include/bits/signum.h
pp_sort$(OBJ_EXT): /usr/include/bits/sigset.h
pp_sort$(OBJ_EXT): /usr/include/bits/sigstack.h
pp_sort$(OBJ_EXT): /usr/include/bits/sigthread.h
pp_sort$(OBJ_EXT): /usr/include/bits/sockaddr.h
pp_sort$(OBJ_EXT): /usr/include/bits/socket.h
pp_sort$(OBJ_EXT): /usr/include/bits/stat.h
pp_sort$(OBJ_EXT): /usr/include/bits/stdio_lim.h
pp_sort$(OBJ_EXT): /usr/include/bits/sys_errlist.h
pp_sort$(OBJ_EXT): /usr/include/bits/time.h
pp_sort$(OBJ_EXT): /usr/include/bits/types.h
pp_sort$(OBJ_EXT): /usr/include/bits/typesizes.h
pp_sort$(OBJ_EXT): /usr/include/bits/uio.h
pp_sort$(OBJ_EXT): /usr/include/bits/waitflags.h
pp_sort$(OBJ_EXT): /usr/include/bits/waitstatus.h
pp_sort$(OBJ_EXT): /usr/include/bits/wchar.h
pp_sort$(OBJ_EXT): /usr/include/bits/wordsize.h
pp_sort$(OBJ_EXT): /usr/include/bits/xopen_lim.h
pp_sort$(OBJ_EXT): /usr/include/ctype.h
pp_sort$(OBJ_EXT): /usr/include/dirent.h
pp_sort$(OBJ_EXT): /usr/include/endian.h
pp_sort$(OBJ_EXT): /usr/include/errno.h
pp_sort$(OBJ_EXT): /usr/include/fcntl.h
pp_sort$(OBJ_EXT): /usr/include/features.h
pp_sort$(OBJ_EXT): /usr/include/gconv.h
pp_sort$(OBJ_EXT): /usr/include/getopt.h
pp_sort$(OBJ_EXT): /usr/include/gnu/stubs-64.h
pp_sort$(OBJ_EXT): /usr/include/gnu/stubs.h
pp_sort$(OBJ_EXT): /usr/include/inttypes.h
pp_sort$(OBJ_EXT): /usr/include/libio.h
pp_sort$(OBJ_EXT): /usr/include/limits.h
pp_sort$(OBJ_EXT): /usr/include/linux/errno.h
pp_sort$(OBJ_EXT): /usr/include/linux/limits.h
pp_sort$(OBJ_EXT): /usr/include/linux/param.h
pp_sort$(OBJ_EXT): /usr/include/locale.h
pp_sort$(OBJ_EXT): /usr/include/math.h
pp_sort$(OBJ_EXT): /usr/include/netdb.h
pp_sort$(OBJ_EXT): /usr/include/netinet/in.h
pp_sort$(OBJ_EXT): /usr/include/rpc/netdb.h
pp_sort$(OBJ_EXT): /usr/include/setjmp.h
pp_sort$(OBJ_EXT): /usr/include/signal.h
pp_sort$(OBJ_EXT): /usr/include/stdint.h
pp_sort$(OBJ_EXT): /usr/include/stdio.h
pp_sort$(OBJ_EXT): /usr/include/stdlib.h
pp_sort$(OBJ_EXT): /usr/include/string.h
pp_sort$(OBJ_EXT): /usr/include/sys/cdefs.h
pp_sort$(OBJ_EXT): /usr/include/sys/file.h
pp_sort$(OBJ_EXT): /usr/include/sys/ioctl.h
pp_sort$(OBJ_EXT): /usr/include/sys/ipc.h
pp_sort$(OBJ_EXT): /usr/include/sys/param.h
pp_sort$(OBJ_EXT): /usr/include/sys/resource.h
pp_sort$(OBJ_EXT): /usr/include/sys/select.h
pp_sort$(OBJ_EXT): /usr/include/sys/sem.h
pp_sort$(OBJ_EXT): /usr/include/sys/socket.h
pp_sort$(OBJ_EXT): /usr/include/sys/stat.h
pp_sort$(OBJ_EXT): /usr/include/sys/sysmacros.h
pp_sort$(OBJ_EXT): /usr/include/sys/time.h
pp_sort$(OBJ_EXT): /usr/include/sys/times.h
pp_sort$(OBJ_EXT): /usr/include/sys/ttydefaults.h
pp_sort$(OBJ_EXT): /usr/include/sys/types.h
pp_sort$(OBJ_EXT): /usr/include/sys/ucontext.h
pp_sort$(OBJ_EXT): /usr/include/sys/uio.h
pp_sort$(OBJ_EXT): /usr/include/sys/wait.h
pp_sort$(OBJ_EXT): /usr/include/time.h
pp_sort$(OBJ_EXT): /usr/include/unistd.h
pp_sort$(OBJ_EXT): /usr/include/wchar.h
pp_sort$(OBJ_EXT): /usr/include/xlocale.h
pp_sort$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
pp_sort$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
pp_sort$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
pp_sort$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
pp_sort$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
pp_sort$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
pp_sort$(OBJ_EXT): EXTERN.h
pp_sort$(OBJ_EXT): av.h
pp_sort$(OBJ_EXT): config.h
pp_sort$(OBJ_EXT): cop.h
pp_sort$(OBJ_EXT): cv.h
pp_sort$(OBJ_EXT): embed.h
pp_sort$(OBJ_EXT): embedvar.h
pp_sort$(OBJ_EXT): form.h
pp_sort$(OBJ_EXT): gv.h
pp_sort$(OBJ_EXT): handy.h
pp_sort$(OBJ_EXT): hv.h
pp_sort$(OBJ_EXT): intrpvar.h
pp_sort$(OBJ_EXT): iperlsys.h
pp_sort$(OBJ_EXT): mg.h
pp_sort$(OBJ_EXT): mg_vtable.h
pp_sort$(OBJ_EXT): mydtrace.h
pp_sort$(OBJ_EXT): op.h
pp_sort$(OBJ_EXT): op_reg_common.h
pp_sort$(OBJ_EXT): opcode.h
pp_sort$(OBJ_EXT): opnames.h
pp_sort$(OBJ_EXT): overload.h
pp_sort$(OBJ_EXT): pad.h
pp_sort$(OBJ_EXT): parser.h
pp_sort$(OBJ_EXT): patchlevel.h
pp_sort$(OBJ_EXT): perl.h
pp_sort$(OBJ_EXT): perlio.h
pp_sort$(OBJ_EXT): perlvars.h
pp_sort$(OBJ_EXT): perly.h
pp_sort$(OBJ_EXT): pp.h
pp_sort$(OBJ_EXT): pp_sort.c
pp_sort$(OBJ_EXT): proto.h
pp_sort$(OBJ_EXT): regexp.h
pp_sort$(OBJ_EXT): scope.h
pp_sort$(OBJ_EXT): sv.h
pp_sort$(OBJ_EXT): thread.h
pp_sort$(OBJ_EXT): unixish.h
pp_sort$(OBJ_EXT): utf8.h
pp_sort$(OBJ_EXT): util.h
pp_sort$(OBJ_EXT): warnings.h
pp_sort$(OBJ_EXT): cflags
miniperlmain$(OBJ_EXT): /usr/include/_G_config.h
miniperlmain$(OBJ_EXT): /usr/include/alloca.h
miniperlmain$(OBJ_EXT): /usr/include/arpa/inet.h
miniperlmain$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
miniperlmain$(OBJ_EXT): /usr/include/asm-generic/errno.h
miniperlmain$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
miniperlmain$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
miniperlmain$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
miniperlmain$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
miniperlmain$(OBJ_EXT): /usr/include/asm-x86_64/param.h
miniperlmain$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
miniperlmain$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
miniperlmain$(OBJ_EXT): /usr/include/asm/errno.h
miniperlmain$(OBJ_EXT): /usr/include/asm/ioctl.h
miniperlmain$(OBJ_EXT): /usr/include/asm/ioctls.h
miniperlmain$(OBJ_EXT): /usr/include/asm/param.h
miniperlmain$(OBJ_EXT): /usr/include/asm/socket.h
miniperlmain$(OBJ_EXT): /usr/include/asm/sockios.h
miniperlmain$(OBJ_EXT): /usr/include/bits/byteswap.h
miniperlmain$(OBJ_EXT): /usr/include/bits/confname.h
miniperlmain$(OBJ_EXT): /usr/include/bits/dirent.h
miniperlmain$(OBJ_EXT): /usr/include/bits/endian.h
miniperlmain$(OBJ_EXT): /usr/include/bits/environments.h
miniperlmain$(OBJ_EXT): /usr/include/bits/errno.h
miniperlmain$(OBJ_EXT): /usr/include/bits/fcntl.h
miniperlmain$(OBJ_EXT): /usr/include/bits/huge_val.h
miniperlmain$(OBJ_EXT): /usr/include/bits/huge_valf.h
miniperlmain$(OBJ_EXT): /usr/include/bits/huge_vall.h
miniperlmain$(OBJ_EXT): /usr/include/bits/in.h
miniperlmain$(OBJ_EXT): /usr/include/bits/inf.h
miniperlmain$(OBJ_EXT): /usr/include/bits/ioctl-types.h
miniperlmain$(OBJ_EXT): /usr/include/bits/ioctls.h
miniperlmain$(OBJ_EXT): /usr/include/bits/ipc.h
miniperlmain$(OBJ_EXT): /usr/include/bits/ipctypes.h
miniperlmain$(OBJ_EXT): /usr/include/bits/local_lim.h
miniperlmain$(OBJ_EXT): /usr/include/bits/locale.h
miniperlmain$(OBJ_EXT): /usr/include/bits/mathcalls.h
miniperlmain$(OBJ_EXT): /usr/include/bits/mathdef.h
miniperlmain$(OBJ_EXT): /usr/include/bits/nan.h
miniperlmain$(OBJ_EXT): /usr/include/bits/netdb.h
miniperlmain$(OBJ_EXT): /usr/include/bits/posix1_lim.h
miniperlmain$(OBJ_EXT): /usr/include/bits/posix2_lim.h
miniperlmain$(OBJ_EXT): /usr/include/bits/posix_opt.h
miniperlmain$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
miniperlmain$(OBJ_EXT): /usr/include/bits/resource.h
miniperlmain$(OBJ_EXT): /usr/include/bits/select.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sem.h
miniperlmain$(OBJ_EXT): /usr/include/bits/setjmp.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sigaction.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sigcontext.h
miniperlmain$(OBJ_EXT): /usr/include/bits/siginfo.h
miniperlmain$(OBJ_EXT): /usr/include/bits/signum.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sigset.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sigstack.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sigthread.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sockaddr.h
miniperlmain$(OBJ_EXT): /usr/include/bits/socket.h
miniperlmain$(OBJ_EXT): /usr/include/bits/stat.h
miniperlmain$(OBJ_EXT): /usr/include/bits/stdio_lim.h
miniperlmain$(OBJ_EXT): /usr/include/bits/sys_errlist.h
miniperlmain$(OBJ_EXT): /usr/include/bits/time.h
miniperlmain$(OBJ_EXT): /usr/include/bits/types.h
miniperlmain$(OBJ_EXT): /usr/include/bits/typesizes.h
miniperlmain$(OBJ_EXT): /usr/include/bits/uio.h
miniperlmain$(OBJ_EXT): /usr/include/bits/waitflags.h
miniperlmain$(OBJ_EXT): /usr/include/bits/waitstatus.h
miniperlmain$(OBJ_EXT): /usr/include/bits/wchar.h
miniperlmain$(OBJ_EXT): /usr/include/bits/wordsize.h
miniperlmain$(OBJ_EXT): /usr/include/bits/xopen_lim.h
miniperlmain$(OBJ_EXT): /usr/include/ctype.h
miniperlmain$(OBJ_EXT): /usr/include/dirent.h
miniperlmain$(OBJ_EXT): /usr/include/endian.h
miniperlmain$(OBJ_EXT): /usr/include/errno.h
miniperlmain$(OBJ_EXT): /usr/include/fcntl.h
miniperlmain$(OBJ_EXT): /usr/include/features.h
miniperlmain$(OBJ_EXT): /usr/include/gconv.h
miniperlmain$(OBJ_EXT): /usr/include/getopt.h
miniperlmain$(OBJ_EXT): /usr/include/gnu/stubs-64.h
miniperlmain$(OBJ_EXT): /usr/include/gnu/stubs.h
miniperlmain$(OBJ_EXT): /usr/include/inttypes.h
miniperlmain$(OBJ_EXT): /usr/include/libio.h
miniperlmain$(OBJ_EXT): /usr/include/limits.h
miniperlmain$(OBJ_EXT): /usr/include/linux/errno.h
miniperlmain$(OBJ_EXT): /usr/include/linux/limits.h
miniperlmain$(OBJ_EXT): /usr/include/linux/param.h
miniperlmain$(OBJ_EXT): /usr/include/locale.h
miniperlmain$(OBJ_EXT): /usr/include/math.h
miniperlmain$(OBJ_EXT): /usr/include/netdb.h
miniperlmain$(OBJ_EXT): /usr/include/netinet/in.h
miniperlmain$(OBJ_EXT): /usr/include/rpc/netdb.h
miniperlmain$(OBJ_EXT): /usr/include/setjmp.h
miniperlmain$(OBJ_EXT): /usr/include/signal.h
miniperlmain$(OBJ_EXT): /usr/include/stdint.h
miniperlmain$(OBJ_EXT): /usr/include/stdio.h
miniperlmain$(OBJ_EXT): /usr/include/stdlib.h
miniperlmain$(OBJ_EXT): /usr/include/string.h
miniperlmain$(OBJ_EXT): /usr/include/sys/cdefs.h
miniperlmain$(OBJ_EXT): /usr/include/sys/file.h
miniperlmain$(OBJ_EXT): /usr/include/sys/ioctl.h
miniperlmain$(OBJ_EXT): /usr/include/sys/ipc.h
miniperlmain$(OBJ_EXT): /usr/include/sys/param.h
miniperlmain$(OBJ_EXT): /usr/include/sys/resource.h
miniperlmain$(OBJ_EXT): /usr/include/sys/select.h
miniperlmain$(OBJ_EXT): /usr/include/sys/sem.h
miniperlmain$(OBJ_EXT): /usr/include/sys/socket.h
miniperlmain$(OBJ_EXT): /usr/include/sys/stat.h
miniperlmain$(OBJ_EXT): /usr/include/sys/sysmacros.h
miniperlmain$(OBJ_EXT): /usr/include/sys/time.h
miniperlmain$(OBJ_EXT): /usr/include/sys/times.h
miniperlmain$(OBJ_EXT): /usr/include/sys/ttydefaults.h
miniperlmain$(OBJ_EXT): /usr/include/sys/types.h
miniperlmain$(OBJ_EXT): /usr/include/sys/ucontext.h
miniperlmain$(OBJ_EXT): /usr/include/sys/uio.h
miniperlmain$(OBJ_EXT): /usr/include/sys/wait.h
miniperlmain$(OBJ_EXT): /usr/include/time.h
miniperlmain$(OBJ_EXT): /usr/include/unistd.h
miniperlmain$(OBJ_EXT): /usr/include/wchar.h
miniperlmain$(OBJ_EXT): /usr/include/xlocale.h
miniperlmain$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
miniperlmain$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
miniperlmain$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
miniperlmain$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
miniperlmain$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
miniperlmain$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
miniperlmain$(OBJ_EXT): EXTERN.h
miniperlmain$(OBJ_EXT): av.h
miniperlmain$(OBJ_EXT): config.h
miniperlmain$(OBJ_EXT): cop.h
miniperlmain$(OBJ_EXT): cv.h
miniperlmain$(OBJ_EXT): embed.h
miniperlmain$(OBJ_EXT): embedvar.h
miniperlmain$(OBJ_EXT): form.h
miniperlmain$(OBJ_EXT): gv.h
miniperlmain$(OBJ_EXT): handy.h
miniperlmain$(OBJ_EXT): hv.h
miniperlmain$(OBJ_EXT): intrpvar.h
miniperlmain$(OBJ_EXT): iperlsys.h
miniperlmain$(OBJ_EXT): mg.h
miniperlmain$(OBJ_EXT): mg_vtable.h
miniperlmain$(OBJ_EXT): miniperlmain.c
miniperlmain$(OBJ_EXT): mydtrace.h
miniperlmain$(OBJ_EXT): op.h
miniperlmain$(OBJ_EXT): op_reg_common.h
miniperlmain$(OBJ_EXT): opcode.h
miniperlmain$(OBJ_EXT): opnames.h
miniperlmain$(OBJ_EXT): overload.h
miniperlmain$(OBJ_EXT): pad.h
miniperlmain$(OBJ_EXT): parser.h
miniperlmain$(OBJ_EXT): patchlevel.h
miniperlmain$(OBJ_EXT): perl.h
miniperlmain$(OBJ_EXT): perlio.h
miniperlmain$(OBJ_EXT): perlvars.h
miniperlmain$(OBJ_EXT): perly.h
miniperlmain$(OBJ_EXT): pp.h
miniperlmain$(OBJ_EXT): proto.h
miniperlmain$(OBJ_EXT): regexp.h
miniperlmain$(OBJ_EXT): scope.h
miniperlmain$(OBJ_EXT): sv.h
miniperlmain$(OBJ_EXT): thread.h
miniperlmain$(OBJ_EXT): unixish.h
miniperlmain$(OBJ_EXT): utf8.h
miniperlmain$(OBJ_EXT): util.h
miniperlmain$(OBJ_EXT): warnings.h
miniperlmain$(OBJ_EXT): cflags
opmini$(OBJ_EXT): /usr/include/_G_config.h
opmini$(OBJ_EXT): /usr/include/alloca.h
opmini$(OBJ_EXT): /usr/include/arpa/inet.h
opmini$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
opmini$(OBJ_EXT): /usr/include/asm-generic/errno.h
opmini$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
opmini$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
opmini$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
opmini$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
opmini$(OBJ_EXT): /usr/include/asm-x86_64/param.h
opmini$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
opmini$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
opmini$(OBJ_EXT): /usr/include/asm/errno.h
opmini$(OBJ_EXT): /usr/include/asm/ioctl.h
opmini$(OBJ_EXT): /usr/include/asm/ioctls.h
opmini$(OBJ_EXT): /usr/include/asm/param.h
opmini$(OBJ_EXT): /usr/include/asm/socket.h
opmini$(OBJ_EXT): /usr/include/asm/sockios.h
opmini$(OBJ_EXT): /usr/include/bits/byteswap.h
opmini$(OBJ_EXT): /usr/include/bits/confname.h
opmini$(OBJ_EXT): /usr/include/bits/dirent.h
opmini$(OBJ_EXT): /usr/include/bits/endian.h
opmini$(OBJ_EXT): /usr/include/bits/environments.h
opmini$(OBJ_EXT): /usr/include/bits/errno.h
opmini$(OBJ_EXT): /usr/include/bits/fcntl.h
opmini$(OBJ_EXT): /usr/include/bits/huge_val.h
opmini$(OBJ_EXT): /usr/include/bits/huge_valf.h
opmini$(OBJ_EXT): /usr/include/bits/huge_vall.h
opmini$(OBJ_EXT): /usr/include/bits/in.h
opmini$(OBJ_EXT): /usr/include/bits/inf.h
opmini$(OBJ_EXT): /usr/include/bits/ioctl-types.h
opmini$(OBJ_EXT): /usr/include/bits/ioctls.h
opmini$(OBJ_EXT): /usr/include/bits/ipc.h
opmini$(OBJ_EXT): /usr/include/bits/ipctypes.h
opmini$(OBJ_EXT): /usr/include/bits/local_lim.h
opmini$(OBJ_EXT): /usr/include/bits/locale.h
opmini$(OBJ_EXT): /usr/include/bits/mathcalls.h
opmini$(OBJ_EXT): /usr/include/bits/mathdef.h
opmini$(OBJ_EXT): /usr/include/bits/nan.h
opmini$(OBJ_EXT): /usr/include/bits/netdb.h
opmini$(OBJ_EXT): /usr/include/bits/posix1_lim.h
opmini$(OBJ_EXT): /usr/include/bits/posix2_lim.h
opmini$(OBJ_EXT): /usr/include/bits/posix_opt.h
opmini$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
opmini$(OBJ_EXT): /usr/include/bits/resource.h
opmini$(OBJ_EXT): /usr/include/bits/select.h
opmini$(OBJ_EXT): /usr/include/bits/sem.h
opmini$(OBJ_EXT): /usr/include/bits/setjmp.h
opmini$(OBJ_EXT): /usr/include/bits/sigaction.h
opmini$(OBJ_EXT): /usr/include/bits/sigcontext.h
opmini$(OBJ_EXT): /usr/include/bits/siginfo.h
opmini$(OBJ_EXT): /usr/include/bits/signum.h
opmini$(OBJ_EXT): /usr/include/bits/sigset.h
opmini$(OBJ_EXT): /usr/include/bits/sigstack.h
opmini$(OBJ_EXT): /usr/include/bits/sigthread.h
opmini$(OBJ_EXT): /usr/include/bits/sockaddr.h
opmini$(OBJ_EXT): /usr/include/bits/socket.h
opmini$(OBJ_EXT): /usr/include/bits/stat.h
opmini$(OBJ_EXT): /usr/include/bits/stdio_lim.h
opmini$(OBJ_EXT): /usr/include/bits/sys_errlist.h
opmini$(OBJ_EXT): /usr/include/bits/time.h
opmini$(OBJ_EXT): /usr/include/bits/types.h
opmini$(OBJ_EXT): /usr/include/bits/typesizes.h
opmini$(OBJ_EXT): /usr/include/bits/uio.h
opmini$(OBJ_EXT): /usr/include/bits/waitflags.h
opmini$(OBJ_EXT): /usr/include/bits/waitstatus.h
opmini$(OBJ_EXT): /usr/include/bits/wchar.h
opmini$(OBJ_EXT): /usr/include/bits/wordsize.h
opmini$(OBJ_EXT): /usr/include/bits/xopen_lim.h
opmini$(OBJ_EXT): /usr/include/ctype.h
opmini$(OBJ_EXT): /usr/include/dirent.h
opmini$(OBJ_EXT): /usr/include/endian.h
opmini$(OBJ_EXT): /usr/include/errno.h
opmini$(OBJ_EXT): /usr/include/fcntl.h
opmini$(OBJ_EXT): /usr/include/features.h
opmini$(OBJ_EXT): /usr/include/gconv.h
opmini$(OBJ_EXT): /usr/include/getopt.h
opmini$(OBJ_EXT): /usr/include/gnu/stubs-64.h
opmini$(OBJ_EXT): /usr/include/gnu/stubs.h
opmini$(OBJ_EXT): /usr/include/inttypes.h
opmini$(OBJ_EXT): /usr/include/libio.h
opmini$(OBJ_EXT): /usr/include/limits.h
opmini$(OBJ_EXT): /usr/include/linux/errno.h
opmini$(OBJ_EXT): /usr/include/linux/limits.h
opmini$(OBJ_EXT): /usr/include/linux/param.h
opmini$(OBJ_EXT): /usr/include/locale.h
opmini$(OBJ_EXT): /usr/include/math.h
opmini$(OBJ_EXT): /usr/include/netdb.h
opmini$(OBJ_EXT): /usr/include/netinet/in.h
opmini$(OBJ_EXT): /usr/include/rpc/netdb.h
opmini$(OBJ_EXT): /usr/include/setjmp.h
opmini$(OBJ_EXT): /usr/include/signal.h
opmini$(OBJ_EXT): /usr/include/stdint.h
opmini$(OBJ_EXT): /usr/include/stdio.h
opmini$(OBJ_EXT): /usr/include/stdlib.h
opmini$(OBJ_EXT): /usr/include/string.h
opmini$(OBJ_EXT): /usr/include/sys/cdefs.h
opmini$(OBJ_EXT): /usr/include/sys/file.h
opmini$(OBJ_EXT): /usr/include/sys/ioctl.h
opmini$(OBJ_EXT): /usr/include/sys/ipc.h
opmini$(OBJ_EXT): /usr/include/sys/param.h
opmini$(OBJ_EXT): /usr/include/sys/resource.h
opmini$(OBJ_EXT): /usr/include/sys/select.h
opmini$(OBJ_EXT): /usr/include/sys/sem.h
opmini$(OBJ_EXT): /usr/include/sys/socket.h
opmini$(OBJ_EXT): /usr/include/sys/stat.h
opmini$(OBJ_EXT): /usr/include/sys/sysmacros.h
opmini$(OBJ_EXT): /usr/include/sys/time.h
opmini$(OBJ_EXT): /usr/include/sys/times.h
opmini$(OBJ_EXT): /usr/include/sys/ttydefaults.h
opmini$(OBJ_EXT): /usr/include/sys/types.h
opmini$(OBJ_EXT): /usr/include/sys/ucontext.h
opmini$(OBJ_EXT): /usr/include/sys/uio.h
opmini$(OBJ_EXT): /usr/include/sys/wait.h
opmini$(OBJ_EXT): /usr/include/time.h
opmini$(OBJ_EXT): /usr/include/unistd.h
opmini$(OBJ_EXT): /usr/include/wchar.h
opmini$(OBJ_EXT): /usr/include/xlocale.h
opmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
opmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
opmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
opmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
opmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
opmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
opmini$(OBJ_EXT): EXTERN.h
opmini$(OBJ_EXT): XSUB.h
opmini$(OBJ_EXT): av.h
opmini$(OBJ_EXT): config.h
opmini$(OBJ_EXT): cop.h
opmini$(OBJ_EXT): cv.h
opmini$(OBJ_EXT): embed.h
opmini$(OBJ_EXT): embedvar.h
opmini$(OBJ_EXT): feature.h
opmini$(OBJ_EXT): form.h
opmini$(OBJ_EXT): gv.h
opmini$(OBJ_EXT): handy.h
opmini$(OBJ_EXT): hv.h
opmini$(OBJ_EXT): intrpvar.h
opmini$(OBJ_EXT): iperlsys.h
opmini$(OBJ_EXT): keywords.h
opmini$(OBJ_EXT): mg.h
opmini$(OBJ_EXT): mg_vtable.h
opmini$(OBJ_EXT): mydtrace.h
opmini$(OBJ_EXT): op.h
opmini$(OBJ_EXT): op_reg_common.h
opmini$(OBJ_EXT): opcode.h
opmini$(OBJ_EXT): opmini.c
opmini$(OBJ_EXT): opnames.h
opmini$(OBJ_EXT): overload.h
opmini$(OBJ_EXT): pad.h
opmini$(OBJ_EXT): parser.h
opmini$(OBJ_EXT): patchlevel.h
opmini$(OBJ_EXT): perl.h
opmini$(OBJ_EXT): perlapi.h
opmini$(OBJ_EXT): perlio.h
opmini$(OBJ_EXT): perlvars.h
opmini$(OBJ_EXT): perly.h
opmini$(OBJ_EXT): pp.h
opmini$(OBJ_EXT): proto.h
opmini$(OBJ_EXT): regexp.h
opmini$(OBJ_EXT): scope.h
opmini$(OBJ_EXT): sv.h
opmini$(OBJ_EXT): thread.h
opmini$(OBJ_EXT): unixish.h
opmini$(OBJ_EXT): utf8.h
opmini$(OBJ_EXT): util.h
opmini$(OBJ_EXT): warnings.h
opmini$(OBJ_EXT): cflags
perlmini$(OBJ_EXT): /usr/include/_G_config.h
perlmini$(OBJ_EXT): /usr/include/alloca.h
perlmini$(OBJ_EXT): /usr/include/arpa/inet.h
perlmini$(OBJ_EXT): /usr/include/asm-generic/errno-base.h
perlmini$(OBJ_EXT): /usr/include/asm-generic/errno.h
perlmini$(OBJ_EXT): /usr/include/asm-generic/ioctl.h
perlmini$(OBJ_EXT): /usr/include/asm-x86_64/errno.h
perlmini$(OBJ_EXT): /usr/include/asm-x86_64/ioctl.h
perlmini$(OBJ_EXT): /usr/include/asm-x86_64/ioctls.h
perlmini$(OBJ_EXT): /usr/include/asm-x86_64/param.h
perlmini$(OBJ_EXT): /usr/include/asm-x86_64/socket.h
perlmini$(OBJ_EXT): /usr/include/asm-x86_64/sockios.h
perlmini$(OBJ_EXT): /usr/include/asm/errno.h
perlmini$(OBJ_EXT): /usr/include/asm/ioctl.h
perlmini$(OBJ_EXT): /usr/include/asm/ioctls.h
perlmini$(OBJ_EXT): /usr/include/asm/param.h
perlmini$(OBJ_EXT): /usr/include/asm/socket.h
perlmini$(OBJ_EXT): /usr/include/asm/sockios.h
perlmini$(OBJ_EXT): /usr/include/bits/byteswap.h
perlmini$(OBJ_EXT): /usr/include/bits/confname.h
perlmini$(OBJ_EXT): /usr/include/bits/dirent.h
perlmini$(OBJ_EXT): /usr/include/bits/endian.h
perlmini$(OBJ_EXT): /usr/include/bits/environments.h
perlmini$(OBJ_EXT): /usr/include/bits/errno.h
perlmini$(OBJ_EXT): /usr/include/bits/fcntl.h
perlmini$(OBJ_EXT): /usr/include/bits/huge_val.h
perlmini$(OBJ_EXT): /usr/include/bits/huge_valf.h
perlmini$(OBJ_EXT): /usr/include/bits/huge_vall.h
perlmini$(OBJ_EXT): /usr/include/bits/in.h
perlmini$(OBJ_EXT): /usr/include/bits/inf.h
perlmini$(OBJ_EXT): /usr/include/bits/ioctl-types.h
perlmini$(OBJ_EXT): /usr/include/bits/ioctls.h
perlmini$(OBJ_EXT): /usr/include/bits/ipc.h
perlmini$(OBJ_EXT): /usr/include/bits/ipctypes.h
perlmini$(OBJ_EXT): /usr/include/bits/local_lim.h
perlmini$(OBJ_EXT): /usr/include/bits/locale.h
perlmini$(OBJ_EXT): /usr/include/bits/mathcalls.h
perlmini$(OBJ_EXT): /usr/include/bits/mathdef.h
perlmini$(OBJ_EXT): /usr/include/bits/nan.h
perlmini$(OBJ_EXT): /usr/include/bits/netdb.h
perlmini$(OBJ_EXT): /usr/include/bits/posix1_lim.h
perlmini$(OBJ_EXT): /usr/include/bits/posix2_lim.h
perlmini$(OBJ_EXT): /usr/include/bits/posix_opt.h
perlmini$(OBJ_EXT): /usr/include/bits/pthreadtypes.h
perlmini$(OBJ_EXT): /usr/include/bits/resource.h
perlmini$(OBJ_EXT): /usr/include/bits/select.h
perlmini$(OBJ_EXT): /usr/include/bits/sem.h
perlmini$(OBJ_EXT): /usr/include/bits/setjmp.h
perlmini$(OBJ_EXT): /usr/include/bits/sigaction.h
perlmini$(OBJ_EXT): /usr/include/bits/sigcontext.h
perlmini$(OBJ_EXT): /usr/include/bits/siginfo.h
perlmini$(OBJ_EXT): /usr/include/bits/signum.h
perlmini$(OBJ_EXT): /usr/include/bits/sigset.h
perlmini$(OBJ_EXT): /usr/include/bits/sigstack.h
perlmini$(OBJ_EXT): /usr/include/bits/sigthread.h
perlmini$(OBJ_EXT): /usr/include/bits/sockaddr.h
perlmini$(OBJ_EXT): /usr/include/bits/socket.h
perlmini$(OBJ_EXT): /usr/include/bits/stat.h
perlmini$(OBJ_EXT): /usr/include/bits/stdio_lim.h
perlmini$(OBJ_EXT): /usr/include/bits/sys_errlist.h
perlmini$(OBJ_EXT): /usr/include/bits/time.h
perlmini$(OBJ_EXT): /usr/include/bits/types.h
perlmini$(OBJ_EXT): /usr/include/bits/typesizes.h
perlmini$(OBJ_EXT): /usr/include/bits/uio.h
perlmini$(OBJ_EXT): /usr/include/bits/waitflags.h
perlmini$(OBJ_EXT): /usr/include/bits/waitstatus.h
perlmini$(OBJ_EXT): /usr/include/bits/wchar.h
perlmini$(OBJ_EXT): /usr/include/bits/wordsize.h
perlmini$(OBJ_EXT): /usr/include/bits/xopen_lim.h
perlmini$(OBJ_EXT): /usr/include/ctype.h
perlmini$(OBJ_EXT): /usr/include/dirent.h
perlmini$(OBJ_EXT): /usr/include/endian.h
perlmini$(OBJ_EXT): /usr/include/errno.h
perlmini$(OBJ_EXT): /usr/include/fcntl.h
perlmini$(OBJ_EXT): /usr/include/features.h
perlmini$(OBJ_EXT): /usr/include/gconv.h
perlmini$(OBJ_EXT): /usr/include/getopt.h
perlmini$(OBJ_EXT): /usr/include/gnu/stubs-64.h
perlmini$(OBJ_EXT): /usr/include/gnu/stubs.h
perlmini$(OBJ_EXT): /usr/include/inttypes.h
perlmini$(OBJ_EXT): /usr/include/libio.h
perlmini$(OBJ_EXT): /usr/include/limits.h
perlmini$(OBJ_EXT): /usr/include/linux/errno.h
perlmini$(OBJ_EXT): /usr/include/linux/limits.h
perlmini$(OBJ_EXT): /usr/include/linux/param.h
perlmini$(OBJ_EXT): /usr/include/locale.h
perlmini$(OBJ_EXT): /usr/include/math.h
perlmini$(OBJ_EXT): /usr/include/netdb.h
perlmini$(OBJ_EXT): /usr/include/netinet/in.h
perlmini$(OBJ_EXT): /usr/include/rpc/netdb.h
perlmini$(OBJ_EXT): /usr/include/setjmp.h
perlmini$(OBJ_EXT): /usr/include/signal.h
perlmini$(OBJ_EXT): /usr/include/stdint.h
perlmini$(OBJ_EXT): /usr/include/stdio.h
perlmini$(OBJ_EXT): /usr/include/stdlib.h
perlmini$(OBJ_EXT): /usr/include/string.h
perlmini$(OBJ_EXT): /usr/include/sys/cdefs.h
perlmini$(OBJ_EXT): /usr/include/sys/file.h
perlmini$(OBJ_EXT): /usr/include/sys/ioctl.h
perlmini$(OBJ_EXT): /usr/include/sys/ipc.h
perlmini$(OBJ_EXT): /usr/include/sys/param.h
perlmini$(OBJ_EXT): /usr/include/sys/resource.h
perlmini$(OBJ_EXT): /usr/include/sys/select.h
perlmini$(OBJ_EXT): /usr/include/sys/sem.h
perlmini$(OBJ_EXT): /usr/include/sys/socket.h
perlmini$(OBJ_EXT): /usr/include/sys/stat.h
perlmini$(OBJ_EXT): /usr/include/sys/sysmacros.h
perlmini$(OBJ_EXT): /usr/include/sys/time.h
perlmini$(OBJ_EXT): /usr/include/sys/times.h
perlmini$(OBJ_EXT): /usr/include/sys/ttydefaults.h
perlmini$(OBJ_EXT): /usr/include/sys/types.h
perlmini$(OBJ_EXT): /usr/include/sys/ucontext.h
perlmini$(OBJ_EXT): /usr/include/sys/uio.h
perlmini$(OBJ_EXT): /usr/include/sys/wait.h
perlmini$(OBJ_EXT): /usr/include/time.h
perlmini$(OBJ_EXT): /usr/include/unistd.h
perlmini$(OBJ_EXT): /usr/include/wchar.h
perlmini$(OBJ_EXT): /usr/include/xlocale.h
perlmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/float.h
perlmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/limits.h
perlmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h
perlmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdbool.h
perlmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h
perlmini$(OBJ_EXT): /usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/syslimits.h
perlmini$(OBJ_EXT): EXTERN.h
perlmini$(OBJ_EXT): XSUB.h
perlmini$(OBJ_EXT): av.h
perlmini$(OBJ_EXT): config.h
perlmini$(OBJ_EXT): cop.h
perlmini$(OBJ_EXT): cv.h
perlmini$(OBJ_EXT): embed.h
perlmini$(OBJ_EXT): embedvar.h
perlmini$(OBJ_EXT): form.h
perlmini$(OBJ_EXT): gv.h
perlmini$(OBJ_EXT): handy.h
perlmini$(OBJ_EXT): hv.h
perlmini$(OBJ_EXT): intrpvar.h
perlmini$(OBJ_EXT): iperlsys.h
perlmini$(OBJ_EXT): mg.h
perlmini$(OBJ_EXT): mg_vtable.h
perlmini$(OBJ_EXT): mydtrace.h
perlmini$(OBJ_EXT): op.h
perlmini$(OBJ_EXT): op_reg_common.h
perlmini$(OBJ_EXT): opcode.h
perlmini$(OBJ_EXT): opnames.h
perlmini$(OBJ_EXT): overload.h
perlmini$(OBJ_EXT): pad.h
perlmini$(OBJ_EXT): parser.h
perlmini$(OBJ_EXT): patchlevel.h
perlmini$(OBJ_EXT): perl.h
perlmini$(OBJ_EXT): perlapi.h
perlmini$(OBJ_EXT): perlio.h
perlmini$(OBJ_EXT): perlmini.c
perlmini$(OBJ_EXT): perlvars.h
perlmini$(OBJ_EXT): perly.h
perlmini$(OBJ_EXT): pp.h
perlmini$(OBJ_EXT): proto.h
perlmini$(OBJ_EXT): regexp.h
perlmini$(OBJ_EXT): scope.h
perlmini$(OBJ_EXT): sv.h
perlmini$(OBJ_EXT): thread.h
perlmini$(OBJ_EXT): unixish.h
perlmini$(OBJ_EXT): utf8.h
perlmini$(OBJ_EXT): util.h
perlmini$(OBJ_EXT): warnings.h
perlmini$(OBJ_EXT): cflags
cflags: cflags.SH ./config.sh ; /bin/sh cflags.SH
myconfig: myconfig.SH ./config.sh ; /bin/sh myconfig.SH
pod/Makefile: pod/Makefile.SH ./config.sh ; /bin/sh pod/Makefile.SH
# WARNING: Put nothing here or make depend will gobble it up!
