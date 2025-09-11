// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_messages:msg/PerceptionImg.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__STRUCT_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_stamp'
// Member 'img'
#include "std_msgs/msg/detail/u_int8_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__perception_messages__msg__PerceptionImg __attribute__((deprecated))
#else
# define DEPRECATED__perception_messages__msg__PerceptionImg __declspec(deprecated)
#endif

namespace perception_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionImg_
{
  using Type = PerceptionImg_<ContainerAllocator>;

  explicit PerceptionImg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init),
    img(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requires_masks = false;
    }
  }

  explicit PerceptionImg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init),
    img(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requires_masks = false;
    }
  }

  // field types and members
  using _time_stamp_type =
    std_msgs::msg::UInt8MultiArray_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _img_type =
    std_msgs::msg::UInt8MultiArray_<ContainerAllocator>;
  _img_type img;
  using _requires_masks_type =
    bool;
  _requires_masks_type requires_masks;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const std_msgs::msg::UInt8MultiArray_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__img(
    const std_msgs::msg::UInt8MultiArray_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }
  Type & set__requires_masks(
    const bool & _arg)
  {
    this->requires_masks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_messages::msg::PerceptionImg_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_messages::msg::PerceptionImg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_messages::msg::PerceptionImg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_messages::msg::PerceptionImg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_messages__msg__PerceptionImg
    std::shared_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_messages__msg__PerceptionImg
    std::shared_ptr<perception_messages::msg::PerceptionImg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionImg_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->img != other.img) {
      return false;
    }
    if (this->requires_masks != other.requires_masks) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionImg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionImg_

// alias to use template instance with default allocator
using PerceptionImg =
  perception_messages::msg::PerceptionImg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_IMG__STRUCT_HPP_
