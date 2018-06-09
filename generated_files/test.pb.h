// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_INCLUDED_test_2eproto
#define PROTOBUF_INCLUDED_test_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_test_2eproto 

namespace protobuf_test_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_test_2eproto
namespace ietf_dpdk {
class leaf_testing;
class leaf_testingDefaultTypeInternal;
extern leaf_testingDefaultTypeInternal _leaf_testing_default_instance_;
class system;
class systemDefaultTypeInternal;
extern systemDefaultTypeInternal _system_default_instance_;
class system_login;
class system_loginDefaultTypeInternal;
extern system_loginDefaultTypeInternal _system_login_default_instance_;
class system_login_user;
class system_login_userDefaultTypeInternal;
extern system_login_userDefaultTypeInternal _system_login_user_default_instance_;
}  // namespace ietf_dpdk
namespace google {
namespace protobuf {
template<> ::ietf_dpdk::leaf_testing* Arena::CreateMaybeMessage<::ietf_dpdk::leaf_testing>(Arena*);
template<> ::ietf_dpdk::system* Arena::CreateMaybeMessage<::ietf_dpdk::system>(Arena*);
template<> ::ietf_dpdk::system_login* Arena::CreateMaybeMessage<::ietf_dpdk::system_login>(Arena*);
template<> ::ietf_dpdk::system_login_user* Arena::CreateMaybeMessage<::ietf_dpdk::system_login_user>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ietf_dpdk {

// ===================================================================

class leaf_testing : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ietf_dpdk.leaf_testing) */ {
 public:
  leaf_testing();
  virtual ~leaf_testing();

  leaf_testing(const leaf_testing& from);

  inline leaf_testing& operator=(const leaf_testing& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  leaf_testing(leaf_testing&& from) noexcept
    : leaf_testing() {
    *this = ::std::move(from);
  }

  inline leaf_testing& operator=(leaf_testing&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const leaf_testing& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const leaf_testing* internal_default_instance() {
    return reinterpret_cast<const leaf_testing*>(
               &_leaf_testing_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(leaf_testing* other);
  friend void swap(leaf_testing& a, leaf_testing& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline leaf_testing* New() const final {
    return CreateMaybeMessage<leaf_testing>(NULL);
  }

  leaf_testing* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<leaf_testing>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const leaf_testing& from);
  void MergeFrom(const leaf_testing& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(leaf_testing* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string leaf_testing = 1;
  void clear_leaf_testing();
  static const int kLeafTestingFieldNumber = 1;
  const ::std::string& leaf_testing() const;
  void set_leaf_testing(const ::std::string& value);
  #if LANG_CXX11
  void set_leaf_testing(::std::string&& value);
  #endif
  void set_leaf_testing(const char* value);
  void set_leaf_testing(const char* value, size_t size);
  ::std::string* mutable_leaf_testing();
  ::std::string* release_leaf_testing();
  void set_allocated_leaf_testing(::std::string* leaf_testing);

  // @@protoc_insertion_point(class_scope:ietf_dpdk.leaf_testing)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr leaf_testing_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class system_login_user : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ietf_dpdk.system.login.user) */ {
 public:
  system_login_user();
  virtual ~system_login_user();

  system_login_user(const system_login_user& from);

  inline system_login_user& operator=(const system_login_user& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  system_login_user(system_login_user&& from) noexcept
    : system_login_user() {
    *this = ::std::move(from);
  }

  inline system_login_user& operator=(system_login_user&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const system_login_user& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const system_login_user* internal_default_instance() {
    return reinterpret_cast<const system_login_user*>(
               &_system_login_user_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(system_login_user* other);
  friend void swap(system_login_user& a, system_login_user& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline system_login_user* New() const final {
    return CreateMaybeMessage<system_login_user>(NULL);
  }

  system_login_user* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<system_login_user>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const system_login_user& from);
  void MergeFrom(const system_login_user& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(system_login_user* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string full_name = 2;
  void clear_full_name();
  static const int kFullNameFieldNumber = 2;
  const ::std::string& full_name() const;
  void set_full_name(const ::std::string& value);
  #if LANG_CXX11
  void set_full_name(::std::string&& value);
  #endif
  void set_full_name(const char* value);
  void set_full_name(const char* value, size_t size);
  ::std::string* mutable_full_name();
  ::std::string* release_full_name();
  void set_allocated_full_name(::std::string* full_name);

  // string class = 3;
  void clear_class_();
  static const int kClassFieldNumber = 3;
  const ::std::string& class_() const;
  void set_class_(const ::std::string& value);
  #if LANG_CXX11
  void set_class_(::std::string&& value);
  #endif
  void set_class_(const char* value);
  void set_class_(const char* value, size_t size);
  ::std::string* mutable_class_();
  ::std::string* release_class_();
  void set_allocated_class_(::std::string* class_);

  // @@protoc_insertion_point(class_scope:ietf_dpdk.system.login.user)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr full_name_;
  ::google::protobuf::internal::ArenaStringPtr class__;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class system_login : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ietf_dpdk.system.login) */ {
 public:
  system_login();
  virtual ~system_login();

  system_login(const system_login& from);

  inline system_login& operator=(const system_login& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  system_login(system_login&& from) noexcept
    : system_login() {
    *this = ::std::move(from);
  }

  inline system_login& operator=(system_login&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const system_login& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const system_login* internal_default_instance() {
    return reinterpret_cast<const system_login*>(
               &_system_login_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(system_login* other);
  friend void swap(system_login& a, system_login& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline system_login* New() const final {
    return CreateMaybeMessage<system_login>(NULL);
  }

  system_login* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<system_login>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const system_login& from);
  void MergeFrom(const system_login& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(system_login* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef system_login_user user;

  // accessors -------------------------------------------------------

  // string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:ietf_dpdk.system.login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class system : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ietf_dpdk.system) */ {
 public:
  system();
  virtual ~system();

  system(const system& from);

  inline system& operator=(const system& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  system(system&& from) noexcept
    : system() {
    *this = ::std::move(from);
  }

  inline system& operator=(system&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const system& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const system* internal_default_instance() {
    return reinterpret_cast<const system*>(
               &_system_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(system* other);
  friend void swap(system& a, system& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline system* New() const final {
    return CreateMaybeMessage<system>(NULL);
  }

  system* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<system>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const system& from);
  void MergeFrom(const system& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(system* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef system_login login;

  // accessors -------------------------------------------------------

  // repeated string domain_search = 2;
  int domain_search_size() const;
  void clear_domain_search();
  static const int kDomainSearchFieldNumber = 2;
  const ::std::string& domain_search(int index) const;
  ::std::string* mutable_domain_search(int index);
  void set_domain_search(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_domain_search(int index, ::std::string&& value);
  #endif
  void set_domain_search(int index, const char* value);
  void set_domain_search(int index, const char* value, size_t size);
  ::std::string* add_domain_search();
  void add_domain_search(const ::std::string& value);
  #if LANG_CXX11
  void add_domain_search(::std::string&& value);
  #endif
  void add_domain_search(const char* value);
  void add_domain_search(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& domain_search() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_domain_search();

  // string host_name = 1;
  void clear_host_name();
  static const int kHostNameFieldNumber = 1;
  const ::std::string& host_name() const;
  void set_host_name(const ::std::string& value);
  #if LANG_CXX11
  void set_host_name(::std::string&& value);
  #endif
  void set_host_name(const char* value);
  void set_host_name(const char* value, size_t size);
  ::std::string* mutable_host_name();
  ::std::string* release_host_name();
  void set_allocated_host_name(::std::string* host_name);

  // @@protoc_insertion_point(class_scope:ietf_dpdk.system)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> domain_search_;
  ::google::protobuf::internal::ArenaStringPtr host_name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// leaf_testing

// string leaf_testing = 1;
inline void leaf_testing::clear_leaf_testing() {
  leaf_testing_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& leaf_testing::leaf_testing() const {
  // @@protoc_insertion_point(field_get:ietf_dpdk.leaf_testing.leaf_testing)
  return leaf_testing_.GetNoArena();
}
inline void leaf_testing::set_leaf_testing(const ::std::string& value) {
  
  leaf_testing_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ietf_dpdk.leaf_testing.leaf_testing)
}
#if LANG_CXX11
inline void leaf_testing::set_leaf_testing(::std::string&& value) {
  
  leaf_testing_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ietf_dpdk.leaf_testing.leaf_testing)
}
#endif
inline void leaf_testing::set_leaf_testing(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  leaf_testing_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ietf_dpdk.leaf_testing.leaf_testing)
}
inline void leaf_testing::set_leaf_testing(const char* value, size_t size) {
  
  leaf_testing_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ietf_dpdk.leaf_testing.leaf_testing)
}
inline ::std::string* leaf_testing::mutable_leaf_testing() {
  
  // @@protoc_insertion_point(field_mutable:ietf_dpdk.leaf_testing.leaf_testing)
  return leaf_testing_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* leaf_testing::release_leaf_testing() {
  // @@protoc_insertion_point(field_release:ietf_dpdk.leaf_testing.leaf_testing)
  
  return leaf_testing_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void leaf_testing::set_allocated_leaf_testing(::std::string* leaf_testing) {
  if (leaf_testing != NULL) {
    
  } else {
    
  }
  leaf_testing_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), leaf_testing);
  // @@protoc_insertion_point(field_set_allocated:ietf_dpdk.leaf_testing.leaf_testing)
}

// -------------------------------------------------------------------

// system_login_user

// string name = 1;
inline void system_login_user::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& system_login_user::name() const {
  // @@protoc_insertion_point(field_get:ietf_dpdk.system.login.user.name)
  return name_.GetNoArena();
}
inline void system_login_user::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ietf_dpdk.system.login.user.name)
}
#if LANG_CXX11
inline void system_login_user::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ietf_dpdk.system.login.user.name)
}
#endif
inline void system_login_user::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ietf_dpdk.system.login.user.name)
}
inline void system_login_user::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ietf_dpdk.system.login.user.name)
}
inline ::std::string* system_login_user::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ietf_dpdk.system.login.user.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* system_login_user::release_name() {
  // @@protoc_insertion_point(field_release:ietf_dpdk.system.login.user.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void system_login_user::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ietf_dpdk.system.login.user.name)
}

// string full_name = 2;
inline void system_login_user::clear_full_name() {
  full_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& system_login_user::full_name() const {
  // @@protoc_insertion_point(field_get:ietf_dpdk.system.login.user.full_name)
  return full_name_.GetNoArena();
}
inline void system_login_user::set_full_name(const ::std::string& value) {
  
  full_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ietf_dpdk.system.login.user.full_name)
}
#if LANG_CXX11
inline void system_login_user::set_full_name(::std::string&& value) {
  
  full_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ietf_dpdk.system.login.user.full_name)
}
#endif
inline void system_login_user::set_full_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  full_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ietf_dpdk.system.login.user.full_name)
}
inline void system_login_user::set_full_name(const char* value, size_t size) {
  
  full_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ietf_dpdk.system.login.user.full_name)
}
inline ::std::string* system_login_user::mutable_full_name() {
  
  // @@protoc_insertion_point(field_mutable:ietf_dpdk.system.login.user.full_name)
  return full_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* system_login_user::release_full_name() {
  // @@protoc_insertion_point(field_release:ietf_dpdk.system.login.user.full_name)
  
  return full_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void system_login_user::set_allocated_full_name(::std::string* full_name) {
  if (full_name != NULL) {
    
  } else {
    
  }
  full_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), full_name);
  // @@protoc_insertion_point(field_set_allocated:ietf_dpdk.system.login.user.full_name)
}

// string class = 3;
inline void system_login_user::clear_class_() {
  class__.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& system_login_user::class_() const {
  // @@protoc_insertion_point(field_get:ietf_dpdk.system.login.user.class)
  return class__.GetNoArena();
}
inline void system_login_user::set_class_(const ::std::string& value) {
  
  class__.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ietf_dpdk.system.login.user.class)
}
#if LANG_CXX11
inline void system_login_user::set_class_(::std::string&& value) {
  
  class__.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ietf_dpdk.system.login.user.class)
}
#endif
inline void system_login_user::set_class_(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  class__.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ietf_dpdk.system.login.user.class)
}
inline void system_login_user::set_class_(const char* value, size_t size) {
  
  class__.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ietf_dpdk.system.login.user.class)
}
inline ::std::string* system_login_user::mutable_class_() {
  
  // @@protoc_insertion_point(field_mutable:ietf_dpdk.system.login.user.class)
  return class__.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* system_login_user::release_class_() {
  // @@protoc_insertion_point(field_release:ietf_dpdk.system.login.user.class)
  
  return class__.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void system_login_user::set_allocated_class_(::std::string* class_) {
  if (class_ != NULL) {
    
  } else {
    
  }
  class__.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), class_);
  // @@protoc_insertion_point(field_set_allocated:ietf_dpdk.system.login.user.class)
}

// -------------------------------------------------------------------

// system_login

// string message = 1;
inline void system_login::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& system_login::message() const {
  // @@protoc_insertion_point(field_get:ietf_dpdk.system.login.message)
  return message_.GetNoArena();
}
inline void system_login::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ietf_dpdk.system.login.message)
}
#if LANG_CXX11
inline void system_login::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ietf_dpdk.system.login.message)
}
#endif
inline void system_login::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ietf_dpdk.system.login.message)
}
inline void system_login::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ietf_dpdk.system.login.message)
}
inline ::std::string* system_login::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:ietf_dpdk.system.login.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* system_login::release_message() {
  // @@protoc_insertion_point(field_release:ietf_dpdk.system.login.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void system_login::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:ietf_dpdk.system.login.message)
}

// -------------------------------------------------------------------

// system

// string host_name = 1;
inline void system::clear_host_name() {
  host_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& system::host_name() const {
  // @@protoc_insertion_point(field_get:ietf_dpdk.system.host_name)
  return host_name_.GetNoArena();
}
inline void system::set_host_name(const ::std::string& value) {
  
  host_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ietf_dpdk.system.host_name)
}
#if LANG_CXX11
inline void system::set_host_name(::std::string&& value) {
  
  host_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ietf_dpdk.system.host_name)
}
#endif
inline void system::set_host_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  host_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ietf_dpdk.system.host_name)
}
inline void system::set_host_name(const char* value, size_t size) {
  
  host_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ietf_dpdk.system.host_name)
}
inline ::std::string* system::mutable_host_name() {
  
  // @@protoc_insertion_point(field_mutable:ietf_dpdk.system.host_name)
  return host_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* system::release_host_name() {
  // @@protoc_insertion_point(field_release:ietf_dpdk.system.host_name)
  
  return host_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void system::set_allocated_host_name(::std::string* host_name) {
  if (host_name != NULL) {
    
  } else {
    
  }
  host_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), host_name);
  // @@protoc_insertion_point(field_set_allocated:ietf_dpdk.system.host_name)
}

// repeated string domain_search = 2;
inline int system::domain_search_size() const {
  return domain_search_.size();
}
inline void system::clear_domain_search() {
  domain_search_.Clear();
}
inline const ::std::string& system::domain_search(int index) const {
  // @@protoc_insertion_point(field_get:ietf_dpdk.system.domain_search)
  return domain_search_.Get(index);
}
inline ::std::string* system::mutable_domain_search(int index) {
  // @@protoc_insertion_point(field_mutable:ietf_dpdk.system.domain_search)
  return domain_search_.Mutable(index);
}
inline void system::set_domain_search(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ietf_dpdk.system.domain_search)
  domain_search_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void system::set_domain_search(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:ietf_dpdk.system.domain_search)
  domain_search_.Mutable(index)->assign(std::move(value));
}
#endif
inline void system::set_domain_search(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  domain_search_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ietf_dpdk.system.domain_search)
}
inline void system::set_domain_search(int index, const char* value, size_t size) {
  domain_search_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ietf_dpdk.system.domain_search)
}
inline ::std::string* system::add_domain_search() {
  // @@protoc_insertion_point(field_add_mutable:ietf_dpdk.system.domain_search)
  return domain_search_.Add();
}
inline void system::add_domain_search(const ::std::string& value) {
  domain_search_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ietf_dpdk.system.domain_search)
}
#if LANG_CXX11
inline void system::add_domain_search(::std::string&& value) {
  domain_search_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ietf_dpdk.system.domain_search)
}
#endif
inline void system::add_domain_search(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  domain_search_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ietf_dpdk.system.domain_search)
}
inline void system::add_domain_search(const char* value, size_t size) {
  domain_search_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ietf_dpdk.system.domain_search)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
system::domain_search() const {
  // @@protoc_insertion_point(field_list:ietf_dpdk.system.domain_search)
  return domain_search_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
system::mutable_domain_search() {
  // @@protoc_insertion_point(field_mutable_list:ietf_dpdk.system.domain_search)
  return &domain_search_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ietf_dpdk

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_test_2eproto
