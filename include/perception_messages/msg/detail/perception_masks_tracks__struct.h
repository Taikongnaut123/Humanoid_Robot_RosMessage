// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_messages:msg/PerceptionMasksTracks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__STRUCT_H_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__STRUCT_H_

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
#include "std_msgs/msg/detail/u_int8_multi_array__struct.h"
// Member 'tracks'
#include "perception_messages/msg/detail/perception_track_row__struct.h"

/// Struct defined in msg/PerceptionMasksTracks in the package perception_messages.
/**
  * Perception MasksTracks message - corresponds to humanoid_robot.PB.perception.MasksTracks
  * bytes timeStamp -> UInt8MultiArray
  * repeated TrackRow tracks -> PerceptionTrackRow[]
 */
typedef struct perception_messages__msg__PerceptionMasksTracks
{
  std_msgs__msg__UInt8MultiArray time_stamp;
  perception_messages__msg__PerceptionTrackRow__Sequence tracks;
} perception_messages__msg__PerceptionMasksTracks;

// Struct for a sequence of perception_messages__msg__PerceptionMasksTracks.
typedef struct perception_messages__msg__PerceptionMasksTracks__Sequence
{
  perception_messages__msg__PerceptionMasksTracks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_messages__msg__PerceptionMasksTracks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__STRUCT_H_
