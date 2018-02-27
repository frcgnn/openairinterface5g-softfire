/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "QuantityConfig.h"

static asn_TYPE_member_t asn_MBR_QuantityConfig_1[] = {
	{ ATF_POINTER, 4, offsetof(struct QuantityConfig, quantityConfigEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"quantityConfigEUTRA"
		},
	{ ATF_POINTER, 3, offsetof(struct QuantityConfig, quantityConfigUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"quantityConfigUTRA"
		},
	{ ATF_POINTER, 2, offsetof(struct QuantityConfig, quantityConfigGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"quantityConfigGERAN"
		},
	{ ATF_POINTER, 1, offsetof(struct QuantityConfig, quantityConfigCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"quantityConfigCDMA2000"
		},
};
static int asn_MAP_QuantityConfig_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_QuantityConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_QuantityConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* quantityConfigEUTRA at 2235 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* quantityConfigUTRA at 2236 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* quantityConfigGERAN at 2237 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* quantityConfigCDMA2000 at 2238 */
};
static asn_SEQUENCE_specifics_t asn_SPC_QuantityConfig_specs_1 = {
	sizeof(struct QuantityConfig),
	offsetof(struct QuantityConfig, _asn_ctx),
	asn_MAP_QuantityConfig_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_QuantityConfig_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfig = {
	"QuantityConfig",
	"QuantityConfig",
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
	asn_DEF_QuantityConfig_tags_1,
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_QuantityConfig_1,
	4,	/* Elements count */
	&asn_SPC_QuantityConfig_specs_1	/* Additional specs */
};

