// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_messages:msg/PerceptionTracks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__BUILDER_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_messages/msg/detail/perception_tracks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_messages
{

namespace msg
{

namespace builder
{

class Init_PerceptionTracks_tracks
{
public:
  explicit Init_PerceptionTracks_tracks(::perception_messages::msg::PerceptionTracks & msg)
  : msg_(msg)
  {}
  ::perception_messages::msg::PerceptionTracks tracks(::perception_messages::msg::PerceptionTracks::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTracks msg_;
};

class Init_PerceptionTracks_time_stamp
{
public:
  Init_PerceptionTracks_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionTracks_tracks time_stamp(::perception_messages::msg::PerceptionTracks::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_PerceptionTracks_tracks(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_messages::msg::PerceptionTracks>()
{
  return perception_messages::msg::builder::Init_PerceptionTracks_time_stamp();
}

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACKS__BUILDER_HPP_
