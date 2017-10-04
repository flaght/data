// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: symbol_his_iopv.proto

#ifndef PROTOBUF_symbol_5fhis_5fiopv_2eproto__INCLUDED
#define PROTOBUF_symbol_5fhis_5fiopv_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace chaos_data {
class SymbolHisIOPV;
class SymbolHisIOPVDefaultTypeInternal;
extern SymbolHisIOPVDefaultTypeInternal _SymbolHisIOPV_default_instance_;
}  // namespace chaos_data

namespace chaos_data {

namespace protobuf_symbol_5fhis_5fiopv_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_symbol_5fhis_5fiopv_2eproto

// ===================================================================

class SymbolHisIOPV : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:chaos_data.SymbolHisIOPV) */ {
 public:
  SymbolHisIOPV();
  virtual ~SymbolHisIOPV();

  SymbolHisIOPV(const SymbolHisIOPV& from);

  inline SymbolHisIOPV& operator=(const SymbolHisIOPV& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SymbolHisIOPV(SymbolHisIOPV&& from) noexcept
    : SymbolHisIOPV() {
    *this = ::std::move(from);
  }

  inline SymbolHisIOPV& operator=(SymbolHisIOPV&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SymbolHisIOPV& default_instance();

  static inline const SymbolHisIOPV* internal_default_instance() {
    return reinterpret_cast<const SymbolHisIOPV*>(
               &_SymbolHisIOPV_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SymbolHisIOPV* other);
  friend void swap(SymbolHisIOPV& a, SymbolHisIOPV& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SymbolHisIOPV* New() const PROTOBUF_FINAL { return New(NULL); }

  SymbolHisIOPV* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolHisIOPV& from);
  void MergeFrom(const SymbolHisIOPV& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SymbolHisIOPV* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::google::protobuf::uint32 time() const;
  void set_time(::google::protobuf::uint32 value);

  // optional float value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  float value() const;
  void set_value(float value);

  // @@protoc_insertion_point(class_scope:chaos_data.SymbolHisIOPV)
 private:
  void set_has_time();
  void clear_has_time();
  void set_has_value();
  void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 time_;
  float value_;
  friend struct protobuf_symbol_5fhis_5fiopv_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SymbolHisIOPV

// optional uint32 time = 1;
inline bool SymbolHisIOPV::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SymbolHisIOPV::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SymbolHisIOPV::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SymbolHisIOPV::clear_time() {
  time_ = 0u;
  clear_has_time();
}
inline ::google::protobuf::uint32 SymbolHisIOPV::time() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolHisIOPV.time)
  return time_;
}
inline void SymbolHisIOPV::set_time(::google::protobuf::uint32 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolHisIOPV.time)
}

// optional float value = 2;
inline bool SymbolHisIOPV::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SymbolHisIOPV::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SymbolHisIOPV::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SymbolHisIOPV::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline float SymbolHisIOPV::value() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolHisIOPV.value)
  return value_;
}
inline void SymbolHisIOPV::set_value(float value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolHisIOPV.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace chaos_data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_symbol_5fhis_5fiopv_2eproto__INCLUDED