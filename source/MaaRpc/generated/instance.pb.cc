// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: instance.proto

#include "instance.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace maarpc {
PROTOBUF_CONSTEXPR InstancePostTaskRequest::InstancePostTaskRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.handle_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.task_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.param_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct InstancePostTaskRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InstancePostTaskRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~InstancePostTaskRequestDefaultTypeInternal() {}
  union {
    InstancePostTaskRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InstancePostTaskRequestDefaultTypeInternal _InstancePostTaskRequest_default_instance_;
PROTOBUF_CONSTEXPR InstanceSetTaskParamRequest::InstanceSetTaskParamRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.handle_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.param_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.id_)*/uint64_t{0u}} {}
struct InstanceSetTaskParamRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InstanceSetTaskParamRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~InstanceSetTaskParamRequestDefaultTypeInternal() {}
  union {
    InstanceSetTaskParamRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InstanceSetTaskParamRequestDefaultTypeInternal _InstanceSetTaskParamRequest_default_instance_;
}  // namespace maarpc
static ::_pb::Metadata file_level_metadata_instance_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_instance_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_instance_2eproto = nullptr;

const uint32_t TableStruct_instance_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::maarpc::InstancePostTaskRequest, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::maarpc::InstancePostTaskRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::maarpc::InstancePostTaskRequest, _impl_.handle_),
  PROTOBUF_FIELD_OFFSET(::maarpc::InstancePostTaskRequest, _impl_.task_),
  PROTOBUF_FIELD_OFFSET(::maarpc::InstancePostTaskRequest, _impl_.param_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::maarpc::InstanceSetTaskParamRequest, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::maarpc::InstanceSetTaskParamRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::maarpc::InstanceSetTaskParamRequest, _impl_.handle_),
  PROTOBUF_FIELD_OFFSET(::maarpc::InstanceSetTaskParamRequest, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::maarpc::InstanceSetTaskParamRequest, _impl_.param_),
  0,
  2,
  1,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::maarpc::InstancePostTaskRequest)},
  { 12, 21, -1, sizeof(::maarpc::InstanceSetTaskParamRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::maarpc::_InstancePostTaskRequest_default_instance_._instance,
  &::maarpc::_InstanceSetTaskParamRequest_default_instance_._instance,
};

const char descriptor_table_protodef_instance_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016instance.proto\022\006maarpc\032\013types.proto\032\027c"
  "ustom.recognizer.proto\032\023custom.action.pr"
  "oto\"s\n\027InstancePostTaskRequest\022\023\n\006handle"
  "\030\001 \001(\tH\000\210\001\001\022\021\n\004task\030\002 \001(\tH\001\210\001\001\022\022\n\005param\030"
  "\003 \001(\tH\002\210\001\001B\t\n\007_handleB\007\n\005_taskB\010\n\006_param"
  "\"s\n\033InstanceSetTaskParamRequest\022\023\n\006handl"
  "e\030\001 \001(\tH\000\210\001\001\022\017\n\002id\030\002 \001(\004H\001\210\001\001\022\022\n\005param\030\003"
  " \001(\tH\002\210\001\001B\t\n\007_handleB\005\n\003_idB\010\n\006_param2\233\n"
  "\n\010Instance\0223\n\006create\022\021.maarpc.IdRequest\032"
  "\026.maarpc.HandleResponse\0227\n\007destroy\022\025.maa"
  "rpc.HandleRequest\032\025.maarpc.EmptyResponse"
  "\022c\n\032register_custom_recognizer\022\037.maarpc."
  "CustomRecognizerRequest\032 .maarpc.CustomR"
  "ecognizerResponse(\0010\001\022R\n\034unregister_cust"
  "om_recognizer\022\033.maarpc.HandleStringReque"
  "st\032\025.maarpc.EmptyResponse\022G\n\027clear_custo"
  "m_recognizer\022\025.maarpc.HandleRequest\032\025.ma"
  "arpc.EmptyResponse\022W\n\026register_custom_ac"
  "tion\022\033.maarpc.CustomActionRequest\032\034.maar"
  "pc.CustomActionResponse(\0010\001\022N\n\030unregiste"
  "r_custom_action\022\033.maarpc.HandleStringReq"
  "uest\032\025.maarpc.EmptyResponse\022C\n\023clear_cus"
  "tom_action\022\025.maarpc.HandleRequest\032\025.maar"
  "pc.EmptyResponse\022C\n\rbind_resource\022\033.maar"
  "pc.HandleHandleRequest\032\025.maarpc.EmptyRes"
  "ponse\022E\n\017bind_controller\022\033.maarpc.Handle"
  "HandleRequest\032\025.maarpc.EmptyResponse\0225\n\006"
  "inited\022\025.maarpc.HandleRequest\032\024.maarpc.B"
  "oolResponse\022A\n\tpost_task\022\037.maarpc.Instan"
  "cePostTaskRequest\032\023.maarpc.IIdResponse\022L"
  "\n\016set_task_param\022#.maarpc.InstanceSetTas"
  "kParamRequest\032\025.maarpc.EmptyResponse\022:\n\006"
  "status\022\030.maarpc.HandleIIdRequest\032\026.maarp"
  "c.StatusResponse\0228\n\004wait\022\030.maarpc.Handle"
  "IIdRequest\032\026.maarpc.StatusResponse\022;\n\014al"
  "l_finished\022\025.maarpc.HandleRequest\032\024.maar"
  "pc.BoolResponse\0224\n\004stop\022\025.maarpc.HandleR"
  "equest\032\025.maarpc.EmptyResponse\0228\n\010resourc"
  "e\022\025.maarpc.HandleRequest\032\025.maarpc.Handle"
  "Request\022:\n\ncontroller\022\025.maarpc.HandleReq"
  "uest\032\025.maarpc.HandleRequestb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_instance_2eproto_deps[3] = {
  &::descriptor_table_custom_2eaction_2eproto,
  &::descriptor_table_custom_2erecognizer_2eproto,
  &::descriptor_table_types_2eproto,
};
static ::_pbi::once_flag descriptor_table_instance_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_instance_2eproto = {
    false, false, 1635, descriptor_table_protodef_instance_2eproto,
    "instance.proto",
    &descriptor_table_instance_2eproto_once, descriptor_table_instance_2eproto_deps, 3, 2,
    schemas, file_default_instances, TableStruct_instance_2eproto::offsets,
    file_level_metadata_instance_2eproto, file_level_enum_descriptors_instance_2eproto,
    file_level_service_descriptors_instance_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_instance_2eproto_getter() {
  return &descriptor_table_instance_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_instance_2eproto(&descriptor_table_instance_2eproto);
namespace maarpc {

// ===================================================================

class InstancePostTaskRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<InstancePostTaskRequest>()._impl_._has_bits_);
  static void set_has_handle(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_task(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_param(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

InstancePostTaskRequest::InstancePostTaskRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:maarpc.InstancePostTaskRequest)
}
InstancePostTaskRequest::InstancePostTaskRequest(const InstancePostTaskRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  InstancePostTaskRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.handle_){}
    , decltype(_impl_.task_){}
    , decltype(_impl_.param_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.handle_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.handle_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_handle()) {
    _this->_impl_.handle_.Set(from._internal_handle(), 
      _this->GetArenaForAllocation());
  }
  _impl_.task_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.task_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_task()) {
    _this->_impl_.task_.Set(from._internal_task(), 
      _this->GetArenaForAllocation());
  }
  _impl_.param_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.param_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_param()) {
    _this->_impl_.param_.Set(from._internal_param(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:maarpc.InstancePostTaskRequest)
}

inline void InstancePostTaskRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.handle_){}
    , decltype(_impl_.task_){}
    , decltype(_impl_.param_){}
  };
  _impl_.handle_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.handle_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.task_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.task_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.param_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.param_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

InstancePostTaskRequest::~InstancePostTaskRequest() {
  // @@protoc_insertion_point(destructor:maarpc.InstancePostTaskRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InstancePostTaskRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.handle_.Destroy();
  _impl_.task_.Destroy();
  _impl_.param_.Destroy();
}

void InstancePostTaskRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void InstancePostTaskRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:maarpc.InstancePostTaskRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.handle_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.task_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.param_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InstancePostTaskRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string handle = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_handle();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "maarpc.InstancePostTaskRequest.handle"));
        } else
          goto handle_unusual;
        continue;
      // optional string task = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_task();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "maarpc.InstancePostTaskRequest.task"));
        } else
          goto handle_unusual;
        continue;
      // optional string param = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_param();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "maarpc.InstancePostTaskRequest.param"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* InstancePostTaskRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:maarpc.InstancePostTaskRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string handle = 1;
  if (_internal_has_handle()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_handle().data(), static_cast<int>(this->_internal_handle().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "maarpc.InstancePostTaskRequest.handle");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_handle(), target);
  }

  // optional string task = 2;
  if (_internal_has_task()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_task().data(), static_cast<int>(this->_internal_task().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "maarpc.InstancePostTaskRequest.task");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_task(), target);
  }

  // optional string param = 3;
  if (_internal_has_param()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_param().data(), static_cast<int>(this->_internal_param().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "maarpc.InstancePostTaskRequest.param");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_param(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:maarpc.InstancePostTaskRequest)
  return target;
}

size_t InstancePostTaskRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:maarpc.InstancePostTaskRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string handle = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_handle());
    }

    // optional string task = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_task());
    }

    // optional string param = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_param());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InstancePostTaskRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    InstancePostTaskRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InstancePostTaskRequest::GetClassData() const { return &_class_data_; }


void InstancePostTaskRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<InstancePostTaskRequest*>(&to_msg);
  auto& from = static_cast<const InstancePostTaskRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:maarpc.InstancePostTaskRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_handle(from._internal_handle());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_task(from._internal_task());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_param(from._internal_param());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InstancePostTaskRequest::CopyFrom(const InstancePostTaskRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:maarpc.InstancePostTaskRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InstancePostTaskRequest::IsInitialized() const {
  return true;
}

void InstancePostTaskRequest::InternalSwap(InstancePostTaskRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.handle_, lhs_arena,
      &other->_impl_.handle_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.task_, lhs_arena,
      &other->_impl_.task_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.param_, lhs_arena,
      &other->_impl_.param_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata InstancePostTaskRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_instance_2eproto_getter, &descriptor_table_instance_2eproto_once,
      file_level_metadata_instance_2eproto[0]);
}

// ===================================================================

class InstanceSetTaskParamRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<InstanceSetTaskParamRequest>()._impl_._has_bits_);
  static void set_has_handle(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_param(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

InstanceSetTaskParamRequest::InstanceSetTaskParamRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:maarpc.InstanceSetTaskParamRequest)
}
InstanceSetTaskParamRequest::InstanceSetTaskParamRequest(const InstanceSetTaskParamRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  InstanceSetTaskParamRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.handle_){}
    , decltype(_impl_.param_){}
    , decltype(_impl_.id_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.handle_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.handle_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_handle()) {
    _this->_impl_.handle_.Set(from._internal_handle(), 
      _this->GetArenaForAllocation());
  }
  _impl_.param_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.param_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_param()) {
    _this->_impl_.param_.Set(from._internal_param(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.id_ = from._impl_.id_;
  // @@protoc_insertion_point(copy_constructor:maarpc.InstanceSetTaskParamRequest)
}

inline void InstanceSetTaskParamRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.handle_){}
    , decltype(_impl_.param_){}
    , decltype(_impl_.id_){uint64_t{0u}}
  };
  _impl_.handle_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.handle_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.param_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.param_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

InstanceSetTaskParamRequest::~InstanceSetTaskParamRequest() {
  // @@protoc_insertion_point(destructor:maarpc.InstanceSetTaskParamRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InstanceSetTaskParamRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.handle_.Destroy();
  _impl_.param_.Destroy();
}

void InstanceSetTaskParamRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void InstanceSetTaskParamRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:maarpc.InstanceSetTaskParamRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.handle_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.param_.ClearNonDefaultToEmpty();
    }
  }
  _impl_.id_ = uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InstanceSetTaskParamRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string handle = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_handle();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "maarpc.InstanceSetTaskParamRequest.handle"));
        } else
          goto handle_unusual;
        continue;
      // optional uint64 id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_id(&has_bits);
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string param = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_param();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "maarpc.InstanceSetTaskParamRequest.param"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* InstanceSetTaskParamRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:maarpc.InstanceSetTaskParamRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string handle = 1;
  if (_internal_has_handle()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_handle().data(), static_cast<int>(this->_internal_handle().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "maarpc.InstanceSetTaskParamRequest.handle");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_handle(), target);
  }

  // optional uint64 id = 2;
  if (_internal_has_id()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_id(), target);
  }

  // optional string param = 3;
  if (_internal_has_param()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_param().data(), static_cast<int>(this->_internal_param().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "maarpc.InstanceSetTaskParamRequest.param");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_param(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:maarpc.InstanceSetTaskParamRequest)
  return target;
}

size_t InstanceSetTaskParamRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:maarpc.InstanceSetTaskParamRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string handle = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_handle());
    }

    // optional string param = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_param());
    }

    // optional uint64 id = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_id());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InstanceSetTaskParamRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    InstanceSetTaskParamRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InstanceSetTaskParamRequest::GetClassData() const { return &_class_data_; }


void InstanceSetTaskParamRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<InstanceSetTaskParamRequest*>(&to_msg);
  auto& from = static_cast<const InstanceSetTaskParamRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:maarpc.InstanceSetTaskParamRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_handle(from._internal_handle());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_param(from._internal_param());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.id_ = from._impl_.id_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InstanceSetTaskParamRequest::CopyFrom(const InstanceSetTaskParamRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:maarpc.InstanceSetTaskParamRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InstanceSetTaskParamRequest::IsInitialized() const {
  return true;
}

void InstanceSetTaskParamRequest::InternalSwap(InstanceSetTaskParamRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.handle_, lhs_arena,
      &other->_impl_.handle_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.param_, lhs_arena,
      &other->_impl_.param_, rhs_arena
  );
  swap(_impl_.id_, other->_impl_.id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata InstanceSetTaskParamRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_instance_2eproto_getter, &descriptor_table_instance_2eproto_once,
      file_level_metadata_instance_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace maarpc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::maarpc::InstancePostTaskRequest*
Arena::CreateMaybeMessage< ::maarpc::InstancePostTaskRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::maarpc::InstancePostTaskRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::maarpc::InstanceSetTaskParamRequest*
Arena::CreateMaybeMessage< ::maarpc::InstanceSetTaskParamRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::maarpc::InstanceSetTaskParamRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
