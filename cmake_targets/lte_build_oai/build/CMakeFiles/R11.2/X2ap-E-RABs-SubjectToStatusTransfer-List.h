/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_E_RABs_SubjectToStatusTransfer_List_H_
#define	_X2ap_E_RABs_SubjectToStatusTransfer_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_IE;

/* X2ap-E-RABs-SubjectToStatusTransfer-List */
typedef struct X2ap_E_RABs_SubjectToStatusTransfer_List {
	A_SEQUENCE_OF(struct X2ap_IE) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_E_RABs_SubjectToStatusTransfer_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_E_RABs_SubjectToStatusTransfer_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-IE.h"

#endif	/* _X2ap_E_RABs_SubjectToStatusTransfer_List_H_ */
#include <asn_internal.h>
