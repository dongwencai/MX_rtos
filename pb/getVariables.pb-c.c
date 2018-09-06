/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: getVariables.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "getVariables.pb-c.h"
void   get_variable_req__init
                     (GetVariableReq         *message)
{
  static const GetVariableReq init_value = GET_VARIABLE_REQ__INIT;
  *message = init_value;
}
size_t get_variable_req__get_packed_size
                     (const GetVariableReq *message)
{
  assert(message->base.descriptor == &get_variable_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t get_variable_req__pack
                     (const GetVariableReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &get_variable_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t get_variable_req__pack_to_buffer
                     (const GetVariableReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &get_variable_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
GetVariableReq *
       get_variable_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (GetVariableReq *)
     protobuf_c_message_unpack (&get_variable_req__descriptor,
                                allocator, len, data);
}
void   get_variable_req__free_unpacked
                     (GetVariableReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &get_variable_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   get_variable_resp__init
                     (GetVariableResp         *message)
{
  static const GetVariableResp init_value = GET_VARIABLE_RESP__INIT;
  *message = init_value;
}
size_t get_variable_resp__get_packed_size
                     (const GetVariableResp *message)
{
  assert(message->base.descriptor == &get_variable_resp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t get_variable_resp__pack
                     (const GetVariableResp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &get_variable_resp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t get_variable_resp__pack_to_buffer
                     (const GetVariableResp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &get_variable_resp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
GetVariableResp *
       get_variable_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (GetVariableResp *)
     protobuf_c_message_unpack (&get_variable_resp__descriptor,
                                allocator, len, data);
}
void   get_variable_resp__free_unpacked
                     (GetVariableResp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &get_variable_resp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor get_variable_req__field_descriptors[1] =
{
  {
    "getVariablesData",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(GetVariableReq, n_getvariablesdata),
    offsetof(GetVariableReq, getvariablesdata),
    &get_variable_data_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned get_variable_req__field_indices_by_name[] = {
  0,   /* field[0] = getVariablesData */
};
static const ProtobufCIntRange get_variable_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor get_variable_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "getVariableReq",
  "GetVariableReq",
  "GetVariableReq",
  "",
  sizeof(GetVariableReq),
  1,
  get_variable_req__field_descriptors,
  get_variable_req__field_indices_by_name,
  1,  get_variable_req__number_ranges,
  (ProtobufCMessageInit) get_variable_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor get_variable_resp__field_descriptors[1] =
{
  {
    "getVariables",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(GetVariableResp, n_getvariables),
    offsetof(GetVariableResp, getvariables),
    &get_variable_result_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned get_variable_resp__field_indices_by_name[] = {
  0,   /* field[0] = getVariables */
};
static const ProtobufCIntRange get_variable_resp__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor get_variable_resp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "getVariableResp",
  "GetVariableResp",
  "GetVariableResp",
  "",
  sizeof(GetVariableResp),
  1,
  get_variable_resp__field_descriptors,
  get_variable_resp__field_indices_by_name,
  1,  get_variable_resp__number_ranges,
  (ProtobufCMessageInit) get_variable_resp__init,
  NULL,NULL,NULL    /* reserved[123] */
};
