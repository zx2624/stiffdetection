// Generated by gencpp from file sensor_driver_msgs/startconfig.msg
// DO NOT EDIT!


#ifndef SENSOR_DRIVER_MSGS_MESSAGE_STARTCONFIG_H
#define SENSOR_DRIVER_MSGS_MESSAGE_STARTCONFIG_H

#include <ros/service_traits.h>


#include <sensor_driver_msgs/startconfigRequest.h>
#include <sensor_driver_msgs/startconfigResponse.h>


namespace sensor_driver_msgs
{

struct startconfig
{

typedef startconfigRequest Request;
typedef startconfigResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct startconfig
} // namespace sensor_driver_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sensor_driver_msgs::startconfig > {
  static const char* value()
  {
    return "8f8af5cfa0a03531286994caaf587484";
  }

  static const char* value(const ::sensor_driver_msgs::startconfig&) { return value(); }
};

template<>
struct DataType< ::sensor_driver_msgs::startconfig > {
  static const char* value()
  {
    return "sensor_driver_msgs/startconfig";
  }

  static const char* value(const ::sensor_driver_msgs::startconfig&) { return value(); }
};


// service_traits::MD5Sum< ::sensor_driver_msgs::startconfigRequest> should match 
// service_traits::MD5Sum< ::sensor_driver_msgs::startconfig > 
template<>
struct MD5Sum< ::sensor_driver_msgs::startconfigRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_driver_msgs::startconfig >::value();
  }
  static const char* value(const ::sensor_driver_msgs::startconfigRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_driver_msgs::startconfigRequest> should match 
// service_traits::DataType< ::sensor_driver_msgs::startconfig > 
template<>
struct DataType< ::sensor_driver_msgs::startconfigRequest>
{
  static const char* value()
  {
    return DataType< ::sensor_driver_msgs::startconfig >::value();
  }
  static const char* value(const ::sensor_driver_msgs::startconfigRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sensor_driver_msgs::startconfigResponse> should match 
// service_traits::MD5Sum< ::sensor_driver_msgs::startconfig > 
template<>
struct MD5Sum< ::sensor_driver_msgs::startconfigResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_driver_msgs::startconfig >::value();
  }
  static const char* value(const ::sensor_driver_msgs::startconfigResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_driver_msgs::startconfigResponse> should match 
// service_traits::DataType< ::sensor_driver_msgs::startconfig > 
template<>
struct DataType< ::sensor_driver_msgs::startconfigResponse>
{
  static const char* value()
  {
    return DataType< ::sensor_driver_msgs::startconfig >::value();
  }
  static const char* value(const ::sensor_driver_msgs::startconfigResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SENSOR_DRIVER_MSGS_MESSAGE_STARTCONFIG_H
