// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_messages:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControlCommand in the package control_messages.
/**
  * Control command message
 */
typedef struct control_messages__msg__ControlCommand
{
  rosidl_runtime_c__String command_type;
  double value;
  bool enabled;
} control_messages__msg__ControlCommand;

// Struct for a sequence of control_messages__msg__ControlCommand.
typedef struct control_messages__msg__ControlCommand__Sequence
{
  control_messages__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_messages__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
