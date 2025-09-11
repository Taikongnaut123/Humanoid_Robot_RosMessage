# Perception TrackRow message - corresponds to humanoid_robot.PB.perception.TrackRow
# float x1, y1, x2, y2 -> float32
# string trackId -> string
# float conf -> float32  
# string cls -> string
# repeated Masks mask -> PerceptionMasks[]
# bool isMove -> bool

float32 x1
float32 y1
float32 x2
float32 y2
string track_id
float32 conf
string cls
PerceptionMasks[] mask
bool is_move
