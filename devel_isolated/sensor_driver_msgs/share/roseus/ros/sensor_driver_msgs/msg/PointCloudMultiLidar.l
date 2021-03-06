;; Auto-generated. Do not edit!


(when (boundp 'sensor_driver_msgs::PointCloudMultiLidar)
  (if (not (find-package "SENSOR_DRIVER_MSGS"))
    (make-package "SENSOR_DRIVER_MSGS"))
  (shadow 'PointCloudMultiLidar (find-package "SENSOR_DRIVER_MSGS")))
(unless (find-package "SENSOR_DRIVER_MSGS::POINTCLOUDMULTILIDAR")
  (make-package "SENSOR_DRIVER_MSGS::POINTCLOUDMULTILIDAR"))

(in-package "ROS")
;;//! \htmlinclude PointCloudMultiLidar.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass sensor_driver_msgs::PointCloudMultiLidar
  :super ros::object
  :slots (_header _lidarnum _pointcloudmultilaser ))

(defmethod sensor_driver_msgs::PointCloudMultiLidar
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:lidarnum __lidarnum) 0)
    ((:pointcloudmultilaser __pointcloudmultilaser) (let (r) (dotimes (i 0) (push (instance sensor_driver_msgs::PointCloudMultiLaser :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _lidarnum (round __lidarnum))
   (setq _pointcloudmultilaser __pointcloudmultilaser)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:lidarnum
   (&optional __lidarnum)
   (if __lidarnum (setq _lidarnum __lidarnum)) _lidarnum)
  (:pointcloudmultilaser
   (&rest __pointcloudmultilaser)
   (if (keywordp (car __pointcloudmultilaser))
       (send* _pointcloudmultilaser __pointcloudmultilaser)
     (progn
       (if __pointcloudmultilaser (setq _pointcloudmultilaser (car __pointcloudmultilaser)))
       _pointcloudmultilaser)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _lidarnum
    4
    ;; sensor_driver_msgs/PointCloudMultiLaser[] _pointcloudmultilaser
    (apply #'+ (send-all _pointcloudmultilaser :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _lidarnum
       (write-long _lidarnum s)
     ;; sensor_driver_msgs/PointCloudMultiLaser[] _pointcloudmultilaser
     (write-long (length _pointcloudmultilaser) s)
     (dolist (elem _pointcloudmultilaser)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _lidarnum
     (setq _lidarnum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; sensor_driver_msgs/PointCloudMultiLaser[] _pointcloudmultilaser
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _pointcloudmultilaser (let (r) (dotimes (i n) (push (instance sensor_driver_msgs::PointCloudMultiLaser :init) r)) r))
     (dolist (elem- _pointcloudmultilaser)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get sensor_driver_msgs::PointCloudMultiLidar :md5sum-) "a8d79a4670af44ba4cf9d1a427e66fcc")
(setf (get sensor_driver_msgs::PointCloudMultiLidar :datatype-) "sensor_driver_msgs/PointCloudMultiLidar")
(setf (get sensor_driver_msgs::PointCloudMultiLidar :definition-)
      "std_msgs/Header header
int32 lidarnum

PointCloudMultiLaser[] pointcloudmultilaser

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: sensor_driver_msgs/PointCloudMultiLaser

int16 lasernum
int16 lidarid
int16[] laseridmap
float32[] laseranglemap

sensor_msgs/PointCloud2 pointcloud
================================================================================
MSG: sensor_msgs/PointCloud2
# This message holds a collection of N-dimensional points, which may
# contain additional information such as normals, intensity, etc. The
# point data is stored as a binary blob, its layout described by the
# contents of the \"fields\" array.

# The point cloud data may be organized 2d (image-like) or 1d
# (unordered). Point clouds organized as 2d images may be produced by
# camera depth sensors such as stereo or time-of-flight.

# Time of sensor data acquisition, and the coordinate frame ID (for 3d
# points).
Header header

# 2D structure of the point cloud. If the cloud is unordered, height is
# 1 and width is the length of the point cloud.
uint32 height
uint32 width

# Describes the channels and their layout in the binary data blob.
PointField[] fields

bool    is_bigendian # Is this data bigendian?
uint32  point_step   # Length of a point in bytes
uint32  row_step     # Length of a row in bytes
uint8[] data         # Actual point data, size is (row_step*height)

bool is_dense        # True if there are no invalid points

================================================================================
MSG: sensor_msgs/PointField
# This message holds the description of one point entry in the
# PointCloud2 message format.
uint8 INT8    = 1
uint8 UINT8   = 2
uint8 INT16   = 3
uint8 UINT16  = 4
uint8 INT32   = 5
uint8 UINT32  = 6
uint8 FLOAT32 = 7
uint8 FLOAT64 = 8

string name      # Name of field
uint32 offset    # Offset from start of point struct
uint8  datatype  # Datatype enumeration, see above
uint32 count     # How many elements in the field

")



(provide :sensor_driver_msgs/PointCloudMultiLidar "a8d79a4670af44ba4cf9d1a427e66fcc")


