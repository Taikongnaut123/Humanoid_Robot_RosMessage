# 时间戳，表示消息发布的时间
std_msgs/Header header
# 旋转方向，可以定义为枚举类型，包括上下左右四个方向
uint8 direction
# 方向枚举定义
# 0 = UP
# 1 = DOWN
# 2 = LEFT
# 3 = RIGHT
# 增量角度，表示电机需要旋转的角度(弧度)
float32 angle_increment
