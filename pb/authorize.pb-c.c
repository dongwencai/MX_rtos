/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: authorize.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "authorize.pb-c.h"
void   authorize_req__init
                     (AuthorizeReq         *message)
{
  static const AuthorizeReq init_value = AUTHORIZE_REQ__INIT;
  *message = init_value;
}
size_t authorize_req__get_packed_size
                     (const AuthorizeReq *message)
{
  assert(message->base.descriptor == &authorize_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t authorize_req__pack
                     (const AuthorizeReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &authorize_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t authorize_req__pack_to_buffer
                     (const AuthorizeReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &authorize_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
AuthorizeReq *
       authorize_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (AuthorizeReq *)
     protobuf_c_message_unpack (&authorize_req__descriptor,
                                allocator, len, data);
}
void   authorize_req__free_unpacked
                     (AuthorizeReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &authorize_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   authorize_resp__init
                     (AuthorizeResp         *message)
{
  static const AuthorizeResp init_value = AUTHORIZE_RESP__INIT;
  *message = init_value;
}
size_t authorize_resp__get_packed_size
                     (const AuthorizeResp *message)
{
  assert(message->base.descriptor == &authorize_resp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t authorize_resp__pack
                     (const AuthorizeResp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &authorize_resp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t authorize_resp__pack_to_buffer
                     (const AuthorizeResp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &authorize_resp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
AuthorizeResp *
       authorize_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (AuthorizeResp *)
     protobuf_c_message_unpack (&authorize_resp__descriptor,
                                allocator, len, data);
}
void   authorize_resp__free_unpacked
                     (AuthorizeResp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &authorize_resp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor authorize_req__field_descriptors[1] =
{
  {
    "idToken",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(AuthorizeReq, idtoken),
    &idtoken_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned authorize_req__field_indices_by_name[] = {
  0,   /* field[0] = idToken */
};
static const ProtobufCIntRange authorize_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor authorize_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "authorizeReq",
  "AuthorizeReq",
  "AuthorizeReq",
  "",
  sizeof(AuthorizeReq),
  1,
  authorize_req__field_descriptors,
  authorize_req__field_indices_by_name,
  1,  authorize_req__number_ranges,
  (ProtobufCMessageInit) authorize_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue authorize_resp__certificate_status_enum_type__enum_values_by_number[4] =
{
  { "Accepted", "AUTHORIZE_RESP__CERTIFICATE_STATUS_ENUM_TYPE__Accepted", 0 },
  { "SignatureError", "AUTHORIZE_RESP__CERTIFICATE_STATUS_ENUM_TYPE__SignatureError", 1 },
  { "CertificateExpired", "AUTHORIZE_RESP__CERTIFICATE_STATUS_ENUM_TYPE__CertificateExpired", 2 },
  { "NoCertificateAvailable", "AUTHORIZE_RESP__CERTIFICATE_STATUS_ENUM_TYPE__NoCertificateAvailable", 3 },
};
static const ProtobufCIntRange authorize_resp__certificate_status_enum_type__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex authorize_resp__certificate_status_enum_type__enum_values_by_name[4] =
{
  { "Accepted", 0 },
  { "CertificateExpired", 2 },
  { "NoCertificateAvailable", 3 },
  { "SignatureError", 1 },
};
const ProtobufCEnumDescriptor authorize_resp__certificate_status_enum_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "authorizeResp.certificateStatusEnumType",
  "certificateStatusEnumType",
  "AuthorizeResp__CertificateStatusEnumType",
  "",
  4,
  authorize_resp__certificate_status_enum_type__enum_values_by_number,
  4,
  authorize_resp__certificate_status_enum_type__enum_values_by_name,
  1,
  authorize_resp__certificate_status_enum_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor authorize_resp__field_descriptors[2] =
{
  {
    "certificateStatus",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(AuthorizeResp, has_certificatestatus),
    offsetof(AuthorizeResp, certificatestatus),
    &authorize_resp__certificate_status_enum_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "idTokenInfo",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(AuthorizeResp, idtokeninfo),
    &idtoken_info_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned authorize_resp__field_indices_by_name[] = {
  0,   /* field[0] = certificateStatus */
  1,   /* field[1] = idTokenInfo */
};
static const ProtobufCIntRange authorize_resp__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor authorize_resp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "authorizeResp",
  "AuthorizeResp",
  "AuthorizeResp",
  "",
  sizeof(AuthorizeResp),
  2,
  authorize_resp__field_descriptors,
  authorize_resp__field_indices_by_name,
  1,  authorize_resp__number_ranges,
  (ProtobufCMessageInit) authorize_resp__init,
  NULL,NULL,NULL    /* reserved[123] */
};