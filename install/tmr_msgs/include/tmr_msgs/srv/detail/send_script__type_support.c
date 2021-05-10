// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tmr_msgs:srv/SendScript.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tmr_msgs/srv/detail/send_script__rosidl_typesupport_introspection_c.h"
#include "tmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tmr_msgs/srv/detail/send_script__functions.h"
#include "tmr_msgs/srv/detail/send_script__struct.h"


// Include directives for member types
// Member `id`
// Member `script`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tmr_msgs__srv__SendScript_Request__init(message_memory);
}

void SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_fini_function(void * message_memory)
{
  tmr_msgs__srv__SendScript_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmr_msgs__srv__SendScript_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "script",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmr_msgs__srv__SendScript_Request, script),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_members = {
  "tmr_msgs__srv",  // message namespace
  "SendScript_Request",  // message name
  2,  // number of fields
  sizeof(tmr_msgs__srv__SendScript_Request),
  SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_member_array,  // message members
  SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_type_support_handle = {
  0,
  &SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SendScript_Request)() {
  if (!SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_type_support_handle.typesupport_identifier) {
    SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SendScript_Request__rosidl_typesupport_introspection_c__SendScript_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tmr_msgs/srv/detail/send_script__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tmr_msgs/srv/detail/send_script__functions.h"
// already included above
// #include "tmr_msgs/srv/detail/send_script__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tmr_msgs__srv__SendScript_Response__init(message_memory);
}

void SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_fini_function(void * message_memory)
{
  tmr_msgs__srv__SendScript_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmr_msgs__srv__SendScript_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_members = {
  "tmr_msgs__srv",  // message namespace
  "SendScript_Response",  // message name
  1,  // number of fields
  sizeof(tmr_msgs__srv__SendScript_Response),
  SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_member_array,  // message members
  SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_type_support_handle = {
  0,
  &SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tmr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SendScript_Response)() {
  if (!SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_type_support_handle.typesupport_identifier) {
    SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SendScript_Response__rosidl_typesupport_introspection_c__SendScript_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tmr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tmr_msgs/srv/detail/send_script__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_service_members = {
  "tmr_msgs__srv",  // service namespace
  "SendScript",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_Request_message_type_support_handle,
  NULL  // response message
  // tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_Response_message_type_support_handle
};

static rosidl_service_type_support_t tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_service_type_support_handle = {
  0,
  &tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SendScript_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SendScript_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tmr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SendScript)() {
  if (!tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_service_type_support_handle.typesupport_identifier) {
    tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SendScript_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmr_msgs, srv, SendScript_Response)()->data;
  }

  return &tmr_msgs__srv__detail__send_script__rosidl_typesupport_introspection_c__SendScript_service_type_support_handle;
}
