/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: setVariables.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "setVariables.pb-c.h"
void   set_variables_req__init
                     (SetVariablesReq         *message)
{
  static const SetVariablesReq init_value = SET_VARIABLES_REQ__INIT;
  *message = init_value;
}
size_t set_variables_req__get_packed_size
                     (const SetVariablesReq *message)
{
  assert(message->base.descriptor == &set_variables_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t set_variables_req__pack
                     (const SetVariablesReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &set_variables_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t set_variables_req__pack_to_buffer
                     (const SetVariablesReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &set_variables_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SetVariablesReq *
       set_variables_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SetVariablesReq *)
     protobuf_c_message_unpack (&set_variables_req__descriptor,
                                allocator, len, data);
}
void   set_variables_req__free_unpacked
                     (SetVariablesReq *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &set_variables_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   set_variables_resp__init
                     (SetVariablesResp         *message)
{
  static const SetVariablesResp init_value = SET_VARIABLES_RESP__INIT;
  *message = init_value;
}
size_t set_variables_resp__get_packed_size
                     (const SetVariablesResp *message)
{
  assert(message->base.descriptor == &set_variables_resp__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t set_variables_resp__pack
                     (const SetVariablesResp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &set_variables_resp__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t set_variables_resp__pack_to_buffer
                     (const SetVariablesResp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &set_variables_resp__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
SetVariablesResp *
       set_variables_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (SetVariablesResp *)
     protobuf_c_message_unpack (&set_variables_resp__descriptor,
                                allocator, len, data);
}
void   set_variables_resp__free_unpacked
                     (SetVariablesResp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &set_variables_resp__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor set_variables_req__field_descriptors[1] =
{
  {
    "setVariableData",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(SetVariablesReq, n_setvariabledata),
    offsetof(SetVariablesReq, setvariabledata),
    &set_variable_data_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned set_variables_req__field_indices_by_name[] = {
  0,   /* field[0] = setVariableData */
};
static const ProtobufCIntRange set_variables_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor set_variables_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "setVariablesReq",
  "SetVariablesReq",
  "SetVariablesReq",
  "",
  sizeof(SetVariablesReq),
  1,
  set_variables_req__field_descriptors,
  set_variables_req__field_indices_by_name,
  1,  set_variables_req__number_ranges,
  (ProtobufCMessageInit) set_variables_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor set_variables_resp__field_descriptors[1] =
{
  {
    "setVariableResult",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(SetVariablesResp, n_setvariableresult),
    offsetof(SetVariablesResp, setvariableresult),
    &set_variable_result_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned set_variables_resp__field_indices_by_name[] = {
  0,   /* field[0] = setVariableResult */
};
static const ProtobufCIntRange set_variables_resp__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor set_variables_resp__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "setVariablesResp",
  "SetVariablesResp",
  "SetVariablesResp",
  "",
  sizeof(SetVariablesResp),
  1,
  set_variables_resp__field_descriptors,
  set_variables_resp__field_indices_by_name,
  1,  set_variables_resp__number_ranges,
  (ProtobufCMessageInit) set_variables_resp__init,
  NULL,NULL,NULL    /* reserved[123] */
};