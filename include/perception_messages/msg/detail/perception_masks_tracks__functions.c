// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_messages:msg/PerceptionMasksTracks.idl
// generated code does not contain a copyright notice
#include "perception_messages/msg/detail/perception_masks_tracks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_stamp`
#include "std_msgs/msg/detail/u_int8_multi_array__functions.h"
// Member `tracks`
#include "perception_messages/msg/detail/perception_track_row__functions.h"

bool
perception_messages__msg__PerceptionMasksTracks__init(perception_messages__msg__PerceptionMasksTracks * msg)
{
  if (!msg) {
    return false;
  }
  // time_stamp
  if (!std_msgs__msg__UInt8MultiArray__init(&msg->time_stamp)) {
    perception_messages__msg__PerceptionMasksTracks__fini(msg);
    return false;
  }
  // tracks
  if (!perception_messages__msg__PerceptionTrackRow__Sequence__init(&msg->tracks, 0)) {
    perception_messages__msg__PerceptionMasksTracks__fini(msg);
    return false;
  }
  return true;
}

void
perception_messages__msg__PerceptionMasksTracks__fini(perception_messages__msg__PerceptionMasksTracks * msg)
{
  if (!msg) {
    return;
  }
  // time_stamp
  std_msgs__msg__UInt8MultiArray__fini(&msg->time_stamp);
  // tracks
  perception_messages__msg__PerceptionTrackRow__Sequence__fini(&msg->tracks);
}

bool
perception_messages__msg__PerceptionMasksTracks__are_equal(const perception_messages__msg__PerceptionMasksTracks * lhs, const perception_messages__msg__PerceptionMasksTracks * rhs)
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
  if (!perception_messages__msg__PerceptionTrackRow__Sequence__are_equal(
      &(lhs->tracks), &(rhs->tracks)))
  {
    return false;
  }
  return true;
}

bool
perception_messages__msg__PerceptionMasksTracks__copy(
  const perception_messages__msg__PerceptionMasksTracks * input,
  perception_messages__msg__PerceptionMasksTracks * output)
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
  if (!perception_messages__msg__PerceptionTrackRow__Sequence__copy(
      &(input->tracks), &(output->tracks)))
  {
    return false;
  }
  return true;
}

perception_messages__msg__PerceptionMasksTracks *
perception_messages__msg__PerceptionMasksTracks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionMasksTracks * msg = (perception_messages__msg__PerceptionMasksTracks *)allocator.allocate(sizeof(perception_messages__msg__PerceptionMasksTracks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_messages__msg__PerceptionMasksTracks));
  bool success = perception_messages__msg__PerceptionMasksTracks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_messages__msg__PerceptionMasksTracks__destroy(perception_messages__msg__PerceptionMasksTracks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_messages__msg__PerceptionMasksTracks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_messages__msg__PerceptionMasksTracks__Sequence__init(perception_messages__msg__PerceptionMasksTracks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionMasksTracks * data = NULL;

  if (size) {
    data = (perception_messages__msg__PerceptionMasksTracks *)allocator.zero_allocate(size, sizeof(perception_messages__msg__PerceptionMasksTracks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_messages__msg__PerceptionMasksTracks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_messages__msg__PerceptionMasksTracks__fini(&data[i - 1]);
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
perception_messages__msg__PerceptionMasksTracks__Sequence__fini(perception_messages__msg__PerceptionMasksTracks__Sequence * array)
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
      perception_messages__msg__PerceptionMasksTracks__fini(&array->data[i]);
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

perception_messages__msg__PerceptionMasksTracks__Sequence *
perception_messages__msg__PerceptionMasksTracks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionMasksTracks__Sequence * array = (perception_messages__msg__PerceptionMasksTracks__Sequence *)allocator.allocate(sizeof(perception_messages__msg__PerceptionMasksTracks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_messages__msg__PerceptionMasksTracks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_messages__msg__PerceptionMasksTracks__Sequence__destroy(perception_messages__msg__PerceptionMasksTracks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_messages__msg__PerceptionMasksTracks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_messages__msg__PerceptionMasksTracks__Sequence__are_equal(const perception_messages__msg__PerceptionMasksTracks__Sequence * lhs, const perception_messages__msg__PerceptionMasksTracks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_messages__msg__PerceptionMasksTracks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_messages__msg__PerceptionMasksTracks__Sequence__copy(
  const perception_messages__msg__PerceptionMasksTracks__Sequence * input,
  perception_messages__msg__PerceptionMasksTracks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_messages__msg__PerceptionMasksTracks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_messages__msg__PerceptionMasksTracks * data =
      (perception_messages__msg__PerceptionMasksTracks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_messages__msg__PerceptionMasksTracks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_messages__msg__PerceptionMasksTracks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_messages__msg__PerceptionMasksTracks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
