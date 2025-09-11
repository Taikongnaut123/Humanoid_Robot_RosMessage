// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from perception_messages:msg/PerceptionTrackRow.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__TRAITS_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "perception_messages/msg/detail/perception_track_row__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mask'
#include "perception_messages/msg/detail/perception_masks__traits.hpp"

namespace perception_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionTrackRow & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << ", ";
  }

  // member: track_id
  {
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << ", ";
  }

  // member: conf
  {
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << ", ";
  }

  // member: cls
  {
    out << "cls: ";
    rosidl_generator_traits::value_to_yaml(msg.cls, out);
    out << ", ";
  }

  // member: mask
  {
    if (msg.mask.size() == 0) {
      out << "mask: []";
    } else {
      out << "mask: [";
      size_t pending_items = msg.mask.size();
      for (auto item : msg.mask) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_move
  {
    out << "is_move: ";
    rosidl_generator_traits::value_to_yaml(msg.is_move, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerceptionTrackRow & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }

  // member: track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << "\n";
  }

  // member: conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << "\n";
  }

  // member: cls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cls: ";
    rosidl_generator_traits::value_to_yaml(msg.cls, out);
    out << "\n";
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mask.size() == 0) {
      out << "mask: []\n";
    } else {
      out << "mask:\n";
      for (auto item : msg.mask) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_move: ";
    rosidl_generator_traits::value_to_yaml(msg.is_move, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionTrackRow & msg, bool use_flow_style = false)
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
  const perception_messages::msg::PerceptionTrackRow & msg,
  std::ostream & out, size_t indentation = 0)
{
  perception_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use perception_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const perception_messages::msg::PerceptionTrackRow & msg)
{
  return perception_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<perception_messages::msg::PerceptionTrackRow>()
{
  return "perception_messages::msg::PerceptionTrackRow";
}

template<>
inline const char * name<perception_messages::msg::PerceptionTrackRow>()
{
  return "perception_messages/msg/PerceptionTrackRow";
}

template<>
struct has_fixed_size<perception_messages::msg::PerceptionTrackRow>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<perception_messages::msg::PerceptionTrackRow>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<perception_messages::msg::PerceptionTrackRow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__TRAITS_HPP_
