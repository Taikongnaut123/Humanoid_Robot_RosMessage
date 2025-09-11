# ROS2消息生成机制说明

## ROS2消息生成的特点

ROS2使用`rosidl`（ROS Interface Definition Language）工具链来自动生成消息类型的代码。这个过程有以下特点：

### 1. 只生成头文件和库文件

ROS2消息生成系统**不提供可读的源文件**，而是直接生成：

- **头文件** (`.hpp`, `.h`): 包含消息结构定义、类型特征等
- **编译后的库文件** (`.so`): 包含序列化、反序列化等实现
- **类型支持文件**: 用于ROS2中间件的类型注册和支持

### 2. 生成的文件类型

#### 头文件
```
perception_masks.hpp              # 主要消息定义
detail/perception_masks__struct.hpp    # 结构定义
detail/perception_masks__builder.hpp   # 构建器
detail/perception_masks__traits.hpp    # 类型特征
detail/perception_masks__type_support.* # 类型支持
```

#### 库文件
```
libros_message__rosidl_generator_c.so           # C语言接口
libros_message__rosidl_typesupport_cpp.so       # C++类型支持
libros_message__rosidl_typesupport_fastrtps_*.so # FastRTPS支持
libros_message__rosidl_typesupport_introspection_*.so # 反射支持
```

### 3. 为什么不提供源文件？

1. **自动生成**: 代码是根据`.msg`定义自动生成的模板代码
2. **优化编译**: 直接提供编译后的库文件，避免重复编译
3. **版本一致性**: 确保所有用户使用相同版本的序列化/反序列化代码
4. **接口稳定性**: 隐藏实现细节，只暴露必要的API接口

### 4. 使用方式

开发者只需要：
- 包含头文件使用消息类型
- 链接相应的库文件
- 不需要关心具体的实现代码

```cpp
#include "perception_messages.h"  // 只需包含头文件

// 直接使用消息类型
RosMessage::Perception::PerceptionMasks masks;
masks.x = 100;
masks.y = 200;
```

### 5. 项目中的文件组织

由于ROS2的这种特性，我们的项目结构为：

```
RosMessage/
├── perception/                 # 消息定义(.msg文件)
├── include/perception/         # 生成的头文件
├── lib/perception/            # 生成的库文件
└── organize_generated_files.sh # 自动组织脚本
```

**注意**: 不需要`source/`目录，因为ROS2不提供可编辑的源文件。

## 总结

这种设计使得ROS2消息系统：
- 更加标准化和一致
- 减少了编译时间
- 简化了分发和部署
- 提供了稳定的API接口

开发者只需关注消息的定义和使用，而不需要关心底层的序列化实现细节。
