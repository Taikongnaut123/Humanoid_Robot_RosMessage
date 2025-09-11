// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from perception_messages:msg/PerceptionMasksTracks.idl
// generated code does not contain a copyright notice

#ifndef PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__STRUCT_HPP_
#define PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_stamp'
#include "std_msgs/msg/detail/u_int8_multi_array__struct.hpp"
// Member 'tracks'
#include "perception_messages/msg/detail/perception_track_row__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__perception_messages__msg__PerceptionMasksTracks __attribute__((deprecated))
#else
# define DEPRECATED__perception_messages__msg__PerceptionMasksTracks __declspec(deprecated)
#endif

namespace perception_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionMasksTracks_
{
  using Type = PerceptionMasksTracks_<ContainerAllocator>;

  explicit PerceptionMasksTracks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_init)
  {
    (void)_init;
  }

  explicit PerceptionMasksTracks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _time_stamp_type =
    std_msgs::msg::UInt8MultiArray_<ContainerAllocator>;
  _time_stamp_type time_stamp;
  using _tracks_type =
    std::vector<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>>>;
  _tracks_type tracks;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const std_msgs::msg::UInt8MultiArray_<ContainerAllocator> & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__tracks(
    const std::vector<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<perception_messages::msg::PerceptionTrackRow_<ContainerAllocator>>> & _arg)
  {
    this->tracks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator> *;
  using ConstRawPtr =
    const perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__perception_messages__msg__PerceptionMasksTracks
    std::shared_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__perception_messages__msg__PerceptionMasksTracks
    std::shared_ptr<perception_messages::msg::PerceptionMasksTracks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionMasksTracks_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->tracks != other.tracks) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionMasksTracks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionMasksTracks_

// alias to use template instance with default allocator
using PerceptionMasksTracks =
  perception_messages::msg::PerceptionMasksTracks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace perception_messages

#endif  // PERCEPTION_MESSAGES__MSG__DETAIL__PERCEPTION_MASKS_TRACKS__STRUCT_HPP_
