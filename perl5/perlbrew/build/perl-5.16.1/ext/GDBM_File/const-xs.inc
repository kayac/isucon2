BOOT:
  {
#ifdef dTHX
    dTHX;
#endif
    HV *symbol_table = get_hv("GDBM_File::", GV_ADD);

    static const struct iv_s values_for_iv[] =
      {
#ifdef GDBM_CACHESIZE
        { "GDBM_CACHESIZE", 14, GDBM_CACHESIZE },
#endif
#ifdef GDBM_CENTFREE
        { "GDBM_CENTFREE", 13, GDBM_CENTFREE },
#endif
#ifdef GDBM_COALESCEBLKS
        { "GDBM_COALESCEBLKS", 17, GDBM_COALESCEBLKS },
#endif
#ifdef GDBM_FAST
        { "GDBM_FAST", 9, GDBM_FAST },
#endif
#ifdef GDBM_FASTMODE
        { "GDBM_FASTMODE", 13, GDBM_FASTMODE },
#endif
#ifdef GDBM_INSERT
        { "GDBM_INSERT", 11, GDBM_INSERT },
#endif
#ifdef GDBM_NEWDB
        { "GDBM_NEWDB", 10, GDBM_NEWDB },
#endif
#ifdef GDBM_NOLOCK
        { "GDBM_NOLOCK", 11, GDBM_NOLOCK },
#endif
#ifdef GDBM_OPENMASK
        { "GDBM_OPENMASK", 13, GDBM_OPENMASK },
#endif
#ifdef GDBM_READER
        { "GDBM_READER", 11, GDBM_READER },
#endif
#ifdef GDBM_REPLACE
        { "GDBM_REPLACE", 12, GDBM_REPLACE },
#endif
#ifdef GDBM_SYNC
        { "GDBM_SYNC", 9, GDBM_SYNC },
#endif
#ifdef GDBM_SYNCMODE
        { "GDBM_SYNCMODE", 13, GDBM_SYNCMODE },
#endif
#ifdef GDBM_WRCREAT
        { "GDBM_WRCREAT", 12, GDBM_WRCREAT },
#endif
#ifdef GDBM_WRITER
        { "GDBM_WRITER", 11, GDBM_WRITER },
#endif
        { NULL, 0, 0 } };
	const struct iv_s *value_for_iv = values_for_iv;
        while (value_for_iv->name) {
	    constant_add_symbol(aTHX_  symbol_table, value_for_iv->name,
				value_for_iv->namelen, newSViv(value_for_iv->value));
            ++value_for_iv;
	}
	if (C_ARRAY_LENGTH(values_for_notfound) > 1) {
#ifndef SYMBIAN
	    HV *const constant_missing = get_missing_hash(aTHX);
#endif
	    const struct notfound_s *value_for_notfound = values_for_notfound;
	    do {

		/* Need to add prototypes, else parsing will vary by platform.  */
		HE *he = (HE*) hv_common_key_len(symbol_table,
						 value_for_notfound->name,
						 value_for_notfound->namelen,
						 HV_FETCH_LVALUE, NULL, 0);
		SV *sv;
#ifndef SYMBIAN
		HEK *hek;
#endif
		if (!he) {
		    Perl_croak(aTHX_ 
			       "Couldn't add key '%s' to %%GDBM_File::",
			       value_for_notfound->name);
		}
		sv = HeVAL(he);
		if (!SvOK(sv) && SvTYPE(sv) != SVt_PVGV) {
		    /* Nothing was here before, so mark a prototype of ""  */
		    sv_setpvn(sv, "", 0);
		} else if (SvPOK(sv) && SvCUR(sv) == 0) {
		    /* There is already a prototype of "" - do nothing  */
		} else {
		    /* Someone has been here before us - have to make a real
		       typeglob.  */
		    /* It turns out to be incredibly hard to deal with all the
		       corner cases of sub foo (); and reporting errors correctly,
		       so lets cheat a bit.  Start with a constant subroutine  */
		    CV *cv = newCONSTSUB(symbol_table,
					 value_for_notfound->name,
					 &PL_sv_yes);
		    /* and then turn it into a non constant declaration only.  */
		    SvREFCNT_dec(CvXSUBANY(cv).any_ptr);
		    CvCONST_off(cv);
		    CvXSUB(cv) = NULL;
		    CvXSUBANY(cv).any_ptr = NULL;
		}
#ifndef SYMBIAN
		hek = HeKEY_hek(he);
		if (!hv_common(constant_missing, NULL, HEK_KEY(hek),
 			       HEK_LEN(hek), HEK_FLAGS(hek), HV_FETCH_ISSTORE,
			       &PL_sv_yes, HEK_HASH(hek)))
		    Perl_croak(aTHX_  "Couldn't add key '%s' to missing_hash",
			       value_for_notfound->name);
#endif
	    } while ((++value_for_notfound)->name);
	}
    /* As we've been creating subroutines, we better invalidate any cached
       methods  */
    mro_method_changed_in(symbol_table);
  }

void
AUTOLOAD()
    PROTOTYPE: DISABLE
    PREINIT:
	SV *sv = newSVpvn_flags(SvPVX(cv), SvCUR(cv), SVs_TEMP | SvUTF8(cv));
	const COP *cop = PL_curcop;
    PPCODE:
#ifndef SYMBIAN
	/* It's not obvious how to calculate this at C pre-processor time.
	   However, any compiler optimiser worth its salt should be able to
	   remove the dead code, and hopefully the now-obviously-unused static
	   function too.  */
	HV *constant_missing = (C_ARRAY_LENGTH(values_for_notfound) > 1)
	    ? get_missing_hash(aTHX) : NULL;
	if ((C_ARRAY_LENGTH(values_for_notfound) > 1)
	    ? hv_exists_ent(constant_missing, sv, 0) : 0) {
	    sv = newSVpvf("Your vendor has not defined GDBM_File macro %" SVf
			  ", used at %" COP_FILE_F " line %d\n", sv,
			  COP_FILE(cop), CopLINE(cop));
	} else
#endif
	{
	    sv = newSVpvf("%"SVf" is not a valid GDBM_File macro at %"
			  COP_FILE_F " line %d\n", sv, COP_FILE(cop), CopLINE(cop));
	}
	croak_sv(sv_2mortal(sv));
