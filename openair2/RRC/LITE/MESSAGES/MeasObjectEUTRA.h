/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasObjectEUTRA_H_
#define	_MeasObjectEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "AllowedMeasBandwidth.h"
#include "PresenceAntennaPort1.h"
#include "NeighCellConfig.h"
#include "Q-OffsetRange.h"
#include "PhysCellId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellIndexList;
struct CellsToAddModList;
struct BlackCellsToAddModList;

/* MeasObjectEUTRA */
typedef struct MeasObjectEUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	PresenceAntennaPort1_t	 presenceAntennaPort1;
	NeighCellConfig_t	 neighCellConfig;
	Q_OffsetRange_t	*offsetFreq	/* DEFAULT 15 */;
	struct CellIndexList	*cellsToRemoveList	/* OPTIONAL */;
	struct CellsToAddModList	*cellsToAddModList	/* OPTIONAL */;
	struct CellIndexList	*blackCellsToRemoveList	/* OPTIONAL */;
	struct BlackCellsToAddModList	*blackCellsToAddModList	/* OPTIONAL */;
	PhysCellId_t	*cellForWhichToReportCGI	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellIndexList.h"
#include "CellsToAddModList.h"
#include "BlackCellsToAddModList.h"

#endif	/* _MeasObjectEUTRA_H_ */
#include <asn_internal.h>
