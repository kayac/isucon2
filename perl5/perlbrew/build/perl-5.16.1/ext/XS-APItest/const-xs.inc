BOOT:
  {
#ifdef dTHX
    dTHX;
#endif
    HV *symbol_table = get_hv("XS::APItest::", GV_ADD);

    static const struct iv_s values_for_iv[] =
      {
#ifdef HV_DELETE
        { "HV_DELETE", 9, HV_DELETE },
#endif
#ifdef HV_DISABLE_UVAR_XKEY
        { "HV_DISABLE_UVAR_XKEY", 20, HV_DISABLE_UVAR_XKEY },
#endif
#ifdef HV_FETCH_ISSTORE
        { "HV_FETCH_ISSTORE", 16, HV_FETCH_ISSTORE },
#endif
#ifdef HV_FETCH_ISEXISTS
        { "HV_FETCH_ISEXISTS", 17, HV_FETCH_ISEXISTS },
#endif
#ifdef HV_FETCH_LVALUE
        { "HV_FETCH_LVALUE", 15, HV_FETCH_LVALUE },
#endif
#ifdef HV_FETCH_JUST_SV
        { "HV_FETCH_JUST_SV", 16, HV_FETCH_JUST_SV },
#endif
#ifdef G_SCALAR
        { "G_SCALAR", 8, G_SCALAR },
#endif
#ifdef G_ARRAY
        { "G_ARRAY", 7, G_ARRAY },
#endif
#ifdef G_VOID
        { "G_VOID", 6, G_VOID },
#endif
#ifdef G_DISCARD
        { "G_DISCARD", 9, G_DISCARD },
#endif
#ifdef G_EVAL
        { "G_EVAL", 6, G_EVAL },
#endif
#ifdef G_NOARGS
        { "G_NOARGS", 8, G_NOARGS },
#endif
#ifdef G_KEEPERR
        { "G_KEEPERR", 9, G_KEEPERR },
#endif
#ifdef G_NODEBUG
        { "G_NODEBUG", 9, G_NODEBUG },
#endif
#ifdef G_METHOD
        { "G_METHOD", 8, G_METHOD },
#endif
#ifdef G_FAKINGEVAL
        { "G_FAKINGEVAL", 12, G_FAKINGEVAL },
#endif
#ifdef IS_NUMBER_IN_UV
        { "IS_NUMBER_IN_UV", 15, IS_NUMBER_IN_UV },
#endif
#ifdef IS_NUMBER_GREATER_THAN_UV_MAX
        { "IS_NUMBER_GREATER_THAN_UV_MAX", 29, IS_NUMBER_GREATER_THAN_UV_MAX },
#endif
#ifdef IS_NUMBER_NOT_INT
        { "IS_NUMBER_NOT_INT", 17, IS_NUMBER_NOT_INT },
#endif
#ifdef IS_NUMBER_NEG
        { "IS_NUMBER_NEG", 13, IS_NUMBER_NEG },
#endif
#ifdef IS_NUMBER_INFINITY
        { "IS_NUMBER_INFINITY", 18, IS_NUMBER_INFINITY },
#endif
#ifdef IS_NUMBER_NAN
        { "IS_NUMBER_NAN", 13, IS_NUMBER_NAN },
#endif
#ifdef G_WANT
        { "G_WANT", 6, G_WANT },
#endif
        { "fallback_amg", 12, fallback_amg },
        { "to_sv_amg", 9, to_sv_amg },
        { "to_av_amg", 9, to_av_amg },
        { "to_hv_amg", 9, to_hv_amg },
        { "to_gv_amg", 9, to_gv_amg },
        { "to_cv_amg", 9, to_cv_amg },
        { "inc_amg", 7, inc_amg },
        { "dec_amg", 7, dec_amg },
        { "bool__amg", 9, bool__amg },
        { "numer_amg", 9, numer_amg },
        { "string_amg", 10, string_amg },
        { "not_amg", 7, not_amg },
        { "copy_amg", 8, copy_amg },
        { "abs_amg", 7, abs_amg },
        { "neg_amg", 7, neg_amg },
        { "iter_amg", 8, iter_amg },
        { "int_amg", 7, int_amg },
        { "lt_amg", 6, lt_amg },
        { "le_amg", 6, le_amg },
        { "gt_amg", 6, gt_amg },
        { "ge_amg", 6, ge_amg },
        { "eq_amg", 6, eq_amg },
        { "ne_amg", 6, ne_amg },
        { "slt_amg", 7, slt_amg },
        { "sle_amg", 7, sle_amg },
        { "sgt_amg", 7, sgt_amg },
        { "sge_amg", 7, sge_amg },
        { "seq_amg", 7, seq_amg },
        { "sne_amg", 7, sne_amg },
        { "nomethod_amg", 12, nomethod_amg },
        { "add_amg", 7, add_amg },
        { "add_ass_amg", 11, add_ass_amg },
        { "subtr_amg", 9, subtr_amg },
        { "subtr_ass_amg", 13, subtr_ass_amg },
        { "mult_amg", 8, mult_amg },
        { "mult_ass_amg", 12, mult_ass_amg },
        { "div_amg", 7, div_amg },
        { "div_ass_amg", 11, div_ass_amg },
        { "modulo_amg", 10, modulo_amg },
        { "modulo_ass_amg", 14, modulo_ass_amg },
        { "pow_amg", 7, pow_amg },
        { "pow_ass_amg", 11, pow_ass_amg },
        { "lshift_amg", 10, lshift_amg },
        { "lshift_ass_amg", 14, lshift_ass_amg },
        { "rshift_amg", 10, rshift_amg },
        { "rshift_ass_amg", 14, rshift_ass_amg },
        { "band_amg", 8, band_amg },
        { "band_ass_amg", 12, band_ass_amg },
        { "bor_amg", 7, bor_amg },
        { "bor_ass_amg", 11, bor_ass_amg },
        { "bxor_amg", 8, bxor_amg },
        { "bxor_ass_amg", 12, bxor_ass_amg },
        { "ncmp_amg", 8, ncmp_amg },
        { "scmp_amg", 8, scmp_amg },
        { "compl_amg", 9, compl_amg },
        { "atan2_amg", 9, atan2_amg },
        { "cos_amg", 7, cos_amg },
        { "sin_amg", 7, sin_amg },
        { "exp_amg", 7, exp_amg },
        { "log_amg", 7, log_amg },
        { "sqrt_amg", 8, sqrt_amg },
        { "repeat_amg", 10, repeat_amg },
        { "repeat_ass_amg", 14, repeat_ass_amg },
        { "concat_amg", 10, concat_amg },
        { "concat_ass_amg", 14, concat_ass_amg },
        { "smart_amg", 9, smart_amg },
        { "ftest_amg", 9, ftest_amg },
        { "regexp_amg", 10, regexp_amg },
        { "DESTROY_amg", 11, DESTROY_amg },
#ifndef G_WANT
        /* This is the default value: */
        { "G_WANT", 6, G_ARRAY|G_VOID },
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
			       "Couldn't add key '%s' to %%XS::APItest::",
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
constant(sv)
    INPUT:
	SV *		sv;
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
	    sv = newSVpvf("Your vendor has not defined XS::APItest macro %" SVf
			  ", used", sv);
	} else
#endif
	{
	    sv = newSVpvf("%"SVf" is not a valid XS::APItest macro",
			  sv);
	}
	PUSHs(sv_2mortal(sv));
