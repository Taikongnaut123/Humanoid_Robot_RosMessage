// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from perception_messages:msg/PerceptionImg.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__BUILDER_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "perception_messages/msg/detail/perception_img__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace perception_messages
{

namespace msg
{

namespace builder
{

class Init_PerceptionImg_requires_masks
{
public:
  explicit Init_PerceptionImg_requires_masks(::perception_messages::msg::PerceptionImg & msg)
  : msg_(msg)
  {}
  ::perception_messages::msg::PerceptionImg requires_masks(::perception_messages::msg::PerceptionImg::_requires_masks_type arg)
  {
    msg_.requires_masks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::perception_messages::msg::PerceptionImg msg_;
};

class Init_PerceptionImg_img
{
public:
  explicit Init_PerceptionImg_img(::perception_messages::msg::PerceptionImg & msg)
  : msg_(msg)
  {}
  Init_PerceptionImg_requires_masks img(::perception_messages::msg::PerceptionImg::_img_type arg)
  {
    msg_.img = std::move(arg);
    return Init_PerceptionImg_requires_masks(msg_);
  }

private:
  ::perception_messages::msg::PerceptionImg msg_;
};

class Init_PerceptionImg_time_stamp
{
public:
  Init_PerceptionImg_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptionImg_img time_stamp(::perception_messages::msg::PerceptionImg::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_PerceptionImg_img(msg_);
  }

private:
  ::perception_messages::msg::PerceptionImg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::perception_messages::msg::PerceptionImg>()
{
  return perception_messages::msg::builder::Init_PerceptionImg_time_stamp();
}

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__BUILDER_HPP_
