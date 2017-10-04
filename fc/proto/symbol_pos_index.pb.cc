// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: symbol_pos_index.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "symbol_pos_index.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace chaos_data {
class SymbolPosIndexDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<SymbolPosIndex>
     _instance;
} _SymbolPosIndex_default_instance_;

namespace protobuf_symbol_5fpos_5findex_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SymbolPosIndex, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SymbolPosIndex, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SymbolPosIndex, start_pos_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SymbolPosIndex, end_pos_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(SymbolPosIndex)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SymbolPosIndex_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "symbol_pos_index.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _SymbolPosIndex_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_SymbolPosIndex_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026symbol_pos_index.proto\022\nchaos_data\"4\n\016"
      "SymbolPosIndex\022\021\n\tstart_pos\030\001 \002(\r\022\017\n\007end"
      "_pos\030\002 \002(\r"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 90);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "symbol_pos_index.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_symbol_5fpos_5findex_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SymbolPosIndex::kStartPosFieldNumber;
const int SymbolPosIndex::kEndPosFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SymbolPosIndex::SymbolPosIndex()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_symbol_5fpos_5findex_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:chaos_data.SymbolPosIndex)
}
SymbolPosIndex::SymbolPosIndex(const SymbolPosIndex& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&start_pos_, &from.start_pos_,
    static_cast<size_t>(reinterpret_cast<char*>(&end_pos_) -
    reinterpret_cast<char*>(&start_pos_)) + sizeof(end_pos_));
  // @@protoc_insertion_point(copy_constructor:chaos_data.SymbolPosIndex)
}

void SymbolPosIndex::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&start_pos_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_pos_) -
      reinterpret_cast<char*>(&start_pos_)) + sizeof(end_pos_));
}

SymbolPosIndex::~SymbolPosIndex() {
  // @@protoc_insertion_point(destructor:chaos_data.SymbolPosIndex)
  SharedDtor();
}

void SymbolPosIndex::SharedDtor() {
}

void SymbolPosIndex::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SymbolPosIndex::descriptor() {
  protobuf_symbol_5fpos_5findex_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_symbol_5fpos_5findex_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SymbolPosIndex& SymbolPosIndex::default_instance() {
  protobuf_symbol_5fpos_5findex_2eproto::InitDefaults();
  return *internal_default_instance();
}

SymbolPosIndex* SymbolPosIndex::New(::google::protobuf::Arena* arena) const {
  SymbolPosIndex* n = new SymbolPosIndex;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SymbolPosIndex::Clear() {
// @@protoc_insertion_point(message_clear_start:chaos_data.SymbolPosIndex)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&start_pos_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&end_pos_) -
        reinterpret_cast<char*>(&start_pos_)) + sizeof(end_pos_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SymbolPosIndex::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:chaos_data.SymbolPosIndex)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 start_pos = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_start_pos();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &start_pos_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint32 end_pos = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_end_pos();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &end_pos_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:chaos_data.SymbolPosIndex)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:chaos_data.SymbolPosIndex)
  return false;
#undef DO_
}

void SymbolPosIndex::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:chaos_data.SymbolPosIndex)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 start_pos = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->start_pos(), output);
  }

  // required uint32 end_pos = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->end_pos(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:chaos_data.SymbolPosIndex)
}

::google::protobuf::uint8* SymbolPosIndex::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:chaos_data.SymbolPosIndex)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 start_pos = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->start_pos(), target);
  }

  // required uint32 end_pos = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->end_pos(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chaos_data.SymbolPosIndex)
  return target;
}

size_t SymbolPosIndex::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:chaos_data.SymbolPosIndex)
  size_t total_size = 0;

  if (has_start_pos()) {
    // required uint32 start_pos = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->start_pos());
  }

  if (has_end_pos()) {
    // required uint32 end_pos = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->end_pos());
  }

  return total_size;
}
size_t SymbolPosIndex::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chaos_data.SymbolPosIndex)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required uint32 start_pos = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->start_pos());

    // required uint32 end_pos = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->end_pos());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SymbolPosIndex::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:chaos_data.SymbolPosIndex)
  GOOGLE_DCHECK_NE(&from, this);
  const SymbolPosIndex* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SymbolPosIndex>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:chaos_data.SymbolPosIndex)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:chaos_data.SymbolPosIndex)
    MergeFrom(*source);
  }
}

void SymbolPosIndex::MergeFrom(const SymbolPosIndex& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chaos_data.SymbolPosIndex)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      start_pos_ = from.start_pos_;
    }
    if (cached_has_bits & 0x00000002u) {
      end_pos_ = from.end_pos_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SymbolPosIndex::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:chaos_data.SymbolPosIndex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SymbolPosIndex::CopyFrom(const SymbolPosIndex& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chaos_data.SymbolPosIndex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SymbolPosIndex::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void SymbolPosIndex::Swap(SymbolPosIndex* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SymbolPosIndex::InternalSwap(SymbolPosIndex* other) {
  using std::swap;
  swap(start_pos_, other->start_pos_);
  swap(end_pos_, other->end_pos_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SymbolPosIndex::GetMetadata() const {
  protobuf_symbol_5fpos_5findex_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_symbol_5fpos_5findex_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SymbolPosIndex

// required uint32 start_pos = 1;
bool SymbolPosIndex::has_start_pos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SymbolPosIndex::set_has_start_pos() {
  _has_bits_[0] |= 0x00000001u;
}
void SymbolPosIndex::clear_has_start_pos() {
  _has_bits_[0] &= ~0x00000001u;
}
void SymbolPosIndex::clear_start_pos() {
  start_pos_ = 0u;
  clear_has_start_pos();
}
::google::protobuf::uint32 SymbolPosIndex::start_pos() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolPosIndex.start_pos)
  return start_pos_;
}
void SymbolPosIndex::set_start_pos(::google::protobuf::uint32 value) {
  set_has_start_pos();
  start_pos_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolPosIndex.start_pos)
}

// required uint32 end_pos = 2;
bool SymbolPosIndex::has_end_pos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SymbolPosIndex::set_has_end_pos() {
  _has_bits_[0] |= 0x00000002u;
}
void SymbolPosIndex::clear_has_end_pos() {
  _has_bits_[0] &= ~0x00000002u;
}
void SymbolPosIndex::clear_end_pos() {
  end_pos_ = 0u;
  clear_has_end_pos();
}
::google::protobuf::uint32 SymbolPosIndex::end_pos() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolPosIndex.end_pos)
  return end_pos_;
}
void SymbolPosIndex::set_end_pos(::google::protobuf::uint32 value) {
  set_has_end_pos();
  end_pos_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolPosIndex.end_pos)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace chaos_data

// @@protoc_insertion_point(global_scope)
