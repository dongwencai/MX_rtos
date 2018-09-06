/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: dataTransfer.proto */

#ifndef PROTOBUF_C_dataTransfer_2eproto__INCLUDED
#define PROTOBUF_C_dataTransfer_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _DataTransferReq DataTransferReq;
typedef struct _DataTransferResp DataTransferResp;


/* --- enums --- */

typedef enum _DataTransferResp__DataTransferStatusEnumType {
  DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE__Accepted = 0,
  DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE__Rejected = 1,
  DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE__UnknownMessageId = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE)
} DataTransferResp__DataTransferStatusEnumType;

/* --- messages --- */

struct  _DataTransferReq
{
  ProtobufCMessage base;
  char *messageid;
  protobuf_c_boolean has_data;
  ProtobufCBinaryData data;
};
#define DATA_TRANSFER_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_transfer_req__descriptor) \
    , NULL, 0, {0,NULL} }


struct  _DataTransferResp
{
  ProtobufCMessage base;
  DataTransferResp__DataTransferStatusEnumType status;
  protobuf_c_boolean has_data;
  ProtobufCBinaryData data;
};
#define DATA_TRANSFER_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_transfer_resp__descriptor) \
    , DATA_TRANSFER_RESP__DATA_TRANSFER_STATUS_ENUM_TYPE__Accepted, 0, {0,NULL} }


/* DataTransferReq methods */
void   data_transfer_req__init
                     (DataTransferReq         *message);
size_t data_transfer_req__get_packed_size
                     (const DataTransferReq   *message);
size_t data_transfer_req__pack
                     (const DataTransferReq   *message,
                      uint8_t             *out);
size_t data_transfer_req__pack_to_buffer
                     (const DataTransferReq   *message,
                      ProtobufCBuffer     *buffer);
DataTransferReq *
       data_transfer_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_transfer_req__free_unpacked
                     (DataTransferReq *message,
                      ProtobufCAllocator *allocator);
/* DataTransferResp methods */
void   data_transfer_resp__init
                     (DataTransferResp         *message);
size_t data_transfer_resp__get_packed_size
                     (const DataTransferResp   *message);
size_t data_transfer_resp__pack
                     (const DataTransferResp   *message,
                      uint8_t             *out);
size_t data_transfer_resp__pack_to_buffer
                     (const DataTransferResp   *message,
                      ProtobufCBuffer     *buffer);
DataTransferResp *
       data_transfer_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_transfer_resp__free_unpacked
                     (DataTransferResp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DataTransferReq_Closure)
                 (const DataTransferReq *message,
                  void *closure_data);
typedef void (*DataTransferResp_Closure)
                 (const DataTransferResp *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor data_transfer_req__descriptor;
extern const ProtobufCMessageDescriptor data_transfer_resp__descriptor;
extern const ProtobufCEnumDescriptor    data_transfer_resp__data_transfer_status_enum_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_dataTransfer_2eproto__INCLUDED */