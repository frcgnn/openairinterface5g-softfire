/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-UE-ContextInformation.h"

static asn_TYPE_member_t asn_MBR_X2ap_UE_ContextInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_UE_ContextInformation, mME_UE_S1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_UE_S1AP_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mME-UE-S1AP-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_UE_ContextInformation, uESecurityCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_UESecurityCapabilities,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uESecurityCapabilities"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_UE_ContextInformation, aS_SecurityInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_AS_SecurityInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aS-SecurityInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_UE_ContextInformation, uEaggregateMaximumBitRate),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_UEAggregateMaximumBitRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uEaggregateMaximumBitRate"
		},
	{ ATF_POINTER, 1, offsetof(struct X2ap_UE_ContextInformation, subscriberProfileIDforRFP),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_SubscriberProfileIDforRFP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subscriberProfileIDforRFP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_UE_ContextInformation, e_RABs_ToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_E_RABs_ToBeSetup_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RABs-ToBeSetup-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_UE_ContextInformation, rRC_Context),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_RRC_Context,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rRC-Context"
		},
	{ ATF_POINTER, 3, offsetof(struct X2ap_UE_ContextInformation, handoverRestrictionList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_HandoverRestrictionList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"handoverRestrictionList"
		},
	{ ATF_POINTER, 2, offsetof(struct X2ap_UE_ContextInformation, locationReportingInformation),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_LocationReportingInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"locationReportingInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct X2ap_UE_ContextInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_X2ap_UE_ContextInformation_oms_1[] = { 4, 7, 8, 9 };
static ber_tlv_tag_t asn_DEF_X2ap_UE_ContextInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_UE_ContextInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mME-UE-S1AP-ID at 1364 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uESecurityCapabilities at 1365 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aS-SecurityInformation at 1366 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uEaggregateMaximumBitRate at 1367 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* subscriberProfileIDforRFP at 1368 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e-RABs-ToBeSetup-List at 1369 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rRC-Context at 1370 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* handoverRestrictionList at 1371 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* locationReportingInformation at 1372 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* iE-Extensions at 1374 */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2ap_UE_ContextInformation_specs_1 = {
	sizeof(struct X2ap_UE_ContextInformation),
	offsetof(struct X2ap_UE_ContextInformation, _asn_ctx),
	asn_MAP_X2ap_UE_ContextInformation_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_X2ap_UE_ContextInformation_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	9,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_UE_ContextInformation = {
	"X2ap-UE-ContextInformation",
	"X2ap-UE-ContextInformation",
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
	asn_DEF_X2ap_UE_ContextInformation_tags_1,
	sizeof(asn_DEF_X2ap_UE_ContextInformation_tags_1)
		/sizeof(asn_DEF_X2ap_UE_ContextInformation_tags_1[0]), /* 1 */
	asn_DEF_X2ap_UE_ContextInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_UE_ContextInformation_tags_1)
		/sizeof(asn_DEF_X2ap_UE_ContextInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_X2ap_UE_ContextInformation_1,
	10,	/* Elements count */
	&asn_SPC_X2ap_UE_ContextInformation_specs_1	/* Additional specs */
};

