/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CSFBParametersResponseCDMA2000_r8_IEs_H_
#define	_CSFBParametersResponseCDMA2000_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAND-CDMA2000.h"
#include "MobilityParametersCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSFBParametersResponseCDMA2000-r8-IEs */
typedef struct CSFBParametersResponseCDMA2000_r8_IEs {
	RAND_CDMA2000_t	 rand;
	MobilityParametersCDMA2000_t	 mobilityParameters;
	struct CSFBParametersResponseCDMA2000_r8_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSFBParametersResponseCDMA2000_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSFBParametersResponseCDMA2000_r8_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _CSFBParametersResponseCDMA2000_r8_IEs_H_ */
#include <asn_internal.h>
