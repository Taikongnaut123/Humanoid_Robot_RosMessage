// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_messages:msg/PerceptionTrackRow.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__STRUCT_H_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'track_id'
// Member 'cls'
#include "rosidl_runtime_c/string.h"
// Member 'mask'
#include "perception_messages/msg/detail/perception_masks__struct.h"

/// Struct defined in msg/PerceptionTrackRow in the package perception_messages.
/**
  * Perception TrackRow message - corresponds to humanoid_robot.PB.perception.TrackRow
  * float x1, y1, x2, y2 -> float32
  * string trackId -> string
  * float conf -> float32  
  * string cls -> string
  * repeated Masks mask -> PerceptionMasks[]
  * bool isMove -> bool
 */
typedef struct perception_messages__msg__PerceptionTrackRow
{
  float x1;
  float y1;
  float x2;
  float y2;
  rosidl_runtime_c__String track_id;
  float conf;
  rosidl_runtime_c__String cls;
  perception_messages__msg__PerceptionMasks__Sequence mask;
  bool is_move;
} perception_messages__msg__PerceptionTrackRow;

// Struct for a sequence of perception_messages__msg__PerceptionTrackRow.
typedef struct perception_messages__msg__PerceptionTrackRow__Sequence
{
  perception_messages__msg__PerceptionTrackRow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_messages__msg__PerceptionTrackRow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__STRUCT_H_
