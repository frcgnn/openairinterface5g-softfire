/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BandClassListCDMA2000_H_
#define	_BandClassListCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandClassInfoCDMA2000;

/* BandClassListCDMA2000 */
typedef struct BandClassListCDMA2000 {
	A_SEQUENCE_OF(struct BandClassInfoCDMA2000) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandClassListCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandClassListCDMA2000;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandClassInfoCDMA2000.h"

#endif	/* _BandClassListCDMA2000_H_ */
#include <asn_internal.h>