#!/bin/bash

# 构建ROS消息测试包 - 第三方用户版本
# 使用预编译的头文件和库文件
# 使用方法: ./build_tests.sh

set -e

# 获取脚本所在目录的绝对路径
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROSMESSAGE_ROOT="$(dirname "$SCRIPT_DIR")"
TEST_ROOT="$SCRIPT_DIR"
BUILD_ROOT="$TEST_ROOT/build"
INSTALL_ROOT="$TEST_ROOT/install"

echo "开始构建ROS消息测试包（第三方用户版本）..."
echo "RosMessage根目录: $ROSMESSAGE_ROOT"

# 检查预编译的头文件和库文件是否存在
INCLUDE_DIR="$ROSMESSAGE_ROOT/include"
LIB_DIR="$ROSMESSAGE_ROOT/lib"

echo "检查预编译文件..."

if [ ! -d "$INCLUDE_DIR" ]; then
    echo "❌ 错误: 未找到头文件目录 $INCLUDE_DIR"
    echo "请确保已正确复制 RosMessage/include/ 目录"
    exit 1
fi

if [ ! -d "$LIB_DIR" ]; then
    echo "❌ 错误: 未找到库文件目录 $LIB_DIR"
    echo "请确保已正确复制 RosMessage/lib/ 目录"
    exit 1
fi

# 检查perception模块文件
if [ ! -f "$INCLUDE_DIR/perception_messages/msg/perception_img.hpp" ]; then
    echo "❌ 错误: 未找到perception模块头文件"
    echo "请确保 $INCLUDE_DIR/perception_messages/msg/ 目录包含所需的.hpp文件"
    exit 1
fi

if [ ! -d "$LIB_DIR/perception_messages" ] || [ -z "$(find "$LIB_DIR/perception_messages" -name "*.so" -print -quit)" ]; then
    echo "❌ 错误: 未找到perception模块库文件"
    echo "请确保 $LIB_DIR/perception_messages/ 目录包含所需的.so文件"
    exit 1
fi

# 检查control模块文件
if [ ! -f "$INCLUDE_DIR/control_messages/msg/control_command.hpp" ]; then
    echo "❌ 错误: 未找到control模块头文件"
    echo "请确保 $INCLUDE_DIR/control_messages/msg/ 目录包含所需的.hpp文件"
    exit 1
fi

if [ ! -d "$LIB_DIR/control_messages" ] || [ -z "$(find "$LIB_DIR/control_messages" -name "*.so" -print -quit)" ]; then
    echo "❌ 错误: 未找到control模块库文件"
    echo "请确保 $LIB_DIR/control_messages/ 目录包含所需的.so文件"
    exit 1
fi

echo "✅ 预编译文件检查通过"

# 创建构建目录
mkdir -p "$BUILD_ROOT"
mkdir -p "$INSTALL_ROOT"

# 进入测试目录
cd "$TEST_ROOT"

echo "设置ROS环境..."
# 设置基础ROS2环境
source /opt/ros/humble/setup.bash

# 设置库文件路径
export LD_LIBRARY_PATH="$LIB_DIR/perception_messages:$LIB_DIR/control_messages:$LD_LIBRARY_PATH"

echo "构建测试包..."
echo "使用预编译库: $LIB_DIR"
echo "使用预编译头文件: $INCLUDE_DIR"

colcon build \
    --build-base "$BUILD_ROOT" \
    --install-base "$INSTALL_ROOT" \
    --packages-select rosmessage_tests

if [ $? -eq 0 ]; then
    echo ""
    echo "✅ 测试包构建成功!"
    echo ""
    echo "运行测试:"
    echo "  cd $TEST_ROOT"
    echo "  ./install/rosmessage_tests/bin/test_submodules"
    echo ""
    echo "或者设置环境后运行:"
    echo "  export LD_LIBRARY_PATH=\"$LIB_DIR/perception_messages:$LIB_DIR/control_messages:\$LD_LIBRARY_PATH\""
    echo "  $INSTALL_ROOT/rosmessage_tests/bin/test_submodules"
else
    echo "❌ 测试包构建失败"
    echo ""
    echo "故障排除提示:"
    echo "1. 确保ROS2 Humble环境已正确安装和设置"
    echo "2. 确保预编译文件完整: $INCLUDE_DIR 和 $LIB_DIR"
    echo "3. 检查CMakeLists.txt中的路径配置"
    exit 1
fi
