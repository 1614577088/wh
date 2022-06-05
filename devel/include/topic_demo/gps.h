// Generated by gencpp from file topic_demo/gps.msg
// DO NOT EDIT!


#ifndef TOPIC_DEMO_MESSAGE_GPS_H
#define TOPIC_DEMO_MESSAGE_GPS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace topic_demo
{
template <class ContainerAllocator>
struct gps_
{
  typedef gps_<ContainerAllocator> Type;

  gps_()
    : state()
    , x(0.0)
    , y(0.0)  {
    }
  gps_(const ContainerAllocator& _alloc)
    : state(_alloc)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::topic_demo::gps_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::topic_demo::gps_<ContainerAllocator> const> ConstPtr;

}; // struct gps_

typedef ::topic_demo::gps_<std::allocator<void> > gps;

typedef boost::shared_ptr< ::topic_demo::gps > gpsPtr;
typedef boost::shared_ptr< ::topic_demo::gps const> gpsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::topic_demo::gps_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::topic_demo::gps_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace topic_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'topic_demo': ['/home/ros/tutorial_ws/src/ROS-Academy-for-Beginners/topic_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::topic_demo::gps_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::topic_demo::gps_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_demo::gps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::topic_demo::gps_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_demo::gps_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::topic_demo::gps_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::topic_demo::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "422d8c1acf467b91eec9568156b21cd7";
  }

  static const char* value(const ::topic_demo::gps_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x422d8c1acf467b91ULL;
  static const uint64_t static_value2 = 0xeec9568156b21cd7ULL;
};

template<class ContainerAllocator>
struct DataType< ::topic_demo::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "topic_demo/gps";
  }

  static const char* value(const ::topic_demo::gps_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::topic_demo::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string state\n\
float32 x\n\
float32 y\n\
";
  }

  static const char* value(const ::topic_demo::gps_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::topic_demo::gps_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gps_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::topic_demo::gps_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::topic_demo::gps_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TOPIC_DEMO_MESSAGE_GPS_H
