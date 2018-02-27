/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "ReportConfigInterRAT.h"

static int
purpose_20_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
purpose_20_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
purpose_20_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	purpose_20_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
purpose_20_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
purpose_20_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
purpose_20_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
purpose_20_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
purpose_20_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
purpose_20_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
purpose_20_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
purpose_20_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
purpose_20_compare(asn_TYPE_descriptor_t *td1,
		void *structure1,
		asn_TYPE_descriptor_t *td2,
		void *structure2) {
	asn_comp_rval_t * res  = NULL;
	purpose_20_inherit_TYPE_descriptor(td1);
	purpose_20_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
purpose_20_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	purpose_20_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
reportAmount_26_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
reportAmount_26_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
reportAmount_26_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
reportAmount_26_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
reportAmount_26_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
reportAmount_26_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
reportAmount_26_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
reportAmount_26_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
reportAmount_26_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
reportAmount_26_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
reportAmount_26_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
reportAmount_26_compare(asn_TYPE_descriptor_t *td1,
		void *structure1,
		asn_TYPE_descriptor_t *td2,
		void *structure2) {
	asn_comp_rval_t * res  = NULL;
	reportAmount_26_inherit_TYPE_descriptor(td1);
	reportAmount_26_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
reportAmount_26_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	reportAmount_26_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_maxReportCells_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_b1_Threshold_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_b2_Threshold2_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_eventId_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_purpose_constr_20 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_triggerType_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_reportAmount_constr_26 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxReportCells_constr_24 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_b1_Threshold_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, choice.b1_ThresholdUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ThresholdUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b1-ThresholdUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, choice.b1_ThresholdGERAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b1-ThresholdGERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, choice.b1_ThresholdCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b1-ThresholdCDMA2000"
		},
};
static asn_TYPE_tag2member_t asn_MAP_b1_Threshold_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b1-ThresholdUTRA at 2317 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b1-ThresholdGERAN at 2318 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* b1-ThresholdCDMA2000 at 2320 */
};
static asn_CHOICE_specifics_t asn_SPC_b1_Threshold_specs_6 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold, present),
	sizeof(((struct ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold *)0)->present),
	asn_MAP_b1_Threshold_tag2el_6,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_b1_Threshold_6 = {
	"b1-Threshold",
	"b1-Threshold",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_b1_Threshold_constr_6,
	asn_MBR_b1_Threshold_6,
	3,	/* Elements count */
	&asn_SPC_b1_Threshold_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventB1_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1, b1_Threshold),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_b1_Threshold_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b1-Threshold"
		},
};
static ber_tlv_tag_t asn_DEF_eventB1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_eventB1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* b1-Threshold at 2317 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eventB1_specs_5 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB1, _asn_ctx),
	asn_MAP_eventB1_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventB1_5 = {
	"eventB1",
	"eventB1",
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
	asn_DEF_eventB1_tags_5,
	sizeof(asn_DEF_eventB1_tags_5)
		/sizeof(asn_DEF_eventB1_tags_5[0]) - 1, /* 1 */
	asn_DEF_eventB1_tags_5,	/* Same as above */
	sizeof(asn_DEF_eventB1_tags_5)
		/sizeof(asn_DEF_eventB1_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_eventB1_5,
	1,	/* Elements count */
	&asn_SPC_eventB1_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_b2_Threshold2_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, choice.b2_Threshold2UTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ThresholdUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b2-Threshold2UTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, choice.b2_Threshold2GERAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b2-Threshold2GERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, choice.b2_Threshold2CDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b2-Threshold2CDMA2000"
		},
};
static asn_TYPE_tag2member_t asn_MAP_b2_Threshold2_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b2-Threshold2UTRA at 2325 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b2-Threshold2GERAN at 2326 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* b2-Threshold2CDMA2000 at 2328 */
};
static asn_CHOICE_specifics_t asn_SPC_b2_Threshold2_specs_12 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2, present),
	sizeof(((struct ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2 *)0)->present),
	asn_MAP_b2_Threshold2_tag2el_12,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_b2_Threshold2_12 = {
	"b2-Threshold2",
	"b2-Threshold2",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_b2_Threshold2_constr_12,
	asn_MBR_b2_Threshold2_12,
	3,	/* Elements count */
	&asn_SPC_b2_Threshold2_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventB2_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2, b2_Threshold1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ThresholdEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b2-Threshold1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2, b2_Threshold2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_b2_Threshold2_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"b2-Threshold2"
		},
};
static ber_tlv_tag_t asn_DEF_eventB2_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_eventB2_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b2-Threshold1 at 2323 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* b2-Threshold2 at 2325 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eventB2_specs_10 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId__eventB2, _asn_ctx),
	asn_MAP_eventB2_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventB2_10 = {
	"eventB2",
	"eventB2",
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
	asn_DEF_eventB2_tags_10,
	sizeof(asn_DEF_eventB2_tags_10)
		/sizeof(asn_DEF_eventB2_tags_10[0]) - 1, /* 1 */
	asn_DEF_eventB2_tags_10,	/* Same as above */
	sizeof(asn_DEF_eventB2_tags_10)
		/sizeof(asn_DEF_eventB2_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_eventB2_10,
	2,	/* Elements count */
	&asn_SPC_eventB2_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eventId_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, choice.eventB1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_eventB1_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventB1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, choice.eventB2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_eventB2_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventB2"
		},
};
static asn_TYPE_tag2member_t asn_MAP_eventId_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventB1 at 2321 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventB2 at 2323 */
};
static asn_CHOICE_specifics_t asn_SPC_eventId_specs_4 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event__eventId),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType__event__eventId, present),
	sizeof(((struct ReportConfigInterRAT__triggerType__event__eventId *)0)->present),
	asn_MAP_eventId_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventId_4 = {
	"eventId",
	"eventId",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_eventId_constr_4,
	asn_MBR_eventId_4,
	2,	/* Elements count */
	&asn_SPC_eventId_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_event_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event, eventId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_eventId_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eventId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Hysteresis,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__event, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeToTrigger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeToTrigger"
		},
};
static ber_tlv_tag_t asn_DEF_event_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_event_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventId at 2321 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hysteresis at 2332 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* timeToTrigger at 2334 */
};
static asn_SEQUENCE_specifics_t asn_SPC_event_specs_3 = {
	sizeof(struct ReportConfigInterRAT__triggerType__event),
	offsetof(struct ReportConfigInterRAT__triggerType__event, _asn_ctx),
	asn_MAP_event_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_event_3 = {
	"event",
	"event",
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
	asn_DEF_event_tags_3,
	sizeof(asn_DEF_event_tags_3)
		/sizeof(asn_DEF_event_tags_3[0]) - 1, /* 1 */
	asn_DEF_event_tags_3,	/* Same as above */
	sizeof(asn_DEF_event_tags_3)
		/sizeof(asn_DEF_event_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_event_3,
	3,	/* Elements count */
	&asn_SPC_event_specs_3	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_purpose_value2enum_20[] = {
	{ 0,	20,	"reportStrongestCells" },
	{ 1,	26,	"reportStrongestCellsForSON" },
	{ 2,	9,	"reportCGI" }
};
static unsigned int asn_MAP_purpose_enum2value_20[] = {
	2,	/* reportCGI(2) */
	0,	/* reportStrongestCells(0) */
	1	/* reportStrongestCellsForSON(1) */
};
static asn_INTEGER_specifics_t asn_SPC_purpose_specs_20 = {
	asn_MAP_purpose_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_purpose_enum2value_20,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_purpose_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_purpose_20 = {
	"purpose",
	"purpose",
	purpose_20_free,
	purpose_20_print,
	purpose_20_constraint,
	purpose_20_decode_ber,
	purpose_20_encode_der,
	purpose_20_decode_xer,
	purpose_20_encode_xer,
	purpose_20_decode_uper,
	purpose_20_encode_uper,
	purpose_20_decode_aper,
	purpose_20_encode_aper,
	purpose_20_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_purpose_tags_20,
	sizeof(asn_DEF_purpose_tags_20)
		/sizeof(asn_DEF_purpose_tags_20[0]) - 1, /* 1 */
	asn_DEF_purpose_tags_20,	/* Same as above */
	sizeof(asn_DEF_purpose_tags_20)
		/sizeof(asn_DEF_purpose_tags_20[0]), /* 2 */
	&asn_PER_type_purpose_constr_20,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_purpose_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_periodical_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType__periodical, purpose),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_purpose_20,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"purpose"
		},
};
static ber_tlv_tag_t asn_DEF_periodical_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_periodical_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* purpose at 2337 */
};
static asn_SEQUENCE_specifics_t asn_SPC_periodical_specs_19 = {
	sizeof(struct ReportConfigInterRAT__triggerType__periodical),
	offsetof(struct ReportConfigInterRAT__triggerType__periodical, _asn_ctx),
	asn_MAP_periodical_tag2el_19,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodical_19 = {
	"periodical",
	"periodical",
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
	asn_DEF_periodical_tags_19,
	sizeof(asn_DEF_periodical_tags_19)
		/sizeof(asn_DEF_periodical_tags_19[0]) - 1, /* 1 */
	asn_DEF_periodical_tags_19,	/* Same as above */
	sizeof(asn_DEF_periodical_tags_19)
		/sizeof(asn_DEF_periodical_tags_19[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_periodical_19,
	1,	/* Elements count */
	&asn_SPC_periodical_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_triggerType_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType, choice.event),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_event_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"event"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT__triggerType, choice.periodical),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_periodical_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"periodical"
		},
};
static asn_TYPE_tag2member_t asn_MAP_triggerType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* event at 2331 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodical at 2340 */
};
static asn_CHOICE_specifics_t asn_SPC_triggerType_specs_2 = {
	sizeof(struct ReportConfigInterRAT__triggerType),
	offsetof(struct ReportConfigInterRAT__triggerType, _asn_ctx),
	offsetof(struct ReportConfigInterRAT__triggerType, present),
	sizeof(((struct ReportConfigInterRAT__triggerType *)0)->present),
	asn_MAP_triggerType_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_triggerType_2 = {
	"triggerType",
	"triggerType",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_triggerType_constr_2,
	asn_MBR_triggerType_2,
	2,	/* Elements count */
	&asn_SPC_triggerType_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_reportAmount_value2enum_26[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
};
static unsigned int asn_MAP_reportAmount_enum2value_26[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static asn_INTEGER_specifics_t asn_SPC_reportAmount_specs_26 = {
	asn_MAP_reportAmount_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_reportAmount_enum2value_26,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_reportAmount_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportAmount_26 = {
	"reportAmount",
	"reportAmount",
	reportAmount_26_free,
	reportAmount_26_print,
	reportAmount_26_constraint,
	reportAmount_26_decode_ber,
	reportAmount_26_encode_der,
	reportAmount_26_decode_xer,
	reportAmount_26_encode_xer,
	reportAmount_26_decode_uper,
	reportAmount_26_encode_uper,
	reportAmount_26_decode_aper,
	reportAmount_26_encode_aper,
	reportAmount_26_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_reportAmount_tags_26,
	sizeof(asn_DEF_reportAmount_tags_26)
		/sizeof(asn_DEF_reportAmount_tags_26[0]) - 1, /* 1 */
	asn_DEF_reportAmount_tags_26,	/* Same as above */
	sizeof(asn_DEF_reportAmount_tags_26)
		/sizeof(asn_DEF_reportAmount_tags_26[0]), /* 2 */
	&asn_PER_type_reportAmount_constr_26,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportAmount_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ReportConfigInterRAT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, triggerType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_triggerType_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"triggerType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, maxReportCells),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_maxReportCells_constraint_1,
		&asn_PER_memb_maxReportCells_constr_24,
		0,
		"maxReportCells"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, reportInterval),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportInterval,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ReportConfigInterRAT, reportAmount),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportAmount_26,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportAmount"
		},
};
static ber_tlv_tag_t asn_DEF_ReportConfigInterRAT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ReportConfigInterRAT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* triggerType at 2334 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxReportCells at 2342 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportInterval at 2343 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* reportAmount at 2344 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ReportConfigInterRAT_specs_1 = {
	sizeof(struct ReportConfigInterRAT),
	offsetof(struct ReportConfigInterRAT, _asn_ctx),
	asn_MAP_ReportConfigInterRAT_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ReportConfigInterRAT = {
	"ReportConfigInterRAT",
	"ReportConfigInterRAT",
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
	asn_DEF_ReportConfigInterRAT_tags_1,
	sizeof(asn_DEF_ReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_ReportConfigInterRAT_tags_1[0]), /* 1 */
	asn_DEF_ReportConfigInterRAT_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportConfigInterRAT_tags_1)
		/sizeof(asn_DEF_ReportConfigInterRAT_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ReportConfigInterRAT_1,
	4,	/* Elements count */
	&asn_SPC_ReportConfigInterRAT_specs_1	/* Additional specs */
};

