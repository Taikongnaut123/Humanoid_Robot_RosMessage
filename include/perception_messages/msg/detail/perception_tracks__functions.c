// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_messages:msg/PerceptionTracks.idl
// generated code does not contain a copyright notice
#include "perception_messages/msg/detail/perception_tracks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
// Member `tracks`
#include "std_msgs/msg/detail/u_int8_multi_array__functions.h"

bool
perception_messages__msg__PerceptionTracks__init(perception_messages__msg__PerceptionTracks * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  if (!std_msgs__msg__UInt8MultiArray__init(&msg->time_stamp)) {
    perception_messages__msg__PerceptionTracks__fini(msg);
    return false;
  }
  // tracks
  if (!std_msgs__msg__UInt8MultiArray__init(&msg->tracks)) {
    perception_messages__msg__PerceptionTracks__fini(msg);
    return false;
  }
  return true;
}

void
perception_messages__msg__PerceptionTracks__fini(perception_messages__msg__PerceptionTracks * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  std_msgs__msg__UInt8MultiArray__fini(&msg->time_stamp);
  // tracks
  std_msgs__msg__UInt8MultiArray__fini(&msg->tracks);
}

bool
perception_messages__msg__PerceptionTracks__are_equal(const perception_messages__msg__PerceptionTracks * lhs, const perception_messages__msg__PerceptionTracks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_stamp
  if (!std_msgs__msg__UInt8MultiArray__are_equal(
      &(lhs->time_stamp), &(rhs->time_stamp)))
  {
    return false;
  }
  // tracks
  if (!std_msgs__msg__UInt8MultiArray__are_equal(
      &(lhs->tracks), &(rhs->tracks)))
  {
    return false;
  }
  return true;
}

bool
perception_messages__msg__PerceptionTracks__copy(
  const perception_messages__msg__PerceptionTracks * input,
  perception_messages__msg__PerceptionTracks * output)
{
  if (!input || !output) {
    return false;
  }
  // time_stamp
  if (!std_msgs__msg__UInt8MultiArray__copy(
      &(input->time_stamp), &(output->time_stamp)))
  {
    return false;
  }
  // tracks
  if (!std_msgs__msg__UInt8MultiArray__copy(
      &(input->tracks), &(output->tracks)))
  {
    return false;
  }
  return true;
}

perception_messages__msg__PerceptionTracks *
perception_messages__msg__PerceptionTracks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionTracks * msg = (perception_messages__msg__PerceptionTracks *)allocator.allocate(sizeof(perception_messages__msg__PerceptionTracks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_messages__msg__PerceptionTracks));
  bool success = perception_messages__msg__PerceptionTracks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_messages__msg__PerceptionTracks__destroy(perception_messages__msg__PerceptionTracks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_messages__msg__PerceptionTracks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_messages__msg__PerceptionTracks__Sequence__init(perception_messages__msg__PerceptionTracks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionTracks * data = NULL;

  if (size) {
    data = (perception_messages__msg__PerceptionTracks *)allocator.zero_allocate(size, sizeof(perception_messages__msg__PerceptionTracks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_messages__msg__PerceptionTracks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_messages__msg__PerceptionTracks__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
perception_messages__msg__PerceptionTracks__Sequence__fini(perception_messages__msg__PerceptionTracks__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      perception_messages__msg__PerceptionTracks__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

perception_messages__msg__PerceptionTracks__Sequence *
perception_messages__msg__PerceptionTracks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionTracks__Sequence * array = (perception_messages__msg__PerceptionTracks__Sequence *)allocator.allocate(sizeof(perception_messages__msg__PerceptionTracks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_messages__msg__PerceptionTracks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_messages__msg__PerceptionTracks__Sequence__destroy(perception_messages__msg__PerceptionTracks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_messages__msg__PerceptionTracks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_messages__msg__PerceptionTracks__Sequence__are_equal(const perception_messages__msg__PerceptionTracks__Sequence * lhs, const perception_messages__msg__PerceptionTracks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_messages__msg__PerceptionTracks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_messages__msg__PerceptionTracks__Sequence__copy(
  const perception_messages__msg__PerceptionTracks__Sequence * input,
  perception_messages__msg__PerceptionTracks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_messages__msg__PerceptionTracks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_messages__msg__PerceptionTracks * data =
      (perception_messages__msg__PerceptionTracks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_messages__msg__PerceptionTracks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_messages__msg__PerceptionTracks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_messages__msg__PerceptionTracks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
