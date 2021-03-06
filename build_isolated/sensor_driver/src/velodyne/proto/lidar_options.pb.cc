// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: src/velodyne/proto/lidar_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "src/velodyne/proto/lidar_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lidar {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* LidarOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LidarOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto() {
  protobuf_AddDesc_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "src/velodyne/proto/lidar_options.proto");
  GOOGLE_CHECK(file != NULL);
  LidarOptions_descriptor_ = file->message_type(0);
  static const int LidarOptions_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, x_offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, y_offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, z_offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, x_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, y_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, z_angle_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, lasernum_),
  };
  LidarOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LidarOptions_descriptor_,
      LidarOptions::default_instance_,
      LidarOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LidarOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LidarOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LidarOptions_descriptor_, &LidarOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto() {
  delete LidarOptions::default_instance_;
  delete LidarOptions_reflection_;
}

void protobuf_AddDesc_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&src/velodyne/proto/lidar_options.proto"
    "\022\013lidar.proto\"\243\001\n\014LidarOptions\022\n\n\002ip\030\001 \001"
    "(\t\022\014\n\004port\030\002 \001(\005\022\020\n\010x_offset\030\003 \001(\001\022\020\n\010y_"
    "offset\030\005 \001(\001\022\020\n\010z_offset\030\006 \001(\001\022\017\n\007x_angl"
    "e\030\007 \001(\001\022\017\n\007y_angle\030\010 \001(\001\022\017\n\007z_angle\030\t \001("
    "\001\022\020\n\010lasernum\030\n \001(\001", 219);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "src/velodyne/proto/lidar_options.proto", &protobuf_RegisterTypes);
  LidarOptions::default_instance_ = new LidarOptions();
  LidarOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto {
  StaticDescriptorInitializer_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto() {
    protobuf_AddDesc_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto();
  }
} static_descriptor_initializer_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LidarOptions::kIpFieldNumber;
const int LidarOptions::kPortFieldNumber;
const int LidarOptions::kXOffsetFieldNumber;
const int LidarOptions::kYOffsetFieldNumber;
const int LidarOptions::kZOffsetFieldNumber;
const int LidarOptions::kXAngleFieldNumber;
const int LidarOptions::kYAngleFieldNumber;
const int LidarOptions::kZAngleFieldNumber;
const int LidarOptions::kLasernumFieldNumber;
#endif  // !_MSC_VER

LidarOptions::LidarOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:lidar.proto.LidarOptions)
}

void LidarOptions::InitAsDefaultInstance() {
}

LidarOptions::LidarOptions(const LidarOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:lidar.proto.LidarOptions)
}

void LidarOptions::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_ = 0;
  x_offset_ = 0;
  y_offset_ = 0;
  z_offset_ = 0;
  x_angle_ = 0;
  y_angle_ = 0;
  z_angle_ = 0;
  lasernum_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LidarOptions::~LidarOptions() {
  // @@protoc_insertion_point(destructor:lidar.proto.LidarOptions)
  SharedDtor();
}

void LidarOptions::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void LidarOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LidarOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LidarOptions_descriptor_;
}

const LidarOptions& LidarOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_src_2fvelodyne_2fproto_2flidar_5foptions_2eproto();
  return *default_instance_;
}

LidarOptions* LidarOptions::default_instance_ = NULL;

LidarOptions* LidarOptions::New() const {
  return new LidarOptions;
}

void LidarOptions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<LidarOptions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(x_offset_, z_angle_);
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        ip_->clear();
      }
    }
    port_ = 0;
  }
  lasernum_ = 0;

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LidarOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:lidar.proto.LidarOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ip = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ip");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_port;
        break;
      }

      // optional int32 port = 2;
      case 2: {
        if (tag == 16) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_x_offset;
        break;
      }

      // optional double x_offset = 3;
      case 3: {
        if (tag == 25) {
         parse_x_offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_offset_)));
          set_has_x_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_y_offset;
        break;
      }

      // optional double y_offset = 5;
      case 5: {
        if (tag == 41) {
         parse_y_offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_offset_)));
          set_has_y_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_z_offset;
        break;
      }

      // optional double z_offset = 6;
      case 6: {
        if (tag == 49) {
         parse_z_offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_offset_)));
          set_has_z_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_x_angle;
        break;
      }

      // optional double x_angle = 7;
      case 7: {
        if (tag == 57) {
         parse_x_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &x_angle_)));
          set_has_x_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(65)) goto parse_y_angle;
        break;
      }

      // optional double y_angle = 8;
      case 8: {
        if (tag == 65) {
         parse_y_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &y_angle_)));
          set_has_y_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(73)) goto parse_z_angle;
        break;
      }

      // optional double z_angle = 9;
      case 9: {
        if (tag == 73) {
         parse_z_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &z_angle_)));
          set_has_z_angle();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(81)) goto parse_lasernum;
        break;
      }

      // optional double lasernum = 10;
      case 10: {
        if (tag == 81) {
         parse_lasernum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &lasernum_)));
          set_has_lasernum();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:lidar.proto.LidarOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lidar.proto.LidarOptions)
  return false;
#undef DO_
}

void LidarOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lidar.proto.LidarOptions)
  // optional string ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->ip(), output);
  }

  // optional int32 port = 2;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->port(), output);
  }

  // optional double x_offset = 3;
  if (has_x_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->x_offset(), output);
  }

  // optional double y_offset = 5;
  if (has_y_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->y_offset(), output);
  }

  // optional double z_offset = 6;
  if (has_z_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->z_offset(), output);
  }

  // optional double x_angle = 7;
  if (has_x_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->x_angle(), output);
  }

  // optional double y_angle = 8;
  if (has_y_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->y_angle(), output);
  }

  // optional double z_angle = 9;
  if (has_z_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->z_angle(), output);
  }

  // optional double lasernum = 10;
  if (has_lasernum()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->lasernum(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:lidar.proto.LidarOptions)
}

::google::protobuf::uint8* LidarOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:lidar.proto.LidarOptions)
  // optional string ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip(), target);
  }

  // optional int32 port = 2;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->port(), target);
  }

  // optional double x_offset = 3;
  if (has_x_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->x_offset(), target);
  }

  // optional double y_offset = 5;
  if (has_y_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->y_offset(), target);
  }

  // optional double z_offset = 6;
  if (has_z_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->z_offset(), target);
  }

  // optional double x_angle = 7;
  if (has_x_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->x_angle(), target);
  }

  // optional double y_angle = 8;
  if (has_y_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->y_angle(), target);
  }

  // optional double z_angle = 9;
  if (has_z_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->z_angle(), target);
  }

  // optional double lasernum = 10;
  if (has_lasernum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->lasernum(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lidar.proto.LidarOptions)
  return target;
}

int LidarOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string ip = 1;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

    // optional int32 port = 2;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

    // optional double x_offset = 3;
    if (has_x_offset()) {
      total_size += 1 + 8;
    }

    // optional double y_offset = 5;
    if (has_y_offset()) {
      total_size += 1 + 8;
    }

    // optional double z_offset = 6;
    if (has_z_offset()) {
      total_size += 1 + 8;
    }

    // optional double x_angle = 7;
    if (has_x_angle()) {
      total_size += 1 + 8;
    }

    // optional double y_angle = 8;
    if (has_y_angle()) {
      total_size += 1 + 8;
    }

    // optional double z_angle = 9;
    if (has_z_angle()) {
      total_size += 1 + 8;
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional double lasernum = 10;
    if (has_lasernum()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LidarOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LidarOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LidarOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LidarOptions::MergeFrom(const LidarOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_x_offset()) {
      set_x_offset(from.x_offset());
    }
    if (from.has_y_offset()) {
      set_y_offset(from.y_offset());
    }
    if (from.has_z_offset()) {
      set_z_offset(from.z_offset());
    }
    if (from.has_x_angle()) {
      set_x_angle(from.x_angle());
    }
    if (from.has_y_angle()) {
      set_y_angle(from.y_angle());
    }
    if (from.has_z_angle()) {
      set_z_angle(from.z_angle());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_lasernum()) {
      set_lasernum(from.lasernum());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LidarOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LidarOptions::CopyFrom(const LidarOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LidarOptions::IsInitialized() const {

  return true;
}

void LidarOptions::Swap(LidarOptions* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(x_offset_, other->x_offset_);
    std::swap(y_offset_, other->y_offset_);
    std::swap(z_offset_, other->z_offset_);
    std::swap(x_angle_, other->x_angle_);
    std::swap(y_angle_, other->y_angle_);
    std::swap(z_angle_, other->z_angle_);
    std::swap(lasernum_, other->lasernum_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LidarOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LidarOptions_descriptor_;
  metadata.reflection = LidarOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace lidar

// @@protoc_insertion_point(global_scope)
