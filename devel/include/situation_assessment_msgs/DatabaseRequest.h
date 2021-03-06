// Generated by gencpp from file situation_assessment_msgs/DatabaseRequest.msg
// DO NOT EDIT!


#ifndef SITUATION_ASSESSMENT_MSGS_MESSAGE_DATABASEREQUEST_H
#define SITUATION_ASSESSMENT_MSGS_MESSAGE_DATABASEREQUEST_H

#include <ros/service_traits.h>


#include <situation_assessment_msgs/DatabaseRequestRequest.h>
#include <situation_assessment_msgs/DatabaseRequestResponse.h>


namespace situation_assessment_msgs
{

struct DatabaseRequest
{

typedef DatabaseRequestRequest Request;
typedef DatabaseRequestResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DatabaseRequest
} // namespace situation_assessment_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::situation_assessment_msgs::DatabaseRequest > {
  static const char* value()
  {
    return "4a77422312858937c3dcbfb016845ab8";
  }

  static const char* value(const ::situation_assessment_msgs::DatabaseRequest&) { return value(); }
};

template<>
struct DataType< ::situation_assessment_msgs::DatabaseRequest > {
  static const char* value()
  {
    return "situation_assessment_msgs/DatabaseRequest";
  }

  static const char* value(const ::situation_assessment_msgs::DatabaseRequest&) { return value(); }
};


// service_traits::MD5Sum< ::situation_assessment_msgs::DatabaseRequestRequest> should match 
// service_traits::MD5Sum< ::situation_assessment_msgs::DatabaseRequest > 
template<>
struct MD5Sum< ::situation_assessment_msgs::DatabaseRequestRequest>
{
  static const char* value()
  {
    return MD5Sum< ::situation_assessment_msgs::DatabaseRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::DatabaseRequestRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::situation_assessment_msgs::DatabaseRequestRequest> should match 
// service_traits::DataType< ::situation_assessment_msgs::DatabaseRequest > 
template<>
struct DataType< ::situation_assessment_msgs::DatabaseRequestRequest>
{
  static const char* value()
  {
    return DataType< ::situation_assessment_msgs::DatabaseRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::DatabaseRequestRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::situation_assessment_msgs::DatabaseRequestResponse> should match 
// service_traits::MD5Sum< ::situation_assessment_msgs::DatabaseRequest > 
template<>
struct MD5Sum< ::situation_assessment_msgs::DatabaseRequestResponse>
{
  static const char* value()
  {
    return MD5Sum< ::situation_assessment_msgs::DatabaseRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::DatabaseRequestResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::situation_assessment_msgs::DatabaseRequestResponse> should match 
// service_traits::DataType< ::situation_assessment_msgs::DatabaseRequest > 
template<>
struct DataType< ::situation_assessment_msgs::DatabaseRequestResponse>
{
  static const char* value()
  {
    return DataType< ::situation_assessment_msgs::DatabaseRequest >::value();
  }
  static const char* value(const ::situation_assessment_msgs::DatabaseRequestResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SITUATION_ASSESSMENT_MSGS_MESSAGE_DATABASEREQUEST_H
