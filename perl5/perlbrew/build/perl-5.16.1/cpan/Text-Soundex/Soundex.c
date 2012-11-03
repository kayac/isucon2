/*
 * This file was generated automatically by ExtUtils::ParseXS version 3.16 from the
 * contents of Soundex.xs. Do not edit this file, edit Soundex.xs instead.
 *
 *    ANY CHANGES MADE HERE WILL BE LOST!
 *
 */

#line 1 "Soundex.xs"
/* -*- c -*- */

/* (c) Copyright 1998-2003 by Mark Mielke
 *
 * Freedom to use these sources for whatever you want, as long as credit
 * is given where credit is due, is hereby granted. You may make modifications
 * where you see fit but leave this copyright somewhere visible. As well try
 * to initial any changes you make so that if i like the changes i can
 * incorporate them into any later versions of mine.
 *
 *      - Mark Mielke <mark@mielke.cc>
 */

#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#define SOUNDEX_ACCURACY (4)	/* The maximum code length... (should be>=2) */

#if !(PERL_REVISION >= 5 && PERL_VERSION >= 8)
#  define utf8n_to_uvchr utf8_to_uv
#endif

static char sv_soundex_table[0x100];
static void sv_soundex_initialize (void)
{
  memset(&sv_soundex_table[0], '\0', sizeof(sv_soundex_table));
  sv_soundex_table['A'] = '0';
  sv_soundex_table['a'] = '0';
  sv_soundex_table['E'] = '0';
  sv_soundex_table['e'] = '0';
  sv_soundex_table['H'] = '0';
  sv_soundex_table['h'] = '0';
  sv_soundex_table['I'] = '0';
  sv_soundex_table['i'] = '0';
  sv_soundex_table['O'] = '0';
  sv_soundex_table['o'] = '0';
  sv_soundex_table['U'] = '0';
  sv_soundex_table['u'] = '0';
  sv_soundex_table['W'] = '0';
  sv_soundex_table['w'] = '0';
  sv_soundex_table['Y'] = '0';
  sv_soundex_table['y'] = '0';
  sv_soundex_table['B'] = '1';
  sv_soundex_table['b'] = '1';
  sv_soundex_table['F'] = '1';
  sv_soundex_table['f'] = '1';
  sv_soundex_table['P'] = '1';
  sv_soundex_table['p'] = '1';
  sv_soundex_table['V'] = '1';
  sv_soundex_table['v'] = '1';
  sv_soundex_table['C'] = '2';
  sv_soundex_table['c'] = '2';
  sv_soundex_table['G'] = '2';
  sv_soundex_table['g'] = '2';
  sv_soundex_table['J'] = '2';
  sv_soundex_table['j'] = '2';
  sv_soundex_table['K'] = '2';
  sv_soundex_table['k'] = '2';
  sv_soundex_table['Q'] = '2';
  sv_soundex_table['q'] = '2';
  sv_soundex_table['S'] = '2';
  sv_soundex_table['s'] = '2';
  sv_soundex_table['X'] = '2';
  sv_soundex_table['x'] = '2';
  sv_soundex_table['Z'] = '2';
  sv_soundex_table['z'] = '2';
  sv_soundex_table['D'] = '3';
  sv_soundex_table['d'] = '3';
  sv_soundex_table['T'] = '3';
  sv_soundex_table['t'] = '3';
  sv_soundex_table['L'] = '4';
  sv_soundex_table['l'] = '4';
  sv_soundex_table['M'] = '5';
  sv_soundex_table['m'] = '5';
  sv_soundex_table['N'] = '5';
  sv_soundex_table['n'] = '5';
  sv_soundex_table['R'] = '6';
  sv_soundex_table['r'] = '6';
}

static SV *sv_soundex (SV *source)
{
  char *source_p;
  char *source_end;

  {
    STRLEN source_len;
    source_p = SvPV(source, source_len);
    source_end = &source_p[source_len];
  }

  while (source_p != source_end)
    {
      char codepart_last = sv_soundex_table[(unsigned char) *source_p];

      if (codepart_last != '\0')
        {
          SV   *code     = newSV(SOUNDEX_ACCURACY);
          char *code_p   = SvPVX(code);
          char *code_end = &code_p[SOUNDEX_ACCURACY];

          SvCUR_set(code, SOUNDEX_ACCURACY);
          SvPOK_only(code);

          *code_p++ = toupper(*source_p++);

          while (source_p != source_end && code_p != code_end)
            {
              char c = *source_p++;
              char codepart = sv_soundex_table[(unsigned char) c];

              if (codepart != '\0')
                if (codepart != codepart_last && (codepart_last = codepart) != '0')
                  *code_p++ = codepart;
            }

          while (code_p != code_end)
            *code_p++ = '0';

          *code_end = '\0';

          return code;
        }

      source_p++;
    }

  return SvREFCNT_inc(perl_get_sv("Text::Soundex::nocode", FALSE));
}

static SV *sv_soundex_utf8 (SV* source)
{
  U8 *source_p;
  U8 *source_end;

  {
    STRLEN source_len;
    source_p = (U8 *) SvPV(source, source_len);
    source_end = &source_p[source_len];
  }

  while (source_p < source_end)
    {
      STRLEN offset;
      UV c = utf8n_to_uvchr(source_p, source_end-source_p, &offset, 0);
      char codepart_last = (c <= 0xFF) ? sv_soundex_table[c] : '\0';
      source_p = (offset >= 1) ? &source_p[offset] : source_end;

      if (codepart_last != '\0')
        {
          SV   *code     = newSV(SOUNDEX_ACCURACY);
          char *code_p   = SvPVX(code);
          char *code_end = &code_p[SOUNDEX_ACCURACY];

          SvCUR_set(code, SOUNDEX_ACCURACY);
          SvPOK_only(code);

          *code_p++ = toupper(c);

          while (source_p != source_end && code_p != code_end)
            {
              char codepart;
              c = utf8n_to_uvchr(source_p, source_end-source_p, &offset, 0);
              codepart = (c <= 0xFF) ? sv_soundex_table[c] : '\0';
              source_p = (offset >= 1) ? &source_p[offset] : source_end;

              if (codepart != '\0')
                if (codepart != codepart_last && (codepart_last = codepart) != '0')
                  *code_p++ = codepart;
            }

          while (code_p != code_end)
            *code_p++ = '0';

          *code_end = '\0';

          return code;
        }

      source_p++;
    }

  return SvREFCNT_inc(perl_get_sv("Text::Soundex::nocode", FALSE));
}

#line 197 "Soundex.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef dVAR
#  define dVAR		dNOOP
#endif


/* This stuff is not part of the API! You have been warned. */
#ifndef PERL_VERSION_DECIMAL
#  define PERL_VERSION_DECIMAL(r,v,s) (r*1000000 + v*1000 + s)
#endif
#ifndef PERL_DECIMAL_VERSION
#  define PERL_DECIMAL_VERSION \
	  PERL_VERSION_DECIMAL(PERL_REVISION,PERL_VERSION,PERL_SUBVERSION)
#endif
#ifndef PERL_VERSION_GE
#  define PERL_VERSION_GE(r,v,s) \
	  (PERL_DECIMAL_VERSION >= PERL_VERSION_DECIMAL(r,v,s))
#endif
#ifndef PERL_VERSION_LE
#  define PERL_VERSION_LE(r,v,s) \
	  (PERL_DECIMAL_VERSION <= PERL_VERSION_DECIMAL(r,v,s))
#endif

/* XS_INTERNAL is the explicit static-linkage variant of the default
 * XS macro.
 *
 * XS_EXTERNAL is the same as XS_INTERNAL except it does not include
 * "STATIC", ie. it exports XSUB symbols. You probably don't want that
 * for anything but the BOOT XSUB.
 *
 * See XSUB.h in core!
 */


/* TODO: This might be compatible further back than 5.10.0. */
#if PERL_VERSION_GE(5, 10, 0) && PERL_VERSION_LE(5, 15, 1)
#  undef XS_EXTERNAL
#  undef XS_INTERNAL
#  if defined(__CYGWIN__) && defined(USE_DYNAMIC_LOADING)
#    define XS_EXTERNAL(name) __declspec(dllexport) XSPROTO(name)
#    define XS_INTERNAL(name) STATIC XSPROTO(name)
#  endif
#  if defined(__SYMBIAN32__)
#    define XS_EXTERNAL(name) EXPORT_C XSPROTO(name)
#    define XS_INTERNAL(name) EXPORT_C STATIC XSPROTO(name)
#  endif
#  ifndef XS_EXTERNAL
#    if defined(HASATTRIBUTE_UNUSED) && !defined(__cplusplus)
#      define XS_EXTERNAL(name) void name(pTHX_ CV* cv __attribute__unused__)
#      define XS_INTERNAL(name) STATIC void name(pTHX_ CV* cv __attribute__unused__)
#    else
#      ifdef __cplusplus
#        define XS_EXTERNAL(name) extern "C" XSPROTO(name)
#        define XS_INTERNAL(name) static XSPROTO(name)
#      else
#        define XS_EXTERNAL(name) XSPROTO(name)
#        define XS_INTERNAL(name) STATIC XSPROTO(name)
#      endif
#    endif
#  endif
#endif

/* perl >= 5.10.0 && perl <= 5.15.1 */


/* The XS_EXTERNAL macro is used for functions that must not be static
 * like the boot XSUB of a module. If perl didn't have an XS_EXTERNAL
 * macro defined, the best we can do is assume XS is the same.
 * Dito for XS_INTERNAL.
 */
#ifndef XS_EXTERNAL
#  define XS_EXTERNAL(name) XS(name)
#endif
#ifndef XS_INTERNAL
#  define XS_INTERNAL(name) XS(name)
#endif

/* Now, finally, after all this mess, we want an ExtUtils::ParseXS
 * internal macro that we're free to redefine for varying linkage due
 * to the EXPORT_XSUB_SYMBOLS XS keyword. This is internal, use
 * XS_EXTERNAL(name) or XS_INTERNAL(name) in your code if you need to!
 */

#undef XS_EUPXS
#if defined(PERL_EUPXS_ALWAYS_EXPORT)
#  define XS_EUPXS(name) XS_EXTERNAL(name)
#else
   /* default to internal */
#  define XS_EUPXS(name) XS_INTERNAL(name)
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
            Perl_croak(aTHX_ "Usage: %s::%s(%s)", hvname, gvname, params);
        else
            Perl_croak(aTHX_ "Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
        Perl_croak(aTHX_ "Usage: CODE(0x%"UVxf")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b)    S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage        S_croak_xs_usage
#endif

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#line 339 "Soundex.c"

XS_EUPXS(XS_Text__Soundex_soundex_xs); /* prototype to pass -Wmissing-prototypes */
XS_EUPXS(XS_Text__Soundex_soundex_xs)
{
    dVAR; dXSARGS;
    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(ax); /* -Wall */
    SP -= items;
    {
#line 194 "Soundex.xs"
{
  sv_soundex_initialize();
}
#line 353 "Soundex.c"
#line 198 "Soundex.xs"
{
  int i;
  for (i = 0; i < items; i++)
    {
      SV *sv = ST(i);

      if (DO_UTF8(sv))
        sv = sv_soundex_utf8(sv);
      else
        sv = sv_soundex(sv);

      PUSHs(sv_2mortal(sv));
    }
}
#line 369 "Soundex.c"
	PUTBACK;
	return;
    }
}

#ifdef __cplusplus
extern "C"
#endif
XS_EXTERNAL(boot_Text__Soundex); /* prototype to pass -Wmissing-prototypes */
XS_EXTERNAL(boot_Text__Soundex)
{
    dVAR; dXSARGS;
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#endif
    XS_VERSION_BOOTCHECK;

        newXS("Text::Soundex::soundex_xs", XS_Text__Soundex_soundex_xs, file);
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

