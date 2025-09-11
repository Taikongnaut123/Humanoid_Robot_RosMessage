# RosMessage - 模块化ROS2消息系统

一个预编译的模块化ROS2消息系统，提供感知(perception)和控制(control)消息模块。

## 📦 包内容

```
RosMessage/
├── include/           # 预编译头文件
├── lib/              # 预编译库文件  
├── test/             # 完整使用示例
└── THIRD_PARTY_INTEGRATION_GUIDE.md  # 详细集成文档
```

## ⚡ 快速验证

```bash
# 1. 重组头文件结构（必须！）
cd test
./reorganize_headers_for_thirdparty.sh

# 2. 构建并运行测试
./build_tests.sh
./install/rosmessage_tests/bin/test_submodules
```

**预期输出：**
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

## 🚀 快速集成

### 1. 设置包含和链接路径
```cmake
# CMakeLists.txt
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RosMessage/include)
link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RosMessage/lib/perception
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/RosMessage/lib/control
)
```

### 2. 链接库文件
```cmake
target_link_libraries(your_target
    perception_messages__rosidl_typesupport_cpp
    control_messages__rosidl_typesupport_cpp
)
```

### 3. 使用消息类型
```cpp
#include "perception_messages/msg/perception_img.hpp"
#include "control_messages/msg/control_command.hpp"

// 创建和使用消息
perception_messages::msg::PerceptionImg img;
control_messages::msg::ControlCommand cmd;
```

## 📚 详细文档

查看 **`THIRD_PARTY_INTEGRATION_GUIDE.md`** 获取：
- 完整集成说明
- 详细代码示例  
- 故障排除指南
- 性能优化建议

## 🔧 消息模块

### Perception模块
- `PerceptionImg` - 图像消息
- `PerceptionMasks` - 掩码消息  
- `PerceptionTracks` - 跟踪消息
- `PerceptionTrackRow` - 跟踪行消息
- `PerceptionMasksTracks` - 掩码跟踪消息

### Control模块  
- `ControlCommand` - 控制命令消息

## 🛠️ 系统要求

- **ROS2 Humble** 或更高版本
- **Ubuntu 22.04** 或兼容系统
- **CMake 3.8+**
- **C++17** 标准支持

## 📝 许可证

Apache-2.0 License

---
**完整示例**: 参考 `test/test_submodules.cpp`  
**技术支持**: 查看 `THIRD_PARTY_INTEGRATION_GUIDE.md`
