/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "FilterCoefficient.h"

int
FilterCoefficient_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
FilterCoefficient_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
FilterCoefficient_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
FilterCoefficient_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
FilterCoefficient_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
FilterCoefficient_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
FilterCoefficient_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
FilterCoefficient_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
FilterCoefficient_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
FilterCoefficient_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
FilterCoefficient_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_comp_rval_t * 
FilterCoefficient_compare(asn_TYPE_descriptor_t *td1,
		void *structure1,
		asn_TYPE_descriptor_t *td2,
		void *structure2) {
	asn_comp_rval_t * res  = NULL;
	FilterCoefficient_1_inherit_TYPE_descriptor(td1);
	FilterCoefficient_1_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

asn_dec_rval_t
FilterCoefficient_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	FilterCoefficient_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_FilterCoefficient_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_FilterCoefficient_value2enum_1[] = {
	{ 0,	3,	"fc0" },
	{ 1,	3,	"fc1" },
	{ 2,	3,	"fc2" },
	{ 3,	3,	"fc3" },
	{ 4,	3,	"fc4" },
	{ 5,	3,	"fc5" },
	{ 6,	3,	"fc6" },
	{ 7,	3,	"fc7" },
	{ 8,	3,	"fc8" },
	{ 9,	3,	"fc9" },
	{ 10,	4,	"fc11" },
	{ 11,	4,	"fc13" },
	{ 12,	4,	"fc15" },
	{ 13,	4,	"fc17" },
	{ 14,	4,	"fc19" },
	{ 15,	6,	"spare1" }
	/* This list is extensible */
};
static unsigned int asn_MAP_FilterCoefficient_enum2value_1[] = {
	0,	/* fc0(0) */
	1,	/* fc1(1) */
	10,	/* fc11(10) */
	11,	/* fc13(11) */
	12,	/* fc15(12) */
	13,	/* fc17(13) */
	14,	/* fc19(14) */
	2,	/* fc2(2) */
	3,	/* fc3(3) */
	4,	/* fc4(4) */
	5,	/* fc5(5) */
	6,	/* fc6(6) */
	7,	/* fc7(7) */
	8,	/* fc8(8) */
	9,	/* fc9(9) */
	15	/* spare1(15) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_FilterCoefficient_specs_1 = {
	asn_MAP_FilterCoefficient_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_FilterCoefficient_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_FilterCoefficient_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FilterCoefficient = {
	"FilterCoefficient",
	"FilterCoefficient",
	FilterCoefficient_free,
	FilterCoefficient_print,
	FilterCoefficient_constraint,
	FilterCoefficient_decode_ber,
	FilterCoefficient_encode_der,
	FilterCoefficient_decode_xer,
	FilterCoefficient_encode_xer,
	FilterCoefficient_decode_uper,
	FilterCoefficient_encode_uper,
	FilterCoefficient_decode_aper,
	FilterCoefficient_encode_aper,
	FilterCoefficient_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FilterCoefficient_tags_1,
	sizeof(asn_DEF_FilterCoefficient_tags_1)
		/sizeof(asn_DEF_FilterCoefficient_tags_1[0]), /* 1 */
	asn_DEF_FilterCoefficient_tags_1,	/* Same as above */
	sizeof(asn_DEF_FilterCoefficient_tags_1)
		/sizeof(asn_DEF_FilterCoefficient_tags_1[0]), /* 1 */
	&asn_PER_type_FilterCoefficient_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_FilterCoefficient_specs_1	/* Additional specs */
};

