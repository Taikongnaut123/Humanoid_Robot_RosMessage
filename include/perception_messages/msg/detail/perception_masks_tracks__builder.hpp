// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_messages:msg/PerceptionMasksTracks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__BUILDER_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_messages/msg/detail/perception_masks_tracks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_messages
{

namespace msg
{

namespace builder
{

class Init_PerceptionMasksTracks_tracks
{
public:
  explicit Init_PerceptionMasksTracks_tracks(::perception_messages::msg::PerceptionMasksTracks & msg)
  : msg_(msg)
  {}
  ::perception_messages::msg::PerceptionMasksTracks tracks(::perception_messages::msg::PerceptionMasksTracks::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_messages::msg::PerceptionMasksTracks msg_;
};

class Init_PerceptionMasksTracks_time_stamp
{
public:
  Init_PerceptionMasksTracks_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionMasksTracks_tracks time_stamp(::perception_messages::msg::PerceptionMasksTracks::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_PerceptionMasksTracks_tracks(msg_);
  }

private:
  ::perception_messages::msg::PerceptionMasksTracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_messages::msg::PerceptionMasksTracks>()
{
  return perception_messages::msg::builder::Init_PerceptionMasksTracks_time_stamp();
}

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__BUILDER_HPP_
