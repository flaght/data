// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: symbol_pos_index.proto

#ifndef PROTOBUF_symbol_5fpos_5findex_2eproto__INCLUDED
#define PROTOBUF_symbol_5fpos_5findex_2eproto__INCLUDED

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
class SymbolPosIndex;
class SymbolPosIndexDefaultTypeInternal;
extern SymbolPosIndexDefaultTypeInternal _SymbolPosIndex_default_instance_;
}  // namespace chaos_data

namespace chaos_data {

namespace protobuf_symbol_5fpos_5findex_2eproto {
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
}  // namespace protobuf_symbol_5fpos_5findex_2eproto

// ===================================================================

class SymbolPosIndex : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:chaos_data.SymbolPosIndex) */ {
 public:
  SymbolPosIndex();
  virtual ~SymbolPosIndex();

  SymbolPosIndex(const SymbolPosIndex& from);

  inline SymbolPosIndex& operator=(const SymbolPosIndex& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SymbolPosIndex(SymbolPosIndex&& from) noexcept
    : SymbolPosIndex() {
    *this = ::std::move(from);
  }

  inline SymbolPosIndex& operator=(SymbolPosIndex&& from) noexcept {
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
  static const SymbolPosIndex& default_instance();

  static inline const SymbolPosIndex* internal_default_instance() {
    return reinterpret_cast<const SymbolPosIndex*>(
               &_SymbolPosIndex_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SymbolPosIndex* other);
  friend void swap(SymbolPosIndex& a, SymbolPosIndex& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SymbolPosIndex* New() const PROTOBUF_FINAL { return New(NULL); }

  SymbolPosIndex* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolPosIndex& from);
  void MergeFrom(const SymbolPosIndex& from);
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
  void InternalSwap(SymbolPosIndex* other);
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

  // required uint64 time_index = 1;
  bool has_time_index() const;
  void clear_time_index();
  static const int kTimeIndexFieldNumber = 1;
  ::google::protobuf::uint64 time_index() const;
  void set_time_index(::google::protobuf::uint64 value);

  // required uint32 start_pos = 2;
  bool has_start_pos() const;
  void clear_start_pos();
  static const int kStartPosFieldNumber = 2;
  ::google::protobuf::uint32 start_pos() const;
  void set_start_pos(::google::protobuf::uint32 value);

  // required uint32 end_pos = 3;
  bool has_end_pos() const;
  void clear_end_pos();
  static const int kEndPosFieldNumber = 3;
  ::google::protobuf::uint32 end_pos() const;
  void set_end_pos(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:chaos_data.SymbolPosIndex)
 private:
  void set_has_time_index();
  void clear_has_time_index();
  void set_has_start_pos();
  void clear_has_start_pos();
  void set_has_end_pos();
  void clear_has_end_pos();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint64 time_index_;
  ::google::protobuf::uint32 start_pos_;
  ::google::protobuf::uint32 end_pos_;
  friend struct protobuf_symbol_5fpos_5findex_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SymbolPosIndex

// required uint64 time_index = 1;
inline bool SymbolPosIndex::has_time_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SymbolPosIndex::set_has_time_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SymbolPosIndex::clear_has_time_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SymbolPosIndex::clear_time_index() {
  time_index_ = GOOGLE_ULONGLONG(0);
  clear_has_time_index();
}
inline ::google::protobuf::uint64 SymbolPosIndex::time_index() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolPosIndex.time_index)
  return time_index_;
}
inline void SymbolPosIndex::set_time_index(::google::protobuf::uint64 value) {
  set_has_time_index();
  time_index_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolPosIndex.time_index)
}

// required uint32 start_pos = 2;
inline bool SymbolPosIndex::has_start_pos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SymbolPosIndex::set_has_start_pos() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SymbolPosIndex::clear_has_start_pos() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SymbolPosIndex::clear_start_pos() {
  start_pos_ = 0u;
  clear_has_start_pos();
}
inline ::google::protobuf::uint32 SymbolPosIndex::start_pos() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolPosIndex.start_pos)
  return start_pos_;
}
inline void SymbolPosIndex::set_start_pos(::google::protobuf::uint32 value) {
  set_has_start_pos();
  start_pos_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolPosIndex.start_pos)
}

// required uint32 end_pos = 3;
inline bool SymbolPosIndex::has_end_pos() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SymbolPosIndex::set_has_end_pos() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SymbolPosIndex::clear_has_end_pos() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SymbolPosIndex::clear_end_pos() {
  end_pos_ = 0u;
  clear_has_end_pos();
}
inline ::google::protobuf::uint32 SymbolPosIndex::end_pos() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolPosIndex.end_pos)
  return end_pos_;
}
inline void SymbolPosIndex::set_end_pos(::google::protobuf::uint32 value) {
  set_has_end_pos();
  end_pos_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolPosIndex.end_pos)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace chaos_data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_symbol_5fpos_5findex_2eproto__INCLUDED
