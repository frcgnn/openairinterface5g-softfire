/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ULHandoverPreparationTransfer_r8_IEs_H_
#define	_ULHandoverPreparationTransfer_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CDMA2000-Type.h"
#include <BIT_STRING.h>
#include "DedicatedInfoCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ULHandoverPreparationTransfer-r8-IEs */
typedef struct ULHandoverPreparationTransfer_r8_IEs {
	CDMA2000_Type_t	 cdma2000_Type;
	BIT_STRING_t	*meid	/* OPTIONAL */;
	DedicatedInfoCDMA2000_t	 dedicatedInfo;
	struct ULHandoverPreparationTransfer_r8_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULHandoverPreparationTransfer_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULHandoverPreparationTransfer_r8_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _ULHandoverPreparationTransfer_r8_IEs_H_ */
#include <asn_internal.h>