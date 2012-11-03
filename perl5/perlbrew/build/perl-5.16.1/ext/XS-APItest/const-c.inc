#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static void
constant_add_symbol(pTHX_  HV *hash, const char *name, I32 namelen, SV *value) {
    HE *he = (HE*) hv_common_key_len(hash, name, namelen, HV_FETCH_LVALUE, NULL,
				     0);
    SV *sv;

    if (!he) {
        Perl_croak(aTHX_  "Couldn't add key '%s' to %%XS::APItest::",
		   name);
    }
    sv = HeVAL(he);
    if (SvOK(sv) || SvTYPE(sv) == SVt_PVGV) {
	/* Someone has been here before us - have to make a real sub.  */
	newCONSTSUB(hash, name, value);
    } else {
	SvUPGRADE(sv, SVt_RV);
	SvRV_set(sv, value);
	SvROK_on(sv);
	SvREADONLY_on(value);
    }
}



#ifndef SYMBIAN

/* Store a hash of all symbols missing from the package. To avoid trampling on
   the package namespace (uninvited) put each package's hash in our namespace.
   To avoid creating lots of typeblogs and symbol tables for sub-packages, put
   each package's hash into one hash in our namespace.  */

static HV *
get_missing_hash(pTHX) {
    HV *const parent
	= get_hv("ExtUtils::Constant::ProxySubs::Missing", GVf_MULTI);
    /* We could make a hash of hashes directly, but this would confuse anything
	at Perl space that looks at us, and as we're visible in Perl space,
	best to play nice. */
    SV *const *const ref
	= hv_fetch(parent, "XS::APItest", 11, TRUE);
    HV *new_hv;

    if (!ref)
	return NULL;

    if (SvROK(*ref))
	return (HV*) SvRV(*ref);

    new_hv = newHV();
    SvUPGRADE(*ref, SVt_RV);
    SvRV_set(*ref, (SV *)new_hv);
    SvROK_on(*ref);
    return new_hv;
}

#endif

struct notfound_s {const char *name; I32 namelen;} ;

    static const struct notfound_s values_for_notfound[] =
      {
#ifndef HV_DELETE
        { "HV_DELETE", 9 },
#endif
#ifndef HV_DISABLE_UVAR_XKEY
        { "HV_DISABLE_UVAR_XKEY", 20 },
#endif
#ifndef HV_FETCH_ISSTORE
        { "HV_FETCH_ISSTORE", 16 },
#endif
#ifndef HV_FETCH_ISEXISTS
        { "HV_FETCH_ISEXISTS", 17 },
#endif
#ifndef HV_FETCH_LVALUE
        { "HV_FETCH_LVALUE", 15 },
#endif
#ifndef HV_FETCH_JUST_SV
        { "HV_FETCH_JUST_SV", 16 },
#endif
#ifndef G_SCALAR
        { "G_SCALAR", 8 },
#endif
#ifndef G_ARRAY
        { "G_ARRAY", 7 },
#endif
#ifndef G_VOID
        { "G_VOID", 6 },
#endif
#ifndef G_DISCARD
        { "G_DISCARD", 9 },
#endif
#ifndef G_EVAL
        { "G_EVAL", 6 },
#endif
#ifndef G_NOARGS
        { "G_NOARGS", 8 },
#endif
#ifndef G_KEEPERR
        { "G_KEEPERR", 9 },
#endif
#ifndef G_NODEBUG
        { "G_NODEBUG", 9 },
#endif
#ifndef G_METHOD
        { "G_METHOD", 8 },
#endif
#ifndef G_FAKINGEVAL
        { "G_FAKINGEVAL", 12 },
#endif
#ifndef IS_NUMBER_IN_UV
        { "IS_NUMBER_IN_UV", 15 },
#endif
#ifndef IS_NUMBER_GREATER_THAN_UV_MAX
        { "IS_NUMBER_GREATER_THAN_UV_MAX", 29 },
#endif
#ifndef IS_NUMBER_NOT_INT
        { "IS_NUMBER_NOT_INT", 17 },
#endif
#ifndef IS_NUMBER_NEG
        { "IS_NUMBER_NEG", 13 },
#endif
#ifndef IS_NUMBER_INFINITY
        { "IS_NUMBER_INFINITY", 18 },
#endif
#ifndef IS_NUMBER_NAN
        { "IS_NUMBER_NAN", 13 },
#endif
        { NULL, 0 } };
struct iv_s {const char *name; I32 namelen; IV value;};
