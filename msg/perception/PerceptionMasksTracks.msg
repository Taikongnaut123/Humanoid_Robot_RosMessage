# Perception MasksTracks message - corresponds to humanoid_robot.PB.perception.MasksTracks
# bytes timeStamp -> UInt8MultiArray
# repeated TrackRow tracks -> PerceptionTrackRow[]

std_msgs/UInt8MultiArray time_stamp
PerceptionTrackRow[] tracks
