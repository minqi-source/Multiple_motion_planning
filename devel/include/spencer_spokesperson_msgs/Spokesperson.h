// Generated by gencpp from file spencer_spokesperson_msgs/Spokesperson.msg
// DO NOT EDIT!


#ifndef SPENCER_SPOKESPERSON_MSGS_MESSAGE_SPOKESPERSON_H
#define SPENCER_SPOKESPERSON_MSGS_MESSAGE_SPOKESPERSON_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace spencer_spokesperson_msgs
{
template <class ContainerAllocator>
struct Spokesperson_
{
  typedef Spokesperson_<ContainerAllocator> Type;

  Spokesperson_()
    : header()
    , subject_id()
    , spokesperson_prob()  {
    }
  Spokesperson_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , subject_id(_alloc)
    , spokesperson_prob(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _subject_id_type;
  _subject_id_type subject_id;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _spokesperson_prob_type;
  _spokesperson_prob_type spokesperson_prob;




  typedef boost::shared_ptr< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> const> ConstPtr;

}; // struct Spokesperson_

typedef ::spencer_spokesperson_msgs::Spokesperson_<std::allocator<void> > Spokesperson;

typedef boost::shared_ptr< ::spencer_spokesperson_msgs::Spokesperson > SpokespersonPtr;
typedef boost::shared_ptr< ::spencer_spokesperson_msgs::Spokesperson const> SpokespersonConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_spokesperson_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'spencer_spokesperson_msgs': ['/home/zejian/catkin_ws/src/pedsim_ros/visualization/spencer_messages/perception/spencer_spokesperson_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f71a6c259057c52342e0fad60aaec68c";
  }

  static const char* value(const ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf71a6c259057c523ULL;
  static const uint64_t static_value2 = 0x42e0fad60aaec68cULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_spokesperson_msgs/Spokesperson";
  }

  static const char* value(const ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# Spokesperson detection outputs a rand-ordered list with the probability that a subject is the spokesperson\n\
# For example: When there are 5 subjects being tracked and no spokesperson is detected, each subject will receive prob. 0.2 (i.e. 1/5)\n\
\n\
uint32[]            subject_id\n\
float64[]           spokesperson_prob\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.subject_id);
      stream.next(m.spokesperson_prob);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Spokesperson_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_spokesperson_msgs::Spokesperson_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "subject_id[]" << std::endl;
    for (size_t i = 0; i < v.subject_id.size(); ++i)
    {
      s << indent << "  subject_id[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.subject_id[i]);
    }
    s << indent << "spokesperson_prob[]" << std::endl;
    for (size_t i = 0; i < v.spokesperson_prob.size(); ++i)
    {
      s << indent << "  spokesperson_prob[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.spokesperson_prob[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_SPOKESPERSON_MSGS_MESSAGE_SPOKESPERSON_H
