// Generated by gencpp from file supervision_msgs/SetRobotSimStatus.msg
// DO NOT EDIT!


#ifndef SUPERVISION_MSGS_MESSAGE_SETROBOTSIMSTATUS_H
#define SUPERVISION_MSGS_MESSAGE_SETROBOTSIMSTATUS_H

#include <ros/service_traits.h>


#include <supervision_msgs/SetRobotSimStatusRequest.h>
#include <supervision_msgs/SetRobotSimStatusResponse.h>


namespace supervision_msgs
{

struct SetRobotSimStatus
{

typedef SetRobotSimStatusRequest Request;
typedef SetRobotSimStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetRobotSimStatus
} // namespace supervision_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::supervision_msgs::SetRobotSimStatus > {
  static const char* value()
  {
    return "00e425d7d45e66a82f9704f5e3fba9a0";
  }

  static const char* value(const ::supervision_msgs::SetRobotSimStatus&) { return value(); }
};

template<>
struct DataType< ::supervision_msgs::SetRobotSimStatus > {
  static const char* value()
  {
    return "supervision_msgs/SetRobotSimStatus";
  }

  static const char* value(const ::supervision_msgs::SetRobotSimStatus&) { return value(); }
};


// service_traits::MD5Sum< ::supervision_msgs::SetRobotSimStatusRequest> should match 
// service_traits::MD5Sum< ::supervision_msgs::SetRobotSimStatus > 
template<>
struct MD5Sum< ::supervision_msgs::SetRobotSimStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::supervision_msgs::SetRobotSimStatus >::value();
  }
  static const char* value(const ::supervision_msgs::SetRobotSimStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervision_msgs::SetRobotSimStatusRequest> should match 
// service_traits::DataType< ::supervision_msgs::SetRobotSimStatus > 
template<>
struct DataType< ::supervision_msgs::SetRobotSimStatusRequest>
{
  static const char* value()
  {
    return DataType< ::supervision_msgs::SetRobotSimStatus >::value();
  }
  static const char* value(const ::supervision_msgs::SetRobotSimStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::supervision_msgs::SetRobotSimStatusResponse> should match 
// service_traits::MD5Sum< ::supervision_msgs::SetRobotSimStatus > 
template<>
struct MD5Sum< ::supervision_msgs::SetRobotSimStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::supervision_msgs::SetRobotSimStatus >::value();
  }
  static const char* value(const ::supervision_msgs::SetRobotSimStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::supervision_msgs::SetRobotSimStatusResponse> should match 
// service_traits::DataType< ::supervision_msgs::SetRobotSimStatus > 
template<>
struct DataType< ::supervision_msgs::SetRobotSimStatusResponse>
{
  static const char* value()
  {
    return DataType< ::supervision_msgs::SetRobotSimStatus >::value();
  }
  static const char* value(const ::supervision_msgs::SetRobotSimStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SUPERVISION_MSGS_MESSAGE_SETROBOTSIMSTATUS_H
