/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: dataTransfer.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "dataTransfer.pb-c.h"
void   data_transfer_req__init
                     (DataTransferReq         *message)
{
  static const DataTransferReq init_value = DATA_TRANSFER_REQ__INIT;
  *message = init_value;
}
size_t data_transfer_req__get_packed_size
                     (const DataTransferReq *message)
{
  assert(message->base.descriptor == &data_transfer_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t data_transfer_req__pack
                     (const DataTransferReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &data_transfer_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t data_transfer_req__pack_to_buffer
                     (const DataTransferReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &data_transfer_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DataTransferReq *
       data_transfer_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DataTransferReq *)
     protobuf_c_message_unpack (&data_transfer_req__descriptor,
                                allocator, len, data);
}
void   data_transfer_req__free_unpacked
                     (DataTransferReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &data_transfer_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   data_transfer_resp__init
                     (DataTransferResp         *message)
{
  static const DataTransferResp init_value = DATA_TRANSFER_RESP__INIT;
  *message = init_value;
}
size_t data_transfer_resp__get_packed_size
                     (const DataTransferResp *message)
{
  assert(message->base.descriptor == &data_transfer_resp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t data_transfer_resp__pack
                     (const DataTransferResp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &data_transfer_resp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t data_transfer_resp__pack_to_buffer
                     (const DataTransferResp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &data_transfer_resp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DataTransferResp *
       data_transfer_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DataTransferResp *)
     protobuf_c_message_unpack (&data_transfer_resp__descriptor,
                                allocator, len, data);
}
void   data_transfer_resp__free_unpacked
                     (DataTransferResp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &data_transfer_resp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor data_transfer_req__field_descriptors[2] =
{
  {
    "messageID",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DataTransferReq, messageid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(DataTransferReq, has_data),
    offsetof(DataTransferReq, data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned data_transfer_req__field_indices_by_name[] = {
  1,   /* field[1] = data */
  0,   /* field[0] = messageID */
};
static const ProtobufCIntRange data_transfer_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor data_transfer_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dataTransferReq",
  "DataTransferReq",
  "DataTransferReq",
  "",
  sizeof(DataTransferReq),
  2,
  data_transfer_req__field_descriptors,
  data_transfer_req__field_indices_by_name,
  1,  data_transfer_req__number_ranges,
  (ProtobufCMessageInit) data_transfer_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue data_transfer_resp__data_transfer_status_enum_type__enum_values_by_number[3] =
{
  { "Accepted", "DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE__Accepted", 0 },
  { "Rejected", "DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE__Rejected", 1 },
  { "UnknownMessageId", "DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE__UnknownMessageId", 2 },
};
static const ProtobufCIntRange data_transfer_resp__data_transfer_status_enum_type__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex data_transfer_resp__data_transfer_status_enum_type__enum_values_by_name[3] =
{
  { "Accepted", 0 },
  { "Rejected", 1 },
  { "UnknownMessageId", 2 },
};
const ProtobufCEnumDescriptor data_transfer_resp__data_transfer_status_enum_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "dataTransferResp.dataTransferStatusEnumType",
  "dataTransferStatusEnumType",
  "DataTransferResp__DataTransferStatusEnumType",
  "",
  3,
  data_transfer_resp__data_transfer_status_enum_type__enum_values_by_number,
  3,
  data_transfer_resp__data_transfer_status_enum_type__enum_values_by_name,
  1,
  data_transfer_resp__data_transfer_status_enum_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor data_transfer_resp__field_descriptors[2] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(DataTransferResp, status),
    &data_transfer_resp__data_transfer_status_enum_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(DataTransferResp, has_data),
    offsetof(DataTransferResp, data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned data_transfer_resp__field_indices_by_name[] = {
  1,   /* field[1] = data */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange data_transfer_resp__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor data_transfer_resp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dataTransferResp",
  "DataTransferResp",
  "DataTransferResp",
  "",
  sizeof(DataTransferResp),
  2,
  data_transfer_resp__field_descriptors,
  data_transfer_resp__field_indices_by_name,
  1,  data_transfer_resp__number_ranges,
  (ProtobufCMessageInit) data_transfer_resp__init,
  NULL,NULL,NULL    /* reserved[123] */
};
