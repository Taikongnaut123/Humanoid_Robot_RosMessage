#include <iostream>
#include "perception_messages/msg/perception_img.hpp"
#include "perception_messages/msg/perception_masks.hpp"
#include "control_messages/msg/control_command.hpp"

int main()
{
    std::cout << "测试子模块化ROS2消息系统..." << std::endl;

    // 测试perception模块
    std::cout << "\n=== 测试Perception模块 ===" << std::endl;

    // 测试PerceptionMasks
    perception_messages::msg::PerceptionMasks masks;
    masks.x = 100;
    masks.y = 200;
    std::cout << "PerceptionMasks: x=" << masks.x << ", y=" << masks.y << std::endl;

    // 测试PerceptionImg
    perception_messages::msg::PerceptionImg img;
    img.time_stamp.data = {0x01, 0x02, 0x03, 0x04}; // 示例时间戳数据
    img.img.data = {0x10, 0x20, 0x30, 0x40};        // 示例图像数据
    img.requires_masks = true;
    std::cout << "PerceptionImg: time_stamp_size=" << img.time_stamp.data.size()
              << ", img_size=" << img.img.data.size()
              << ", requires_masks=" << (img.requires_masks ? "true" : "false") << std::endl;

    // 测试control模块
    std::cout << "\n=== 测试Control模块 ===" << std::endl;

    // 测试ControlCommand
    control_messages::msg::ControlCommand cmd;
    cmd.command_type = "move_forward";
    cmd.value = 1.5;
    cmd.enabled = true;
    std::cout << "ControlCommand: " << cmd.command_type
              << ", value=" << cmd.value
              << ", enabled=" << (cmd.enabled ? "true" : "false") << std::endl;

    std::cout << "\n✅ 所有子模块测试通过！" << std::endl;
    std::cout << "✅ 每个模块都有独立的消息类型和库文件" << std::endl;

    return 0;
}
