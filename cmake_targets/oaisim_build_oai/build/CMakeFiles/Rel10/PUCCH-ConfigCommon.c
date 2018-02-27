/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "PUCCH-ConfigCommon.h"

static int
deltaPUCCH_Shift_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
deltaPUCCH_Shift_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
deltaPUCCH_Shift_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
deltaPUCCH_Shift_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
deltaPUCCH_Shift_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
deltaPUCCH_Shift_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
deltaPUCCH_Shift_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
deltaPUCCH_Shift_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
deltaPUCCH_Shift_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
deltaPUCCH_Shift_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
deltaPUCCH_Shift_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
deltaPUCCH_Shift_2_compare(asn_TYPE_descriptor_t *td1,
		void *structure1,
		asn_TYPE_descriptor_t *td2,
		void *structure2) {
	asn_comp_rval_t * res  = NULL;
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td1);
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
deltaPUCCH_Shift_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	deltaPUCCH_Shift_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_nRB_CQI_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 98)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_nCS_AN_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_n1PUCCH_AN_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_deltaPUCCH_Shift_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nRB_CQI_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  98 }	/* (0..98) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nCS_AN_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n1PUCCH_AN_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_deltaPUCCH_Shift_value2enum_2[] = {
	{ 0,	3,	"ds1" },
	{ 1,	3,	"ds2" },
	{ 2,	3,	"ds3" }
};
static unsigned int asn_MAP_deltaPUCCH_Shift_enum2value_2[] = {
	0,	/* ds1(0) */
	1,	/* ds2(1) */
	2	/* ds3(2) */
};
static asn_INTEGER_specifics_t asn_SPC_deltaPUCCH_Shift_specs_2 = {
	asn_MAP_deltaPUCCH_Shift_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaPUCCH_Shift_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_deltaPUCCH_Shift_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaPUCCH_Shift_2 = {
	"deltaPUCCH-Shift",
	"deltaPUCCH-Shift",
	deltaPUCCH_Shift_2_free,
	deltaPUCCH_Shift_2_print,
	deltaPUCCH_Shift_2_constraint,
	deltaPUCCH_Shift_2_decode_ber,
	deltaPUCCH_Shift_2_encode_der,
	deltaPUCCH_Shift_2_decode_xer,
	deltaPUCCH_Shift_2_encode_xer,
	deltaPUCCH_Shift_2_decode_uper,
	deltaPUCCH_Shift_2_encode_uper,
	deltaPUCCH_Shift_2_decode_aper,
	deltaPUCCH_Shift_2_encode_aper,
	deltaPUCCH_Shift_2_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_deltaPUCCH_Shift_tags_2,
	sizeof(asn_DEF_deltaPUCCH_Shift_tags_2)
		/sizeof(asn_DEF_deltaPUCCH_Shift_tags_2[0]) - 1, /* 1 */
	asn_DEF_deltaPUCCH_Shift_tags_2,	/* Same as above */
	sizeof(asn_DEF_deltaPUCCH_Shift_tags_2)
		/sizeof(asn_DEF_deltaPUCCH_Shift_tags_2[0]), /* 2 */
	&asn_PER_type_deltaPUCCH_Shift_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaPUCCH_Shift_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PUCCH_ConfigCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigCommon, deltaPUCCH_Shift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaPUCCH_Shift_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaPUCCH-Shift"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigCommon, nRB_CQI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nRB_CQI_constraint_1,
		&asn_PER_memb_nRB_CQI_constr_6,
		0,
		"nRB-CQI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigCommon, nCS_AN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nCS_AN_constraint_1,
		&asn_PER_memb_nCS_AN_constr_7,
		0,
		"nCS-AN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigCommon, n1PUCCH_AN),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n1PUCCH_AN_constraint_1,
		&asn_PER_memb_n1PUCCH_AN_constr_8,
		0,
		"n1PUCCH-AN"
		},
};
static ber_tlv_tag_t asn_DEF_PUCCH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PUCCH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaPUCCH-Shift at 2246 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nRB-CQI at 2247 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nCS-AN at 2248 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* n1PUCCH-AN at 2249 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigCommon_specs_1 = {
	sizeof(struct PUCCH_ConfigCommon),
	offsetof(struct PUCCH_ConfigCommon, _asn_ctx),
	asn_MAP_PUCCH_ConfigCommon_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigCommon = {
	"PUCCH-ConfigCommon",
	"PUCCH-ConfigCommon",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PUCCH_ConfigCommon_tags_1,
	sizeof(asn_DEF_PUCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigCommon_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PUCCH_ConfigCommon_1,
	4,	/* Elements count */
	&asn_SPC_PUCCH_ConfigCommon_specs_1	/* Additional specs */
};

