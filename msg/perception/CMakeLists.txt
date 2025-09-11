cmake_minimum_required(VERSION 3.8)
project(perception_messages)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

# 定义消息文件（使用相对路径）
set(perception_msg_files
  "PerceptionImg.msg"
  "PerceptionMasks.msg"
  "PerceptionMasksTracks.msg"
  "PerceptionTrackRow.msg"
  "PerceptionTracks.msg"
)

# 生成ROS2消息接口
if(perception_msg_files)
  rosidl_generate_interfaces(${PROJECT_NAME}
    ${perception_msg_files}
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
