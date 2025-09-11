// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_messages:msg/PerceptionImg.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__STRUCT_H_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_stamp'
// Member 'img'
#include "std_msgs/msg/detail/u_int8_multi_array__struct.h"

/// Struct defined in msg/PerceptionImg in the package perception_messages.
/**
  * Perception Img message - corresponds to humanoid_robot.PB.perception.Img
  * bytes timeStamp -> UInt8MultiArray
  * bytes img -> UInt8MultiArray  
  * bool requiresMasks -> bool
 */
typedef struct perception_messages__msg__PerceptionImg
{
  std_msgs__msg__UInt8MultiArray time_stamp;
  std_msgs__msg__UInt8MultiArray img;
  bool requires_masks;
} perception_messages__msg__PerceptionImg;

// Struct for a sequence of perception_messages__msg__PerceptionImg.
typedef struct perception_messages__msg__PerceptionImg__Sequence
{
  perception_messages__msg__PerceptionImg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_messages__msg__PerceptionImg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__STRUCT_H_
