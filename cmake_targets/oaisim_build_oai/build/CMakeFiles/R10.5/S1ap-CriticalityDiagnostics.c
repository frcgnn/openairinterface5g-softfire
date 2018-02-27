/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-CriticalityDiagnostics.h"

static asn_TYPE_member_t asn_MBR_S1ap_CriticalityDiagnostics_1[] = {
	{ ATF_POINTER, 5, offsetof(struct S1ap_CriticalityDiagnostics, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ProcedureCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"procedureCode"
		},
	{ ATF_POINTER, 4, offsetof(struct S1ap_CriticalityDiagnostics, triggeringMessage),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TriggeringMessage,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"triggeringMessage"
		},
	{ ATF_POINTER, 3, offsetof(struct S1ap_CriticalityDiagnostics, procedureCriticality),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_Criticality,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"procedureCriticality"
		},
	{ ATF_POINTER, 2, offsetof(struct S1ap_CriticalityDiagnostics, iEsCriticalityDiagnostics),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CriticalityDiagnostics_IE_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iEsCriticalityDiagnostics"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_CriticalityDiagnostics, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_CriticalityDiagnostics_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_S1ap_CriticalityDiagnostics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_CriticalityDiagnostics_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode at 352 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* triggeringMessage at 353 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* procedureCriticality at 354 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* iEsCriticalityDiagnostics at 355 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 356 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_CriticalityDiagnostics_specs_1 = {
	sizeof(struct S1ap_CriticalityDiagnostics),
	offsetof(struct S1ap_CriticalityDiagnostics, _asn_ctx),
	asn_MAP_S1ap_CriticalityDiagnostics_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_S1ap_CriticalityDiagnostics_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_CriticalityDiagnostics = {
	"S1ap-CriticalityDiagnostics",
	"S1ap-CriticalityDiagnostics",
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
	asn_DEF_S1ap_CriticalityDiagnostics_tags_1,
	sizeof(asn_DEF_S1ap_CriticalityDiagnostics_tags_1)
		/sizeof(asn_DEF_S1ap_CriticalityDiagnostics_tags_1[0]), /* 1 */
	asn_DEF_S1ap_CriticalityDiagnostics_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_CriticalityDiagnostics_tags_1)
		/sizeof(asn_DEF_S1ap_CriticalityDiagnostics_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_CriticalityDiagnostics_1,
	5,	/* Elements count */
	&asn_SPC_S1ap_CriticalityDiagnostics_specs_1	/* Additional specs */
};

