# pod/Makefile
# This file is derived from pod/Makefile.SH.  Any changes made here will
# be lost the next time you run Configure.

POD = perl5004delta.pod perl5005delta.pod perl5100delta.pod perl5101delta.pod perl5120delta.pod perl5121delta.pod perl5122delta.pod perl5123delta.pod perl5124delta.pod perl5140delta.pod perl5141delta.pod perl5142delta.pod perl5160delta.pod perl561delta.pod perl56delta.pod perl581delta.pod perl582delta.pod perl583delta.pod perl584delta.pod perl585delta.pod perl586delta.pod perl587delta.pod perl588delta.pod perl589delta.pod perl58delta.pod perlapio.pod perlartistic.pod perlbook.pod perlboot.pod perlbot.pod perlcall.pod perlcheat.pod perlclib.pod perlcommunity.pod perldata.pod perldbmfilter.pod perldebguts.pod perldebtut.pod perldebug.pod perldelta.pod perldiag.pod perldsc.pod perldtrace.pod perlebcdic.pod perlembed.pod perlexperiment.pod perlfilter.pod perlfork.pod perlform.pod perlfunc.pod perlgit.pod perlgpl.pod perlguts.pod perlhack.pod perlhacktips.pod perlhacktut.pod perlhist.pod perlinterp.pod perlintro.pod perliol.pod perlipc.pod perllexwarn.pod perllocale.pod perllol.pod perlmodinstall.pod perlmod.pod perlmodstyle.pod perlmroapi.pod perlnewmod.pod perlnumber.pod perlobj.pod perlootut.pod perlopentut.pod perlop.pod perlpacktut.pod perlperf.pod perl.pod perlpod.pod perlpodspec.pod perlpodstyle.pod perlpolicy.pod perlport.pod perlpragma.pod perlreapi.pod perlrebackslash.pod perlrecharclass.pod perlref.pod perlreftut.pod perlreguts.pod perlre.pod perlrequick.pod perlreref.pod perlretut.pod perlrun.pod perlsec.pod perlsource.pod perlstyle.pod perlsub.pod perlsyn.pod perlthrtut.pod perltie.pod perltodo.pod perltooc.pod perltoot.pod perltrap.pod perlunicode.pod perlunifaq.pod perluniintro.pod perlunitut.pod perlutil.pod perlvar.pod perlvms.pod

MAN = perl5004delta.man perl5005delta.man perl5100delta.man perl5101delta.man perl5120delta.man perl5121delta.man perl5122delta.man perl5123delta.man perl5124delta.man perl5140delta.man perl5141delta.man perl5142delta.man perl5160delta.man perl561delta.man perl56delta.man perl581delta.man perl582delta.man perl583delta.man perl584delta.man perl585delta.man perl586delta.man perl587delta.man perl588delta.man perl589delta.man perl58delta.man perlapio.man perlartistic.man perlbook.man perlboot.man perlbot.man perlcall.man perlcheat.man perlclib.man perlcommunity.man perldata.man perldbmfilter.man perldebguts.man perldebtut.man perldebug.man perldelta.man perldiag.man perldsc.man perldtrace.man perlebcdic.man perlembed.man perlexperiment.man perlfilter.man perlfork.man perlform.man perlfunc.man perlgit.man perlgpl.man perlguts.man perlhack.man perlhacktips.man perlhacktut.man perlhist.man perlinterp.man perlintro.man perliol.man perlipc.man perllexwarn.man perllocale.man perllol.man perlmodinstall.man perlmod.man perlmodstyle.man perlmroapi.man perlnewmod.man perlnumber.man perlobj.man perlootut.man perlopentut.man perlop.man perlpacktut.man perlperf.man perl.man perlpod.man perlpodspec.man perlpodstyle.man perlpolicy.man perlport.man perlpragma.man perlreapi.man perlrebackslash.man perlrecharclass.man perlref.man perlreftut.man perlreguts.man perlre.man perlrequick.man perlreref.man perlretut.man perlrun.man perlsec.man perlsource.man perlstyle.man perlsub.man perlsyn.man perlthrtut.man perltie.man perltodo.man perltooc.man perltoot.man perltrap.man perlunicode.man perlunifaq.man perluniintro.man perlunitut.man perlutil.man perlvar.man perlvms.man

# no perltoc.html
HTML = perl5004delta.html perl5005delta.html perl5100delta.html perl5101delta.html perl5120delta.html perl5121delta.html perl5122delta.html perl5123delta.html perl5124delta.html perl5140delta.html perl5141delta.html perl5142delta.html perl5160delta.html perl561delta.html perl56delta.html perl581delta.html perl582delta.html perl583delta.html perl584delta.html perl585delta.html perl586delta.html perl587delta.html perl588delta.html perl589delta.html perl58delta.html perlapio.html perlartistic.html perlbook.html perlboot.html perlbot.html perlcall.html perlcheat.html perlclib.html perlcommunity.html perldata.html perldbmfilter.html perldebguts.html perldebtut.html perldebug.html perldelta.html perldiag.html perldsc.html perldtrace.html perlebcdic.html perlembed.html perlexperiment.html perlfilter.html perlfork.html perlform.html perlfunc.html perlgit.html perlgpl.html perlguts.html perlhack.html perlhacktips.html perlhacktut.html perlhist.html perlinterp.html perlintro.html perliol.html perlipc.html perllexwarn.html perllocale.html perllol.html perlmodinstall.html perlmod.html perlmodstyle.html perlmroapi.html perlnewmod.html perlnumber.html perlobj.html perlootut.html perlopentut.html perlop.html perlpacktut.html perlperf.html perl.html perlpod.html perlpodspec.html perlpodstyle.html perlpolicy.html perlport.html perlpragma.html perlreapi.html perlrebackslash.html perlrecharclass.html perlref.html perlreftut.html perlreguts.html perlre.html perlrequick.html perlreref.html perlretut.html perlrun.html perlsec.html perlsource.html perlstyle.html perlsub.html perlsyn.html perlthrtut.html perltie.html perltodo.html perltooc.html perltoot.html perltrap.html perlunicode.html perlunifaq.html perluniintro.html perlunitut.html perlutil.html perlvar.html perlvms.html

TEX  = perl5004delta.tex perl5005delta.tex perl5100delta.tex perl5101delta.tex perl5120delta.tex perl5121delta.tex perl5122delta.tex perl5123delta.tex perl5124delta.tex perl5140delta.tex perl5141delta.tex perl5142delta.tex perl5160delta.tex perl561delta.tex perl56delta.tex perl581delta.tex perl582delta.tex perl583delta.tex perl584delta.tex perl585delta.tex perl586delta.tex perl587delta.tex perl588delta.tex perl589delta.tex perl58delta.tex perlapio.tex perlartistic.tex perlbook.tex perlboot.tex perlbot.tex perlcall.tex perlcheat.tex perlclib.tex perlcommunity.tex perldata.tex perldbmfilter.tex perldebguts.tex perldebtut.tex perldebug.tex perldelta.tex perldiag.tex perldsc.tex perldtrace.tex perlebcdic.tex perlembed.tex perlexperiment.tex perlfilter.tex perlfork.tex perlform.tex perlfunc.tex perlgit.tex perlgpl.tex perlguts.tex perlhack.tex perlhacktips.tex perlhacktut.tex perlhist.tex perlinterp.tex perlintro.tex perliol.tex perlipc.tex perllexwarn.tex perllocale.tex perllol.tex perlmodinstall.tex perlmod.tex perlmodstyle.tex perlmroapi.tex perlnewmod.tex perlnumber.tex perlobj.tex perlootut.tex perlopentut.tex perlop.tex perlpacktut.tex perlperf.tex perl.tex perlpod.tex perlpodspec.tex perlpodstyle.tex perlpolicy.tex perlport.tex perlpragma.tex perlreapi.tex perlrebackslash.tex perlrecharclass.tex perlref.tex perlreftut.tex perlreguts.tex perlre.tex perlrequick.tex perlreref.tex perlretut.tex perlrun.tex perlsec.tex perlsource.tex perlstyle.tex perlsub.tex perlsyn.tex perlthrtut.tex perltie.tex perltodo.tex perltooc.tex perltoot.tex perltrap.tex perlunicode.tex perlunifaq.tex perluniintro.tex perlunitut.tex perlutil.tex perlvar.tex perlvms.tex  

# The following is used to include the current directory in
# the dynamic loader path you are building a shared libperl.
LDLIBPTH = 


HTMLROOT = /	# Change this to fix cross-references in HTML
POD2HTML_ARGS = --htmlroot=$(HTMLROOT) --podroot=.. --podpath=pod:lib:ext:vms
POD2HTML = ../ext/Pod-Html/pod2html
POD2MAN = ../cpan/podlators/pod2man
POD2LATEX = ../cpan/Pod-LaTeX/pod2latex
PODCHECKER =  ../cpan/Pod-Parser/podchecker

PERL = ../miniperl
PERLILIB = $(PERL) -I../lib
REALPERL = ../perl

all: man

man:	$(POD2MAN) $(MAN)

html:	$(POD2HTML) $(HTML)

tex:	$(POD2LATEX) $(TEX)

toc perltoc.pod:	buildtoc
	$(PERLILIB) buildtoc

.SUFFIXES: .pm .pod

.SUFFIXES: .man

.pm.man:     $(POD2MAN)
	$(REALPERL) -I../lib $(POD2MAN) $*.pm >$*.man

.pod.man:     $(POD2MAN)
	$(REALPERL) -I../lib $(POD2MAN) $*.pod >$*.man

.SUFFIXES: .html

.pm.html:    $(POD2HTML)
	$(PERL) -I../lib $(POD2HTML) $(POD2HTML_ARGS) --infile=$*.pm --outfile=$*.html

.pod.html:    $(POD2HTML)
	$(PERL) -I../lib $(POD2HTML) $(POD2HTML_ARGS) --infile=$*.pod --outfile=$*.html

.SUFFIXES: .tex

.pm.tex: $(POD2LATEX)
	$(PERL) -I../lib $(POD2LATEX) $*.pm

.pod.tex: $(POD2LATEX)
	$(PERL) -I../lib $(POD2LATEX) $*.pod

clean:
	rm -f $(MAN)
	rm -f $(HTML)
	rm -f $(TEX)
	rm -f pod2html-*cache
	rm -f *.aux *.log *.exe

realclean:	clean

distclean:	realclean

veryclean:	distclean
	-rm -f *~ *.orig

check:	$(PODCHECKER)
	@echo "checking..."; \
	$(PERL) -I../lib $(PODCHECKER) $(POD)
