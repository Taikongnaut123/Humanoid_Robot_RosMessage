// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_messages:msg/PerceptionMasks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__BUILDER_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_messages/msg/detail/perception_masks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_messages
{

namespace msg
{

namespace builder
{

class Init_PerceptionMasks_y
{
public:
  explicit Init_PerceptionMasks_y(::perception_messages::msg::PerceptionMasks & msg)
  : msg_(msg)
  {}
  ::perception_messages::msg::PerceptionMasks y(::perception_messages::msg::PerceptionMasks::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_messages::msg::PerceptionMasks msg_;
};

class Init_PerceptionMasks_x
{
public:
  Init_PerceptionMasks_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionMasks_y x(::perception_messages::msg::PerceptionMasks::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PerceptionMasks_y(msg_);
  }

private:
  ::perception_messages::msg::PerceptionMasks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_messages::msg::PerceptionMasks>()
{
  return perception_messages::msg::builder::Init_PerceptionMasks_x();
}

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS__BUILDER_HPP_
