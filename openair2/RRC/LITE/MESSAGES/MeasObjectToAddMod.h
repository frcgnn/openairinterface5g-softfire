/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasObjectToAddMod_H_
#define	_MeasObjectToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId.h"
#include "MeasObjectEUTRA.h"
#include "MeasObjectUTRA.h"
#include "MeasObjectGERAN.h"
#include "MeasObjectCDMA2000.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasObjectToAddMod__measObject_PR {
	MeasObjectToAddMod__measObject_PR_NOTHING,	/* No components present */
	MeasObjectToAddMod__measObject_PR_measObjectEUTRA,
	MeasObjectToAddMod__measObject_PR_measObjectUTRA,
	MeasObjectToAddMod__measObject_PR_measObjectGERAN,
	MeasObjectToAddMod__measObject_PR_measObjectCDMA2000,
	/* Extensions may appear below */
	
} MeasObjectToAddMod__measObject_PR;

/* MeasObjectToAddMod */
typedef struct MeasObjectToAddMod {
	MeasObjectId_t	 measObjectId;
	struct MeasObjectToAddMod__measObject {
		MeasObjectToAddMod__measObject_PR present;
		union MeasObjectToAddMod__measObject_u {
			MeasObjectEUTRA_t	 measObjectEUTRA;
			MeasObjectUTRA_t	 measObjectUTRA;
			MeasObjectGERAN_t	 measObjectGERAN;
			MeasObjectCDMA2000_t	 measObjectCDMA2000;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measObject;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddMod;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectToAddMod_H_ */
#include <asn_internal.h>
