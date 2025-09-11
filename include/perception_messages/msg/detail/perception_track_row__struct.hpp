// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_messages:msg/PerceptionTrackRow.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__STRUCT_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mask'
#include "perception_messages/msg/detail/perception_masks__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__perception_messages__msg__PerceptionTrackRow __attribute__((deprecated))
#else
# define DEPRECATED__perception_messages__msg__PerceptionTrackRow __declspec(deprecated)
#endif

namespace perception_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionTrackRow_
{
  using Type = PerceptionTrackRow_<ContainerAllocator>;

  explicit PerceptionTrackRow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->track_id = "";
      this->conf = 0.0f;
      this->cls = "";
      this->is_move = false;
    }
  }

  explicit PerceptionTrackRow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : track_id(_alloc),
    cls(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->track_id = "";
      this->conf = 0.0f;
      this->cls = "";
      this->is_move = false;
    }
  }

  // field types and members
  using _x1_type =
    float;
  _x1_type x1;
  using _y1_type =
    float;
  _y1_type y1;
  using _x2_type =
    float;
  _x2_type x2;
  using _y2_type =
    float;
  _y2_type y2;
  using _track_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _track_id_type track_id;
  using _conf_type =
    float;
  _conf_type conf;
  using _cls_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cls_type cls;
  using _mask_type =
    std::vector<perception_messages::msg::PerceptionMasks_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<perception_messages::msg::PerceptionMasks_<ContainerAllocator>>>;
  _mask_type mask;
  using _is_move_type =
    bool;
  _is_move_type is_move;

  // setters for named parameter idiom
  Type & set__x1(
    const float & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const float & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const float & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const float & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__track_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->track_id = _arg;
    return *this;
  }
  Type & set__conf(
    const float & _arg)
  {
    this->conf = _arg;
    return *this;
  }
  Type & set__cls(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cls = _arg;
    return *this;
  }
  Type & set__mask(
    const std::vector<perception_messages::msg::PerceptionMasks_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<perception_messages::msg::PerceptionMasks_<ContainerAllocator>>> & _arg)
  {
    this->mask = _arg;
    return *this;
  }
  Type & set__is_move(
    const bool & _arg)
  {
    this->is_move = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_messages::msg::PerceptionTrackRow_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_messages::msg::PerceptionTrackRow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_messages__msg__PerceptionTrackRow
    std::shared_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_messages__msg__PerceptionTrackRow
    std::shared_ptr<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionTrackRow_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->track_id != other.track_id) {
      return false;
    }
    if (this->conf != other.conf) {
      return false;
    }
    if (this->cls != other.cls) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    if (this->is_move != other.is_move) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionTrackRow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionTrackRow_

// alias to use template instance with default allocator
using PerceptionTrackRow =
  perception_messages::msg::PerceptionTrackRow_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_TRACK_ROW__STRUCT_HPP_
