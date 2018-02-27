/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-UplinkNASTransport.h"

static int
memb_s1ap_UplinkNASTransport_ies_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size <= 65535)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_s1ap_UplinkNASTransport_ies_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (SIZE(0..65535)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_s1ap_UplinkNASTransport_ies_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (SIZE(0..65535)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_s1ap_UplinkNASTransport_ies_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1ap_IE,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_s1ap_UplinkNASTransport_ies_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_s1ap_UplinkNASTransport_ies_specs_2 = {
	sizeof(struct S1ap_UplinkNASTransport__s1ap_UplinkNASTransport_ies),
	offsetof(struct S1ap_UplinkNASTransport__s1ap_UplinkNASTransport_ies, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s1ap_UplinkNASTransport_ies_2 = {
	"s1ap-UplinkNASTransport-ies",
	"s1ap-UplinkNASTransport-ies",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	SEQUENCE_OF_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_s1ap_UplinkNASTransport_ies_tags_2,
	sizeof(asn_DEF_s1ap_UplinkNASTransport_ies_tags_2)
		/sizeof(asn_DEF_s1ap_UplinkNASTransport_ies_tags_2[0]) - 1, /* 1 */
	asn_DEF_s1ap_UplinkNASTransport_ies_tags_2,	/* Same as above */
	sizeof(asn_DEF_s1ap_UplinkNASTransport_ies_tags_2)
		/sizeof(asn_DEF_s1ap_UplinkNASTransport_ies_tags_2[0]), /* 2 */
	&asn_PER_type_s1ap_UplinkNASTransport_ies_constr_2,
	asn_MBR_s1ap_UplinkNASTransport_ies_2,
	1,	/* Single element */
	&asn_SPC_s1ap_UplinkNASTransport_ies_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_S1ap_UplinkNASTransport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UplinkNASTransport, s1ap_UplinkNASTransport_ies),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_s1ap_UplinkNASTransport_ies_2,
		memb_s1ap_UplinkNASTransport_ies_constraint_1,
		&asn_PER_memb_s1ap_UplinkNASTransport_ies_constr_2,
		0,
		"s1ap-UplinkNASTransport-ies"
		},
};
static ber_tlv_tag_t asn_DEF_S1ap_UplinkNASTransport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_UplinkNASTransport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* s1ap-UplinkNASTransport-ies at 167 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_UplinkNASTransport_specs_1 = {
	sizeof(struct S1ap_UplinkNASTransport),
	offsetof(struct S1ap_UplinkNASTransport, _asn_ctx),
	asn_MAP_S1ap_UplinkNASTransport_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_UplinkNASTransport = {
	"S1ap-UplinkNASTransport",
	"S1ap-UplinkNASTransport",
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
	asn_DEF_S1ap_UplinkNASTransport_tags_1,
	sizeof(asn_DEF_S1ap_UplinkNASTransport_tags_1)
		/sizeof(asn_DEF_S1ap_UplinkNASTransport_tags_1[0]), /* 1 */
	asn_DEF_S1ap_UplinkNASTransport_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_UplinkNASTransport_tags_1)
		/sizeof(asn_DEF_S1ap_UplinkNASTransport_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_UplinkNASTransport_1,
	1,	/* Elements count */
	&asn_SPC_S1ap_UplinkNASTransport_specs_1	/* Additional specs */
};

