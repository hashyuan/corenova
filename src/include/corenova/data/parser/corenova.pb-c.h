/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: corenova */

#ifndef PROTOBUF_C_corenova__INCLUDED
#define PROTOBUF_C_corenova__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1001000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Rpc__Request Rpc__Request;
typedef struct _Rpc__Response Rpc__Response;


/* --- enums --- */


/* --- messages --- */

struct  _Rpc__Request
{
  ProtobufCMessage base;
  char *magic;
  /*
   *data:filter -> net:av:kav
   */
  char *from;
  char *to;
  ProtobufCBinaryData data;
};
extern char rpc__request__magic__default_value[];
#define RPC__REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpc__request__descriptor) \
    , rpc__request__magic__default_value, NULL, NULL, {0,NULL} }


struct  _Rpc__Response
{
  ProtobufCMessage base;
  int32_t code;
  char *format;
  protobuf_c_boolean has_data;
  ProtobufCBinaryData data;
};
#define RPC__RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpc__response__descriptor) \
    , -1, NULL, 0,{0,NULL} }


/* Rpc__Request methods */
void   rpc__request__init
                     (Rpc__Request         *message);
size_t rpc__request__get_packed_size
                     (const Rpc__Request   *message);
size_t rpc__request__pack
                     (const Rpc__Request   *message,
                      uint8_t             *out);
size_t rpc__request__pack_to_buffer
                     (const Rpc__Request   *message,
                      ProtobufCBuffer     *buffer);
Rpc__Request *
       rpc__request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpc__request__free_unpacked
                     (Rpc__Request *message,
                      ProtobufCAllocator *allocator);
/* Rpc__Response methods */
void   rpc__response__init
                     (Rpc__Response         *message);
size_t rpc__response__get_packed_size
                     (const Rpc__Response   *message);
size_t rpc__response__pack
                     (const Rpc__Response   *message,
                      uint8_t             *out);
size_t rpc__response__pack_to_buffer
                     (const Rpc__Response   *message,
                      ProtobufCBuffer     *buffer);
Rpc__Response *
       rpc__response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpc__response__free_unpacked
                     (Rpc__Response *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Rpc__Request_Closure)
                 (const Rpc__Request *message,
                  void *closure_data);
typedef void (*Rpc__Response_Closure)
                 (const Rpc__Response *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor rpc__request__descriptor;
extern const ProtobufCMessageDescriptor rpc__response__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_corenova__INCLUDED */
