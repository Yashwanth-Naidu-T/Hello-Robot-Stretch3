## Notify the tf2_web_republisher that republishing of certain
## TFs is desired
string[] source_frames
string target_frame
float32 angular_thres
float32 trans_thres
float32 rate
builtin_interfaces/Duration timeout # tf2_web_republisher will stop publishing the topic if it has zero subscribers for this amount of time
