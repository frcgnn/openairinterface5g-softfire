/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_SubframeAssignment_H_
#define	_X2ap_SubframeAssignment_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_SubframeAssignment {
	X2ap_SubframeAssignment_sa0	= 0,
	X2ap_SubframeAssignment_sa1	= 1,
	X2ap_SubframeAssignment_sa2	= 2,
	X2ap_SubframeAssignment_sa3	= 3,
	X2ap_SubframeAssignment_sa4	= 4,
	X2ap_SubframeAssignment_sa5	= 5,
	X2ap_SubframeAssignment_sa6	= 6
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_SubframeAssignment;

/* X2ap-SubframeAssignment */
typedef long	 X2ap_SubframeAssignment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_SubframeAssignment;
asn_struct_free_f X2ap_SubframeAssignment_free;
asn_struct_print_f X2ap_SubframeAssignment_print;
asn_constr_check_f X2ap_SubframeAssignment_constraint;
ber_type_decoder_f X2ap_SubframeAssignment_decode_ber;
der_type_encoder_f X2ap_SubframeAssignment_encode_der;
xer_type_decoder_f X2ap_SubframeAssignment_decode_xer;
xer_type_encoder_f X2ap_SubframeAssignment_encode_xer;
per_type_decoder_f X2ap_SubframeAssignment_decode_uper;
per_type_encoder_f X2ap_SubframeAssignment_encode_uper;
per_type_decoder_f X2ap_SubframeAssignment_decode_aper;
per_type_encoder_f X2ap_SubframeAssignment_encode_aper;
type_compare_f     X2ap_SubframeAssignment_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_SubframeAssignment_H_ */
#include <asn_internal.h>
