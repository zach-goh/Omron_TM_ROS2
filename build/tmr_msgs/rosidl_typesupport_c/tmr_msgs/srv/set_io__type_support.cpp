// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tmr_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tmr_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "tmr_msgs/srv/detail/set_io__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tmr_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetIO_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIO_Request_type_support_ids_t;

static const _SetIO_Request_type_support_ids_t _SetIO_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetIO_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIO_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIO_Request_type_support_symbol_names_t _SetIO_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tmr_msgs, srv, SetIO_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SetIO_Request)),
  }
};

typedef struct _SetIO_Request_type_support_data_t
{
  void * data[2];
} _SetIO_Request_type_support_data_t;

static _SetIO_Request_type_support_data_t _SetIO_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIO_Request_message_typesupport_map = {
  2,
  "tmr_msgs",
  &_SetIO_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetIO_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetIO_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIO_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIO_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tmr_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_tmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tmr_msgs, srv, SetIO_Request)() {
  return &::tmr_msgs::srv::rosidl_typesupport_c::SetIO_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tmr_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "tmr_msgs/srv/detail/set_io__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tmr_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetIO_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIO_Response_type_support_ids_t;

static const _SetIO_Response_type_support_ids_t _SetIO_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetIO_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIO_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIO_Response_type_support_symbol_names_t _SetIO_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tmr_msgs, srv, SetIO_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SetIO_Response)),
  }
};

typedef struct _SetIO_Response_type_support_data_t
{
  void * data[2];
} _SetIO_Response_type_support_data_t;

static _SetIO_Response_type_support_data_t _SetIO_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIO_Response_message_typesupport_map = {
  2,
  "tmr_msgs",
  &_SetIO_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetIO_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetIO_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetIO_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIO_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tmr_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_tmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tmr_msgs, srv, SetIO_Response)() {
  return &::tmr_msgs::srv::rosidl_typesupport_c::SetIO_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tmr_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tmr_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetIO_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetIO_type_support_ids_t;

static const _SetIO_type_support_ids_t _SetIO_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetIO_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetIO_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetIO_type_support_symbol_names_t _SetIO_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tmr_msgs, srv, SetIO)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SetIO)),
  }
};

typedef struct _SetIO_type_support_data_t
{
  void * data[2];
} _SetIO_type_support_data_t;

static _SetIO_type_support_data_t _SetIO_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetIO_service_typesupport_map = {
  2,
  "tmr_msgs",
  &_SetIO_service_typesupport_ids.typesupport_identifier[0],
  &_SetIO_service_typesupport_symbol_names.symbol_name[0],
  &_SetIO_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetIO_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetIO_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tmr_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_tmr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tmr_msgs, srv, SetIO)() {
  return &::tmr_msgs::srv::rosidl_typesupport_c::SetIO_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
