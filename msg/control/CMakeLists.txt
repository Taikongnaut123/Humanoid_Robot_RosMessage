cmake_minimum_required(VERSION 3.8)
project(control_messages)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

# 定义消息文件（使用相对路径）
set(control_msg_files
  "ControlCommand.msg"
)

# 生成ROS2消息接口
if(control_msg_files)
  rosidl_generate_interfaces(${PROJECT_NAME}
    ${control_msg_files}
    DEPENDENCIES std_msgs
  )
endif()

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# 导出依赖
ament_export_dependencies(rosidl_default_runtime)

ament_package()
