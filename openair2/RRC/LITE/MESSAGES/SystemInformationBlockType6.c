/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SystemInformationBlockType6.h"

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType6_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType6, carrierFreqListUTRA_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreqListUTRA-FDD"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType6, carrierFreqListUTRA_TDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_TDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreqListUTRA-TDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType6, t_ReselectionUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-ReselectionUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType6, t_ReselectionUTRA_SF),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-ReselectionUTRA-SF"
		},
};
static int asn_MAP_SystemInformationBlockType6_oms_1[] = { 0, 1, 3 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreqListUTRA-FDD at 952 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreqListUTRA-TDD at 953 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t-ReselectionUTRA at 954 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* t-ReselectionUTRA-SF at 955 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType6_specs_1 = {
	sizeof(struct SystemInformationBlockType6),
	offsetof(struct SystemInformationBlockType6, _asn_ctx),
	asn_MAP_SystemInformationBlockType6_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType6_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType6 = {
	"SystemInformationBlockType6",
	"SystemInformationBlockType6",
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
	asn_DEF_SystemInformationBlockType6_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType6_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType6_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType6_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType6_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType6_1,
	4,	/* Elements count */
	&asn_SPC_SystemInformationBlockType6_specs_1	/* Additional specs */
};
