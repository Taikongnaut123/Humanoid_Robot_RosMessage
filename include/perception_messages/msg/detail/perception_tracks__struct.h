// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_messages:msg/PerceptionTracks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__STRUCT_H_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__STRUCT_H_

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
// Member 'tracks'
#include "std_msgs/msg/detail/u_int8_multi_array__struct.h"

/// Struct defined in msg/PerceptionTracks in the package perception_messages.
/**
  * Perception Tracks message - corresponds to humanoid_robot.PB.perception.Tracks  
  * bytes timeStamp -> UInt8MultiArray
  * bytes tracks -> UInt8MultiArray
 */
typedef struct perception_messages__msg__PerceptionTracks
{
  std_msgs__msg__UInt8MultiArray time_stamp;
  std_msgs__msg__UInt8MultiArray tracks;
} perception_messages__msg__PerceptionTracks;

// Struct for a sequence of perception_messages__msg__PerceptionTracks.
typedef struct perception_messages__msg__PerceptionTracks__Sequence
{
  perception_messages__msg__PerceptionTracks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_messages__msg__PerceptionTracks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__STRUCT_H_
