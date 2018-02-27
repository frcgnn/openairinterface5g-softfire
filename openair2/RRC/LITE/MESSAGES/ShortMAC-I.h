/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/kote/openairinterface5g-91d8c892/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ShortMAC_I_H_
#define	_ShortMAC_I_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ShortMAC-I */
typedef BIT_STRING_t	 ShortMAC_I_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ShortMAC_I;
asn_struct_free_f ShortMAC_I_free;
asn_struct_print_f ShortMAC_I_print;
asn_constr_check_f ShortMAC_I_constraint;
ber_type_decoder_f ShortMAC_I_decode_ber;
der_type_encoder_f ShortMAC_I_encode_der;
xer_type_decoder_f ShortMAC_I_decode_xer;
xer_type_encoder_f ShortMAC_I_encode_xer;
per_type_decoder_f ShortMAC_I_decode_uper;
per_type_encoder_f ShortMAC_I_encode_uper;
per_type_decoder_f ShortMAC_I_decode_aper;
per_type_encoder_f ShortMAC_I_encode_aper;
type_compare_f     ShortMAC_I_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _ShortMAC_I_H_ */
#include <asn_internal.h>
