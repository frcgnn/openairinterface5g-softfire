/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandListUTRA_FDD_H_
#define	_SupportedBandListUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandUTRA-FDD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandListUTRA-FDD */
typedef struct SupportedBandListUTRA_FDD {
	A_SEQUENCE_OF(SupportedBandUTRA_FDD_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandListUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandListUTRA_FDD;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandListUTRA_FDD_H_ */
#include <asn_internal.h>