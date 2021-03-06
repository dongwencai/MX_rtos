/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: beatHeart.proto */

#ifndef PROTOBUF_C_beatHeart_2eproto__INCLUDED
#define PROTOBUF_C_beatHeart_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _BeatHeartReq BeatHeartReq;
typedef struct _BeatHeartResp BeatHeartResp;


/* --- enums --- */


/* --- messages --- */

struct  _BeatHeartReq
{
  ProtobufCMessage base;
  protobuf_c_boolean has_csq;
  int32_t csq;
};
#define BEAT_HEART_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&beat_heart_req__descriptor) \
    , 0, 0 }


struct  _BeatHeartResp
{
  ProtobufCMessage base;
  ProtobufCBinaryData timestamp;
};
#define BEAT_HEART_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&beat_heart_resp__descriptor) \
    , {0,NULL} }


/* BeatHeartReq methods */
void   beat_heart_req__init
                     (BeatHeartReq         *message);
size_t beat_heart_req__get_packed_size
                     (const BeatHeartReq   *message);
size_t beat_heart_req__pack
                     (const BeatHeartReq   *message,
                      uint8_t             *out);
size_t beat_heart_req__pack_to_buffer
                     (const BeatHeartReq   *message,
                      ProtobufCBuffer     *buffer);
BeatHeartReq *
       beat_heart_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   beat_heart_req__free_unpacked
                     (BeatHeartReq *message,
                      ProtobufCAllocator *allocator);
/* BeatHeartResp methods */
void   beat_heart_resp__init
                     (BeatHeartResp         *message);
size_t beat_heart_resp__get_packed_size
                     (const BeatHeartResp   *message);
size_t beat_heart_resp__pack
                     (const BeatHeartResp   *message,
                      uint8_t             *out);
size_t beat_heart_resp__pack_to_buffer
                     (const BeatHeartResp   *message,
                      ProtobufCBuffer     *buffer);
BeatHeartResp *
       beat_heart_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   beat_heart_resp__free_unpacked
                     (BeatHeartResp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*BeatHeartReq_Closure)
                 (const BeatHeartReq *message,
                  void *closure_data);
typedef void (*BeatHeartResp_Closure)
                 (const BeatHeartResp *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor beat_heart_req__descriptor;
extern const ProtobufCMessageDescriptor beat_heart_resp__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_beatHeart_2eproto__INCLUDED */
