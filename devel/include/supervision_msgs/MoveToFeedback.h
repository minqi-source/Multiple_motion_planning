// Generated by gencpp from file supervision_msgs/MoveToFeedback.msg
// DO NOT EDIT!


#ifndef SUPERVISION_MSGS_MESSAGE_MOVETOFEEDBACK_H
#define SUPERVISION_MSGS_MESSAGE_MOVETOFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace supervision_msgs
{
template <class ContainerAllocator>
struct MoveToFeedback_
{
  typedef MoveToFeedback_<ContainerAllocator> Type;

  MoveToFeedback_()
    : current_node()
    , current_pose()  {
    }
  MoveToFeedback_(const ContainerAllocator& _alloc)
    : current_node(_alloc)
    , current_pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _current_node_type;
  _current_node_type current_node;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _current_pose_type;
  _current_pose_type current_pose;




  typedef boost::shared_ptr< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct MoveToFeedback_

typedef ::supervision_msgs::MoveToFeedback_<std::allocator<void> > MoveToFeedback;

typedef boost::shared_ptr< ::supervision_msgs::MoveToFeedback > MoveToFeedbackPtr;
typedef boost::shared_ptr< ::supervision_msgs::MoveToFeedback const> MoveToFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::supervision_msgs::MoveToFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace supervision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'supervision_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/supervision/supervision_msgs/msg', '/home/zejian/catkin_ws/devel/share/supervision_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eee4095d1c8fb813dd3a3a2322b9ac8f";
  }

  static const char* value(const ::supervision_msgs::MoveToFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeee4095d1c8fb813ULL;
  static const uint64_t static_value2 = 0xdd3a3a2322b9ac8fULL;
};

template<class ContainerAllocator>
struct DataType< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "supervision_msgs/MoveToFeedback";
  }

  static const char* value(const ::supervision_msgs::MoveToFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
string current_node\n\
geometry_msgs/Pose current_pose\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::supervision_msgs::MoveToFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_node);
      stream.next(m.current_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveToFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::supervision_msgs::MoveToFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::supervision_msgs::MoveToFeedback_<ContainerAllocator>& v)
  {
    s << indent << "current_node: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.current_node);
    s << indent << "current_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.current_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUPERVISION_MSGS_MESSAGE_MOVETOFEEDBACK_H
