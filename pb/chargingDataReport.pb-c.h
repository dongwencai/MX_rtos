/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: chargingDataReport.proto */

#ifndef PROTOBUF_C_chargingDataReport_2eproto__INCLUDED
#define PROTOBUF_C_chargingDataReport_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _ChargingDataReportReq ChargingDataReportReq;
typedef struct _ChargingDataReportReq__ChargingDataType ChargingDataReportReq__ChargingDataType;
typedef struct _ChargingDataReportResp ChargingDataReportResp;


/* --- enums --- */


/* --- messages --- */

struct  _ChargingDataReportReq__ChargingDataType
{
  ProtobufCMessage base;
  uint32_t connectorid;
  protobuf_c_boolean has_cost;
  uint32_t cost;
  protobuf_c_boolean has_voltage;
  uint32_t voltage;
  protobuf_c_boolean has_current;
  uint32_t current;
  protobuf_c_boolean has_costtime;
  uint32_t costtime;
};
#define CHARGING_DATA_REPORT_REQ__CHARGING_DATA_TYPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&charging_data_report_req__charging_data_type__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  _ChargingDataReportReq
{
  ProtobufCMessage base;
  size_t n_chargingdata;
  ChargingDataReportReq__ChargingDataType **chargingdata;
  ProtobufCBinaryData timestap;
};
#define CHARGING_DATA_REPORT_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&charging_data_report_req__descriptor) \
    , 0,NULL, {0,NULL} }


struct  _ChargingDataReportResp
{
  ProtobufCMessage base;
};
#define CHARGING_DATA_REPORT_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&charging_data_report_resp__descriptor) \
     }


/* ChargingDataReportReq__ChargingDataType methods */
void   charging_data_report_req__charging_data_type__init
                     (ChargingDataReportReq__ChargingDataType         *message);
/* ChargingDataReportReq methods */
void   charging_data_report_req__init
                     (ChargingDataReportReq         *message);
size_t charging_data_report_req__get_packed_size
                     (const ChargingDataReportReq   *message);
size_t charging_data_report_req__pack
                     (const ChargingDataReportReq   *message,
                      uint8_t             *out);
size_t charging_data_report_req__pack_to_buffer
                     (const ChargingDataReportReq   *message,
                      ProtobufCBuffer     *buffer);
ChargingDataReportReq *
       charging_data_report_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   charging_data_report_req__free_unpacked
                     (ChargingDataReportReq *message,
                      ProtobufCAllocator *allocator);
/* ChargingDataReportResp methods */
void   charging_data_report_resp__init
                     (ChargingDataReportResp         *message);
size_t charging_data_report_resp__get_packed_size
                     (const ChargingDataReportResp   *message);
size_t charging_data_report_resp__pack
                     (const ChargingDataReportResp   *message,
                      uint8_t             *out);
size_t charging_data_report_resp__pack_to_buffer
                     (const ChargingDataReportResp   *message,
                      ProtobufCBuffer     *buffer);
ChargingDataReportResp *
       charging_data_report_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   charging_data_report_resp__free_unpacked
                     (ChargingDataReportResp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ChargingDataReportReq__ChargingDataType_Closure)
                 (const ChargingDataReportReq__ChargingDataType *message,
                  void *closure_data);
typedef void (*ChargingDataReportReq_Closure)
                 (const ChargingDataReportReq *message,
                  void *closure_data);
typedef void (*ChargingDataReportResp_Closure)
                 (const ChargingDataReportResp *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor charging_data_report_req__descriptor;
extern const ProtobufCMessageDescriptor charging_data_report_req__charging_data_type__descriptor;
extern const ProtobufCMessageDescriptor charging_data_report_resp__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_chargingDataReport_2eproto__INCLUDED */
