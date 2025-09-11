# ROS消息子模块系统 - 最终目录结构

## 📁 完整目录结构

```
RosMessage/
├── msg/                                      # 消息定义模块
│   ├── perception/                           # perception消息模块
│   │   ├── CMakeLists.txt                    # 独立构建配置
│   │   ├── package.xml                       # 独立包配置
│   │   ├── PerceptionImg.msg                 # 消息定义文件
│   │   ├── PerceptionMasks.msg
│   │   ├── PerceptionMasksTracks.msg
│   │   ├── PerceptionTrackRow.msg
│   │   ├── PerceptionTracks.msg
│   │   ├── build/                            # 构建输出
│   │   ├── install/                          # 安装输出
│   │   └── log/                              # 构建日志
│   └── control/                              # control消息模块
│       ├── CMakeLists.txt                    # 独立构建配置
│       ├── package.xml                       # 独立包配置
│       ├── ControlCommand.msg                # 消息定义文件
│       ├── build/                            # 构建输出
│       ├── install/                          # 安装输出
│       └── log/                              # 构建日志
├── include/                                  # 统一组织的头文件
│   ├── perception/                           # perception头文件
│   │   ├── perception_img.hpp
│   │   ├── perception_masks.hpp
│   │   ├── perception_masks_tracks.hpp
│   │   ├── perception_track_row.hpp
│   │   ├── perception_tracks.hpp
│   │   ├── rosidl_generator_cpp__visibility_control.hpp
│   │   └── detail/                           # 详细实现文件
│   │       ├── perception_*__struct.hpp
│   │       ├── perception_*__builder.hpp
│   │       ├── perception_*__traits.hpp
│   │       ├── perception_*__type_support.*
│   │       └── dds_fastrtps/
│   └── control/                              # control头文件
│       ├── control_command.hpp
│       ├── rosidl_generator_cpp__visibility_control.hpp
│       └── detail/                           # 详细实现文件
│           ├── control_*__struct.hpp
│           ├── control_*__builder.hpp
│           ├── control_*__traits.hpp
│           ├── control_*__type_support.*
│           └── dds_fastrtps/
├── lib/                                      # 统一组织的库文件
│   ├── perception/                           # perception库文件
│   │   ├── libperception_messages__rosidl_generator_c.so
│   │   ├── libperception_messages__rosidl_typesupport_cpp.so
│   │   ├── libperception_messages__*.so      # 其他类型支持库
│   │   └── python3.13/                      # Python支持
│   └── control/                              # control库文件
│       ├── libcontrol_messages__rosidl_generator_c.so
│       ├── libcontrol_messages__rosidl_typesupport_cpp.so
│       ├── libcontrol_messages__*.so         # 其他类型支持库
│       └── python3.13/                      # Python支持
├── test/                                     # 测试目录
│   ├── CMakeLists.txt                        # 测试构建配置
│   ├── package.xml                           # 测试包配置
│   ├── build_tests.sh                        # 测试构建脚本
│   ├── test_submodules.cpp                   # 测试代码
│   ├── README.md                             # 测试说明
│   ├── build/                                # 测试构建输出
│   └── install/                              # 测试安装输出
├── organize_submodules.sh                    # 文件组织脚本
├── build_submodules.sh                       # 子模块构建脚本
├── ROS2_MESSAGE_GENERATION_EXPLANATION.md   # ROS2消息生成说明
└── SUBMODULE_SYSTEM_SUMMARY.md              # 子模块系统总结
```

## 🔧 工作流程

### 1. 开发阶段
```bash
# 在msg/模块名/下添加新的.msg文件
# 例如：msg/perception/NewMessage.msg
```

### 2. 构建阶段
```bash
# 构建单个模块
cd msg/perception
colcon build --packages-select perception_messages

# 或构建所有模块
./build_submodules.sh
```

### 3. 组织阶段
```bash
# 统一组织所有模块的头文件和库文件
./organize_submodules.sh
```

### 4. 测试阶段
```bash
# 构建并运行测试
cd test
./build_tests.sh
./install/bin/test_submodules
```

## 🎯 系统特点

### ✅ 模块化设计
- 每个模块是独立的ROS2包
- 各自有独立的CMakeLists.txt和package.xml
- 可以独立构建、测试和分发

### ✅ 独立库文件
- 每个模块生成独立的库文件
- 库文件名包含模块名，避免冲突
- 支持选择性链接，只链接需要的模块

### ✅ 统一组织
- 所有模块的头文件统一组织到include/目录
- 所有模块的库文件统一组织到lib/目录
- 便于外部项目集成和使用

### ✅ 自动化支持
- 自动组织脚本：organize_submodules.sh
- 自动构建脚本：build_submodules.sh
- 自动测试脚本：test/build_tests.sh

### ✅ 标准ROS2结构
- 符合ROS2包管理规范
- 支持colcon构建系统
- 支持ament_cmake包管理

## 🚀 使用示例

### 在外部项目中使用

```cmake
# CMakeLists.txt
find_package(perception_messages REQUIRED)
find_package(control_messages REQUIRED)

target_link_libraries(your_target
  perception_messages__rosidl_typesupport_cpp
  control_messages__rosidl_typesupport_cpp
)
```

```cpp
// your_code.cpp
#include "perception_messages/msg/perception_img.hpp"
#include "control_messages/msg/control_command.hpp"

perception_messages::msg::PerceptionImg img;
control_messages::msg::ControlCommand cmd;
```

这种架构提供了最佳的模块化、可维护性和扩展性！🎉
