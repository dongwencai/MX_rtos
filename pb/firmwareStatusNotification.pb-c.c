/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: firmwareStatusNotification.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "firmwareStatusNotification.pb-c.h"
void   firmware_status_notification_req__init
                     (FirmwareStatusNotificationReq         *message)
{
  static const FirmwareStatusNotificationReq init_value = FIRMWARE_STATUS_NOTIFICATION_REQ__INIT;
  *message = init_value;
}
size_t firmware_status_notification_req__get_packed_size
                     (const FirmwareStatusNotificationReq *message)
{
  assert(message->base.descriptor == &firmware_status_notification_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t firmware_status_notification_req__pack
                     (const FirmwareStatusNotificationReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &firmware_status_notification_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t firmware_status_notification_req__pack_to_buffer
                     (const FirmwareStatusNotificationReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &firmware_status_notification_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
FirmwareStatusNotificationReq *
       firmware_status_notification_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (FirmwareStatusNotificationReq *)
     protobuf_c_message_unpack (&firmware_status_notification_req__descriptor,
                                allocator, len, data);
}
void   firmware_status_notification_req__free_unpacked
                     (FirmwareStatusNotificationReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &firmware_status_notification_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   firmware_status_notification_resp__init
                     (FirmwareStatusNotificationResp         *message)
{
  static const FirmwareStatusNotificationResp init_value = FIRMWARE_STATUS_NOTIFICATION_RESP__INIT;
  *message = init_value;
}
size_t firmware_status_notification_resp__get_packed_size
                     (const FirmwareStatusNotificationResp *message)
{
  assert(message->base.descriptor == &firmware_status_notification_resp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t firmware_status_notification_resp__pack
                     (const FirmwareStatusNotificationResp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &firmware_status_notification_resp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t firmware_status_notification_resp__pack_to_buffer
                     (const FirmwareStatusNotificationResp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &firmware_status_notification_resp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
FirmwareStatusNotificationResp *
       firmware_status_notification_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (FirmwareStatusNotificationResp *)
     protobuf_c_message_unpack (&firmware_status_notification_resp__descriptor,
                                allocator, len, data);
}
void   firmware_status_notification_resp__free_unpacked
                     (FirmwareStatusNotificationResp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &firmware_status_notification_resp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue firmware_status_notification_req__firmware_status_enum_type__enum_values_by_number[11] =
{
  { "Downloaded", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Downloaded", 0 },
  { "DownloadFailed", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__DownloadFailed", 1 },
  { "Downloading", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Downloading", 2 },
  { "DownloadPaused", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__DownloadPaused", 3 },
  { "Idle", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Idle", 4 },
  { "Installing", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Installing", 5 },
  { "Installed", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Installed", 6 },
  { "InvalidCertificate", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__InvalidCertificate", 7 },
  { "InvalidSignature", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__InvalidSignature", 8 },
  { "InstallRebooting", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__InstallRebooting", 9 },
  { "NoFirmware", "FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__NoFirmware", 10 },
};
static const ProtobufCIntRange firmware_status_notification_req__firmware_status_enum_type__value_ranges[] = {
{0, 0},{0, 11}
};
static const ProtobufCEnumValueIndex firmware_status_notification_req__firmware_status_enum_type__enum_values_by_name[11] =
{
  { "DownloadFailed", 1 },
  { "DownloadPaused", 3 },
  { "Downloaded", 0 },
  { "Downloading", 2 },
  { "Idle", 4 },
  { "InstallRebooting", 9 },
  { "Installed", 6 },
  { "Installing", 5 },
  { "InvalidCertificate", 7 },
  { "InvalidSignature", 8 },
  { "NoFirmware", 10 },
};
const ProtobufCEnumDescriptor firmware_status_notification_req__firmware_status_enum_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "firmwareStatusNotificationReq.firmwareStatusEnumType",
  "firmwareStatusEnumType",
  "FirmwareStatusNotificationReq__FirmwareStatusEnumType",
  "",
  11,
  firmware_status_notification_req__firmware_status_enum_type__enum_values_by_number,
  11,
  firmware_status_notification_req__firmware_status_enum_type__enum_values_by_name,
  1,
  firmware_status_notification_req__firmware_status_enum_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor firmware_status_notification_req__field_descriptors[1] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(FirmwareStatusNotificationReq, status),
    &firmware_status_notification_req__firmware_status_enum_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned firmware_status_notification_req__field_indices_by_name[] = {
  0,   /* field[0] = status */
};
static const ProtobufCIntRange firmware_status_notification_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor firmware_status_notification_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "firmwareStatusNotificationReq",
  "FirmwareStatusNotificationReq",
  "FirmwareStatusNotificationReq",
  "",
  sizeof(FirmwareStatusNotificationReq),
  1,
  firmware_status_notification_req__field_descriptors,
  firmware_status_notification_req__field_indices_by_name,
  1,  firmware_status_notification_req__number_ranges,
  (ProtobufCMessageInit) firmware_status_notification_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define firmware_status_notification_resp__field_descriptors NULL
#define firmware_status_notification_resp__field_indices_by_name NULL
#define firmware_status_notification_resp__number_ranges NULL
const ProtobufCMessageDescriptor firmware_status_notification_resp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "firmwareStatusNotificationResp",
  "FirmwareStatusNotificationResp",
  "FirmwareStatusNotificationResp",
  "",
  sizeof(FirmwareStatusNotificationResp),
  0,
  firmware_status_notification_resp__field_descriptors,
  firmware_status_notification_resp__field_indices_by_name,
  0,  firmware_status_notification_resp__number_ranges,
  (ProtobufCMessageInit) firmware_status_notification_resp__init,
  NULL,NULL,NULL    /* reserved[123] */
};