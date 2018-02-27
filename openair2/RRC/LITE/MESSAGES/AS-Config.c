/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "AS-Config.h"

static asn_TYPE_member_t asn_MBR_AS_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceMeasConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceRadioResourceConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceRadioResourceConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSecurityAlgorithmConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityAlgorithmConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceSecurityAlgorithmConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceMasterInformationBlock),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MasterInformationBlock,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceMasterInformationBlock"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceSystemInformationBlockType1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceSystemInformationBlockType2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SystemInformationBlockType2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceSystemInformationBlockType2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, antennaInfoCommon),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"antennaInfoCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AS_Config, sourceDl_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sourceDl-CarrierFreq"
		},
};
static ber_tlv_tag_t asn_DEF_AS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceMeasConfig at 2699 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceRadioResourceConfig at 2700 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceSecurityAlgorithmConfig at 2701 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sourceUE-Identity at 2702 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sourceMasterInformationBlock at 2703 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sourceSystemInformationBlockType1 at 2704 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sourceSystemInformationBlockType2 at 2705 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* antennaInfoCommon at 2706 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* sourceDl-CarrierFreq at 2707 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AS_Config_specs_1 = {
	sizeof(struct AS_Config),
	offsetof(struct AS_Config, _asn_ctx),
	asn_MAP_AS_Config_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	8,	/* Start extensions */
	10	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AS_Config = {
	"AS-Config",
	"AS-Config",
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
	asn_DEF_AS_Config_tags_1,
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	asn_DEF_AS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Config_tags_1)
		/sizeof(asn_DEF_AS_Config_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AS_Config_1,
	9,	/* Elements count */
	&asn_SPC_AS_Config_specs_1	/* Additional specs */
};

