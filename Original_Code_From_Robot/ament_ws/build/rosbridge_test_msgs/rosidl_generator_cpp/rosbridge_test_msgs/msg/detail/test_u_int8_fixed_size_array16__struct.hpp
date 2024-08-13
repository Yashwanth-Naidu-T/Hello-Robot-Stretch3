// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:msg/TestUInt8FixedSizeArray16.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16 __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16 __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TestUInt8FixedSizeArray16_
{
  using Type = TestUInt8FixedSizeArray16_<ContainerAllocator>;

  explicit TestUInt8FixedSizeArray16_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 16>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit TestUInt8FixedSizeArray16_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 16>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _data_type =
    std::array<uint8_t, 16>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::array<uint8_t, 16> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16
    std::shared_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16
    std::shared_ptr<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestUInt8FixedSizeArray16_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestUInt8FixedSizeArray16_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestUInt8FixedSizeArray16_

// alias to use template instance with default allocator
using TestUInt8FixedSizeArray16 =
  rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__STRUCT_HPP_
