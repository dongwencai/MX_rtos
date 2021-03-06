/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: firmwareStatusNotification.proto */

#ifndef PROTOBUF_C_firmwareStatusNotification_2eproto__INCLUDED
#define PROTOBUF_C_firmwareStatusNotification_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _FirmwareStatusNotificationReq FirmwareStatusNotificationReq;
typedef struct _FirmwareStatusNotificationResp FirmwareStatusNotificationResp;


/* --- enums --- */

typedef enum _FirmwareStatusNotificationReq__FirmwareStatusEnumType {
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Downloaded = 0,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__DownloadFailed = 1,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Downloading = 2,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__DownloadPaused = 3,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Idle = 4,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Installing = 5,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Installed = 6,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__InvalidCertificate = 7,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__InvalidSignature = 8,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__InstallRebooting = 9,
  FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__NoFirmware = 10
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE)
} FirmwareStatusNotificationReq__FirmwareStatusEnumType;

/* --- messages --- */

struct  _FirmwareStatusNotificationReq
{
  ProtobufCMessage base;
  FirmwareStatusNotificationReq__FirmwareStatusEnumType status;
};
#define FIRMWARE_STATUS_NOTIFICATION_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&firmware_status_notification_req__descriptor) \
    , FIRMWARE_STATUS_NOTIFICATION_REQ__FIRMWARE_STATUS_ENUM_TYPE__Downloaded }


struct  _FirmwareStatusNotificationResp
{
  ProtobufCMessage base;
};
#define FIRMWARE_STATUS_NOTIFICATION_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&firmware_status_notification_resp__descriptor) \
     }


/* FirmwareStatusNotificationReq methods */
void   firmware_status_notification_req__init
                     (FirmwareStatusNotificationReq         *message);
size_t firmware_status_notification_req__get_packed_size
                     (const FirmwareStatusNotificationReq   *message);
size_t firmware_status_notification_req__pack
                     (const FirmwareStatusNotificationReq   *message,
                      uint8_t             *out);
size_t firmware_status_notification_req__pack_to_buffer
                     (const FirmwareStatusNotificationReq   *message,
                      ProtobufCBuffer     *buffer);
FirmwareStatusNotificationReq *
       firmware_status_notification_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   firmware_status_notification_req__free_unpacked
                     (FirmwareStatusNotificationReq *message,
                      ProtobufCAllocator *allocator);
/* FirmwareStatusNotificationResp methods */
void   firmware_status_notification_resp__init
                     (FirmwareStatusNotificationResp         *message);
size_t firmware_status_notification_resp__get_packed_size
                     (const FirmwareStatusNotificationResp   *message);
size_t firmware_status_notification_resp__pack
                     (const FirmwareStatusNotificationResp   *message,
                      uint8_t             *out);
size_t firmware_status_notification_resp__pack_to_buffer
                     (const FirmwareStatusNotificationResp   *message,
                      ProtobufCBuffer     *buffer);
FirmwareStatusNotificationResp *
       firmware_status_notification_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   firmware_status_notification_resp__free_unpacked
                     (FirmwareStatusNotificationResp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*FirmwareStatusNotificationReq_Closure)
                 (const FirmwareStatusNotificationReq *message,
                  void *closure_data);
typedef void (*FirmwareStatusNotificationResp_Closure)
                 (const FirmwareStatusNotificationResp *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor firmware_status_notification_req__descriptor;
extern const ProtobufCEnumDescriptor    firmware_status_notification_req__firmware_status_enum_type__descriptor;
extern const ProtobufCMessageDescriptor firmware_status_notification_resp__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_firmwareStatusNotification_2eproto__INCLUDED */
