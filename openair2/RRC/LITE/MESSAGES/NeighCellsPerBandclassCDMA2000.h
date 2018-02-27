/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_NeighCellsPerBandclassCDMA2000_H_
#define	_NeighCellsPerBandclassCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueCDMA2000.h"
#include "PhysCellIdListCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellsPerBandclassCDMA2000 */
typedef struct NeighCellsPerBandclassCDMA2000 {
	ARFCN_ValueCDMA2000_t	 arfcn;
	PhysCellIdListCDMA2000_t	 physCellIdList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellsPerBandclassCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellsPerBandclassCDMA2000;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellsPerBandclassCDMA2000_H_ */
#include <asn_internal.h>