/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names`
 */

#include "S1ap-SourceeNB-ToTargeteNB-TransparentContainer.h"

static asn_TYPE_member_t asn_MBR_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer, rRC_Container),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_RRC_Container,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rRC-Container"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer, e_RABInformationList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_E_RABInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RABInformationList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer, targetCell_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_EUTRAN_CGI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"targetCell-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer, subscriberProfileIDforRFP),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_SubscriberProfileIDforRFP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subscriberProfileIDforRFP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer, uE_HistoryInformation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_UE_HistoryInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uE-HistoryInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_5954P55,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_oms_1[] = { 1, 3, 5 };
static const ber_tlv_tag_t asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rRC-Container */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-RABInformationList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* targetCell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* subscriberProfileIDforRFP */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uE-HistoryInformation */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_specs_1 = {
	sizeof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer),
	offsetof(struct S1ap_SourceeNB_ToTargeteNB_TransparentContainer, _asn_ctx),
	asn_MAP_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer = {
	"S1ap-SourceeNB-ToTargeteNB-TransparentContainer",
	"S1ap-SourceeNB-ToTargeteNB-TransparentContainer",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tags_1,
	sizeof(asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tags_1)
		/sizeof(asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tags_1[0]), /* 1 */
	asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tags_1)
		/sizeof(asn_DEF_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_1,
	6,	/* Elements count */
	&asn_SPC_S1ap_SourceeNB_ToTargeteNB_TransparentContainer_specs_1	/* Additional specs */
};

