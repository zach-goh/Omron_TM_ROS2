// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tmr_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__CONNECT_TM__TRAITS_HPP_
#define TMR_MSGS__SRV__DETAIL__CONNECT_TM__TRAITS_HPP_

#include "tmr_msgs/srv/detail/connect_tm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tmr_msgs::srv::ConnectTM_Request>()
{
  return "tmr_msgs::srv::ConnectTM_Request";
}

template<>
inline const char * name<tmr_msgs::srv::ConnectTM_Request>()
{
  return "tmr_msgs/srv/ConnectTM_Request";
}

template<>
struct has_fixed_size<tmr_msgs::srv::ConnectTM_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tmr_msgs::srv::ConnectTM_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tmr_msgs::srv::ConnectTM_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tmr_msgs::srv::ConnectTM_Response>()
{
  return "tmr_msgs::srv::ConnectTM_Response";
}

template<>
inline const char * name<tmr_msgs::srv::ConnectTM_Response>()
{
  return "tmr_msgs/srv/ConnectTM_Response";
}

template<>
struct has_fixed_size<tmr_msgs::srv::ConnectTM_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tmr_msgs::srv::ConnectTM_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tmr_msgs::srv::ConnectTM_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tmr_msgs::srv::ConnectTM>()
{
  return "tmr_msgs::srv::ConnectTM";
}

template<>
inline const char * name<tmr_msgs::srv::ConnectTM>()
{
  return "tmr_msgs/srv/ConnectTM";
}

template<>
struct has_fixed_size<tmr_msgs::srv::ConnectTM>
  : std::integral_constant<
    bool,
    has_fixed_size<tmr_msgs::srv::ConnectTM_Request>::value &&
    has_fixed_size<tmr_msgs::srv::ConnectTM_Response>::value
  >
{
};

template<>
struct has_bounded_size<tmr_msgs::srv::ConnectTM>
  : std::integral_constant<
    bool,
    has_bounded_size<tmr_msgs::srv::ConnectTM_Request>::value &&
    has_bounded_size<tmr_msgs::srv::ConnectTM_Response>::value
  >
{
};

template<>
struct is_service<tmr_msgs::srv::ConnectTM>
  : std::true_type
{
};

template<>
struct is_service_request<tmr_msgs::srv::ConnectTM_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tmr_msgs::srv::ConnectTM_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TMR_MSGS__SRV__DETAIL__CONNECT_TM__TRAITS_HPP_
