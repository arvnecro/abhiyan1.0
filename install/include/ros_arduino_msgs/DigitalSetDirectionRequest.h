/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/sudha/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/srv/DigitalSetDirection.srv
 *
 */


#ifndef ROS_ARDUINO_MSGS_MESSAGE_DIGITALSETDIRECTIONREQUEST_H
#define ROS_ARDUINO_MSGS_MESSAGE_DIGITALSETDIRECTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_msgs
{
template <class ContainerAllocator>
struct DigitalSetDirectionRequest_
{
  typedef DigitalSetDirectionRequest_<ContainerAllocator> Type;

  DigitalSetDirectionRequest_()
    : pin(0)
    , direction(false)  {
    }
  DigitalSetDirectionRequest_(const ContainerAllocator& _alloc)
    : pin(0)
    , direction(false)  {
    }



   typedef uint8_t _pin_type;
  _pin_type pin;

   typedef uint8_t _direction_type;
  _direction_type direction;




  typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct DigitalSetDirectionRequest_

typedef ::ros_arduino_msgs::DigitalSetDirectionRequest_<std::allocator<void> > DigitalSetDirectionRequest;

typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalSetDirectionRequest > DigitalSetDirectionRequestPtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::DigitalSetDirectionRequest const> DigitalSetDirectionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'ros_arduino_msgs': ['/home/sudha/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b10eff5e5e7e4623e1ee840cec92b372";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb10eff5e5e7e4623ULL;
  static const uint64_t static_value2 = 0xe1ee840cec92b372ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/DigitalSetDirectionRequest";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 pin\n\
bool direction\n\
";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pin);
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct DigitalSetDirectionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::DigitalSetDirectionRequest_<ContainerAllocator>& v)
  {
    s << indent << "pin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pin);
    s << indent << "direction: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_DIGITALSETDIRECTIONREQUEST_H