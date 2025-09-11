// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from perception_messages:msg/PerceptionMasks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__FUNCTIONS_H_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "perception_messages/msg/rosidl_generator_c__visibility_control.h"

#include "perception_messages/msg/detail/perception_masks__struct.h"

/// Initialize msg/PerceptionMasks message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * perception_messages__msg__PerceptionMasks
 * )) before or use
 * perception_messages__msg__PerceptionMasks__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
bool
perception_messages__msg__PerceptionMasks__init(perception_messages__msg__PerceptionMasks * msg);

/// Finalize msg/PerceptionMasks message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
void
perception_messages__msg__PerceptionMasks__fini(perception_messages__msg__PerceptionMasks * msg);

/// Create msg/PerceptionMasks message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * perception_messages__msg__PerceptionMasks__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
perception_messages__msg__PerceptionMasks *
perception_messages__msg__PerceptionMasks__create();

/// Destroy msg/PerceptionMasks message.
/**
 * It calls
 * perception_messages__msg__PerceptionMasks__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
void
perception_messages__msg__PerceptionMasks__destroy(perception_messages__msg__PerceptionMasks * msg);

/// Check for msg/PerceptionMasks message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
bool
perception_messages__msg__PerceptionMasks__are_equal(const perception_messages__msg__PerceptionMasks * lhs, const perception_messages__msg__PerceptionMasks * rhs);

/// Copy a msg/PerceptionMasks message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
bool
perception_messages__msg__PerceptionMasks__copy(
  const perception_messages__msg__PerceptionMasks * input,
  perception_messages__msg__PerceptionMasks * output);

/// Initialize array of msg/PerceptionMasks messages.
/**
 * It allocates the memory for the number of elements and calls
 * perception_messages__msg__PerceptionMasks__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
bool
perception_messages__msg__PerceptionMasks__Sequence__init(perception_messages__msg__PerceptionMasks__Sequence * array, size_t size);

/// Finalize array of msg/PerceptionMasks messages.
/**
 * It calls
 * perception_messages__msg__PerceptionMasks__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
void
perception_messages__msg__PerceptionMasks__Sequence__fini(perception_messages__msg__PerceptionMasks__Sequence * array);

/// Create array of msg/PerceptionMasks messages.
/**
 * It allocates the memory for the array and calls
 * perception_messages__msg__PerceptionMasks__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
perception_messages__msg__PerceptionMasks__Sequence *
perception_messages__msg__PerceptionMasks__Sequence__create(size_t size);

/// Destroy array of msg/PerceptionMasks messages.
/**
 * It calls
 * perception_messages__msg__PerceptionMasks__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
void
perception_messages__msg__PerceptionMasks__Sequence__destroy(perception_messages__msg__PerceptionMasks__Sequence * array);

/// Check for msg/PerceptionMasks message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
bool
perception_messages__msg__PerceptionMasks__Sequence__are_equal(const perception_messages__msg__PerceptionMasks__Sequence * lhs, const perception_messages__msg__PerceptionMasks__Sequence * rhs);

/// Copy an array of msg/PerceptionMasks messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_perception_messages
bool
perception_messages__msg__PerceptionMasks__Sequence__copy(
  const perception_messages__msg__PerceptionMasks__Sequence * input,
  perception_messages__msg__PerceptionMasks__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__FUNCTIONS_H_
