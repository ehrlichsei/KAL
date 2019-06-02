// Generated by gencpp from file path_publisher_ros_tool/dis_angle.msg
// DO NOT EDIT!


#ifndef PATH_PUBLISHER_ROS_TOOL_MESSAGE_DIS_ANGLE_H
#define PATH_PUBLISHER_ROS_TOOL_MESSAGE_DIS_ANGLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace path_publisher_ros_tool
{
template <class ContainerAllocator>
struct dis_angle_
{
  typedef dis_angle_<ContainerAllocator> Type;

  dis_angle_()
    : dis(0.0)
    , angle(0.0)  {
    }
  dis_angle_(const ContainerAllocator& _alloc)
    : dis(0.0)
    , angle(0.0)  {
  (void)_alloc;
    }



   typedef float _dis_type;
  _dis_type dis;

   typedef float _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> const> ConstPtr;

}; // struct dis_angle_

typedef ::path_publisher_ros_tool::dis_angle_<std::allocator<void> > dis_angle;

typedef boost::shared_ptr< ::path_publisher_ros_tool::dis_angle > dis_anglePtr;
typedef boost::shared_ptr< ::path_publisher_ros_tool::dis_angle const> dis_angleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace path_publisher_ros_tool

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'path_publisher_ros_tool': ['/home/kal1-4/anicar_ws/src/path_publisher_ros_tool/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f06074cb14290372c4f2d255313c323";
  }

  static const char* value(const ::path_publisher_ros_tool::dis_angle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f06074cb1429037ULL;
  static const uint64_t static_value2 = 0x2c4f2d255313c323ULL;
};

template<class ContainerAllocator>
struct DataType< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "path_publisher_ros_tool/dis_angle";
  }

  static const char* value(const ::path_publisher_ros_tool::dis_angle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 dis\n\
float32 angle\n\
";
  }

  static const char* value(const ::path_publisher_ros_tool::dis_angle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dis);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct dis_angle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::path_publisher_ros_tool::dis_angle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::path_publisher_ros_tool::dis_angle_<ContainerAllocator>& v)
  {
    s << indent << "dis: ";
    Printer<float>::stream(s, indent + "  ", v.dis);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PATH_PUBLISHER_ROS_TOOL_MESSAGE_DIS_ANGLE_H