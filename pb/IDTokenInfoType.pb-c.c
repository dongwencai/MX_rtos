/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: IDTokenInfoType.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "IDTokenInfoType.pb-c.h"
void   idtoken_info_type__personal_content_type__init
                     (IDTokenInfoType__PersonalContentType         *message)
{
  static const IDTokenInfoType__PersonalContentType init_value = IDTOKEN_INFO_TYPE__PERSONAL_CONTENT_TYPE__INIT;
  *message = init_value;
}
void   idtoken_info_type__init
                     (IDTokenInfoType         *message)
{
  static const IDTokenInfoType init_value = IDTOKEN_INFO_TYPE__INIT;
  *message = init_value;
}
size_t idtoken_info_type__get_packed_size
                     (const IDTokenInfoType *message)
{
  assert(message->base.descriptor == &idtoken_info_type__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t idtoken_info_type__pack
                     (const IDTokenInfoType *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &idtoken_info_type__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t idtoken_info_type__pack_to_buffer
                     (const IDTokenInfoType *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &idtoken_info_type__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
IDTokenInfoType *
       idtoken_info_type__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (IDTokenInfoType *)
     protobuf_c_message_unpack (&idtoken_info_type__descriptor,
                                allocator, len, data);
}
void   idtoken_info_type__free_unpacked
                     (IDTokenInfoType *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &idtoken_info_type__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor idtoken_info_type__personal_content_type__field_descriptors[1] =
{
  {
    "balance",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(IDTokenInfoType__PersonalContentType, has_balance),
    offsetof(IDTokenInfoType__PersonalContentType, balance),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned idtoken_info_type__personal_content_type__field_indices_by_name[] = {
  0,   /* field[0] = balance */
};
static const ProtobufCIntRange idtoken_info_type__personal_content_type__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor idtoken_info_type__personal_content_type__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "IDTokenInfoType.personalContentType",
  "PersonalContentType",
  "IDTokenInfoType__PersonalContentType",
  "",
  sizeof(IDTokenInfoType__PersonalContentType),
  1,
  idtoken_info_type__personal_content_type__field_descriptors,
  idtoken_info_type__personal_content_type__field_indices_by_name,
  1,  idtoken_info_type__personal_content_type__number_ranges,
  (ProtobufCMessageInit) idtoken_info_type__personal_content_type__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue idtoken_info_type__authorization_status_enum_type__enum_values_by_number[9] =
{
  { "Accepted", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__Accepted", 0 },
  { "Blocked", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__Blocked", 1 },
  { "Expired", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__Expired", 2 },
  { "Invalid", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__Invalid", 3 },
  { "NoCredit", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__NoCredit", 4 },
  { "NotAllowedTypeEVSE", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__NotAllowedTypeEVSE", 5 },
  { "NotAtThisLocation", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__NotAtThisLocation", 6 },
  { "NotAtThisTime", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__NotAtThisTime", 7 },
  { "Unknown", "IDTOKEN_INFO_TYPE__AUTHORIZATION_STATUS_ENUM_TYPE__Unknown", 8 },
};
static const ProtobufCIntRange idtoken_info_type__authorization_status_enum_type__value_ranges[] = {
{0, 0},{0, 9}
};
static const ProtobufCEnumValueIndex idtoken_info_type__authorization_status_enum_type__enum_values_by_name[9] =
{
  { "Accepted", 0 },
  { "Blocked", 1 },
  { "Expired", 2 },
  { "Invalid", 3 },
  { "NoCredit", 4 },
  { "NotAllowedTypeEVSE", 5 },
  { "NotAtThisLocation", 6 },
  { "NotAtThisTime", 7 },
  { "Unknown", 8 },
};
const ProtobufCEnumDescriptor idtoken_info_type__authorization_status_enum_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "IDTokenInfoType.authorizationStatusEnumType",
  "authorizationStatusEnumType",
  "IDTokenInfoType__AuthorizationStatusEnumType",
  "",
  9,
  idtoken_info_type__authorization_status_enum_type__enum_values_by_number,
  9,
  idtoken_info_type__authorization_status_enum_type__enum_values_by_name,
  1,
  idtoken_info_type__authorization_status_enum_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor idtoken_info_type__field_descriptors[3] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(IDTokenInfoType, status),
    &idtoken_info_type__authorization_status_enum_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "groupIDToken",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(IDTokenInfoType, groupidtoken),
    &idtoken_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "personal",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(IDTokenInfoType, personal),
    &idtoken_info_type__personal_content_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned idtoken_info_type__field_indices_by_name[] = {
  1,   /* field[1] = groupIDToken */
  2,   /* field[2] = personal */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange idtoken_info_type__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor idtoken_info_type__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "IDTokenInfoType",
  "IDTokenInfoType",
  "IDTokenInfoType",
  "",
  sizeof(IDTokenInfoType),
  3,
  idtoken_info_type__field_descriptors,
  idtoken_info_type__field_indices_by_name,
  1,  idtoken_info_type__number_ranges,
  (ProtobufCMessageInit) idtoken_info_type__init,
  NULL,NULL,NULL    /* reserved[123] */
};