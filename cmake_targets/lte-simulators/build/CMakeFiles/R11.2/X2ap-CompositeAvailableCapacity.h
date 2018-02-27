/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_CompositeAvailableCapacity_H_
#define	_X2ap_CompositeAvailableCapacity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-CellCapacityClassValue.h"
#include "X2ap-CapacityValue.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_IE_Extensions;

/* X2ap-CompositeAvailableCapacity */
typedef struct X2ap_CompositeAvailableCapacity {
	X2ap_CellCapacityClassValue_t	*cellCapacityClassValue	/* OPTIONAL */;
	X2ap_CapacityValue_t	 capacityValue;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_CompositeAvailableCapacity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_CompositeAvailableCapacity;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_CompositeAvailableCapacity_H_ */
#include <asn_internal.h>
