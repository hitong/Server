// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#include "Message.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_Message_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_File_Message_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_Message_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_User_Message_2eproto;
namespace Protocol {
class UserDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<User> _instance;
} _User_default_instance_;
class FileDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<File> _instance;
} _File_default_instance_;
class HeadDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Head> _instance;
  const ::Protocol::User* user_;
  const ::Protocol::File* file_;
} _Head_default_instance_;
}  // namespace Protocol
static void InitDefaultsscc_info_File_Message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Protocol::_File_default_instance_;
    new (ptr) ::Protocol::File();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Protocol::File::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_File_Message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_File_Message_2eproto}, {}};

static void InitDefaultsscc_info_Head_Message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Protocol::_Head_default_instance_;
    new (ptr) ::Protocol::Head();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Protocol::Head::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Head_Message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Head_Message_2eproto}, {
      &scc_info_User_Message_2eproto.base,
      &scc_info_File_Message_2eproto.base,}};

static void InitDefaultsscc_info_User_Message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Protocol::_User_default_instance_;
    new (ptr) ::Protocol::User();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Protocol::User::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_User_Message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_User_Message_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Message_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_Message_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Message_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Protocol::User, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Protocol::User, usr_),
  PROTOBUF_FIELD_OFFSET(::Protocol::User, psw_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Protocol::File, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Protocol::File, file_name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Protocol::Head, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::Protocol::Head, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Protocol::Head, cmd_),
  PROTOBUF_FIELD_OFFSET(::Protocol::Head, size_),
  offsetof(::Protocol::HeadDefaultTypeInternal, user_),
  offsetof(::Protocol::HeadDefaultTypeInternal, file_),
  PROTOBUF_FIELD_OFFSET(::Protocol::Head, SubMessage_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Protocol::User)},
  { 7, -1, sizeof(::Protocol::File)},
  { 13, -1, sizeof(::Protocol::Head)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Protocol::_User_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Protocol::_File_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Protocol::_Head_default_instance_),
};

const char descriptor_table_protodef_Message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rMessage.proto\022\010Protocol\" \n\004User\022\013\n\003usr"
  "\030\001 \001(\014\022\013\n\003psw\030\002 \001(\014\"\031\n\004File\022\021\n\tfile_name"
  "\030\001 \001(\t\"\267\001\n\004Head\022\037\n\003cmd\030\001 \001(\0162\022.Protocol."
  "Head.CMD\022\014\n\004size\030\002 \001(\003\022\036\n\004user\030\003 \001(\0132\016.P"
  "rotocol.UserH\000\022\036\n\004file\030\004 \001(\0132\016.Protocol."
  "FileH\000\"2\n\003CMD\022\010\n\004USER\020\000\022\n\n\006RESULT\020\001\022\013\n\007M"
  "ESSAGE\020\002\022\010\n\004FILE\020\003B\014\n\nSubMessageb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Message_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Message_2eproto_sccs[3] = {
  &scc_info_File_Message_2eproto.base,
  &scc_info_Head_Message_2eproto.base,
  &scc_info_User_Message_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Message_2eproto_once;
static bool descriptor_table_Message_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Message_2eproto = {
  &descriptor_table_Message_2eproto_initialized, descriptor_table_protodef_Message_2eproto, "Message.proto", 280,
  &descriptor_table_Message_2eproto_once, descriptor_table_Message_2eproto_sccs, descriptor_table_Message_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_Message_2eproto::offsets,
  file_level_metadata_Message_2eproto, 3, file_level_enum_descriptors_Message_2eproto, file_level_service_descriptors_Message_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Message_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Message_2eproto), true);
namespace Protocol {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Head_CMD_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Message_2eproto);
  return file_level_enum_descriptors_Message_2eproto[0];
}
bool Head_CMD_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Head_CMD Head::USER;
constexpr Head_CMD Head::RESULT;
constexpr Head_CMD Head::MESSAGE;
constexpr Head_CMD Head::FILE;
constexpr Head_CMD Head::CMD_MIN;
constexpr Head_CMD Head::CMD_MAX;
constexpr int Head::CMD_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void User::InitAsDefaultInstance() {
}
class User::_Internal {
 public:
};

User::User()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.User)
}
User::User(const User& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  usr_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_usr().empty()) {
    usr_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.usr_);
  }
  psw_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_psw().empty()) {
    psw_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.psw_);
  }
  // @@protoc_insertion_point(copy_constructor:Protocol.User)
}

void User::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_User_Message_2eproto.base);
  usr_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  psw_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

User::~User() {
  // @@protoc_insertion_point(destructor:Protocol.User)
  SharedDtor();
}

void User::SharedDtor() {
  usr_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  psw_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void User::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const User& User::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_User_Message_2eproto.base);
  return *internal_default_instance();
}


void User::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.User)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  usr_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  psw_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* User::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes usr = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_usr();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes psw = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_psw();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* User::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.User)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes usr = 1;
  if (this->usr().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_usr(), target);
  }

  // bytes psw = 2;
  if (this->psw().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_psw(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.User)
  return target;
}

size_t User::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.User)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes usr = 1;
  if (this->usr().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_usr());
  }

  // bytes psw = 2;
  if (this->psw().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_psw());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void User::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.User)
  GOOGLE_DCHECK_NE(&from, this);
  const User* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<User>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.User)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.User)
    MergeFrom(*source);
  }
}

void User::MergeFrom(const User& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.User)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.usr().size() > 0) {

    usr_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.usr_);
  }
  if (from.psw().size() > 0) {

    psw_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.psw_);
  }
}

void User::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void User::CopyFrom(const User& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool User::IsInitialized() const {
  return true;
}

void User::InternalSwap(User* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  usr_.Swap(&other->usr_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  psw_.Swap(&other->psw_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata User::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void File::InitAsDefaultInstance() {
}
class File::_Internal {
 public:
};

File::File()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.File)
}
File::File(const File& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  file_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_file_name().empty()) {
    file_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.file_name_);
  }
  // @@protoc_insertion_point(copy_constructor:Protocol.File)
}

void File::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_File_Message_2eproto.base);
  file_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

File::~File() {
  // @@protoc_insertion_point(destructor:Protocol.File)
  SharedDtor();
}

void File::SharedDtor() {
  file_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void File::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const File& File::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_File_Message_2eproto.base);
  return *internal_default_instance();
}


void File::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.File)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  file_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* File::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string file_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_file_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Protocol.File.file_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* File::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.File)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string file_name = 1;
  if (this->file_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_file_name().data(), static_cast<int>(this->_internal_file_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Protocol.File.file_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_file_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.File)
  return target;
}

size_t File::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.File)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string file_name = 1;
  if (this->file_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_file_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void File::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.File)
  GOOGLE_DCHECK_NE(&from, this);
  const File* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<File>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.File)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.File)
    MergeFrom(*source);
  }
}

void File::MergeFrom(const File& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.File)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.file_name().size() > 0) {

    file_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.file_name_);
  }
}

void File::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void File::CopyFrom(const File& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool File::IsInitialized() const {
  return true;
}

void File::InternalSwap(File* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  file_name_.Swap(&other->file_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata File::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Head::InitAsDefaultInstance() {
  ::Protocol::_Head_default_instance_.user_ = const_cast< ::Protocol::User*>(
      ::Protocol::User::internal_default_instance());
  ::Protocol::_Head_default_instance_.file_ = const_cast< ::Protocol::File*>(
      ::Protocol::File::internal_default_instance());
}
class Head::_Internal {
 public:
  static const ::Protocol::User& user(const Head* msg);
  static const ::Protocol::File& file(const Head* msg);
};

const ::Protocol::User&
Head::_Internal::user(const Head* msg) {
  return *msg->SubMessage_.user_;
}
const ::Protocol::File&
Head::_Internal::file(const Head* msg) {
  return *msg->SubMessage_.file_;
}
void Head::set_allocated_user(::Protocol::User* user) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_SubMessage();
  if (user) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      user = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, user, submessage_arena);
    }
    set_has_user();
    SubMessage_.user_ = user;
  }
  // @@protoc_insertion_point(field_set_allocated:Protocol.Head.user)
}
void Head::set_allocated_file(::Protocol::File* file) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_SubMessage();
  if (file) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      file = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, file, submessage_arena);
    }
    set_has_file();
    SubMessage_.file_ = file;
  }
  // @@protoc_insertion_point(field_set_allocated:Protocol.Head.file)
}
Head::Head()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.Head)
}
Head::Head(const Head& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&size_, &from.size_,
    static_cast<size_t>(reinterpret_cast<char*>(&cmd_) -
    reinterpret_cast<char*>(&size_)) + sizeof(cmd_));
  clear_has_SubMessage();
  switch (from.SubMessage_case()) {
    case kUser: {
      _internal_mutable_user()->::Protocol::User::MergeFrom(from._internal_user());
      break;
    }
    case kFile: {
      _internal_mutable_file()->::Protocol::File::MergeFrom(from._internal_file());
      break;
    }
    case SUBMESSAGE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:Protocol.Head)
}

void Head::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Head_Message_2eproto.base);
  ::memset(&size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&cmd_) -
      reinterpret_cast<char*>(&size_)) + sizeof(cmd_));
  clear_has_SubMessage();
}

Head::~Head() {
  // @@protoc_insertion_point(destructor:Protocol.Head)
  SharedDtor();
}

void Head::SharedDtor() {
  if (has_SubMessage()) {
    clear_SubMessage();
  }
}

void Head::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Head& Head::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Head_Message_2eproto.base);
  return *internal_default_instance();
}


void Head::clear_SubMessage() {
// @@protoc_insertion_point(one_of_clear_start:Protocol.Head)
  switch (SubMessage_case()) {
    case kUser: {
      delete SubMessage_.user_;
      break;
    }
    case kFile: {
      delete SubMessage_.file_;
      break;
    }
    case SUBMESSAGE_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = SUBMESSAGE_NOT_SET;
}


void Head::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.Head)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&cmd_) -
      reinterpret_cast<char*>(&size_)) + sizeof(cmd_));
  clear_SubMessage();
  _internal_metadata_.Clear();
}

const char* Head::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .Protocol.Head.CMD cmd = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_cmd(static_cast<::Protocol::Head_CMD>(val));
        } else goto handle_unusual;
        continue;
      // int64 size = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Protocol.User user = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_user(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Protocol.File file = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_file(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Head::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.Head)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Protocol.Head.CMD cmd = 1;
  if (this->cmd() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_cmd(), target);
  }

  // int64 size = 2;
  if (this->size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_size(), target);
  }

  // .Protocol.User user = 3;
  if (_internal_has_user()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::user(this), target, stream);
  }

  // .Protocol.File file = 4;
  if (_internal_has_file()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::file(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.Head)
  return target;
}

size_t Head::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.Head)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 size = 2;
  if (this->size() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_size());
  }

  // .Protocol.Head.CMD cmd = 1;
  if (this->cmd() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_cmd());
  }

  switch (SubMessage_case()) {
    // .Protocol.User user = 3;
    case kUser: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *SubMessage_.user_);
      break;
    }
    // .Protocol.File file = 4;
    case kFile: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *SubMessage_.file_);
      break;
    }
    case SUBMESSAGE_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Head::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.Head)
  GOOGLE_DCHECK_NE(&from, this);
  const Head* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Head>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.Head)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.Head)
    MergeFrom(*source);
  }
}

void Head::MergeFrom(const Head& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.Head)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.size() != 0) {
    _internal_set_size(from._internal_size());
  }
  if (from.cmd() != 0) {
    _internal_set_cmd(from._internal_cmd());
  }
  switch (from.SubMessage_case()) {
    case kUser: {
      _internal_mutable_user()->::Protocol::User::MergeFrom(from._internal_user());
      break;
    }
    case kFile: {
      _internal_mutable_file()->::Protocol::File::MergeFrom(from._internal_file());
      break;
    }
    case SUBMESSAGE_NOT_SET: {
      break;
    }
  }
}

void Head::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.Head)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Head::CopyFrom(const Head& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.Head)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Head::IsInitialized() const {
  return true;
}

void Head::InternalSwap(Head* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(size_, other->size_);
  swap(cmd_, other->cmd_);
  swap(SubMessage_, other->SubMessage_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata Head::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Protocol::User* Arena::CreateMaybeMessage< ::Protocol::User >(Arena* arena) {
  return Arena::CreateInternal< ::Protocol::User >(arena);
}
template<> PROTOBUF_NOINLINE ::Protocol::File* Arena::CreateMaybeMessage< ::Protocol::File >(Arena* arena) {
  return Arena::CreateInternal< ::Protocol::File >(arena);
}
template<> PROTOBUF_NOINLINE ::Protocol::Head* Arena::CreateMaybeMessage< ::Protocol::Head >(Arena* arena) {
  return Arena::CreateInternal< ::Protocol::Head >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>