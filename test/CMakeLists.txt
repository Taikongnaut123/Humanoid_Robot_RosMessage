cmake_minimum_required(VERSION 3.8)
project(rosmessage_tests)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找基础ROS2依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_runtime_cpp REQUIRED)

# 设置第三方消息模块路径
set(ROSMESSAGE_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/..)

# 设置包含目录（使用预编译头文件）
include_directories(
    ${ROSMESSAGE_ROOT}/include
)

# 设置库文件搜索路径（使用预编译库文件）
link_directories(
    ${ROSMESSAGE_ROOT}/lib/perception_messages
    ${ROSMESSAGE_ROOT}/lib/control_messages
)

# 创建测试可执行文件
add_executable(test_submodules test_submodules.cpp)

# 链接基础ROS2依赖
ament_target_dependencies(test_submodules
  rclcpp
  std_msgs
  rosidl_runtime_cpp
)

# 链接第三方消息模块库文件
target_link_libraries(test_submodules
  # Perception模块库
  perception_messages__rosidl_typesupport_cpp
  perception_messages__rosidl_generator_c
  
  # Control模块库
  control_messages__rosidl_typesupport_cpp
  control_messages__rosidl_generator_c
)

# 安装目标
install(TARGETS test_submodules
  DESTINATION bin
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
