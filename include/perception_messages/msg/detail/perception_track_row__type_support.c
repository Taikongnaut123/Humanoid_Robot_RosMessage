// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from perception_messages:msg/PerceptionTrackRow.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "perception_messages/msg/detail/perception_track_row__rosidl_typesupport_introspection_c.h"
#include "perception_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "perception_messages/msg/detail/perception_track_row__functions.h"
#include "perception_messages/msg/detail/perception_track_row__struct.h"


// Include directives for member types
// Member `track_id`
// Member `cls`
#include "rosidl_runtime_c/string_functions.h"
// Member `mask`
#include "perception_messages/msg/perception_masks.h"
// Member `mask`
#include "perception_messages/msg/detail/perception_masks__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  perception_messages__msg__PerceptionTrackRow__init(message_memory);
}

void perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_fini_function(void * message_memory)
{
  perception_messages__msg__PerceptionTrackRow__fini(message_memory);
}

size_t perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__size_function__PerceptionTrackRow__mask(
  const void * untyped_member)
{
  const perception_messages__msg__PerceptionMasks__Sequence * member =
    (const perception_messages__msg__PerceptionMasks__Sequence *)(untyped_member);
  return member->size;
}

const void * perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__get_const_function__PerceptionTrackRow__mask(
  const void * untyped_member, size_t index)
{
  const perception_messages__msg__PerceptionMasks__Sequence * member =
    (const perception_messages__msg__PerceptionMasks__Sequence *)(untyped_member);
  return &member->data[index];
}

void * perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__get_function__PerceptionTrackRow__mask(
  void * untyped_member, size_t index)
{
  perception_messages__msg__PerceptionMasks__Sequence * member =
    (perception_messages__msg__PerceptionMasks__Sequence *)(untyped_member);
  return &member->data[index];
}

void perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__fetch_function__PerceptionTrackRow__mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const perception_messages__msg__PerceptionMasks * item =
    ((const perception_messages__msg__PerceptionMasks *)
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__get_const_function__PerceptionTrackRow__mask(untyped_member, index));
  perception_messages__msg__PerceptionMasks * value =
    (perception_messages__msg__PerceptionMasks *)(untyped_value);
  *value = *item;
}

void perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__assign_function__PerceptionTrackRow__mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  perception_messages__msg__PerceptionMasks * item =
    ((perception_messages__msg__PerceptionMasks *)
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__get_function__PerceptionTrackRow__mask(untyped_member, index));
  const perception_messages__msg__PerceptionMasks * value =
    (const perception_messages__msg__PerceptionMasks *)(untyped_value);
  *item = *value;
}

bool perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__resize_function__PerceptionTrackRow__mask(
  void * untyped_member, size_t size)
{
  perception_messages__msg__PerceptionMasks__Sequence * member =
    (perception_messages__msg__PerceptionMasks__Sequence *)(untyped_member);
  perception_messages__msg__PerceptionMasks__Sequence__fini(member);
  return perception_messages__msg__PerceptionMasks__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_member_array[9] = {
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, track_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "conf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, conf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, cls),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, mask),  // bytes offset in struct
    NULL,  // default value
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__size_function__PerceptionTrackRow__mask,  // size() function pointer
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__get_const_function__PerceptionTrackRow__mask,  // get_const(index) function pointer
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__get_function__PerceptionTrackRow__mask,  // get(index) function pointer
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__fetch_function__PerceptionTrackRow__mask,  // fetch(index, &value) function pointer
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__assign_function__PerceptionTrackRow__mask,  // assign(index, value) function pointer
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__resize_function__PerceptionTrackRow__mask  // resize(index) function pointer
  },
  {
    "is_move",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages__msg__PerceptionTrackRow, is_move),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_members = {
  "perception_messages__msg",  // message namespace
  "PerceptionTrackRow",  // message name
  9,  // number of fields
  sizeof(perception_messages__msg__PerceptionTrackRow),
  perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_member_array,  // message members
  perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_init_function,  // function to initialize message memory (memory has to be allocated)
  perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_type_support_handle = {
  0,
  &perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_perception_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_messages, msg, PerceptionTrackRow)() {
  perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, perception_messages, msg, PerceptionMasks)();
  if (!perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_type_support_handle.typesupport_identifier) {
    perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &perception_messages__msg__PerceptionTrackRow__rosidl_typesupport_introspection_c__PerceptionTrackRow_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
