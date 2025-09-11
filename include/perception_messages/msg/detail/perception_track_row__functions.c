// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_messages:msg/PerceptionTrackRow.idl
// generated code does not contain a copyright notice
#include "perception_messages/msg/detail/perception_track_row__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `track_id`
// Member `cls`
#include "rosidl_runtime_c/string_functions.h"
// Member `mask`
#include "perception_messages/msg/detail/perception_masks__functions.h"

bool
perception_messages__msg__PerceptionTrackRow__init(perception_messages__msg__PerceptionTrackRow * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  // track_id
  if (!rosidl_runtime_c__String__init(&msg->track_id)) {
    perception_messages__msg__PerceptionTrackRow__fini(msg);
    return false;
  }
  // conf
  // cls
  if (!rosidl_runtime_c__String__init(&msg->cls)) {
    perception_messages__msg__PerceptionTrackRow__fini(msg);
    return false;
  }
  // mask
  if (!perception_messages__msg__PerceptionMasks__Sequence__init(&msg->mask, 0)) {
    perception_messages__msg__PerceptionTrackRow__fini(msg);
    return false;
  }
  // is_move
  return true;
}

void
perception_messages__msg__PerceptionTrackRow__fini(perception_messages__msg__PerceptionTrackRow * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
  // track_id
  rosidl_runtime_c__String__fini(&msg->track_id);
  // conf
  // cls
  rosidl_runtime_c__String__fini(&msg->cls);
  // mask
  perception_messages__msg__PerceptionMasks__Sequence__fini(&msg->mask);
  // is_move
}

bool
perception_messages__msg__PerceptionTrackRow__are_equal(const perception_messages__msg__PerceptionTrackRow * lhs, const perception_messages__msg__PerceptionTrackRow * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  // track_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->track_id), &(rhs->track_id)))
  {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  // cls
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cls), &(rhs->cls)))
  {
    return false;
  }
  // mask
  if (!perception_messages__msg__PerceptionMasks__Sequence__are_equal(
      &(lhs->mask), &(rhs->mask)))
  {
    return false;
  }
  // is_move
  if (lhs->is_move != rhs->is_move) {
    return false;
  }
  return true;
}

bool
perception_messages__msg__PerceptionTrackRow__copy(
  const perception_messages__msg__PerceptionTrackRow * input,
  perception_messages__msg__PerceptionTrackRow * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  // track_id
  if (!rosidl_runtime_c__String__copy(
      &(input->track_id), &(output->track_id)))
  {
    return false;
  }
  // conf
  output->conf = input->conf;
  // cls
  if (!rosidl_runtime_c__String__copy(
      &(input->cls), &(output->cls)))
  {
    return false;
  }
  // mask
  if (!perception_messages__msg__PerceptionMasks__Sequence__copy(
      &(input->mask), &(output->mask)))
  {
    return false;
  }
  // is_move
  output->is_move = input->is_move;
  return true;
}

perception_messages__msg__PerceptionTrackRow *
perception_messages__msg__PerceptionTrackRow__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionTrackRow * msg = (perception_messages__msg__PerceptionTrackRow *)allocator.allocate(sizeof(perception_messages__msg__PerceptionTrackRow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_messages__msg__PerceptionTrackRow));
  bool success = perception_messages__msg__PerceptionTrackRow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_messages__msg__PerceptionTrackRow__destroy(perception_messages__msg__PerceptionTrackRow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_messages__msg__PerceptionTrackRow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_messages__msg__PerceptionTrackRow__Sequence__init(perception_messages__msg__PerceptionTrackRow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionTrackRow * data = NULL;

  if (size) {
    data = (perception_messages__msg__PerceptionTrackRow *)allocator.zero_allocate(size, sizeof(perception_messages__msg__PerceptionTrackRow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_messages__msg__PerceptionTrackRow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_messages__msg__PerceptionTrackRow__fini(&data[i - 1]);
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
perception_messages__msg__PerceptionTrackRow__Sequence__fini(perception_messages__msg__PerceptionTrackRow__Sequence * array)
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
      perception_messages__msg__PerceptionTrackRow__fini(&array->data[i]);
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

perception_messages__msg__PerceptionTrackRow__Sequence *
perception_messages__msg__PerceptionTrackRow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionTrackRow__Sequence * array = (perception_messages__msg__PerceptionTrackRow__Sequence *)allocator.allocate(sizeof(perception_messages__msg__PerceptionTrackRow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_messages__msg__PerceptionTrackRow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_messages__msg__PerceptionTrackRow__Sequence__destroy(perception_messages__msg__PerceptionTrackRow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_messages__msg__PerceptionTrackRow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_messages__msg__PerceptionTrackRow__Sequence__are_equal(const perception_messages__msg__PerceptionTrackRow__Sequence * lhs, const perception_messages__msg__PerceptionTrackRow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_messages__msg__PerceptionTrackRow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_messages__msg__PerceptionTrackRow__Sequence__copy(
  const perception_messages__msg__PerceptionTrackRow__Sequence * input,
  perception_messages__msg__PerceptionTrackRow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_messages__msg__PerceptionTrackRow);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_messages__msg__PerceptionTrackRow * data =
      (perception_messages__msg__PerceptionTrackRow *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_messages__msg__PerceptionTrackRow__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_messages__msg__PerceptionTrackRow__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_messages__msg__PerceptionTrackRow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
