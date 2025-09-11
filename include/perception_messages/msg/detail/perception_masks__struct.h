// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_messages:msg/PerceptionMasks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__STRUCT_H_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PerceptionMasks in the package perception_messages.
/**
  * Perception Masks message - corresponds to humanoid_robot.PB.perception.Masks
  * int32 x -> int32
  * int32 y -> int32
 */
typedef struct perception_messages__msg__PerceptionMasks
{
  int32_t x;
  int32_t y;
} perception_messages__msg__PerceptionMasks;

// Struct for a sequence of perception_messages__msg__PerceptionMasks.
typedef struct perception_messages__msg__PerceptionMasks__Sequence
{
  perception_messages__msg__PerceptionMasks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_messages__msg__PerceptionMasks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__STRUCT_H_
