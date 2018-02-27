/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CellGlobalIdCDMA2000_H_
#define	_CellGlobalIdCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellGlobalIdCDMA2000_PR {
	CellGlobalIdCDMA2000_PR_NOTHING,	/* No components present */
	CellGlobalIdCDMA2000_PR_cellGlobalId1XRTT,
	CellGlobalIdCDMA2000_PR_cellGlobalIdHRPD
} CellGlobalIdCDMA2000_PR;

/* CellGlobalIdCDMA2000 */
typedef struct CellGlobalIdCDMA2000 {
	CellGlobalIdCDMA2000_PR present;
	union CellGlobalIdCDMA2000_u {
		BIT_STRING_t	 cellGlobalId1XRTT;
		BIT_STRING_t	 cellGlobalIdHRPD;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellGlobalIdCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellGlobalIdCDMA2000;

#ifdef __cplusplus
}
#endif

#endif	/* _CellGlobalIdCDMA2000_H_ */
#include <asn_internal.h>
