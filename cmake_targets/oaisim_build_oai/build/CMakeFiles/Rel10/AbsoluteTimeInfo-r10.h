/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_AbsoluteTimeInfo_r10_H_
#define	_AbsoluteTimeInfo_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AbsoluteTimeInfo-r10 */
typedef BIT_STRING_t	 AbsoluteTimeInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AbsoluteTimeInfo_r10;
asn_struct_free_f AbsoluteTimeInfo_r10_free;
asn_struct_print_f AbsoluteTimeInfo_r10_print;
asn_constr_check_f AbsoluteTimeInfo_r10_constraint;
ber_type_decoder_f AbsoluteTimeInfo_r10_decode_ber;
der_type_encoder_f AbsoluteTimeInfo_r10_encode_der;
xer_type_decoder_f AbsoluteTimeInfo_r10_decode_xer;
xer_type_encoder_f AbsoluteTimeInfo_r10_encode_xer;
per_type_decoder_f AbsoluteTimeInfo_r10_decode_uper;
per_type_encoder_f AbsoluteTimeInfo_r10_encode_uper;
per_type_decoder_f AbsoluteTimeInfo_r10_decode_aper;
per_type_encoder_f AbsoluteTimeInfo_r10_encode_aper;
type_compare_f     AbsoluteTimeInfo_r10_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _AbsoluteTimeInfo_r10_H_ */
#include <asn_internal.h>
