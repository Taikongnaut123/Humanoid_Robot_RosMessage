# ROS消息测试目录

这个目录包含了ROS消息子模块系统的测试代码，可以独立构建和运行。

## 目录结构

```
test/
├── CMakeLists.txt          # 测试包构建配置
├── package.xml             # 测试包依赖配置
├── build_tests.sh          # 测试构建脚本
├── test_submodules.cpp     # 子模块测试代码
└── README.md               # 使用说明
```

## 构建和运行测试

### 1. 确保依赖模块已构建

在构建测试之前，需要先构建perception和control模块：

```bash
# 构建perception模块
cd ../msg/perception
colcon build --packages-select perception_messages

# 构建control模块
cd ../msg/control  
colcon build --packages-select control_messages
```

### 2. 构建测试包

```bash
cd /home/ubuntu/zhaokai/vs_workspace/Humanoid-Robot/RosMessage/test
./build_tests.sh
```

### 3. 运行测试

```bash
# 方法1：直接运行可执行文件
./install/bin/test_submodules

# 方法2：通过ROS环境运行
source install/setup.bash
test_submodules
```

## 测试内容

测试程序验证以下功能：

1. **Perception模块测试**
   - PerceptionMasks消息创建和赋值
   - PerceptionImg消息创建和赋值

2. **Control模块测试**
   - ControlCommand消息创建和赋值

3. **模块独立性验证**
   - 验证每个模块使用独立的命名空间
   - 验证每个模块链接独立的库文件

## 期望输出

成功运行测试应该看到类似输出：

```
测试子模块化ROS2消息系统...

=== 测试Perception模块 ===
PerceptionMasks: x=100, y=200
PerceptionImg: 1920x1080 at 2024-01-01T10:00:00Z

=== 测试Control模块 ===
ControlCommand: move_forward, value=1.5, enabled=true

✅ 所有子模块测试通过！
✅ 每个模块都有独立的消息类型和库文件
```

## 故障排除

### 构建错误

如果遇到构建错误，检查：

1. 依赖模块是否已正确构建
2. ROS2环境是否正确设置
3. 包含路径和库文件路径是否正确

### 运行时错误

如果遇到运行时错误，检查：

1. 库文件是否存在于lib/目录下
2. 环境变量是否正确设置
3. 消息类型定义是否匹配

## 添加新测试

要添加新的测试：

1. 在test_submodules.cpp中添加测试代码
2. 如果需要新的依赖，更新CMakeLists.txt和package.xml
3. 重新构建测试包
