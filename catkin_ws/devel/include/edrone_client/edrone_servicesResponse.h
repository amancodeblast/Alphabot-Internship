// Generated by gencpp from file edrone_client/edrone_servicesResponse.msg
// DO NOT EDIT!


#ifndef EDRONE_CLIENT_MESSAGE_EDRONE_SERVICESRESPONSE_H
#define EDRONE_CLIENT_MESSAGE_EDRONE_SERVICESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace edrone_client
{
template <class ContainerAllocator>
struct edrone_servicesResponse_
{
  typedef edrone_servicesResponse_<ContainerAllocator> Type;

  edrone_servicesResponse_()
    : rcRoll(0)
    , rcPitch(0)
    , rcYaw(0)
    , rcThrottle(0)
    , rcAUX1(0)
    , rcAUX2(0)
    , rcAUX3(0)
    , rcAUX4(0)  {
    }
  edrone_servicesResponse_(const ContainerAllocator& _alloc)
    : rcRoll(0)
    , rcPitch(0)
    , rcYaw(0)
    , rcThrottle(0)
    , rcAUX1(0)
    , rcAUX2(0)
    , rcAUX3(0)
    , rcAUX4(0)  {
  (void)_alloc;
    }



   typedef int32_t _rcRoll_type;
  _rcRoll_type rcRoll;

   typedef int32_t _rcPitch_type;
  _rcPitch_type rcPitch;

   typedef int32_t _rcYaw_type;
  _rcYaw_type rcYaw;

   typedef int32_t _rcThrottle_type;
  _rcThrottle_type rcThrottle;

   typedef int32_t _rcAUX1_type;
  _rcAUX1_type rcAUX1;

   typedef int32_t _rcAUX2_type;
  _rcAUX2_type rcAUX2;

   typedef int32_t _rcAUX3_type;
  _rcAUX3_type rcAUX3;

   typedef int32_t _rcAUX4_type;
  _rcAUX4_type rcAUX4;





  typedef boost::shared_ptr< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct edrone_servicesResponse_

typedef ::edrone_client::edrone_servicesResponse_<std::allocator<void> > edrone_servicesResponse;

typedef boost::shared_ptr< ::edrone_client::edrone_servicesResponse > edrone_servicesResponsePtr;
typedef boost::shared_ptr< ::edrone_client::edrone_servicesResponse const> edrone_servicesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::edrone_client::edrone_servicesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::edrone_client::edrone_servicesResponse_<ContainerAllocator1> & lhs, const ::edrone_client::edrone_servicesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.rcRoll == rhs.rcRoll &&
    lhs.rcPitch == rhs.rcPitch &&
    lhs.rcYaw == rhs.rcYaw &&
    lhs.rcThrottle == rhs.rcThrottle &&
    lhs.rcAUX1 == rhs.rcAUX1 &&
    lhs.rcAUX2 == rhs.rcAUX2 &&
    lhs.rcAUX3 == rhs.rcAUX3 &&
    lhs.rcAUX4 == rhs.rcAUX4;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::edrone_client::edrone_servicesResponse_<ContainerAllocator1> & lhs, const ::edrone_client::edrone_servicesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace edrone_client

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c7a7b135453cda7e71490802dabf7edd";
  }

  static const char* value(const ::edrone_client::edrone_servicesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc7a7b135453cda7eULL;
  static const uint64_t static_value2 = 0x71490802dabf7eddULL;
};

template<class ContainerAllocator>
struct DataType< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "edrone_client/edrone_servicesResponse";
  }

  static const char* value(const ::edrone_client::edrone_servicesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"\n"
"int32 rcRoll\n"
"int32 rcPitch\n"
"int32 rcYaw\n"
"int32 rcThrottle\n"
"int32 rcAUX1\n"
"int32 rcAUX2\n"
"int32 rcAUX3\n"
"int32 rcAUX4\n"
"\n"
;
  }

  static const char* value(const ::edrone_client::edrone_servicesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rcRoll);
      stream.next(m.rcPitch);
      stream.next(m.rcYaw);
      stream.next(m.rcThrottle);
      stream.next(m.rcAUX1);
      stream.next(m.rcAUX2);
      stream.next(m.rcAUX3);
      stream.next(m.rcAUX4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct edrone_servicesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::edrone_client::edrone_servicesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::edrone_client::edrone_servicesResponse_<ContainerAllocator>& v)
  {
    s << indent << "rcRoll: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcRoll);
    s << indent << "rcPitch: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcPitch);
    s << indent << "rcYaw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcYaw);
    s << indent << "rcThrottle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcThrottle);
    s << indent << "rcAUX1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcAUX1);
    s << indent << "rcAUX2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcAUX2);
    s << indent << "rcAUX3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcAUX3);
    s << indent << "rcAUX4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rcAUX4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // EDRONE_CLIENT_MESSAGE_EDRONE_SERVICESRESPONSE_H
