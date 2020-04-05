// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: a.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_a_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_a_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_a_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_a_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_a_2eproto;
namespace TestImport {
class Submessage;
class SubmessageDefaultTypeInternal;
extern SubmessageDefaultTypeInternal _Submessage_default_instance_;
class TestMessage;
class TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
}  // namespace TestImport
PROTOBUF_NAMESPACE_OPEN
template<> ::TestImport::Submessage* Arena::CreateMaybeMessage<::TestImport::Submessage>(Arena*);
template<> ::TestImport::TestMessage* Arena::CreateMaybeMessage<::TestImport::TestMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace TestImport {

// ===================================================================

class Submessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TestImport.Submessage) */ {
 public:
  Submessage();
  virtual ~Submessage();

  Submessage(const Submessage& from);
  Submessage(Submessage&& from) noexcept
    : Submessage() {
    *this = ::std::move(from);
  }

  inline Submessage& operator=(const Submessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline Submessage& operator=(Submessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Submessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Submessage* internal_default_instance() {
    return reinterpret_cast<const Submessage*>(
               &_Submessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Submessage& a, Submessage& b) {
    a.Swap(&b);
  }
  inline void Swap(Submessage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Submessage* New() const final {
    return CreateMaybeMessage<Submessage>(nullptr);
  }

  Submessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Submessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Submessage& from);
  void MergeFrom(const Submessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Submessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TestImport.Submessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_a_2eproto);
    return ::descriptor_table_a_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:TestImport.Submessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_a_2eproto;
};
// -------------------------------------------------------------------

class TestMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TestImport.TestMessage) */ {
 public:
  TestMessage();
  virtual ~TestMessage();

  TestMessage(const TestMessage& from);
  TestMessage(TestMessage&& from) noexcept
    : TestMessage() {
    *this = ::std::move(from);
  }

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestMessage& operator=(TestMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TestMessage& default_instance();

  enum TCase {
    kName = 4,
    kSubMessage = 5,
    T_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessage* internal_default_instance() {
    return reinterpret_cast<const TestMessage*>(
               &_TestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TestMessage& a, TestMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TestMessage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestMessage* New() const final {
    return CreateMaybeMessage<TestMessage>(nullptr);
  }

  TestMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TestMessage& from);
  void MergeFrom(const TestMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TestImport.TestMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_a_2eproto);
    return ::descriptor_table_a_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kListFieldNumber = 3,
    kRanyFieldNumber = 6,
    kMessageFieldNumber = 1,
    kEeFieldNumber = 2,
    kNameFieldNumber = 4,
    kSubMessageFieldNumber = 5,
  };
  // repeated string list = 3;
  int list_size() const;
  private:
  int _internal_list_size() const;
  public:
  void clear_list();
  const std::string& list(int index) const;
  std::string* mutable_list(int index);
  void set_list(int index, const std::string& value);
  void set_list(int index, std::string&& value);
  void set_list(int index, const char* value);
  void set_list(int index, const char* value, size_t size);
  std::string* add_list();
  void add_list(const std::string& value);
  void add_list(std::string&& value);
  void add_list(const char* value);
  void add_list(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_list();
  private:
  const std::string& _internal_list(int index) const;
  std::string* _internal_add_list();
  public:

  // repeated .google.protobuf.Any rany = 6;
  int rany_size() const;
  private:
  int _internal_rany_size() const;
  public:
  void clear_rany();
  PROTOBUF_NAMESPACE_ID::Any* mutable_rany(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >*
      mutable_rany();
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_rany(int index) const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_add_rany();
  public:
  const PROTOBUF_NAMESPACE_ID::Any& rany(int index) const;
  PROTOBUF_NAMESPACE_ID::Any* add_rany();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >&
      rany() const;

  // string message = 1;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // .google.protobuf.Any ee = 2;
  bool has_ee() const;
  private:
  bool _internal_has_ee() const;
  public:
  void clear_ee();
  const PROTOBUF_NAMESPACE_ID::Any& ee() const;
  PROTOBUF_NAMESPACE_ID::Any* release_ee();
  PROTOBUF_NAMESPACE_ID::Any* mutable_ee();
  void set_allocated_ee(PROTOBUF_NAMESPACE_ID::Any* ee);
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_ee() const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_ee();
  public:

  // string name = 4;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .TestImport.Submessage sub_message = 5;
  bool has_sub_message() const;
  private:
  bool _internal_has_sub_message() const;
  public:
  void clear_sub_message();
  const ::TestImport::Submessage& sub_message() const;
  ::TestImport::Submessage* release_sub_message();
  ::TestImport::Submessage* mutable_sub_message();
  void set_allocated_sub_message(::TestImport::Submessage* sub_message);
  private:
  const ::TestImport::Submessage& _internal_sub_message() const;
  ::TestImport::Submessage* _internal_mutable_sub_message();
  public:

  void clear_t();
  TCase t_case() const;
  // @@protoc_insertion_point(class_scope:TestImport.TestMessage)
 private:
  class _Internal;
  void set_has_name();
  void set_has_sub_message();

  inline bool has_t() const;
  inline void clear_has_t();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> list_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any > rany_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  PROTOBUF_NAMESPACE_ID::Any* ee_;
  union TUnion {
    TUnion() {}
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::TestImport::Submessage* sub_message_;
  } t_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_a_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Submessage

// string name = 1;
inline void Submessage::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Submessage::name() const {
  // @@protoc_insertion_point(field_get:TestImport.Submessage.name)
  return _internal_name();
}
inline void Submessage::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:TestImport.Submessage.name)
}
inline std::string* Submessage::mutable_name() {
  // @@protoc_insertion_point(field_mutable:TestImport.Submessage.name)
  return _internal_mutable_name();
}
inline const std::string& Submessage::_internal_name() const {
  return name_.GetNoArena();
}
inline void Submessage::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Submessage::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TestImport.Submessage.name)
}
inline void Submessage::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TestImport.Submessage.name)
}
inline void Submessage::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TestImport.Submessage.name)
}
inline std::string* Submessage::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Submessage::release_name() {
  // @@protoc_insertion_point(field_release:TestImport.Submessage.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Submessage::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:TestImport.Submessage.name)
}

// -------------------------------------------------------------------

// TestMessage

// string message = 1;
inline void TestMessage::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TestMessage::message() const {
  // @@protoc_insertion_point(field_get:TestImport.TestMessage.message)
  return _internal_message();
}
inline void TestMessage::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:TestImport.TestMessage.message)
}
inline std::string* TestMessage::mutable_message() {
  // @@protoc_insertion_point(field_mutable:TestImport.TestMessage.message)
  return _internal_mutable_message();
}
inline const std::string& TestMessage::_internal_message() const {
  return message_.GetNoArena();
}
inline void TestMessage::_internal_set_message(const std::string& value) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TestMessage::set_message(std::string&& value) {
  
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TestImport.TestMessage.message)
}
inline void TestMessage::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TestImport.TestMessage.message)
}
inline void TestMessage::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TestImport.TestMessage.message)
}
inline std::string* TestMessage::_internal_mutable_message() {
  
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TestMessage::release_message() {
  // @@protoc_insertion_point(field_release:TestImport.TestMessage.message)
  
  return message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TestMessage::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:TestImport.TestMessage.message)
}

// .google.protobuf.Any ee = 2;
inline bool TestMessage::_internal_has_ee() const {
  return this != internal_default_instance() && ee_ != nullptr;
}
inline bool TestMessage::has_ee() const {
  return _internal_has_ee();
}
inline const PROTOBUF_NAMESPACE_ID::Any& TestMessage::_internal_ee() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = ee_;
  return p != nullptr ? *p : *reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any*>(
      &PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Any& TestMessage::ee() const {
  // @@protoc_insertion_point(field_get:TestImport.TestMessage.ee)
  return _internal_ee();
}
inline PROTOBUF_NAMESPACE_ID::Any* TestMessage::release_ee() {
  // @@protoc_insertion_point(field_release:TestImport.TestMessage.ee)
  
  PROTOBUF_NAMESPACE_ID::Any* temp = ee_;
  ee_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* TestMessage::_internal_mutable_ee() {
  
  if (ee_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArenaNoVirtual());
    ee_ = p;
  }
  return ee_;
}
inline PROTOBUF_NAMESPACE_ID::Any* TestMessage::mutable_ee() {
  // @@protoc_insertion_point(field_mutable:TestImport.TestMessage.ee)
  return _internal_mutable_ee();
}
inline void TestMessage::set_allocated_ee(PROTOBUF_NAMESPACE_ID::Any* ee) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ee_);
  }
  if (ee) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ee = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ee, submessage_arena);
    }
    
  } else {
    
  }
  ee_ = ee;
  // @@protoc_insertion_point(field_set_allocated:TestImport.TestMessage.ee)
}

// repeated string list = 3;
inline int TestMessage::_internal_list_size() const {
  return list_.size();
}
inline int TestMessage::list_size() const {
  return _internal_list_size();
}
inline void TestMessage::clear_list() {
  list_.Clear();
}
inline std::string* TestMessage::add_list() {
  // @@protoc_insertion_point(field_add_mutable:TestImport.TestMessage.list)
  return _internal_add_list();
}
inline const std::string& TestMessage::_internal_list(int index) const {
  return list_.Get(index);
}
inline const std::string& TestMessage::list(int index) const {
  // @@protoc_insertion_point(field_get:TestImport.TestMessage.list)
  return _internal_list(index);
}
inline std::string* TestMessage::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:TestImport.TestMessage.list)
  return list_.Mutable(index);
}
inline void TestMessage::set_list(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:TestImport.TestMessage.list)
  list_.Mutable(index)->assign(value);
}
inline void TestMessage::set_list(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:TestImport.TestMessage.list)
  list_.Mutable(index)->assign(std::move(value));
}
inline void TestMessage::set_list(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:TestImport.TestMessage.list)
}
inline void TestMessage::set_list(int index, const char* value, size_t size) {
  list_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:TestImport.TestMessage.list)
}
inline std::string* TestMessage::_internal_add_list() {
  return list_.Add();
}
inline void TestMessage::add_list(const std::string& value) {
  list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:TestImport.TestMessage.list)
}
inline void TestMessage::add_list(std::string&& value) {
  list_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:TestImport.TestMessage.list)
}
inline void TestMessage::add_list(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:TestImport.TestMessage.list)
}
inline void TestMessage::add_list(const char* value, size_t size) {
  list_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:TestImport.TestMessage.list)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
TestMessage::list() const {
  // @@protoc_insertion_point(field_list:TestImport.TestMessage.list)
  return list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
TestMessage::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:TestImport.TestMessage.list)
  return &list_;
}

// string name = 4;
inline bool TestMessage::_internal_has_name() const {
  return t_case() == kName;
}
inline void TestMessage::set_has_name() {
  _oneof_case_[0] = kName;
}
inline void TestMessage::clear_name() {
  if (_internal_has_name()) {
    t_.name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    clear_has_t();
  }
}
inline const std::string& TestMessage::name() const {
  // @@protoc_insertion_point(field_get:TestImport.TestMessage.name)
  return _internal_name();
}
inline void TestMessage::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:TestImport.TestMessage.name)
}
inline std::string* TestMessage::mutable_name() {
  // @@protoc_insertion_point(field_mutable:TestImport.TestMessage.name)
  return _internal_mutable_name();
}
inline const std::string& TestMessage::_internal_name() const {
  if (_internal_has_name()) {
    return t_.name_.GetNoArena();
  }
  return *&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void TestMessage::_internal_set_name(const std::string& value) {
  if (!_internal_has_name()) {
    clear_t();
    set_has_name();
    t_.name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  t_.name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TestMessage::set_name(std::string&& value) {
  // @@protoc_insertion_point(field_set:TestImport.TestMessage.name)
  if (!_internal_has_name()) {
    clear_t();
    set_has_name();
    t_.name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  t_.name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TestImport.TestMessage.name)
}
inline void TestMessage::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!_internal_has_name()) {
    clear_t();
    set_has_name();
    t_.name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  t_.name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TestImport.TestMessage.name)
}
inline void TestMessage::set_name(const char* value, size_t size) {
  if (!_internal_has_name()) {
    clear_t();
    set_has_name();
    t_.name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  t_.name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TestImport.TestMessage.name)
}
inline std::string* TestMessage::_internal_mutable_name() {
  if (!_internal_has_name()) {
    clear_t();
    set_has_name();
    t_.name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return t_.name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TestMessage::release_name() {
  // @@protoc_insertion_point(field_release:TestImport.TestMessage.name)
  if (_internal_has_name()) {
    clear_has_t();
    return t_.name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  } else {
    return nullptr;
  }
}
inline void TestMessage::set_allocated_name(std::string* name) {
  if (has_t()) {
    clear_t();
  }
  if (name != nullptr) {
    set_has_name();
    t_.name_.UnsafeSetDefault(name);
  }
  // @@protoc_insertion_point(field_set_allocated:TestImport.TestMessage.name)
}

// .TestImport.Submessage sub_message = 5;
inline bool TestMessage::_internal_has_sub_message() const {
  return t_case() == kSubMessage;
}
inline bool TestMessage::has_sub_message() const {
  return _internal_has_sub_message();
}
inline void TestMessage::set_has_sub_message() {
  _oneof_case_[0] = kSubMessage;
}
inline void TestMessage::clear_sub_message() {
  if (_internal_has_sub_message()) {
    delete t_.sub_message_;
    clear_has_t();
  }
}
inline ::TestImport::Submessage* TestMessage::release_sub_message() {
  // @@protoc_insertion_point(field_release:TestImport.TestMessage.sub_message)
  if (_internal_has_sub_message()) {
    clear_has_t();
      ::TestImport::Submessage* temp = t_.sub_message_;
    t_.sub_message_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::TestImport::Submessage& TestMessage::_internal_sub_message() const {
  return _internal_has_sub_message()
      ? *t_.sub_message_
      : *reinterpret_cast< ::TestImport::Submessage*>(&::TestImport::_Submessage_default_instance_);
}
inline const ::TestImport::Submessage& TestMessage::sub_message() const {
  // @@protoc_insertion_point(field_get:TestImport.TestMessage.sub_message)
  return _internal_sub_message();
}
inline ::TestImport::Submessage* TestMessage::_internal_mutable_sub_message() {
  if (!_internal_has_sub_message()) {
    clear_t();
    set_has_sub_message();
    t_.sub_message_ = CreateMaybeMessage< ::TestImport::Submessage >(
        GetArenaNoVirtual());
  }
  return t_.sub_message_;
}
inline ::TestImport::Submessage* TestMessage::mutable_sub_message() {
  // @@protoc_insertion_point(field_mutable:TestImport.TestMessage.sub_message)
  return _internal_mutable_sub_message();
}

// repeated .google.protobuf.Any rany = 6;
inline int TestMessage::_internal_rany_size() const {
  return rany_.size();
}
inline int TestMessage::rany_size() const {
  return _internal_rany_size();
}
inline PROTOBUF_NAMESPACE_ID::Any* TestMessage::mutable_rany(int index) {
  // @@protoc_insertion_point(field_mutable:TestImport.TestMessage.rany)
  return rany_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >*
TestMessage::mutable_rany() {
  // @@protoc_insertion_point(field_mutable_list:TestImport.TestMessage.rany)
  return &rany_;
}
inline const PROTOBUF_NAMESPACE_ID::Any& TestMessage::_internal_rany(int index) const {
  return rany_.Get(index);
}
inline const PROTOBUF_NAMESPACE_ID::Any& TestMessage::rany(int index) const {
  // @@protoc_insertion_point(field_get:TestImport.TestMessage.rany)
  return _internal_rany(index);
}
inline PROTOBUF_NAMESPACE_ID::Any* TestMessage::_internal_add_rany() {
  return rany_.Add();
}
inline PROTOBUF_NAMESPACE_ID::Any* TestMessage::add_rany() {
  // @@protoc_insertion_point(field_add:TestImport.TestMessage.rany)
  return _internal_add_rany();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Any >&
TestMessage::rany() const {
  // @@protoc_insertion_point(field_list:TestImport.TestMessage.rany)
  return rany_;
}

inline bool TestMessage::has_t() const {
  return t_case() != T_NOT_SET;
}
inline void TestMessage::clear_has_t() {
  _oneof_case_[0] = T_NOT_SET;
}
inline TestMessage::TCase TestMessage::t_case() const {
  return TestMessage::TCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace TestImport

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_a_2eproto
