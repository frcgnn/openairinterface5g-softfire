/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SRB-ToAddMod.h"

static int
memb_srb_Identity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_rlc_Config_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logicalChannelConfig_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_srb_Identity_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (1..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_rlc_Config_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__rlc_Config, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__rlc_Config, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultValue"
		},
};
static asn_TYPE_tag2member_t asn_MAP_rlc_Config_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue at 1477 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue at 1478 */
};
static asn_CHOICE_specifics_t asn_SPC_rlc_Config_specs_3 = {
	sizeof(struct SRB_ToAddMod__rlc_Config),
	offsetof(struct SRB_ToAddMod__rlc_Config, _asn_ctx),
	offsetof(struct SRB_ToAddMod__rlc_Config, present),
	sizeof(((struct SRB_ToAddMod__rlc_Config *)0)->present),
	asn_MAP_rlc_Config_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlc_Config_3 = {
	"rlc-Config",
	"rlc-Config",
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
	&asn_PER_type_rlc_Config_constr_3,
	asn_MBR_rlc_Config_3,
	2,	/* Elements count */
	&asn_SPC_rlc_Config_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_logicalChannelConfig_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__logicalChannelConfig, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod__logicalChannelConfig, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultValue"
		},
};
static asn_TYPE_tag2member_t asn_MAP_logicalChannelConfig_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue at 1481 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue at 1482 */
};
static asn_CHOICE_specifics_t asn_SPC_logicalChannelConfig_specs_6 = {
	sizeof(struct SRB_ToAddMod__logicalChannelConfig),
	offsetof(struct SRB_ToAddMod__logicalChannelConfig, _asn_ctx),
	offsetof(struct SRB_ToAddMod__logicalChannelConfig, present),
	sizeof(((struct SRB_ToAddMod__logicalChannelConfig *)0)->present),
	asn_MAP_logicalChannelConfig_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelConfig_6 = {
	"logicalChannelConfig",
	"logicalChannelConfig",
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
	&asn_PER_type_logicalChannelConfig_constr_6,
	asn_MBR_logicalChannelConfig_6,
	2,	/* Elements count */
	&asn_SPC_logicalChannelConfig_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SRB_ToAddMod_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SRB_ToAddMod, srb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_srb_Identity_constraint_1,
		&asn_PER_memb_srb_Identity_constr_2,
		0,
		"srb-Identity"
		},
	{ ATF_POINTER, 2, offsetof(struct SRB_ToAddMod, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlc_Config_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct SRB_ToAddMod, logicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_logicalChannelConfig_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChannelConfig"
		},
};
static int asn_MAP_SRB_ToAddMod_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_SRB_ToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SRB_ToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-Identity at 1475 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Config at 1477 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalChannelConfig at 1481 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SRB_ToAddMod_specs_1 = {
	sizeof(struct SRB_ToAddMod),
	offsetof(struct SRB_ToAddMod, _asn_ctx),
	asn_MAP_SRB_ToAddMod_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SRB_ToAddMod_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SRB_ToAddMod = {
	"SRB-ToAddMod",
	"SRB-ToAddMod",
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
	asn_DEF_SRB_ToAddMod_tags_1,
	sizeof(asn_DEF_SRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_tags_1[0]), /* 1 */
	asn_DEF_SRB_ToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRB_ToAddMod_tags_1)
		/sizeof(asn_DEF_SRB_ToAddMod_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SRB_ToAddMod_1,
	3,	/* Elements count */
	&asn_SPC_SRB_ToAddMod_specs_1	/* Additional specs */
};

