// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tm_msgs:msg/SctResponse.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__SCT_RESPONSE__FUNCTIONS_H_
#define TM_MSGS__MSG__DETAIL__SCT_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tm_msgs/msg/detail/sct_response__struct.h"

/// Initialize msg/SctResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tm_msgs__msg__SctResponse
 * )) before or use
 * tm_msgs__msg__SctResponse__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
bool
tm_msgs__msg__SctResponse__init(tm_msgs__msg__SctResponse * msg);

/// Finalize msg/SctResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__msg__SctResponse__fini(tm_msgs__msg__SctResponse * msg);

/// Create msg/SctResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tm_msgs__msg__SctResponse__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
tm_msgs__msg__SctResponse *
tm_msgs__msg__SctResponse__create();

/// Destroy msg/SctResponse message.
/**
 * It calls
 * tm_msgs__msg__SctResponse__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__msg__SctResponse__destroy(tm_msgs__msg__SctResponse * msg);


/// Initialize array of msg/SctResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * tm_msgs__msg__SctResponse__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
bool
tm_msgs__msg__SctResponse__Sequence__init(tm_msgs__msg__SctResponse__Sequence * array, size_t size);

/// Finalize array of msg/SctResponse messages.
/**
 * It calls
 * tm_msgs__msg__SctResponse__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__msg__SctResponse__Sequence__fini(tm_msgs__msg__SctResponse__Sequence * array);

/// Create array of msg/SctResponse messages.
/**
 * It allocates the memory for the array and calls
 * tm_msgs__msg__SctResponse__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
tm_msgs__msg__SctResponse__Sequence *
tm_msgs__msg__SctResponse__Sequence__create(size_t size);

/// Destroy array of msg/SctResponse messages.
/**
 * It calls
 * tm_msgs__msg__SctResponse__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__msg__SctResponse__Sequence__destroy(tm_msgs__msg__SctResponse__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__MSG__DETAIL__SCT_RESPONSE__FUNCTIONS_H_
