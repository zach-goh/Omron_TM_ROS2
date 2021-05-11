// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tmr_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tmr_msgs/msg/detail/sta_response__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tmr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StaResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tmr_msgs::msg::StaResponse(_init);
}

void StaResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tmr_msgs::msg::StaResponse *>(message_memory);
  typed_message->~StaResponse();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StaResponse_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmr_msgs::msg::StaResponse, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "subcmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmr_msgs::msg::StaResponse, subcmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "subdata",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmr_msgs::msg::StaResponse, subdata),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StaResponse_message_members = {
  "tmr_msgs::msg",  // message namespace
  "StaResponse",  // message name
  3,  // number of fields
  sizeof(tmr_msgs::msg::StaResponse),
  StaResponse_message_member_array,  // message members
  StaResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  StaResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StaResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StaResponse_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tmr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tmr_msgs::msg::StaResponse>()
{
  return &::tmr_msgs::msg::rosidl_typesupport_introspection_cpp::StaResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tmr_msgs, msg, StaResponse)() {
  return &::tmr_msgs::msg::rosidl_typesupport_introspection_cpp::StaResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif