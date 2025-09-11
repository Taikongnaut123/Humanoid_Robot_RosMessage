// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_messages:msg/PerceptionTracks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__TRAITS_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_messages/msg/detail/perception_tracks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_stamp'
// Member 'tracks'
#include "std_msgs/msg/detail/u_int8_multi_array__traits.hpp"

namespace perception_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionTracks & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    to_flow_style_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: tracks
  {
    out << "tracks: ";
    to_flow_style_yaml(msg.tracks, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionTracks & msg,
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

  // member: tracks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracks:\n";
    to_block_style_yaml(msg.tracks, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionTracks & msg, bool use_flow_style = false)
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
  const perception_messages::msg::PerceptionTracks & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_messages::msg::PerceptionTracks & msg)
{
  return perception_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_messages::msg::PerceptionTracks>()
{
  return "perception_messages::msg::PerceptionTracks";
}

template<>
inline const char * name<perception_messages::msg::PerceptionTracks>()
{
  return "perception_messages/msg/PerceptionTracks";
}

template<>
struct has_fixed_size<perception_messages::msg::PerceptionTracks>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::UInt8MultiArray>::value> {};

template<>
struct has_bounded_size<perception_messages::msg::PerceptionTracks>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::UInt8MultiArray>::value> {};

template<>
struct is_message<perception_messages::msg::PerceptionTracks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__TRAITS_HPP_
