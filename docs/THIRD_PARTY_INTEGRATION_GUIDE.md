# 第三方用户集成指南 - 模块化ROS2消息系统

## 概述

本文档详细介绍如何在第三方项目中集成和使用我们的**预编译模块化ROS2消息系统**。该系统提供了独立的感知(perception)和控制(control)消息模块，包含预编译的头文件、库文件以及完整的使用示例。

**提供的组件：**
- `RosMessage/include/` - 预编译头文件
- `RosMessage/lib/` - 预编译库文件  
- `RosMessage/test/` - 完整的使用示例和测试代码
- 本集成文档

## 系统架构

```
RosMessage/                           # 发布包根目录
├── include/                          # 预编译头文件（核心）
│   ├── perception/                   # perception模块头文件
│   │   ├── perception_img.hpp
│   │   ├── perception_masks.hpp
│   │   ├── perception_masks_tracks.hpp
│   │   ├── perception_track_row.hpp
│   │   ├── perception_tracks.hpp
│   │   ├── rosidl_generator_cpp__visibility_control.hpp
│   │   └── detail/                   # 详细实现文件
│   │       ├── perception_img__struct.hpp
│   │       ├── perception_img__builder.hpp
│   │       ├── perception_img__traits.hpp
│   │       └── ... (其他detail文件)
│   └── control/                      # control模块头文件
│       ├── control_command.hpp
│       ├── rosidl_generator_cpp__visibility_control.hpp
│       └── detail/                   # 详细实现文件
│           ├── control_command__struct.hpp
│           ├── control_command__builder.hpp
│           ├── control_command__traits.hpp
│           └── ... (其他detail文件)
├── lib/                              # 预编译库文件（核心）
│   ├── perception/                   # perception模块库文件
│   │   ├── libperception_messages__rosidl_generator_c.so
│   │   ├── libperception_messages__rosidl_typesupport_cpp.so
│   │   ├── libperception_messages__rosidl_typesupport_c.so
│   │   ├── libperception_messages__rosidl_typesupport_fastrtps_cpp.so
│   │   ├── libperception_messages__rosidl_typesupport_fastrtps_c.so
│   │   ├── libperception_messages__rosidl_typesupport_introspection_cpp.so
│   │   ├── libperception_messages__rosidl_typesupport_introspection_c.so
│   │   └── libperception_messages__rosidl_generator_py.so
│   └── control/                      # control模块库文件
│       ├── libcontrol_messages__rosidl_generator_c.so
│       ├── libcontrol_messages__rosidl_typesupport_cpp.so
│       ├── libcontrol_messages__rosidl_typesupport_c.so
│       ├── libcontrol_messages__rosidl_typesupport_fastrtps_cpp.so
│       ├── libcontrol_messages__rosidl_typesupport_fastrtps_c.so
│       ├── libcontrol_messages__rosidl_typesupport_introspection_cpp.so
│       ├── libcontrol_messages__rosidl_typesupport_introspection_c.so
│       └── libcontrol_messages__rosidl_generator_py.so
└── test/                             # 使用示例（参考）
    ├── test_submodules.cpp           # 完整的集成示例代码
    ├── CMakeLists.txt                # 示例构建配置
    ├── package.xml                   # 示例包配置
    ├── build_tests.sh                # 构建脚本
    └── README.md                     # 测试说明
```

## 前置依赖

### 系统要求
- **ROS2 Humble** 或更高版本
- **Ubuntu 22.04** 或兼容系统
- **CMake 3.8** 或更高版本
- **C++17** 标准支持

### ROS2 依赖包
```bash
sudo apt update
sudo apt install ros-humble-desktop
sudo apt install ros-humble-ament-cmake
sudo apt install ros-humble-rosidl-default-generators
sudo apt install ros-humble-rosidl-default-runtime
sudo apt install ros-humble-std-msgs
```

## 快速开始

### 1. 获取预编译包

```bash
# 将提供的 RosMessage 目录复制到您的项目中
cp -r /path/to/provided/RosMessage /your/project/thirdparty/
```

### 2. 验证包完整性

```bash
cd /your/project/thirdparty/RosMessage

# 检查头文件
ls include/perception/  # 应显示 *.hpp 文件
ls include/control/     # 应显示 *.hpp 文件

# 检查库文件  
ls lib/perception_messages/      # 应显示 *.so 文件
ls lib/control_messages/         # 应显示 *.so 文件

# 运行提供的测试验证功能
cd test
./build_tests.sh
./install/rosmessage_tests/bin/test_submodules
```

### 3. 预期测试输出

如果一切正常，您应该看到：
```
测试子模块化ROS2消息系统...

=== 测试Perception模块 ===
PerceptionMasks: x=100, y=200
PerceptionImg: time_stamp_size=4, img_size=4, requires_masks=true

=== 测试Control模块 ===
ControlCommand: move_forward, value=1.5, enabled=true

✅ 所有子模块测试通过！
✅ 每个模块都有独立的消息类型和库文件
```

## 集成方式

### 方式一：使用预编译库文件（推荐）

这是最简单直接的集成方式，直接使用提供的头文件和库文件。

#### 项目结构
```
your_project/
├── thirdparty/
│   └── RosMessage/              # 提供的预编译包
│       ├── include/
│       ├── lib/
│       └── test/                # 参考示例
├── src/
│   └── main.cpp
├── CMakeLists.txt
└── package.xml
```

#### CMakeLists.txt 配置
```cmake
cmake_minimum_required(VERSION 3.8)
project(your_project)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找ROS2基础依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_runtime_cpp REQUIRED)

# 设置第三方消息模块路径
set(ROSMESSAGE_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RosMessage)

# 设置包含目录
include_directories(
    ${ROSMESSAGE_ROOT}/include
)

# 设置库文件搜索路径
link_directories(
    ${ROSMESSAGE_ROOT}/lib/perception_messages
    ${ROSMESSAGE_ROOT}/lib/control_messages
)

# 添加可执行文件
add_executable(your_project src/main.cpp)

# 链接ROS2依赖
ament_target_dependencies(your_project
    rclcpp
    std_msgs
    rosidl_runtime_cpp
)

# 链接第三方消息模块库文件
target_link_libraries(your_project
    # Perception模块库
    perception_messages__rosidl_typesupport_cpp
    perception_messages__rosidl_generator_c
    
    # Control模块库
    control_messages__rosidl_typesupport_cpp
    control_messages__rosidl_generator_c
)

# 安装
install(TARGETS your_project
    DESTINATION bin
)

# 安装第三方库文件（可选，用于部署）
install(DIRECTORY ${ROSMESSAGE_ROOT}/lib/
    DESTINATION lib
    FILES_MATCHING PATTERN "*.so*"
)

ament_package()
```

#### 代码示例
参考 `RosMessage/test/test_submodules.cpp` 获取完整示例，核心用法：

```cpp
// 包含所需头文件
#include "perception_messages/msg/perception_img.hpp"
#include "perception_messages/msg/perception_masks.hpp"
#include "control_messages/msg/control_command.hpp"

// 使用perception模块
perception_messages::msg::PerceptionMasks masks;
masks.x = 100;
masks.y = 200;

perception_messages::msg::PerceptionImg img;
img.time_stamp.data = {0x01, 0x02, 0x03, 0x04};
img.img.data = {0x10, 0x20, 0x30, 0x40};
img.requires_masks = true;

// 使用control模块
control_messages::msg::ControlCommand cmd;
cmd.command_type = "move_forward";
cmd.value = 1.5;
cmd.enabled = true;
```

### 方式二：ROS2包模式集成

如果您的项目是标准的ROS2包，可以将第三方消息库包装成类似依赖的形式。

#### package.xml 配置
```xml
<?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>your_project</name>
  <version>1.0.0</version>
  <description>Your ROS2 project using third-party messages</description>
  <maintainer email="your@email.com">Your Name</maintainer>
  <license>Apache-2.0</license>

  <buildtool_depend>ament_cmake</buildtool_depend>

  <!-- 核心ROS2依赖 -->
  <depend>rclcpp</depend>
  <depend>std_msgs</depend>
  <depend>rosidl_runtime_cpp</depend>

  <test_depend>ament_lint_auto</test_depend>
  <test_depend>ament_lint_common</test_depend>

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>
```

#### 使用ROS2节点示例
```cpp
#include <rclcpp/rclcpp.hpp>
#include "perception_messages/msg/perception_img.hpp"
#include "control_messages/msg/control_command.hpp"

class YourNode : public rclcpp::Node
{
public:
    YourNode() : Node("your_node")
    {
        // 发布者
        perception_pub_ = this->create_publisher<perception_messages::msg::PerceptionImg>(
            "perception/image", 10);
        control_pub_ = this->create_publisher<control_messages::msg::ControlCommand>(
            "control/command", 10);

        // 订阅者
        perception_sub_ = this->create_subscription<perception_messages::msg::PerceptionImg>(
            "perception/image", 10,
            std::bind(&YourNode::perception_callback, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "节点已启动，使用第三方消息模块");
    }

private:
    void perception_callback(const perception_messages::msg::PerceptionImg::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), 
            "收到图像: 大小=%zu字节, 需要掩码=%s",
            msg->img.data.size(),
            msg->requires_masks ? "是" : "否");
    }

    rclcpp::Publisher<perception_messages::msg::PerceptionImg>::SharedPtr perception_pub_;
    rclcpp::Publisher<control_messages::msg::ControlCommand>::SharedPtr control_pub_;
    rclcpp::Subscription<perception_messages::msg::PerceptionImg>::SharedPtr perception_sub_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<YourNode>());
    rclcpp::shutdown();
    return 0;
}
```

## 消息类型详解

### Perception模块消息

#### PerceptionImg
```cpp
// #include "perception_messages/msg/perception_img.hpp"
perception_messages::msg::PerceptionImg img;
img.time_stamp.data = {0x01, 0x02, 0x03, 0x04}; // std_msgs::UInt8MultiArray
img.img.data = {0x10, 0x20, 0x30, 0x40};        // std_msgs::UInt8MultiArray
img.requires_masks = true;                        // bool
```

#### PerceptionMasks
```cpp
// #include "perception_messages/msg/perception_masks.hpp"
perception_messages::msg::PerceptionMasks masks;
masks.x = 100;  // int32
masks.y = 200;  // int32
```

#### PerceptionMasksTracks
```cpp
// #include "perception_messages/msg/perception_masks_tracks.hpp"
perception_messages::msg::PerceptionMasksTracks tracks;
tracks.img.time_stamp.data = {0x01, 0x02};
tracks.img.img.data = {0x10, 0x20};
tracks.img.requires_masks = true;
tracks.tracks = {1, 2, 3, 4, 5};  // int32[]
```

#### PerceptionTrackRow
```cpp
// #include "perception_messages/msg/perception_track_row.hpp"
perception_messages::msg::PerceptionTrackRow row;
row.track_id = 42;     // int32
row.x = 100;           // int32
row.y = 200;           // int32
row.width = 50;        // int32
row.height = 80;       // int32
```

#### PerceptionTracks
```cpp
// #include "perception_messages/msg/perception_tracks.hpp"
perception_messages::msg::PerceptionTracks tracks;
tracks.tracks = {1, 2, 3, 4, 5};  // int32[]
```

### Control模块消息

#### ControlCommand
```cpp
// #include "control_messages/msg/control_command.hpp"
control_messages::msg::ControlCommand cmd;
cmd.command_type = "move_forward";  // string
cmd.value = 1.5;                    // float64
cmd.enabled = true;                 // bool
```

## 环境配置

### 开发环境设置
```bash
# 设置ROS2环境
source /opt/ros/humble/setup.bash

# 设置库文件路径（如果需要）
export LD_LIBRARY_PATH=/your/project/thirdparty/RosMessage/lib/perception_messages:/your/project/thirdparty/RosMessage/lib/control_messages:$LD_LIBRARY_PATH
```

### IDE配置（VS Code）

#### .vscode/c_cpp_properties.json
```json
{
    "configurations": [
        {
            "name": "ROS2",
            "includePath": [
                "${workspaceFolder}/**",
                "/opt/ros/humble/include/**",
                "${workspaceFolder}/thirdparty/RosMessage/include/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/gcc",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```

## 故障排除

### 常见问题

#### 1. 找不到消息头文件
**错误**: `fatal error: perception_messages/msg/perception_img.hpp: 没有那个文件或目录`

**解决方案**:
```cmake
# 确保CMakeLists.txt中正确设置了包含目录
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RosMessage/include
)
```

#### 2. 链接错误
**错误**: `undefined reference to perception_messages`

**解决方案**:
```cmake
# 确保CMakeLists.txt中正确设置了库文件路径和链接
link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RosMessage/lib/perception_messages
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RosMessage/lib/control_messages
)

target_link_libraries(your_target
    perception_messages__rosidl_typesupport_cpp
    control_messages__rosidl_typesupport_cpp
)
```

#### 3. 运行时找不到库文件
**错误**: `error while loading shared libraries: libperception_messages__rosidl_typesupport_cpp.so`

**解决方案**:
```bash
# 方法1: 设置LD_LIBRARY_PATH
export LD_LIBRARY_PATH=/your/project/thirdparty/RosMessage/lib/perception_messages:/your/project/thirdparty/RosMessage/lib/control_messages:$LD_LIBRARY_PATH

# 方法2: 在CMakeLists.txt中安装库文件
install(DIRECTORY ${ROSMESSAGE_ROOT}/lib/
    DESTINATION lib
    FILES_MATCHING PATTERN "*.so*"
)

# 方法3: 设置RPATH
set_target_properties(your_target PROPERTIES
    INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib"
    BUILD_WITH_INSTALL_RPATH TRUE
)
```

#### 4. 字段名不匹配
**错误**: `has no member named 'timestamp'; did you mean 'time_stamp'?`

**解决方案**:
参考 `RosMessage/test/test_submodules.cpp` 中的正确用法：
- 使用 `time_stamp` 而不是 `timestamp`
- 使用 `std_msgs::UInt8MultiArray` 类型的字段
- 检查实际的消息定义

### 调试工具

#### 检查库文件依赖
```bash
# 检查库文件是否存在
ls /your/project/thirdparty/RosMessage/lib/perception_messages/
ls /your/project/thirdparty/RosMessage/lib/control_messages/

# 检查库文件依赖关系
ldd /your/project/thirdparty/RosMessage/lib/perception_messages/libperception_messages__rosidl_typesupport_cpp.so

# 检查符号
nm -D /your/project/thirdparty/RosMessage/lib/perception_messages/libperception_messages__rosidl_typesupport_cpp.so | grep perception
```

#### 验证集成
```bash
# 运行提供的测试程序验证功能
cd /your/project/thirdparty/RosMessage/test
./install/rosmessage_tests/bin/test_submodules

# 检查您的程序是否能找到头文件
echo '#include "perception_messages/msg/perception_img.hpp"' | g++ -x c++ -I/your/project/thirdparty/RosMessage/include -c - -o /dev/null
```

## 性能优化

### 编译优化
```cmake
# 在CMakeLists.txt中添加优化选项
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_options(-O3 -DNDEBUG)
endif()
```

### 消息传输优化
```cpp
// 使用智能指针避免不必要的复制
auto msg = std::make_shared<perception_messages::msg::PerceptionImg>();
publisher_->publish(*msg);

// 预分配数组大小
msg->img.data.reserve(expected_size);
```

## 版本兼容性

| 组件 | 版本要求 | 说明 |
|------|----------|------|
| ROS2 | Humble+ | 核心运行时 |
| Ubuntu | 22.04+ | 推荐操作系统 |
| CMake | 3.8+ | 构建系统 |
| GCC | 9.0+ | C++17支持 |

## 技术支持

如需技术支持，请：
1. 查看本文档的故障排除部分
2. **参考 `RosMessage/test/test_submodules.cpp` 完整示例代码**
3. **运行 `RosMessage/test/install/rosmessage_tests/bin/test_submodules` 验证环境配置**
4. 检查提供的头文件和库文件完整性

## 文件清单

提供给第三方用户的完整文件列表：

### 必需文件
- `RosMessage/include/` - 预编译头文件目录
- `RosMessage/lib/` - 预编译库文件目录
- `RosMessage/test/` - 完整使用示例
- `RosMessage/organize_submodules.sh` - 主要的文件组织脚本（自动创建标准ROS2结构）
- `RosMessage/test/build_tests.sh` - 第三方用户构建脚本
- `THIRD_PARTY_INTEGRATION_GUIDE.md` - 本集成文档

### 参考文件
- `RosMessage/test/test_submodules.cpp` - 核心使用示例
- `RosMessage/test/CMakeLists.txt` - 构建配置参考
- `RosMessage/test/package.xml` - 包配置参考
- `RosMessage/test/README.md` - 测试说明

### 重要提醒
✅ **文件已经按照标准ROS2结构组织** - `organize_submodules.sh`脚本自动创建了正确的标准ROS2结构：
- 从 `include/perception/perception_img.hpp` 
- 重组为 `include/perception_messages/msg/perception_img.hpp`

这样用户就可以使用标准的包含方式：
```cpp
#include "perception_messages/msg/perception_img.hpp"
#include "control_messages/msg/control_command.hpp"
```

---

**最后更新**: 2025年9月11日
**文档版本**: 1.0.0
