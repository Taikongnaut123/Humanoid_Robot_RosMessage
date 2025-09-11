// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_messages:msg/PerceptionMasks.idl
// generated code does not contain a copyright notice
#include "perception_messages/msg/detail/perception_masks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
perception_messages__msg__PerceptionMasks__init(perception_messages__msg__PerceptionMasks * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
perception_messages__msg__PerceptionMasks__fini(perception_messages__msg__PerceptionMasks * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
perception_messages__msg__PerceptionMasks__are_equal(const perception_messages__msg__PerceptionMasks * lhs, const perception_messages__msg__PerceptionMasks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
perception_messages__msg__PerceptionMasks__copy(
  const perception_messages__msg__PerceptionMasks * input,
  perception_messages__msg__PerceptionMasks * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

perception_messages__msg__PerceptionMasks *
perception_messages__msg__PerceptionMasks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionMasks * msg = (perception_messages__msg__PerceptionMasks *)allocator.allocate(sizeof(perception_messages__msg__PerceptionMasks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_messages__msg__PerceptionMasks));
  bool success = perception_messages__msg__PerceptionMasks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_messages__msg__PerceptionMasks__destroy(perception_messages__msg__PerceptionMasks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_messages__msg__PerceptionMasks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_messages__msg__PerceptionMasks__Sequence__init(perception_messages__msg__PerceptionMasks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionMasks * data = NULL;

  if (size) {
    data = (perception_messages__msg__PerceptionMasks *)allocator.zero_allocate(size, sizeof(perception_messages__msg__PerceptionMasks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_messages__msg__PerceptionMasks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_messages__msg__PerceptionMasks__fini(&data[i - 1]);
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
perception_messages__msg__PerceptionMasks__Sequence__fini(perception_messages__msg__PerceptionMasks__Sequence * array)
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
      perception_messages__msg__PerceptionMasks__fini(&array->data[i]);
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

perception_messages__msg__PerceptionMasks__Sequence *
perception_messages__msg__PerceptionMasks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_messages__msg__PerceptionMasks__Sequence * array = (perception_messages__msg__PerceptionMasks__Sequence *)allocator.allocate(sizeof(perception_messages__msg__PerceptionMasks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_messages__msg__PerceptionMasks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_messages__msg__PerceptionMasks__Sequence__destroy(perception_messages__msg__PerceptionMasks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_messages__msg__PerceptionMasks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_messages__msg__PerceptionMasks__Sequence__are_equal(const perception_messages__msg__PerceptionMasks__Sequence * lhs, const perception_messages__msg__PerceptionMasks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_messages__msg__PerceptionMasks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_messages__msg__PerceptionMasks__Sequence__copy(
  const perception_messages__msg__PerceptionMasks__Sequence * input,
  perception_messages__msg__PerceptionMasks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_messages__msg__PerceptionMasks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_messages__msg__PerceptionMasks * data =
      (perception_messages__msg__PerceptionMasks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_messages__msg__PerceptionMasks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_messages__msg__PerceptionMasks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_messages__msg__PerceptionMasks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
