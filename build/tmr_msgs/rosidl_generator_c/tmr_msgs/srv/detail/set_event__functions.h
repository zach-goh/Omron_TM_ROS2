// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tmr_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__SET_EVENT__FUNCTIONS_H_
#define TMR_MSGS__SRV__DETAIL__SET_EVENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tmr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tmr_msgs/srv/detail/set_event__struct.h"

/// Initialize srv/SetEvent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tmr_msgs__srv__SetEvent_Request
 * )) before or use
 * tmr_msgs__srv__SetEvent_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
bool
tmr_msgs__srv__SetEvent_Request__init(tmr_msgs__srv__SetEvent_Request * msg);

/// Finalize srv/SetEvent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Request__fini(tmr_msgs__srv__SetEvent_Request * msg);

/// Create srv/SetEvent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tmr_msgs__srv__SetEvent_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
tmr_msgs__srv__SetEvent_Request *
tmr_msgs__srv__SetEvent_Request__create();

/// Destroy srv/SetEvent message.
/**
 * It calls
 * tmr_msgs__srv__SetEvent_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Request__destroy(tmr_msgs__srv__SetEvent_Request * msg);


/// Initialize array of srv/SetEvent messages.
/**
 * It allocates the memory for the number of elements and calls
 * tmr_msgs__srv__SetEvent_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
bool
tmr_msgs__srv__SetEvent_Request__Sequence__init(tmr_msgs__srv__SetEvent_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetEvent messages.
/**
 * It calls
 * tmr_msgs__srv__SetEvent_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Request__Sequence__fini(tmr_msgs__srv__SetEvent_Request__Sequence * array);

/// Create array of srv/SetEvent messages.
/**
 * It allocates the memory for the array and calls
 * tmr_msgs__srv__SetEvent_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
tmr_msgs__srv__SetEvent_Request__Sequence *
tmr_msgs__srv__SetEvent_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetEvent messages.
/**
 * It calls
 * tmr_msgs__srv__SetEvent_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Request__Sequence__destroy(tmr_msgs__srv__SetEvent_Request__Sequence * array);

/// Initialize srv/SetEvent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tmr_msgs__srv__SetEvent_Response
 * )) before or use
 * tmr_msgs__srv__SetEvent_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
bool
tmr_msgs__srv__SetEvent_Response__init(tmr_msgs__srv__SetEvent_Response * msg);

/// Finalize srv/SetEvent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Response__fini(tmr_msgs__srv__SetEvent_Response * msg);

/// Create srv/SetEvent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tmr_msgs__srv__SetEvent_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
tmr_msgs__srv__SetEvent_Response *
tmr_msgs__srv__SetEvent_Response__create();

/// Destroy srv/SetEvent message.
/**
 * It calls
 * tmr_msgs__srv__SetEvent_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Response__destroy(tmr_msgs__srv__SetEvent_Response * msg);


/// Initialize array of srv/SetEvent messages.
/**
 * It allocates the memory for the number of elements and calls
 * tmr_msgs__srv__SetEvent_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
bool
tmr_msgs__srv__SetEvent_Response__Sequence__init(tmr_msgs__srv__SetEvent_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetEvent messages.
/**
 * It calls
 * tmr_msgs__srv__SetEvent_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Response__Sequence__fini(tmr_msgs__srv__SetEvent_Response__Sequence * array);

/// Create array of srv/SetEvent messages.
/**
 * It allocates the memory for the array and calls
 * tmr_msgs__srv__SetEvent_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
tmr_msgs__srv__SetEvent_Response__Sequence *
tmr_msgs__srv__SetEvent_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetEvent messages.
/**
 * It calls
 * tmr_msgs__srv__SetEvent_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tmr_msgs
void
tmr_msgs__srv__SetEvent_Response__Sequence__destroy(tmr_msgs__srv__SetEvent_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TMR_MSGS__SRV__DETAIL__SET_EVENT__FUNCTIONS_H_
