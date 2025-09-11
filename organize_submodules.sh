#!/bin/bash

# 自动组织各个子模块生成的消息文件到标准ROS2目录结构
# 使用方法: ./organize_submodules.sh

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MSG_ROOT="$SCRIPT_DIR/msg"

echo "开始组织子模块生成的文件..."

# 清理现有的include和lib目录
echo "清理现有目录..."
rm -rf include lib

# 自动遍历msg下所有模块目录，创建对应的标准ROS2目录结构
echo "创建目录结构..."
for module_dir in "$MSG_ROOT"/*; do
    if [ -d "$module_dir" ] && [ -f "$module_dir/CMakeLists.txt" ]; then
        module_name=$(basename "$module_dir")
        echo "  发现模块: $module_name"
        # 创建标准ROS2路径结构: package_name/msg/
        mkdir -p "include/${module_name}_messages/msg"
        mkdir -p "lib/${module_name}_messages"
    fi
done

# 从各个子模块的install目录复制头文件
echo "复制头文件..."
for module_dir in "$MSG_ROOT"/*; do
    if [ -d "$module_dir" ] && [ -f "$module_dir/CMakeLists.txt" ]; then
        module_name=$(basename "$module_dir")
        module_install_dir="$module_dir/install/${module_name}_messages"
        
        if [ -d "$module_install_dir" ]; then
            echo "  处理模块: $module_name"
            
            # 复制该模块的头文件到标准ROS2路径
            header_source_dir="$module_install_dir/include/${module_name}_messages/${module_name}_messages/msg"
            if [ -d "$header_source_dir" ]; then
                for file in "$header_source_dir"/*.hpp; do
                    if [ -f "$file" ]; then
                        filename=$(basename "$file")
                        cp "$file" "include/${module_name}_messages/msg/"
                        echo "    复制 $filename 到 include/${module_name}_messages/msg/"
                    fi
                done
            fi
            
            # 复制visibility控制头文件
            visibility_file="$module_install_dir/include/${module_name}_messages/rosidl_generator_cpp__visibility_control.hpp"
            if [ -f "$visibility_file" ]; then
                cp "$visibility_file" "include/${module_name}_messages/msg/"
                echo "    复制 rosidl_generator_cpp__visibility_control.hpp 到 include/${module_name}_messages/msg/"
            fi
        else
            echo "  警告: 模块 $module_name 的install目录不存在，请先构建该模块"
        fi
    fi
done

# 从各个子模块的install目录复制库文件
echo "复制库文件..."
for module_dir in "$MSG_ROOT"/*; do
    if [ -d "$module_dir" ] && [ -f "$module_dir/CMakeLists.txt" ]; then
        module_name=$(basename "$module_dir")
        module_install_dir="$module_dir/install/${module_name}_messages"
        
        if [ -d "$module_install_dir" ]; then
            echo "  处理模块: $module_name"
            
            # 复制该模块的库文件
            lib_source_dir="$module_install_dir/lib"
            if [ -d "$lib_source_dir" ]; then
                for lib in "$lib_source_dir"/lib${module_name}_messages__*.so; do
                    if [ -f "$lib" ]; then
                        filename=$(basename "$lib")
                        cp "$lib" "lib/${module_name}_messages/"
                        echo "    复制 $filename 到 lib/${module_name}_messages/"
                    fi
                done
            fi
        fi
    fi
done

# 从各个子模块的install目录复制详细实现文件
echo "复制详细实现文件..."
for module_dir in "$MSG_ROOT"/*; do
    if [ -d "$module_dir" ] && [ -f "$module_dir/CMakeLists.txt" ]; then
        module_name=$(basename "$module_dir")
        module_install_dir="$module_dir/install/${module_name}_messages"
        
        if [ -d "$module_install_dir" ]; then
            detail_source_dir="$module_install_dir/include/${module_name}_messages/${module_name}_messages/msg/detail"
            
            if [ -d "$detail_source_dir" ]; then
                # 创建该模块的detail目录（标准ROS2路径）
                mkdir -p "include/${module_name}_messages/msg/detail"
                
                # 复制detail文件
                for detail_file in "$detail_source_dir"/*; do
                    if [ -f "$detail_file" ]; then
                        filename=$(basename "$detail_file")
                        cp "$detail_file" "include/${module_name}_messages/msg/detail/"
                        echo "    复制 $filename 到 include/${module_name}_messages/msg/detail/"
                    fi
                done
            fi
        fi
    fi
done

echo ""
echo "✅ 文件组织完成!"
echo ""
echo "生成的库文件："
for module_dir in "$MSG_ROOT"/*; do
    if [ -d "$module_dir" ] && [ -f "$module_dir/CMakeLists.txt" ]; then
        module_name=$(basename "$module_dir")
        lib_dir="lib/${module_name}_messages"
        if [ -d "$lib_dir" ]; then
            echo "  ${module_name}_messages:"
            for lib in "$lib_dir"/lib${module_name}_messages__*.so; do
                if [ -f "$lib" ]; then
                    echo "    $(basename "$lib")"
                fi
            done
        fi
    fi
done
echo ""
echo "使用示例："
echo "  #include \"perception_messages/msg/perception_img.hpp\""
echo "  #include \"control_messages/msg/control_command.hpp\""
echo "  "
echo "  perception_messages::msg::PerceptionImg img;"
echo "  control_messages::msg::ControlCommand cmd;"
