// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: utility.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_utility_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_utility_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "types.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_utility_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_utility_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_utility_2eproto;
namespace maarpc {
class SetGlobalOptionRequest;
struct SetGlobalOptionRequestDefaultTypeInternal;
extern SetGlobalOptionRequestDefaultTypeInternal _SetGlobalOptionRequest_default_instance_;
}  // namespace maarpc
PROTOBUF_NAMESPACE_OPEN
template<> ::maarpc::SetGlobalOptionRequest* Arena::CreateMaybeMessage<::maarpc::SetGlobalOptionRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace maarpc {

// ===================================================================

class SetGlobalOptionRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:maarpc.SetGlobalOptionRequest) */ {
 public:
  inline SetGlobalOptionRequest() : SetGlobalOptionRequest(nullptr) {}
  ~SetGlobalOptionRequest() override;
  explicit PROTOBUF_CONSTEXPR SetGlobalOptionRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetGlobalOptionRequest(const SetGlobalOptionRequest& from);
  SetGlobalOptionRequest(SetGlobalOptionRequest&& from) noexcept
    : SetGlobalOptionRequest() {
    *this = ::std::move(from);
  }

  inline SetGlobalOptionRequest& operator=(const SetGlobalOptionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetGlobalOptionRequest& operator=(SetGlobalOptionRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetGlobalOptionRequest& default_instance() {
    return *internal_default_instance();
  }
  enum OptionCase {
    kLogging = 1,
    kDebugMode = 2,
    OPTION_NOT_SET = 0,
  };

  static inline const SetGlobalOptionRequest* internal_default_instance() {
    return reinterpret_cast<const SetGlobalOptionRequest*>(
               &_SetGlobalOptionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SetGlobalOptionRequest& a, SetGlobalOptionRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SetGlobalOptionRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetGlobalOptionRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetGlobalOptionRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetGlobalOptionRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SetGlobalOptionRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SetGlobalOptionRequest& from) {
    SetGlobalOptionRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetGlobalOptionRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "maarpc.SetGlobalOptionRequest";
  }
  protected:
  explicit SetGlobalOptionRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLoggingFieldNumber = 1,
    kDebugModeFieldNumber = 2,
  };
  // string logging = 1;
  bool has_logging() const;
  private:
  bool _internal_has_logging() const;
  public:
  void clear_logging();
  const std::string& logging() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_logging(ArgT0&& arg0, ArgT... args);
  std::string* mutable_logging();
  PROTOBUF_NODISCARD std::string* release_logging();
  void set_allocated_logging(std::string* logging);
  private:
  const std::string& _internal_logging() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_logging(const std::string& value);
  std::string* _internal_mutable_logging();
  public:

  // bool debug_mode = 2;
  bool has_debug_mode() const;
  private:
  bool _internal_has_debug_mode() const;
  public:
  void clear_debug_mode();
  bool debug_mode() const;
  void set_debug_mode(bool value);
  private:
  bool _internal_debug_mode() const;
  void _internal_set_debug_mode(bool value);
  public:

  void clear_option();
  OptionCase option_case() const;
  // @@protoc_insertion_point(class_scope:maarpc.SetGlobalOptionRequest)
 private:
  class _Internal;
  void set_has_logging();
  void set_has_debug_mode();

  inline bool has_option() const;
  inline void clear_has_option();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union OptionUnion {
      constexpr OptionUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr logging_;
      bool debug_mode_;
    } option_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_utility_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SetGlobalOptionRequest

// string logging = 1;
inline bool SetGlobalOptionRequest::_internal_has_logging() const {
  return option_case() == kLogging;
}
inline bool SetGlobalOptionRequest::has_logging() const {
  return _internal_has_logging();
}
inline void SetGlobalOptionRequest::set_has_logging() {
  _impl_._oneof_case_[0] = kLogging;
}
inline void SetGlobalOptionRequest::clear_logging() {
  if (_internal_has_logging()) {
    _impl_.option_.logging_.Destroy();
    clear_has_option();
  }
}
inline const std::string& SetGlobalOptionRequest::logging() const {
  // @@protoc_insertion_point(field_get:maarpc.SetGlobalOptionRequest.logging)
  return _internal_logging();
}
template <typename ArgT0, typename... ArgT>
inline void SetGlobalOptionRequest::set_logging(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_logging()) {
    clear_option();
    set_has_logging();
    _impl_.option_.logging_.InitDefault();
  }
  _impl_.option_.logging_.Set( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:maarpc.SetGlobalOptionRequest.logging)
}
inline std::string* SetGlobalOptionRequest::mutable_logging() {
  std::string* _s = _internal_mutable_logging();
  // @@protoc_insertion_point(field_mutable:maarpc.SetGlobalOptionRequest.logging)
  return _s;
}
inline const std::string& SetGlobalOptionRequest::_internal_logging() const {
  if (_internal_has_logging()) {
    return _impl_.option_.logging_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void SetGlobalOptionRequest::_internal_set_logging(const std::string& value) {
  if (!_internal_has_logging()) {
    clear_option();
    set_has_logging();
    _impl_.option_.logging_.InitDefault();
  }
  _impl_.option_.logging_.Set(value, GetArenaForAllocation());
}
inline std::string* SetGlobalOptionRequest::_internal_mutable_logging() {
  if (!_internal_has_logging()) {
    clear_option();
    set_has_logging();
    _impl_.option_.logging_.InitDefault();
  }
  return _impl_.option_.logging_.Mutable(      GetArenaForAllocation());
}
inline std::string* SetGlobalOptionRequest::release_logging() {
  // @@protoc_insertion_point(field_release:maarpc.SetGlobalOptionRequest.logging)
  if (_internal_has_logging()) {
    clear_has_option();
    return _impl_.option_.logging_.Release();
  } else {
    return nullptr;
  }
}
inline void SetGlobalOptionRequest::set_allocated_logging(std::string* logging) {
  if (has_option()) {
    clear_option();
  }
  if (logging != nullptr) {
    set_has_logging();
    _impl_.option_.logging_.InitAllocated(logging, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:maarpc.SetGlobalOptionRequest.logging)
}

// bool debug_mode = 2;
inline bool SetGlobalOptionRequest::_internal_has_debug_mode() const {
  return option_case() == kDebugMode;
}
inline bool SetGlobalOptionRequest::has_debug_mode() const {
  return _internal_has_debug_mode();
}
inline void SetGlobalOptionRequest::set_has_debug_mode() {
  _impl_._oneof_case_[0] = kDebugMode;
}
inline void SetGlobalOptionRequest::clear_debug_mode() {
  if (_internal_has_debug_mode()) {
    _impl_.option_.debug_mode_ = false;
    clear_has_option();
  }
}
inline bool SetGlobalOptionRequest::_internal_debug_mode() const {
  if (_internal_has_debug_mode()) {
    return _impl_.option_.debug_mode_;
  }
  return false;
}
inline void SetGlobalOptionRequest::_internal_set_debug_mode(bool value) {
  if (!_internal_has_debug_mode()) {
    clear_option();
    set_has_debug_mode();
  }
  _impl_.option_.debug_mode_ = value;
}
inline bool SetGlobalOptionRequest::debug_mode() const {
  // @@protoc_insertion_point(field_get:maarpc.SetGlobalOptionRequest.debug_mode)
  return _internal_debug_mode();
}
inline void SetGlobalOptionRequest::set_debug_mode(bool value) {
  _internal_set_debug_mode(value);
  // @@protoc_insertion_point(field_set:maarpc.SetGlobalOptionRequest.debug_mode)
}

inline bool SetGlobalOptionRequest::has_option() const {
  return option_case() != OPTION_NOT_SET;
}
inline void SetGlobalOptionRequest::clear_has_option() {
  _impl_._oneof_case_[0] = OPTION_NOT_SET;
}
inline SetGlobalOptionRequest::OptionCase SetGlobalOptionRequest::option_case() const {
  return SetGlobalOptionRequest::OptionCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace maarpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_utility_2eproto
