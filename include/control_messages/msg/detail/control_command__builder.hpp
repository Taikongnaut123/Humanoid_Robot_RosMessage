// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from control_messages:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "control_messages/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace control_messages
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_enabled
{
public:
  explicit Init_ControlCommand_enabled(::control_messages::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::control_messages::msg::ControlCommand enabled(::control_messages::msg::ControlCommand::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::control_messages::msg::ControlCommand msg_;
};

class Init_ControlCommand_value
{
public:
  explicit Init_ControlCommand_value(::control_messages::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_enabled value(::control_messages::msg::ControlCommand::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_ControlCommand_enabled(msg_);
  }

private:
  ::control_messages::msg::ControlCommand msg_;
};

class Init_ControlCommand_command_type
{
public:
  Init_ControlCommand_command_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_value command_type(::control_messages::msg::ControlCommand::_command_type_type arg)
  {
    msg_.command_type = std::move(arg);
    return Init_ControlCommand_value(msg_);
  }

private:
  ::control_messages::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::control_messages::msg::ControlCommand>()
{
  return control_messages::msg::builder::Init_ControlCommand_command_type();
}

}  // namespace control_messages

#endif  // CONTROL_MESSAGES__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
