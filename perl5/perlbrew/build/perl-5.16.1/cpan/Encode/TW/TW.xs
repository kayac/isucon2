#include <EXTERN.h>
#include <perl.h>
#include <XSUB.h>
#define U8 U8
#include "encode.h"
#include "bi_01_t.h"
#include "ma_03_t.h"
#include "cp_02_t.h"
#include "bi_00_t.h"

static void
Encode_XSEncoding(pTHX_ encode_t *enc)
{
 dSP;
 HV *stash = gv_stashpv("Encode::XS", TRUE);
 SV *sv    = sv_bless(newRV_noinc(newSViv(PTR2IV(enc))),stash);
 int i = 0;
 PUSHMARK(sp);
 XPUSHs(sv);
 while (enc->name[i])
  {
   const char *name = enc->name[i++];
   XPUSHs(sv_2mortal(newSVpvn(name,strlen(name))));
  }
 PUTBACK;
 call_pv("Encode::define_encoding",G_DISCARD);
 SvREFCNT_dec(sv);
}

MODULE = Encode::TW	PACKAGE = Encode::TW
PROTOTYPES: DISABLE
BOOT:
{
#include "bi_01_t.exh"
#include "ma_03_t.exh"
#include "cp_02_t.exh"
#include "bi_00_t.exh"
}
