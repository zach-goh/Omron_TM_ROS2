// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tmr_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice
#include "tmr_msgs/srv/detail/ask_sta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `subcmd`
// Member `subdata`
#include "rosidl_runtime_c/string_functions.h"

bool
tmr_msgs__srv__AskSta_Request__init(tmr_msgs__srv__AskSta_Request * msg)
{
  if (!msg) {
    return false;
  }
  // subcmd
  if (!rosidl_runtime_c__String__init(&msg->subcmd)) {
    tmr_msgs__srv__AskSta_Request__fini(msg);
    return false;
  }
  // subdata
  if (!rosidl_runtime_c__String__init(&msg->subdata)) {
    tmr_msgs__srv__AskSta_Request__fini(msg);
    return false;
  }
  // wait_time
  return true;
}

void
tmr_msgs__srv__AskSta_Request__fini(tmr_msgs__srv__AskSta_Request * msg)
{
  if (!msg) {
    return;
  }
  // subcmd
  rosidl_runtime_c__String__fini(&msg->subcmd);
  // subdata
  rosidl_runtime_c__String__fini(&msg->subdata);
  // wait_time
}

tmr_msgs__srv__AskSta_Request *
tmr_msgs__srv__AskSta_Request__create()
{
  tmr_msgs__srv__AskSta_Request * msg = (tmr_msgs__srv__AskSta_Request *)malloc(sizeof(tmr_msgs__srv__AskSta_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tmr_msgs__srv__AskSta_Request));
  bool success = tmr_msgs__srv__AskSta_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tmr_msgs__srv__AskSta_Request__destroy(tmr_msgs__srv__AskSta_Request * msg)
{
  if (msg) {
    tmr_msgs__srv__AskSta_Request__fini(msg);
  }
  free(msg);
}


bool
tmr_msgs__srv__AskSta_Request__Sequence__init(tmr_msgs__srv__AskSta_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tmr_msgs__srv__AskSta_Request * data = NULL;
  if (size) {
    data = (tmr_msgs__srv__AskSta_Request *)calloc(size, sizeof(tmr_msgs__srv__AskSta_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tmr_msgs__srv__AskSta_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tmr_msgs__srv__AskSta_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tmr_msgs__srv__AskSta_Request__Sequence__fini(tmr_msgs__srv__AskSta_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tmr_msgs__srv__AskSta_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tmr_msgs__srv__AskSta_Request__Sequence *
tmr_msgs__srv__AskSta_Request__Sequence__create(size_t size)
{
  tmr_msgs__srv__AskSta_Request__Sequence * array = (tmr_msgs__srv__AskSta_Request__Sequence *)malloc(sizeof(tmr_msgs__srv__AskSta_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tmr_msgs__srv__AskSta_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tmr_msgs__srv__AskSta_Request__Sequence__destroy(tmr_msgs__srv__AskSta_Request__Sequence * array)
{
  if (array) {
    tmr_msgs__srv__AskSta_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `subcmd`
// Member `subdata`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
tmr_msgs__srv__AskSta_Response__init(tmr_msgs__srv__AskSta_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ok
  // subcmd
  if (!rosidl_runtime_c__String__init(&msg->subcmd)) {
    tmr_msgs__srv__AskSta_Response__fini(msg);
    return false;
  }
  // subdata
  if (!rosidl_runtime_c__String__init(&msg->subdata)) {
    tmr_msgs__srv__AskSta_Response__fini(msg);
    return false;
  }
  return true;
}

void
tmr_msgs__srv__AskSta_Response__fini(tmr_msgs__srv__AskSta_Response * msg)
{
  if (!msg) {
    return;
  }
  // ok
  // subcmd
  rosidl_runtime_c__String__fini(&msg->subcmd);
  // subdata
  rosidl_runtime_c__String__fini(&msg->subdata);
}

tmr_msgs__srv__AskSta_Response *
tmr_msgs__srv__AskSta_Response__create()
{
  tmr_msgs__srv__AskSta_Response * msg = (tmr_msgs__srv__AskSta_Response *)malloc(sizeof(tmr_msgs__srv__AskSta_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tmr_msgs__srv__AskSta_Response));
  bool success = tmr_msgs__srv__AskSta_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tmr_msgs__srv__AskSta_Response__destroy(tmr_msgs__srv__AskSta_Response * msg)
{
  if (msg) {
    tmr_msgs__srv__AskSta_Response__fini(msg);
  }
  free(msg);
}


bool
tmr_msgs__srv__AskSta_Response__Sequence__init(tmr_msgs__srv__AskSta_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tmr_msgs__srv__AskSta_Response * data = NULL;
  if (size) {
    data = (tmr_msgs__srv__AskSta_Response *)calloc(size, sizeof(tmr_msgs__srv__AskSta_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tmr_msgs__srv__AskSta_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tmr_msgs__srv__AskSta_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tmr_msgs__srv__AskSta_Response__Sequence__fini(tmr_msgs__srv__AskSta_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tmr_msgs__srv__AskSta_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tmr_msgs__srv__AskSta_Response__Sequence *
tmr_msgs__srv__AskSta_Response__Sequence__create(size_t size)
{
  tmr_msgs__srv__AskSta_Response__Sequence * array = (tmr_msgs__srv__AskSta_Response__Sequence *)malloc(sizeof(tmr_msgs__srv__AskSta_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tmr_msgs__srv__AskSta_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tmr_msgs__srv__AskSta_Response__Sequence__destroy(tmr_msgs__srv__AskSta_Response__Sequence * array)
{
  if (array) {
    tmr_msgs__srv__AskSta_Response__Sequence__fini(array);
  }
  free(array);
}
