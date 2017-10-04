// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: symbol_l2_order_state.proto

#ifndef PROTOBUF_symbol_5fl2_5forder_5fstate_2eproto__INCLUDED
#define PROTOBUF_symbol_5fl2_5forder_5fstate_2eproto__INCLUDED

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
class SymbolL2OrderState;
class SymbolL2OrderStateDefaultTypeInternal;
extern SymbolL2OrderStateDefaultTypeInternal _SymbolL2OrderState_default_instance_;
class SymbolL2OrderState_SymbolOrderStat;
class SymbolL2OrderState_SymbolOrderStatDefaultTypeInternal;
extern SymbolL2OrderState_SymbolOrderStatDefaultTypeInternal _SymbolL2OrderState_SymbolOrderStat_default_instance_;
}  // namespace chaos_data

namespace chaos_data {

namespace protobuf_symbol_5fl2_5forder_5fstate_2eproto {
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
}  // namespace protobuf_symbol_5fl2_5forder_5fstate_2eproto

// ===================================================================

class SymbolL2OrderState_SymbolOrderStat : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:chaos_data.SymbolL2OrderState.SymbolOrderStat) */ {
 public:
  SymbolL2OrderState_SymbolOrderStat();
  virtual ~SymbolL2OrderState_SymbolOrderStat();

  SymbolL2OrderState_SymbolOrderStat(const SymbolL2OrderState_SymbolOrderStat& from);

  inline SymbolL2OrderState_SymbolOrderStat& operator=(const SymbolL2OrderState_SymbolOrderStat& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SymbolL2OrderState_SymbolOrderStat(SymbolL2OrderState_SymbolOrderStat&& from) noexcept
    : SymbolL2OrderState_SymbolOrderStat() {
    *this = ::std::move(from);
  }

  inline SymbolL2OrderState_SymbolOrderStat& operator=(SymbolL2OrderState_SymbolOrderStat&& from) noexcept {
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
  static const SymbolL2OrderState_SymbolOrderStat& default_instance();

  static inline const SymbolL2OrderState_SymbolOrderStat* internal_default_instance() {
    return reinterpret_cast<const SymbolL2OrderState_SymbolOrderStat*>(
               &_SymbolL2OrderState_SymbolOrderStat_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SymbolL2OrderState_SymbolOrderStat* other);
  friend void swap(SymbolL2OrderState_SymbolOrderStat& a, SymbolL2OrderState_SymbolOrderStat& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SymbolL2OrderState_SymbolOrderStat* New() const PROTOBUF_FINAL { return New(NULL); }

  SymbolL2OrderState_SymbolOrderStat* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolL2OrderState_SymbolOrderStat& from);
  void MergeFrom(const SymbolL2OrderState_SymbolOrderStat& from);
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
  void InternalSwap(SymbolL2OrderState_SymbolOrderStat* other);
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

  // repeated uint64 buy_order_vol = 1;
  int buy_order_vol_size() const;
  void clear_buy_order_vol();
  static const int kBuyOrderVolFieldNumber = 1;
  ::google::protobuf::uint64 buy_order_vol(int index) const;
  void set_buy_order_vol(int index, ::google::protobuf::uint64 value);
  void add_buy_order_vol(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      buy_order_vol() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_buy_order_vol();

  // repeated uint64 sell_order_vol = 2;
  int sell_order_vol_size() const;
  void clear_sell_order_vol();
  static const int kSellOrderVolFieldNumber = 2;
  ::google::protobuf::uint64 sell_order_vol(int index) const;
  void set_sell_order_vol(int index, ::google::protobuf::uint64 value);
  void add_sell_order_vol(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      sell_order_vol() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_sell_order_vol();

  // repeated uint64 order_num = 3;
  int order_num_size() const;
  void clear_order_num();
  static const int kOrderNumFieldNumber = 3;
  ::google::protobuf::uint64 order_num(int index) const;
  void set_order_num(int index, ::google::protobuf::uint64 value);
  void add_order_num(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      order_num() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_order_num();

  // repeated uint64 vol = 4;
  int vol_size() const;
  void clear_vol();
  static const int kVolFieldNumber = 4;
  ::google::protobuf::uint64 vol(int index) const;
  void set_vol(int index, ::google::protobuf::uint64 value);
  void add_vol(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      vol() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_vol();

  // @@protoc_insertion_point(class_scope:chaos_data.SymbolL2OrderState.SymbolOrderStat)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > buy_order_vol_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > sell_order_vol_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > order_num_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > vol_;
  friend struct protobuf_symbol_5fl2_5forder_5fstate_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SymbolL2OrderState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:chaos_data.SymbolL2OrderState) */ {
 public:
  SymbolL2OrderState();
  virtual ~SymbolL2OrderState();

  SymbolL2OrderState(const SymbolL2OrderState& from);

  inline SymbolL2OrderState& operator=(const SymbolL2OrderState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SymbolL2OrderState(SymbolL2OrderState&& from) noexcept
    : SymbolL2OrderState() {
    *this = ::std::move(from);
  }

  inline SymbolL2OrderState& operator=(SymbolL2OrderState&& from) noexcept {
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
  static const SymbolL2OrderState& default_instance();

  static inline const SymbolL2OrderState* internal_default_instance() {
    return reinterpret_cast<const SymbolL2OrderState*>(
               &_SymbolL2OrderState_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SymbolL2OrderState* other);
  friend void swap(SymbolL2OrderState& a, SymbolL2OrderState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SymbolL2OrderState* New() const PROTOBUF_FINAL { return New(NULL); }

  SymbolL2OrderState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SymbolL2OrderState& from);
  void MergeFrom(const SymbolL2OrderState& from);
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
  void InternalSwap(SymbolL2OrderState* other);
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

  typedef SymbolL2OrderState_SymbolOrderStat SymbolOrderStat;

  // accessors -------------------------------------------------------

  // optional .chaos_data.SymbolL2OrderState.SymbolOrderStat order_state = 2;
  bool has_order_state() const;
  void clear_order_state();
  static const int kOrderStateFieldNumber = 2;
  const ::chaos_data::SymbolL2OrderState_SymbolOrderStat& order_state() const;
  ::chaos_data::SymbolL2OrderState_SymbolOrderStat* mutable_order_state();
  ::chaos_data::SymbolL2OrderState_SymbolOrderStat* release_order_state();
  void set_allocated_order_state(::chaos_data::SymbolL2OrderState_SymbolOrderStat* order_state);

  // required uint32 time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::google::protobuf::uint32 time() const;
  void set_time(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:chaos_data.SymbolL2OrderState)
 private:
  void set_has_time();
  void clear_has_time();
  void set_has_order_state();
  void clear_has_order_state();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::chaos_data::SymbolL2OrderState_SymbolOrderStat* order_state_;
  ::google::protobuf::uint32 time_;
  friend struct protobuf_symbol_5fl2_5forder_5fstate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SymbolL2OrderState_SymbolOrderStat

// repeated uint64 buy_order_vol = 1;
inline int SymbolL2OrderState_SymbolOrderStat::buy_order_vol_size() const {
  return buy_order_vol_.size();
}
inline void SymbolL2OrderState_SymbolOrderStat::clear_buy_order_vol() {
  buy_order_vol_.Clear();
}
inline ::google::protobuf::uint64 SymbolL2OrderState_SymbolOrderStat::buy_order_vol(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolL2OrderState.SymbolOrderStat.buy_order_vol)
  return buy_order_vol_.Get(index);
}
inline void SymbolL2OrderState_SymbolOrderStat::set_buy_order_vol(int index, ::google::protobuf::uint64 value) {
  buy_order_vol_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolL2OrderState.SymbolOrderStat.buy_order_vol)
}
inline void SymbolL2OrderState_SymbolOrderStat::add_buy_order_vol(::google::protobuf::uint64 value) {
  buy_order_vol_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolL2OrderState.SymbolOrderStat.buy_order_vol)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
SymbolL2OrderState_SymbolOrderStat::buy_order_vol() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.buy_order_vol)
  return buy_order_vol_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
SymbolL2OrderState_SymbolOrderStat::mutable_buy_order_vol() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.buy_order_vol)
  return &buy_order_vol_;
}

// repeated uint64 sell_order_vol = 2;
inline int SymbolL2OrderState_SymbolOrderStat::sell_order_vol_size() const {
  return sell_order_vol_.size();
}
inline void SymbolL2OrderState_SymbolOrderStat::clear_sell_order_vol() {
  sell_order_vol_.Clear();
}
inline ::google::protobuf::uint64 SymbolL2OrderState_SymbolOrderStat::sell_order_vol(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolL2OrderState.SymbolOrderStat.sell_order_vol)
  return sell_order_vol_.Get(index);
}
inline void SymbolL2OrderState_SymbolOrderStat::set_sell_order_vol(int index, ::google::protobuf::uint64 value) {
  sell_order_vol_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolL2OrderState.SymbolOrderStat.sell_order_vol)
}
inline void SymbolL2OrderState_SymbolOrderStat::add_sell_order_vol(::google::protobuf::uint64 value) {
  sell_order_vol_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolL2OrderState.SymbolOrderStat.sell_order_vol)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
SymbolL2OrderState_SymbolOrderStat::sell_order_vol() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.sell_order_vol)
  return sell_order_vol_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
SymbolL2OrderState_SymbolOrderStat::mutable_sell_order_vol() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.sell_order_vol)
  return &sell_order_vol_;
}

// repeated uint64 order_num = 3;
inline int SymbolL2OrderState_SymbolOrderStat::order_num_size() const {
  return order_num_.size();
}
inline void SymbolL2OrderState_SymbolOrderStat::clear_order_num() {
  order_num_.Clear();
}
inline ::google::protobuf::uint64 SymbolL2OrderState_SymbolOrderStat::order_num(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolL2OrderState.SymbolOrderStat.order_num)
  return order_num_.Get(index);
}
inline void SymbolL2OrderState_SymbolOrderStat::set_order_num(int index, ::google::protobuf::uint64 value) {
  order_num_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolL2OrderState.SymbolOrderStat.order_num)
}
inline void SymbolL2OrderState_SymbolOrderStat::add_order_num(::google::protobuf::uint64 value) {
  order_num_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolL2OrderState.SymbolOrderStat.order_num)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
SymbolL2OrderState_SymbolOrderStat::order_num() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.order_num)
  return order_num_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
SymbolL2OrderState_SymbolOrderStat::mutable_order_num() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.order_num)
  return &order_num_;
}

// repeated uint64 vol = 4;
inline int SymbolL2OrderState_SymbolOrderStat::vol_size() const {
  return vol_.size();
}
inline void SymbolL2OrderState_SymbolOrderStat::clear_vol() {
  vol_.Clear();
}
inline ::google::protobuf::uint64 SymbolL2OrderState_SymbolOrderStat::vol(int index) const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolL2OrderState.SymbolOrderStat.vol)
  return vol_.Get(index);
}
inline void SymbolL2OrderState_SymbolOrderStat::set_vol(int index, ::google::protobuf::uint64 value) {
  vol_.Set(index, value);
  // @@protoc_insertion_point(field_set:chaos_data.SymbolL2OrderState.SymbolOrderStat.vol)
}
inline void SymbolL2OrderState_SymbolOrderStat::add_vol(::google::protobuf::uint64 value) {
  vol_.Add(value);
  // @@protoc_insertion_point(field_add:chaos_data.SymbolL2OrderState.SymbolOrderStat.vol)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
SymbolL2OrderState_SymbolOrderStat::vol() const {
  // @@protoc_insertion_point(field_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.vol)
  return vol_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
SymbolL2OrderState_SymbolOrderStat::mutable_vol() {
  // @@protoc_insertion_point(field_mutable_list:chaos_data.SymbolL2OrderState.SymbolOrderStat.vol)
  return &vol_;
}

// -------------------------------------------------------------------

// SymbolL2OrderState

// required uint32 time = 1;
inline bool SymbolL2OrderState::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SymbolL2OrderState::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SymbolL2OrderState::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SymbolL2OrderState::clear_time() {
  time_ = 0u;
  clear_has_time();
}
inline ::google::protobuf::uint32 SymbolL2OrderState::time() const {
  // @@protoc_insertion_point(field_get:chaos_data.SymbolL2OrderState.time)
  return time_;
}
inline void SymbolL2OrderState::set_time(::google::protobuf::uint32 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:chaos_data.SymbolL2OrderState.time)
}

// optional .chaos_data.SymbolL2OrderState.SymbolOrderStat order_state = 2;
inline bool SymbolL2OrderState::has_order_state() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SymbolL2OrderState::set_has_order_state() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SymbolL2OrderState::clear_has_order_state() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SymbolL2OrderState::clear_order_state() {
  if (order_state_ != NULL) order_state_->::chaos_data::SymbolL2OrderState_SymbolOrderStat::Clear();
  clear_has_order_state();
}
inline const ::chaos_data::SymbolL2OrderState_SymbolOrderStat& SymbolL2OrderState::order_state() const {
  const ::chaos_data::SymbolL2OrderState_SymbolOrderStat* p = order_state_;
  // @@protoc_insertion_point(field_get:chaos_data.SymbolL2OrderState.order_state)
  return p != NULL ? *p : *reinterpret_cast<const ::chaos_data::SymbolL2OrderState_SymbolOrderStat*>(
      &::chaos_data::_SymbolL2OrderState_SymbolOrderStat_default_instance_);
}
inline ::chaos_data::SymbolL2OrderState_SymbolOrderStat* SymbolL2OrderState::mutable_order_state() {
  set_has_order_state();
  if (order_state_ == NULL) {
    order_state_ = new ::chaos_data::SymbolL2OrderState_SymbolOrderStat;
  }
  // @@protoc_insertion_point(field_mutable:chaos_data.SymbolL2OrderState.order_state)
  return order_state_;
}
inline ::chaos_data::SymbolL2OrderState_SymbolOrderStat* SymbolL2OrderState::release_order_state() {
  // @@protoc_insertion_point(field_release:chaos_data.SymbolL2OrderState.order_state)
  clear_has_order_state();
  ::chaos_data::SymbolL2OrderState_SymbolOrderStat* temp = order_state_;
  order_state_ = NULL;
  return temp;
}
inline void SymbolL2OrderState::set_allocated_order_state(::chaos_data::SymbolL2OrderState_SymbolOrderStat* order_state) {
  delete order_state_;
  order_state_ = order_state;
  if (order_state) {
    set_has_order_state();
  } else {
    clear_has_order_state();
  }
  // @@protoc_insertion_point(field_set_allocated:chaos_data.SymbolL2OrderState.order_state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace chaos_data

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_symbol_5fl2_5forder_5fstate_2eproto__INCLUDED