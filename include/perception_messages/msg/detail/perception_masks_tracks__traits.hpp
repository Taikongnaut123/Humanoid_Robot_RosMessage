// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_messages:msg/PerceptionMasksTracks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__TRAITS_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_messages/msg/detail/perception_masks_tracks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_stamp'
#include "std_msgs/msg/detail/u_int8_multi_array__traits.hpp"
// Member 'tracks'
#include "perception_messages/msg/detail/perception_track_row__traits.hpp"

namespace perception_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionMasksTracks & msg,
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
    if (msg.tracks.size() == 0) {
      out << "tracks: []";
    } else {
      out << "tracks: [";
      size_t pending_items = msg.tracks.size();
      for (auto item : msg.tracks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionMasksTracks & msg,
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
    if (msg.tracks.size() == 0) {
      out << "tracks: []\n";
    } else {
      out << "tracks:\n";
      for (auto item : msg.tracks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionMasksTracks & msg, bool use_flow_style = false)
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
  const perception_messages::msg::PerceptionMasksTracks & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_messages::msg::PerceptionMasksTracks & msg)
{
  return perception_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_messages::msg::PerceptionMasksTracks>()
{
  return "perception_messages::msg::PerceptionMasksTracks";
}

template<>
inline const char * name<perception_messages::msg::PerceptionMasksTracks>()
{
  return "perception_messages/msg/PerceptionMasksTracks";
}

template<>
struct has_fixed_size<perception_messages::msg::PerceptionMasksTracks>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<perception_messages::msg::PerceptionMasksTracks>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<perception_messages::msg::PerceptionMasksTracks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__TRAITS_HPP_
