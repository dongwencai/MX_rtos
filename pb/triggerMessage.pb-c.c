/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: triggerMessage.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "triggerMessage.pb-c.h"
void   trigger_message_req__init
                     (TriggerMessageReq         *message)
{
  static const TriggerMessageReq init_value = TRIGGER_MESSAGE_REQ__INIT;
  *message = init_value;
}
size_t trigger_message_req__get_packed_size
                     (const TriggerMessageReq *message)
{
  assert(message->base.descriptor == &trigger_message_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t trigger_message_req__pack
                     (const TriggerMessageReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &trigger_message_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t trigger_message_req__pack_to_buffer
                     (const TriggerMessageReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &trigger_message_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TriggerMessageReq *
       trigger_message_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TriggerMessageReq *)
     protobuf_c_message_unpack (&trigger_message_req__descriptor,
                                allocator, len, data);
}
void   trigger_message_req__free_unpacked
                     (TriggerMessageReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &trigger_message_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   trigger_message_resp__init
                     (TriggerMessageResp         *message)
{
  static const TriggerMessageResp init_value = TRIGGER_MESSAGE_RESP__INIT;
  *message = init_value;
}
size_t trigger_message_resp__get_packed_size
                     (const TriggerMessageResp *message)
{
  assert(message->base.descriptor == &trigger_message_resp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t trigger_message_resp__pack
                     (const TriggerMessageResp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &trigger_message_resp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t trigger_message_resp__pack_to_buffer
                     (const TriggerMessageResp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &trigger_message_resp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TriggerMessageResp *
       trigger_message_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TriggerMessageResp *)
     protobuf_c_message_unpack (&trigger_message_resp__descriptor,
                                allocator, len, data);
}
void   trigger_message_resp__free_unpacked
                     (TriggerMessageResp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &trigger_message_resp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue trigger_message_req__message_trigger_enum_type__enum_values_by_number[4] =
{
  { "BootNotification", "TRIGGER_MESSAGE_REQ__MESSAGE_TRIGGER_ENUM_TYPE__BootNotification", 0 },
  { "FirmwareStatusNotification", "TRIGGER_MESSAGE_REQ__MESSAGE_TRIGGER_ENUM_TYPE__FirmwareStatusNotification", 1 },
  { "Heartbeat", "TRIGGER_MESSAGE_REQ__MESSAGE_TRIGGER_ENUM_TYPE__Heartbeat", 2 },
  { "StatusNotification", "TRIGGER_MESSAGE_REQ__MESSAGE_TRIGGER_ENUM_TYPE__StatusNotification", 3 },
};
static const ProtobufCIntRange trigger_message_req__message_trigger_enum_type__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex trigger_message_req__message_trigger_enum_type__enum_values_by_name[4] =
{
  { "BootNotification", 0 },
  { "FirmwareStatusNotification", 1 },
  { "Heartbeat", 2 },
  { "StatusNotification", 3 },
};
const ProtobufCEnumDescriptor trigger_message_req__message_trigger_enum_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "triggerMessageReq.messageTriggerEnumType",
  "messageTriggerEnumType",
  "TriggerMessageReq__MessageTriggerEnumType",
  "",
  4,
  trigger_message_req__message_trigger_enum_type__enum_values_by_number,
  4,
  trigger_message_req__message_trigger_enum_type__enum_values_by_name,
  1,
  trigger_message_req__message_trigger_enum_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor trigger_message_req__field_descriptors[1] =
{
  {
    "requestedMessage",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(TriggerMessageReq, requestedmessage),
    &trigger_message_req__message_trigger_enum_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned trigger_message_req__field_indices_by_name[] = {
  0,   /* field[0] = requestedMessage */
};
static const ProtobufCIntRange trigger_message_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor trigger_message_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "triggerMessageReq",
  "TriggerMessageReq",
  "TriggerMessageReq",
  "",
  sizeof(TriggerMessageReq),
  1,
  trigger_message_req__field_descriptors,
  trigger_message_req__field_indices_by_name,
  1,  trigger_message_req__number_ranges,
  (ProtobufCMessageInit) trigger_message_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue trigger_message_resp__trigger_message_status_enum_type__enum_values_by_number[3] =
{
  { "Accepted", "TRIGGER_MESSAGE_RESP__TRIGGER_MESSAGE_STATUS_ENUM_TYPE__Accepted", 0 },
  { "Rejected", "TRIGGER_MESSAGE_RESP__TRIGGER_MESSAGE_STATUS_ENUM_TYPE__Rejected", 1 },
  { "NotImplemented", "TRIGGER_MESSAGE_RESP__TRIGGER_MESSAGE_STATUS_ENUM_TYPE__NotImplemented", 2 },
};
static const ProtobufCIntRange trigger_message_resp__trigger_message_status_enum_type__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex trigger_message_resp__trigger_message_status_enum_type__enum_values_by_name[3] =
{
  { "Accepted", 0 },
  { "NotImplemented", 2 },
  { "Rejected", 1 },
};
const ProtobufCEnumDescriptor trigger_message_resp__trigger_message_status_enum_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "triggerMessageResp.triggerMessageStatusEnumType",
  "triggerMessageStatusEnumType",
  "TriggerMessageResp__TriggerMessageStatusEnumType",
  "",
  3,
  trigger_message_resp__trigger_message_status_enum_type__enum_values_by_number,
  3,
  trigger_message_resp__trigger_message_status_enum_type__enum_values_by_name,
  1,
  trigger_message_resp__trigger_message_status_enum_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor trigger_message_resp__field_descriptors[1] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(TriggerMessageResp, status),
    &trigger_message_resp__trigger_message_status_enum_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned trigger_message_resp__field_indices_by_name[] = {
  0,   /* field[0] = status */
};
static const ProtobufCIntRange trigger_message_resp__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor trigger_message_resp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "triggerMessageResp",
  "TriggerMessageResp",
  "TriggerMessageResp",
  "",
  sizeof(TriggerMessageResp),
  1,
  trigger_message_resp__field_descriptors,
  trigger_message_resp__field_indices_by_name,
  1,  trigger_message_resp__number_ranges,
  (ProtobufCMessageInit) trigger_message_resp__init,
  NULL,NULL,NULL    /* reserved[123] */
};
