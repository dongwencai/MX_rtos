/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: getVariableResultType.proto */

#ifndef PROTOBUF_C_getVariableResultType_2eproto__INCLUDED
#define PROTOBUF_C_getVariableResultType_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "attributeEnumType.pb-c.h"
#include "componentType.pb-c.h"
#include "variableType.pb-c.h"

typedef struct _GetVariableResultType GetVariableResultType;


/* --- enums --- */


/* --- messages --- */

struct  _GetVariableResultType
{
  ProtobufCMessage base;
  protobuf_c_boolean has_attributetype;
  AttributeEnumType attributetype;
  char *attributevalue;
  ComponentType *component;
  VariableType *variable;
};
#define GET_VARIABLE_RESULT_TYPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&get_variable_result_type__descriptor) \
    , 0, ATTRIBUTE_ENUM_TYPE__Actual, NULL, NULL, NULL }


/* GetVariableResultType methods */
void   get_variable_result_type__init
                     (GetVariableResultType         *message);
size_t get_variable_result_type__get_packed_size
                     (const GetVariableResultType   *message);
size_t get_variable_result_type__pack
                     (const GetVariableResultType   *message,
                      uint8_t             *out);
size_t get_variable_result_type__pack_to_buffer
                     (const GetVariableResultType   *message,
                      ProtobufCBuffer     *buffer);
GetVariableResultType *
       get_variable_result_type__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   get_variable_result_type__free_unpacked
                     (GetVariableResultType *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*GetVariableResultType_Closure)
                 (const GetVariableResultType *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor get_variable_result_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_getVariableResultType_2eproto__INCLUDED */
