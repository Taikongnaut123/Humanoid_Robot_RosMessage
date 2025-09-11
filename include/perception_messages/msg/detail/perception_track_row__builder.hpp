// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_messages:msg/PerceptionTrackRow.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__BUILDER_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_messages/msg/detail/perception_track_row__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_messages
{

namespace msg
{

namespace builder
{

class Init_PerceptionTrackRow_is_move
{
public:
  explicit Init_PerceptionTrackRow_is_move(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  ::perception_messages::msg::PerceptionTrackRow is_move(::perception_messages::msg::PerceptionTrackRow::_is_move_type arg)
  {
    msg_.is_move = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_mask
{
public:
  explicit Init_PerceptionTrackRow_mask(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  Init_PerceptionTrackRow_is_move mask(::perception_messages::msg::PerceptionTrackRow::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_PerceptionTrackRow_is_move(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_cls
{
public:
  explicit Init_PerceptionTrackRow_cls(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  Init_PerceptionTrackRow_mask cls(::perception_messages::msg::PerceptionTrackRow::_cls_type arg)
  {
    msg_.cls = std::move(arg);
    return Init_PerceptionTrackRow_mask(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_conf
{
public:
  explicit Init_PerceptionTrackRow_conf(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  Init_PerceptionTrackRow_cls conf(::perception_messages::msg::PerceptionTrackRow::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_PerceptionTrackRow_cls(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_track_id
{
public:
  explicit Init_PerceptionTrackRow_track_id(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  Init_PerceptionTrackRow_conf track_id(::perception_messages::msg::PerceptionTrackRow::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return Init_PerceptionTrackRow_conf(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_y2
{
public:
  explicit Init_PerceptionTrackRow_y2(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  Init_PerceptionTrackRow_track_id y2(::perception_messages::msg::PerceptionTrackRow::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_PerceptionTrackRow_track_id(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_x2
{
public:
  explicit Init_PerceptionTrackRow_x2(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  Init_PerceptionTrackRow_y2 x2(::perception_messages::msg::PerceptionTrackRow::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_PerceptionTrackRow_y2(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_y1
{
public:
  explicit Init_PerceptionTrackRow_y1(::perception_messages::msg::PerceptionTrackRow & msg)
  : msg_(msg)
  {}
  Init_PerceptionTrackRow_x2 y1(::perception_messages::msg::PerceptionTrackRow::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_PerceptionTrackRow_x2(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

class Init_PerceptionTrackRow_x1
{
public:
  Init_PerceptionTrackRow_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionTrackRow_y1 x1(::perception_messages::msg::PerceptionTrackRow::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_PerceptionTrackRow_y1(msg_);
  }

private:
  ::perception_messages::msg::PerceptionTrackRow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_messages::msg::PerceptionTrackRow>()
{
  return perception_messages::msg::builder::Init_PerceptionTrackRow_x1();
}

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__BUILDER_HPP_
