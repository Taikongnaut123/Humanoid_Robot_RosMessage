// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_messages:msg/PerceptionImg.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__TRAITS_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_messages/msg/detail/perception_img__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_stamp'
// Member 'img'
#include "std_msgs/msg/detail/u_int8_multi_array__traits.hpp"

namespace perception_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionImg & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    to_flow_style_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
    out << ", ";
  }

  // member: requires_masks
  {
    out << "requires_masks: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_masks, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionImg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp:\n";
    to_block_style_yaml(msg.time_stamp, out, indentation + 2);
  }

  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }

  // member: requires_masks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requires_masks: ";
    rosidl_generator_traits::value_to_yaml(msg.requires_masks, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionImg & msg, bool use_flow_style = false)
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
  const perception_messages::msg::PerceptionImg & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_messages::msg::PerceptionImg & msg)
{
  return perception_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_messages::msg::PerceptionImg>()
{
  return "perception_messages::msg::PerceptionImg";
}

template<>
inline const char * name<perception_messages::msg::PerceptionImg>()
{
  return "perception_messages/msg/PerceptionImg";
}

template<>
struct has_fixed_size<perception_messages::msg::PerceptionImg>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::UInt8MultiArray>::value> {};

template<>
struct has_bounded_size<perception_messages::msg::PerceptionImg>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::UInt8MultiArray>::value> {};

template<>
struct is_message<perception_messages::msg::PerceptionImg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__TRAITS_HPP_
