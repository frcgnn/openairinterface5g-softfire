/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_ImmediateMDT_H_
#define	_S1ap_ImmediateMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-MeasurementsToActivate.h"
#include "S1ap-ReportingTriggerMDT.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_ThresholdEventA2;
struct S1ap_PeriodicReportingMDT;
struct S1ap_IE_Extensions;

/* S1ap-ImmediateMDT */
typedef struct S1ap_ImmediateMDT {
	S1ap_MeasurementsToActivate_t	 measurementsToActivate;
	S1ap_ReportingTriggerMDT_t	 reportingTriggerMDT;
	struct S1ap_ThresholdEventA2	*thresholdeventA2	/* OPTIONAL */;
	struct S1ap_PeriodicReportingMDT	*periodicReportingMDT	/* OPTIONAL */;
	struct S1ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_ImmediateMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_ImmediateMDT;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-ThresholdEventA2.h"
#include "S1ap-PeriodicReportingMDT.h"
#include "S1ap-IE-Extensions.h"

#endif	/* _S1ap_ImmediateMDT_H_ */
#include <asn_internal.h>
