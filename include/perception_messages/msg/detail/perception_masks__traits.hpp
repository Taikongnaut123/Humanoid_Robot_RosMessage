// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_messages:msg/PerceptionMasks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__TRAITS_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_messages/msg/detail/perception_masks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace perception_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionMasks & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionMasks & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionMasks & msg, bool use_flow_style = false)
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

}  // namespace perception_messages

namespace rosidl_generator_traits
{

[[deprecated("use perception_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const perception_messages::msg::PerceptionMasks & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_messages::msg::PerceptionMasks & msg)
{
  return perception_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_messages::msg::PerceptionMasks>()
{
  return "perception_messages::msg::PerceptionMasks";
}

template<>
inline const char * name<perception_messages::msg::PerceptionMasks>()
{
  return "perception_messages/msg/PerceptionMasks";
}

template<>
struct has_fixed_size<perception_messages::msg::PerceptionMasks>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<perception_messages::msg::PerceptionMasks>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<perception_messages::msg::PerceptionMasks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__TRAITS_HPP_
