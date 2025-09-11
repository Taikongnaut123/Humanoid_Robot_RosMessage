// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from perception_messages:msg/PerceptionTrackRow.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "perception_messages/msg/detail/perception_track_row__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace perception_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PerceptionTrackRow_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) perception_messages::msg::PerceptionTrackRow(_init);
}

void PerceptionTrackRow_fini_function(void * message_memory)
{
  auto typed_message = static_cast<perception_messages::msg::PerceptionTrackRow *>(message_memory);
  typed_message->~PerceptionTrackRow();
}

size_t size_function__PerceptionTrackRow__mask(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<perception_messages::msg::PerceptionMasks> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionTrackRow__mask(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<perception_messages::msg::PerceptionMasks> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionTrackRow__mask(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<perception_messages::msg::PerceptionMasks> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionTrackRow__mask(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const perception_messages::msg::PerceptionMasks *>(
    get_const_function__PerceptionTrackRow__mask(untyped_member, index));
  auto & value = *reinterpret_cast<perception_messages::msg::PerceptionMasks *>(untyped_value);
  value = item;
}

void assign_function__PerceptionTrackRow__mask(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<perception_messages::msg::PerceptionMasks *>(
    get_function__PerceptionTrackRow__mask(untyped_member, index));
  const auto & value = *reinterpret_cast<const perception_messages::msg::PerceptionMasks *>(untyped_value);
  item = value;
}

void resize_function__PerceptionTrackRow__mask(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<perception_messages::msg::PerceptionMasks> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PerceptionTrackRow_message_member_array[9] = {
  {
    "x1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, x1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, y1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, x2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, y2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "track_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, track_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "conf",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, conf),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cls",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, cls),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mask",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<perception_messages::msg::PerceptionMasks>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, mask),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionTrackRow__mask,  // size() function pointer
    get_const_function__PerceptionTrackRow__mask,  // get_const(index) function pointer
    get_function__PerceptionTrackRow__mask,  // get(index) function pointer
    fetch_function__PerceptionTrackRow__mask,  // fetch(index, &value) function pointer
    assign_function__PerceptionTrackRow__mask,  // assign(index, value) function pointer
    resize_function__PerceptionTrackRow__mask  // resize(index) function pointer
  },
  {
    "is_move",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(perception_messages::msg::PerceptionTrackRow, is_move),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PerceptionTrackRow_message_members = {
  "perception_messages::msg",  // message namespace
  "PerceptionTrackRow",  // message name
  9,  // number of fields
  sizeof(perception_messages::msg::PerceptionTrackRow),
  PerceptionTrackRow_message_member_array,  // message members
  PerceptionTrackRow_init_function,  // function to initialize message memory (memory has to be allocated)
  PerceptionTrackRow_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PerceptionTrackRow_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PerceptionTrackRow_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace perception_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<perception_messages::msg::PerceptionTrackRow>()
{
  return &::perception_messages::msg::rosidl_typesupport_introspection_cpp::PerceptionTrackRow_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, perception_messages, msg, PerceptionTrackRow)() {
  return &::perception_messages::msg::rosidl_typesupport_introspection_cpp::PerceptionTrackRow_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
