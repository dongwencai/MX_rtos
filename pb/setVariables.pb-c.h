/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: setVariables.proto */

#ifndef PROTOBUF_C_setVariables_2eproto__INCLUDED
#define PROTOBUF_C_setVariables_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "setVariableDataType.pb-c.h"
#include "setVariableResultType.pb-c.h"

typedef struct _SetVariablesReq SetVariablesReq;
typedef struct _SetVariablesResp SetVariablesResp;


/* --- enums --- */


/* --- messages --- */

struct  _SetVariablesReq
{
  ProtobufCMessage base;
  size_t n_setvariabledata;
  SetVariableDataType **setvariabledata;
};
#define SET_VARIABLES_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&set_variables_req__descriptor) \
    , 0,NULL }


struct  _SetVariablesResp
{
  ProtobufCMessage base;
  size_t n_setvariableresult;
  SetVariableResultType **setvariableresult;
};
#define SET_VARIABLES_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&set_variables_resp__descriptor) \
    , 0,NULL }


/* SetVariablesReq methods */
void   set_variables_req__init
                     (SetVariablesReq         *message);
size_t set_variables_req__get_packed_size
                     (const SetVariablesReq   *message);
size_t set_variables_req__pack
                     (const SetVariablesReq   *message,
                      uint8_t             *out);
size_t set_variables_req__pack_to_buffer
                     (const SetVariablesReq   *message,
                      ProtobufCBuffer     *buffer);
SetVariablesReq *
       set_variables_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   set_variables_req__free_unpacked
                     (SetVariablesReq *message,
                      ProtobufCAllocator *allocator);
/* SetVariablesResp methods */
void   set_variables_resp__init
                     (SetVariablesResp         *message);
size_t set_variables_resp__get_packed_size
                     (const SetVariablesResp   *message);
size_t set_variables_resp__pack
                     (const SetVariablesResp   *message,
                      uint8_t             *out);
size_t set_variables_resp__pack_to_buffer
                     (const SetVariablesResp   *message,
                      ProtobufCBuffer     *buffer);
SetVariablesResp *
       set_variables_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   set_variables_resp__free_unpacked
                     (SetVariablesResp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SetVariablesReq_Closure)
                 (const SetVariablesReq *message,
                  void *closure_data);
typedef void (*SetVariablesResp_Closure)
                 (const SetVariablesResp *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor set_variables_req__descriptor;
extern const ProtobufCMessageDescriptor set_variables_resp__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_setVariables_2eproto__INCLUDED */