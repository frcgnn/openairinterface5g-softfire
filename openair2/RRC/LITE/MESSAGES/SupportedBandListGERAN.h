/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandListGERAN_H_
#define	_SupportedBandListGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandGERAN.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandListGERAN */
typedef struct SupportedBandListGERAN {
	A_SEQUENCE_OF(SupportedBandGERAN_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandListGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandListGERAN;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandListGERAN_H_ */
#include <asn_internal.h>