// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_messages:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
#define CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_messages/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace control_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_type
  {
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.command_type, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace control_messages

namespace rosidl_generator_traits
{

[[deprecated("use control_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_messages::msg::ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_messages::msg::ControlCommand & msg)
{
  return control_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_messages::msg::ControlCommand>()
{
  return "control_messages::msg::ControlCommand";
}

template<>
inline const char * name<control_messages::msg::ControlCommand>()
{
  return "control_messages/msg/ControlCommand";
}

template<>
struct has_fixed_size<control_messages::msg::ControlCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_messages::msg::ControlCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_messages::msg::ControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
