// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: instance.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_instance_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_instance_2eproto

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
#include "custom.recognizer.pb.h"
#include "custom.action.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_instance_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_instance_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_instance_2eproto;
namespace maarpc {
class InstancePostTaskRequest;
struct InstancePostTaskRequestDefaultTypeInternal;
extern InstancePostTaskRequestDefaultTypeInternal _InstancePostTaskRequest_default_instance_;
class InstanceSetTaskParamRequest;
struct InstanceSetTaskParamRequestDefaultTypeInternal;
extern InstanceSetTaskParamRequestDefaultTypeInternal _InstanceSetTaskParamRequest_default_instance_;
}  // namespace maarpc
PROTOBUF_NAMESPACE_OPEN
template<> ::maarpc::InstancePostTaskRequest* Arena::CreateMaybeMessage<::maarpc::InstancePostTaskRequest>(Arena*);
template<> ::maarpc::InstanceSetTaskParamRequest* Arena::CreateMaybeMessage<::maarpc::InstanceSetTaskParamRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace maarpc {

// ===================================================================

class InstancePostTaskRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:maarpc.InstancePostTaskRequest) */ {
 public:
  inline InstancePostTaskRequest() : InstancePostTaskRequest(nullptr) {}
  ~InstancePostTaskRequest() override;
  explicit PROTOBUF_CONSTEXPR InstancePostTaskRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  InstancePostTaskRequest(const InstancePostTaskRequest& from);
  InstancePostTaskRequest(InstancePostTaskRequest&& from) noexcept
    : InstancePostTaskRequest() {
    *this = ::std::move(from);
  }

  inline InstancePostTaskRequest& operator=(const InstancePostTaskRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline InstancePostTaskRequest& operator=(InstancePostTaskRequest&& from) noexcept {
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
  static const InstancePostTaskRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const InstancePostTaskRequest* internal_default_instance() {
    return reinterpret_cast<const InstancePostTaskRequest*>(
               &_InstancePostTaskRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InstancePostTaskRequest& a, InstancePostTaskRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(InstancePostTaskRequest* other) {
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
  void UnsafeArenaSwap(InstancePostTaskRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  InstancePostTaskRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<InstancePostTaskRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const InstancePostTaskRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const InstancePostTaskRequest& from) {
    InstancePostTaskRequest::MergeImpl(*this, from);
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
  void InternalSwap(InstancePostTaskRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "maarpc.InstancePostTaskRequest";
  }
  protected:
  explicit InstancePostTaskRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHandleFieldNumber = 1,
    kTaskFieldNumber = 2,
    kParamFieldNumber = 3,
  };
  // optional string handle = 1;
  bool has_handle() const;
  private:
  bool _internal_has_handle() const;
  public:
  void clear_handle();
  const std::string& handle() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_handle(ArgT0&& arg0, ArgT... args);
  std::string* mutable_handle();
  PROTOBUF_NODISCARD std::string* release_handle();
  void set_allocated_handle(std::string* handle);
  private:
  const std::string& _internal_handle() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_handle(const std::string& value);
  std::string* _internal_mutable_handle();
  public:

  // optional string task = 2;
  bool has_task() const;
  private:
  bool _internal_has_task() const;
  public:
  void clear_task();
  const std::string& task() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_task(ArgT0&& arg0, ArgT... args);
  std::string* mutable_task();
  PROTOBUF_NODISCARD std::string* release_task();
  void set_allocated_task(std::string* task);
  private:
  const std::string& _internal_task() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_task(const std::string& value);
  std::string* _internal_mutable_task();
  public:

  // optional string param = 3;
  bool has_param() const;
  private:
  bool _internal_has_param() const;
  public:
  void clear_param();
  const std::string& param() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_param(ArgT0&& arg0, ArgT... args);
  std::string* mutable_param();
  PROTOBUF_NODISCARD std::string* release_param();
  void set_allocated_param(std::string* param);
  private:
  const std::string& _internal_param() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_param(const std::string& value);
  std::string* _internal_mutable_param();
  public:

  // @@protoc_insertion_point(class_scope:maarpc.InstancePostTaskRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr handle_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr task_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr param_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_instance_2eproto;
};
// -------------------------------------------------------------------

class InstanceSetTaskParamRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:maarpc.InstanceSetTaskParamRequest) */ {
 public:
  inline InstanceSetTaskParamRequest() : InstanceSetTaskParamRequest(nullptr) {}
  ~InstanceSetTaskParamRequest() override;
  explicit PROTOBUF_CONSTEXPR InstanceSetTaskParamRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  InstanceSetTaskParamRequest(const InstanceSetTaskParamRequest& from);
  InstanceSetTaskParamRequest(InstanceSetTaskParamRequest&& from) noexcept
    : InstanceSetTaskParamRequest() {
    *this = ::std::move(from);
  }

  inline InstanceSetTaskParamRequest& operator=(const InstanceSetTaskParamRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline InstanceSetTaskParamRequest& operator=(InstanceSetTaskParamRequest&& from) noexcept {
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
  static const InstanceSetTaskParamRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const InstanceSetTaskParamRequest* internal_default_instance() {
    return reinterpret_cast<const InstanceSetTaskParamRequest*>(
               &_InstanceSetTaskParamRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(InstanceSetTaskParamRequest& a, InstanceSetTaskParamRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(InstanceSetTaskParamRequest* other) {
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
  void UnsafeArenaSwap(InstanceSetTaskParamRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  InstanceSetTaskParamRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<InstanceSetTaskParamRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const InstanceSetTaskParamRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const InstanceSetTaskParamRequest& from) {
    InstanceSetTaskParamRequest::MergeImpl(*this, from);
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
  void InternalSwap(InstanceSetTaskParamRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "maarpc.InstanceSetTaskParamRequest";
  }
  protected:
  explicit InstanceSetTaskParamRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHandleFieldNumber = 1,
    kParamFieldNumber = 3,
    kIdFieldNumber = 2,
  };
  // optional string handle = 1;
  bool has_handle() const;
  private:
  bool _internal_has_handle() const;
  public:
  void clear_handle();
  const std::string& handle() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_handle(ArgT0&& arg0, ArgT... args);
  std::string* mutable_handle();
  PROTOBUF_NODISCARD std::string* release_handle();
  void set_allocated_handle(std::string* handle);
  private:
  const std::string& _internal_handle() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_handle(const std::string& value);
  std::string* _internal_mutable_handle();
  public:

  // optional string param = 3;
  bool has_param() const;
  private:
  bool _internal_has_param() const;
  public:
  void clear_param();
  const std::string& param() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_param(ArgT0&& arg0, ArgT... args);
  std::string* mutable_param();
  PROTOBUF_NODISCARD std::string* release_param();
  void set_allocated_param(std::string* param);
  private:
  const std::string& _internal_param() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_param(const std::string& value);
  std::string* _internal_mutable_param();
  public:

  // optional uint64 id = 2;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  uint64_t id() const;
  void set_id(uint64_t value);
  private:
  uint64_t _internal_id() const;
  void _internal_set_id(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:maarpc.InstanceSetTaskParamRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr handle_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr param_;
    uint64_t id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_instance_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InstancePostTaskRequest

// optional string handle = 1;
inline bool InstancePostTaskRequest::_internal_has_handle() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool InstancePostTaskRequest::has_handle() const {
  return _internal_has_handle();
}
inline void InstancePostTaskRequest::clear_handle() {
  _impl_.handle_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& InstancePostTaskRequest::handle() const {
  // @@protoc_insertion_point(field_get:maarpc.InstancePostTaskRequest.handle)
  return _internal_handle();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void InstancePostTaskRequest::set_handle(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.handle_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:maarpc.InstancePostTaskRequest.handle)
}
inline std::string* InstancePostTaskRequest::mutable_handle() {
  std::string* _s = _internal_mutable_handle();
  // @@protoc_insertion_point(field_mutable:maarpc.InstancePostTaskRequest.handle)
  return _s;
}
inline const std::string& InstancePostTaskRequest::_internal_handle() const {
  return _impl_.handle_.Get();
}
inline void InstancePostTaskRequest::_internal_set_handle(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.handle_.Set(value, GetArenaForAllocation());
}
inline std::string* InstancePostTaskRequest::_internal_mutable_handle() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.handle_.Mutable(GetArenaForAllocation());
}
inline std::string* InstancePostTaskRequest::release_handle() {
  // @@protoc_insertion_point(field_release:maarpc.InstancePostTaskRequest.handle)
  if (!_internal_has_handle()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.handle_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.handle_.IsDefault()) {
    _impl_.handle_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void InstancePostTaskRequest::set_allocated_handle(std::string* handle) {
  if (handle != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.handle_.SetAllocated(handle, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.handle_.IsDefault()) {
    _impl_.handle_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:maarpc.InstancePostTaskRequest.handle)
}

// optional string task = 2;
inline bool InstancePostTaskRequest::_internal_has_task() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool InstancePostTaskRequest::has_task() const {
  return _internal_has_task();
}
inline void InstancePostTaskRequest::clear_task() {
  _impl_.task_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& InstancePostTaskRequest::task() const {
  // @@protoc_insertion_point(field_get:maarpc.InstancePostTaskRequest.task)
  return _internal_task();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void InstancePostTaskRequest::set_task(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.task_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:maarpc.InstancePostTaskRequest.task)
}
inline std::string* InstancePostTaskRequest::mutable_task() {
  std::string* _s = _internal_mutable_task();
  // @@protoc_insertion_point(field_mutable:maarpc.InstancePostTaskRequest.task)
  return _s;
}
inline const std::string& InstancePostTaskRequest::_internal_task() const {
  return _impl_.task_.Get();
}
inline void InstancePostTaskRequest::_internal_set_task(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.task_.Set(value, GetArenaForAllocation());
}
inline std::string* InstancePostTaskRequest::_internal_mutable_task() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.task_.Mutable(GetArenaForAllocation());
}
inline std::string* InstancePostTaskRequest::release_task() {
  // @@protoc_insertion_point(field_release:maarpc.InstancePostTaskRequest.task)
  if (!_internal_has_task()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.task_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.task_.IsDefault()) {
    _impl_.task_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void InstancePostTaskRequest::set_allocated_task(std::string* task) {
  if (task != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.task_.SetAllocated(task, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.task_.IsDefault()) {
    _impl_.task_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:maarpc.InstancePostTaskRequest.task)
}

// optional string param = 3;
inline bool InstancePostTaskRequest::_internal_has_param() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool InstancePostTaskRequest::has_param() const {
  return _internal_has_param();
}
inline void InstancePostTaskRequest::clear_param() {
  _impl_.param_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& InstancePostTaskRequest::param() const {
  // @@protoc_insertion_point(field_get:maarpc.InstancePostTaskRequest.param)
  return _internal_param();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void InstancePostTaskRequest::set_param(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000004u;
 _impl_.param_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:maarpc.InstancePostTaskRequest.param)
}
inline std::string* InstancePostTaskRequest::mutable_param() {
  std::string* _s = _internal_mutable_param();
  // @@protoc_insertion_point(field_mutable:maarpc.InstancePostTaskRequest.param)
  return _s;
}
inline const std::string& InstancePostTaskRequest::_internal_param() const {
  return _impl_.param_.Get();
}
inline void InstancePostTaskRequest::_internal_set_param(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.param_.Set(value, GetArenaForAllocation());
}
inline std::string* InstancePostTaskRequest::_internal_mutable_param() {
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.param_.Mutable(GetArenaForAllocation());
}
inline std::string* InstancePostTaskRequest::release_param() {
  // @@protoc_insertion_point(field_release:maarpc.InstancePostTaskRequest.param)
  if (!_internal_has_param()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* p = _impl_.param_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.param_.IsDefault()) {
    _impl_.param_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void InstancePostTaskRequest::set_allocated_param(std::string* param) {
  if (param != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.param_.SetAllocated(param, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.param_.IsDefault()) {
    _impl_.param_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:maarpc.InstancePostTaskRequest.param)
}

// -------------------------------------------------------------------

// InstanceSetTaskParamRequest

// optional string handle = 1;
inline bool InstanceSetTaskParamRequest::_internal_has_handle() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool InstanceSetTaskParamRequest::has_handle() const {
  return _internal_has_handle();
}
inline void InstanceSetTaskParamRequest::clear_handle() {
  _impl_.handle_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& InstanceSetTaskParamRequest::handle() const {
  // @@protoc_insertion_point(field_get:maarpc.InstanceSetTaskParamRequest.handle)
  return _internal_handle();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void InstanceSetTaskParamRequest::set_handle(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.handle_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:maarpc.InstanceSetTaskParamRequest.handle)
}
inline std::string* InstanceSetTaskParamRequest::mutable_handle() {
  std::string* _s = _internal_mutable_handle();
  // @@protoc_insertion_point(field_mutable:maarpc.InstanceSetTaskParamRequest.handle)
  return _s;
}
inline const std::string& InstanceSetTaskParamRequest::_internal_handle() const {
  return _impl_.handle_.Get();
}
inline void InstanceSetTaskParamRequest::_internal_set_handle(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.handle_.Set(value, GetArenaForAllocation());
}
inline std::string* InstanceSetTaskParamRequest::_internal_mutable_handle() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.handle_.Mutable(GetArenaForAllocation());
}
inline std::string* InstanceSetTaskParamRequest::release_handle() {
  // @@protoc_insertion_point(field_release:maarpc.InstanceSetTaskParamRequest.handle)
  if (!_internal_has_handle()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.handle_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.handle_.IsDefault()) {
    _impl_.handle_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void InstanceSetTaskParamRequest::set_allocated_handle(std::string* handle) {
  if (handle != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.handle_.SetAllocated(handle, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.handle_.IsDefault()) {
    _impl_.handle_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:maarpc.InstanceSetTaskParamRequest.handle)
}

// optional uint64 id = 2;
inline bool InstanceSetTaskParamRequest::_internal_has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool InstanceSetTaskParamRequest::has_id() const {
  return _internal_has_id();
}
inline void InstanceSetTaskParamRequest::clear_id() {
  _impl_.id_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline uint64_t InstanceSetTaskParamRequest::_internal_id() const {
  return _impl_.id_;
}
inline uint64_t InstanceSetTaskParamRequest::id() const {
  // @@protoc_insertion_point(field_get:maarpc.InstanceSetTaskParamRequest.id)
  return _internal_id();
}
inline void InstanceSetTaskParamRequest::_internal_set_id(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.id_ = value;
}
inline void InstanceSetTaskParamRequest::set_id(uint64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:maarpc.InstanceSetTaskParamRequest.id)
}

// optional string param = 3;
inline bool InstanceSetTaskParamRequest::_internal_has_param() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool InstanceSetTaskParamRequest::has_param() const {
  return _internal_has_param();
}
inline void InstanceSetTaskParamRequest::clear_param() {
  _impl_.param_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& InstanceSetTaskParamRequest::param() const {
  // @@protoc_insertion_point(field_get:maarpc.InstanceSetTaskParamRequest.param)
  return _internal_param();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void InstanceSetTaskParamRequest::set_param(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.param_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:maarpc.InstanceSetTaskParamRequest.param)
}
inline std::string* InstanceSetTaskParamRequest::mutable_param() {
  std::string* _s = _internal_mutable_param();
  // @@protoc_insertion_point(field_mutable:maarpc.InstanceSetTaskParamRequest.param)
  return _s;
}
inline const std::string& InstanceSetTaskParamRequest::_internal_param() const {
  return _impl_.param_.Get();
}
inline void InstanceSetTaskParamRequest::_internal_set_param(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.param_.Set(value, GetArenaForAllocation());
}
inline std::string* InstanceSetTaskParamRequest::_internal_mutable_param() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.param_.Mutable(GetArenaForAllocation());
}
inline std::string* InstanceSetTaskParamRequest::release_param() {
  // @@protoc_insertion_point(field_release:maarpc.InstanceSetTaskParamRequest.param)
  if (!_internal_has_param()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.param_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.param_.IsDefault()) {
    _impl_.param_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void InstanceSetTaskParamRequest::set_allocated_param(std::string* param) {
  if (param != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.param_.SetAllocated(param, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.param_.IsDefault()) {
    _impl_.param_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:maarpc.InstanceSetTaskParamRequest.param)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace maarpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_instance_2eproto
