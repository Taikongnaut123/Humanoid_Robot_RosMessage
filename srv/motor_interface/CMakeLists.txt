cmake_minimum_required(VERSION 3.5)
project(motor_interface)

# cmake_policy(SET CMP0148 OLD)
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MotorDrive.msg"
  "msg/MotorFeedback.msg"
  "msg/DebugData.msg"
  "srv/GetJointState.srv"
  DEPENDENCIES std_msgs
)

# 包含路径
include_directories(include)

# 安装目标
install(
  DIRECTORY msg
  DESTINATION share/${PROJECT_NAME}
)
install(
  DIRECTORY srv
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
