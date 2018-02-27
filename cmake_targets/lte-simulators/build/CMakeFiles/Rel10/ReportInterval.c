/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "ReportInterval.h"

int
ReportInterval_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
ReportInterval_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
ReportInterval_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
ReportInterval_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
ReportInterval_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
ReportInterval_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
ReportInterval_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
ReportInterval_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
ReportInterval_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
ReportInterval_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
ReportInterval_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_comp_rval_t * 
ReportInterval_compare(asn_TYPE_descriptor_t *td1,
		void *structure1,
		asn_TYPE_descriptor_t *td2,
		void *structure2) {
	asn_comp_rval_t * res  = NULL;
	ReportInterval_1_inherit_TYPE_descriptor(td1);
	ReportInterval_1_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

asn_dec_rval_t
ReportInterval_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ReportInterval_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_ReportInterval_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_ReportInterval_value2enum_1[] = {
	{ 0,	5,	"ms120" },
	{ 1,	5,	"ms240" },
	{ 2,	5,	"ms480" },
	{ 3,	5,	"ms640" },
	{ 4,	6,	"ms1024" },
	{ 5,	6,	"ms2048" },
	{ 6,	6,	"ms5120" },
	{ 7,	7,	"ms10240" },
	{ 8,	4,	"min1" },
	{ 9,	4,	"min6" },
	{ 10,	5,	"min12" },
	{ 11,	5,	"min30" },
	{ 12,	5,	"min60" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static unsigned int asn_MAP_ReportInterval_enum2value_1[] = {
	8,	/* min1(8) */
	10,	/* min12(10) */
	11,	/* min30(11) */
	9,	/* min6(9) */
	12,	/* min60(12) */
	4,	/* ms1024(4) */
	7,	/* ms10240(7) */
	0,	/* ms120(0) */
	5,	/* ms2048(5) */
	1,	/* ms240(1) */
	2,	/* ms480(2) */
	6,	/* ms5120(6) */
	3,	/* ms640(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
};
static asn_INTEGER_specifics_t asn_SPC_ReportInterval_specs_1 = {
	asn_MAP_ReportInterval_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ReportInterval_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ReportInterval_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ReportInterval = {
	"ReportInterval",
	"ReportInterval",
	ReportInterval_free,
	ReportInterval_print,
	ReportInterval_constraint,
	ReportInterval_decode_ber,
	ReportInterval_encode_der,
	ReportInterval_decode_xer,
	ReportInterval_encode_xer,
	ReportInterval_decode_uper,
	ReportInterval_encode_uper,
	ReportInterval_decode_aper,
	ReportInterval_encode_aper,
	ReportInterval_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ReportInterval_tags_1,
	sizeof(asn_DEF_ReportInterval_tags_1)
		/sizeof(asn_DEF_ReportInterval_tags_1[0]), /* 1 */
	asn_DEF_ReportInterval_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportInterval_tags_1)
		/sizeof(asn_DEF_ReportInterval_tags_1[0]), /* 1 */
	&asn_PER_type_ReportInterval_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ReportInterval_specs_1	/* Additional specs */
};

