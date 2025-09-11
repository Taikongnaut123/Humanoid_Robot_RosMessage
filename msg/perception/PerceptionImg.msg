# Perception Img message - corresponds to humanoid_robot.PB.perception.Img
# bytes timeStamp -> UInt8MultiArray
# bytes img -> UInt8MultiArray  
# bool requiresMasks -> bool

std_msgs/UInt8MultiArray time_stamp
std_msgs/UInt8MultiArray img
bool requires_masks
