// Generated by gencpp from file motor_interface_ros_tool/ActivationRequest.msg
// DO NOT EDIT!


#ifndef MOTOR_INTERFACE_ROS_TOOL_MESSAGE_ACTIVATIONREQUEST_H
#define MOTOR_INTERFACE_ROS_TOOL_MESSAGE_ACTIVATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_interface_ros_tool
{
template <class ContainerAllocator>
struct ActivationRequest_
{
  typedef ActivationRequest_<ContainerAllocator> Type;

  ActivationRequest_()
    : activate(false)  {
    }
  ActivationRequest_(const ContainerAllocator& _alloc)
    : activate(false)  {
  (void)_alloc;
    }



   typedef uint8_t _activate_type;
  _activate_type activate;





  typedef boost::shared_ptr< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ActivationRequest_

typedef ::motor_interface_ros_tool::ActivationRequest_<std::allocator<void> > ActivationRequest;

typedef boost::shared_ptr< ::motor_interface_ros_tool::ActivationRequest > ActivationRequestPtr;
typedef boost::shared_ptr< ::motor_interface_ros_tool::ActivationRequest const> ActivationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace motor_interface_ros_tool

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'motor_interface_ros_tool': ['/home/kal1-4/anicar_ws/src/motor_interface_ros_tool/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b15627a984ebdd591b2ee87ce75c4d06";
  }

  static const char* value(const ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb15627a984ebdd59ULL;
  static const uint64_t static_value2 = 0x1b2ee87ce75c4d06ULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_interface_ros_tool/ActivationRequest";
  }

  static const char* value(const ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool activate\n\
";
  }

  static const char* value(const ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.activate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActivationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_interface_ros_tool::ActivationRequest_<ContainerAllocator>& v)
  {
    s << indent << "activate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.activate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_INTERFACE_ROS_TOOL_MESSAGE_ACTIVATIONREQUEST_H