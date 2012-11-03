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

/* This allows slightly more efficient code on !USE_ITHREADS: */
#ifdef USE_ITHREADS
#  define COP_FILE(c)	CopFILE(c)
#  define COP_FILE_F	"s"
#else
#  define COP_FILE(c)	CopFILESV(c)
#  define COP_FILE_F	SVf
#endif

static void
constant_add_symbol(pTHX_  HV *hash, const char *name, I32 namelen, SV *value) {
    HE *he = (HE*) hv_common_key_len(hash, name, namelen, HV_FETCH_LVALUE, NULL,
				     0);
    SV *sv;

    if (!he) {
        Perl_croak(aTHX_  "Couldn't add key '%s' to %%GDBM_File::",
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
	= hv_fetch(parent, "GDBM_File", 9, TRUE);
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
#ifndef GDBM_CACHESIZE
        { "GDBM_CACHESIZE", 14 },
#endif
#ifndef GDBM_CENTFREE
        { "GDBM_CENTFREE", 13 },
#endif
#ifndef GDBM_COALESCEBLKS
        { "GDBM_COALESCEBLKS", 17 },
#endif
#ifndef GDBM_FAST
        { "GDBM_FAST", 9 },
#endif
#ifndef GDBM_FASTMODE
        { "GDBM_FASTMODE", 13 },
#endif
#ifndef GDBM_INSERT
        { "GDBM_INSERT", 11 },
#endif
#ifndef GDBM_NEWDB
        { "GDBM_NEWDB", 10 },
#endif
#ifndef GDBM_NOLOCK
        { "GDBM_NOLOCK", 11 },
#endif
#ifndef GDBM_OPENMASK
        { "GDBM_OPENMASK", 13 },
#endif
#ifndef GDBM_READER
        { "GDBM_READER", 11 },
#endif
#ifndef GDBM_REPLACE
        { "GDBM_REPLACE", 12 },
#endif
#ifndef GDBM_SYNC
        { "GDBM_SYNC", 9 },
#endif
#ifndef GDBM_SYNCMODE
        { "GDBM_SYNCMODE", 13 },
#endif
#ifndef GDBM_WRCREAT
        { "GDBM_WRCREAT", 12 },
#endif
#ifndef GDBM_WRITER
        { "GDBM_WRITER", 11 },
#endif
        { NULL, 0 } };
struct iv_s {const char *name; I32 namelen; IV value;};
