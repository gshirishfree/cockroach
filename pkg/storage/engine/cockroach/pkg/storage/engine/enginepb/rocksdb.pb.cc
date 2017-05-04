// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cockroach/pkg/storage/engine/enginepb/rocksdb.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cockroach/pkg/storage/engine/enginepb/rocksdb.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace cockroach {
namespace storage {
namespace engine {
namespace enginepb {
class SSTUserPropertiesDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SSTUserProperties> {
} _SSTUserProperties_default_instance_;
class SSTUserPropertiesCollectionDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SSTUserPropertiesCollection> {
} _SSTUserPropertiesCollection_default_instance_;

namespace protobuf_cockroach_2fpkg_2fstorage_2fengine_2fenginepb_2frocksdb_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _SSTUserProperties_default_instance_.Shutdown();
  _SSTUserPropertiesCollection_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::cockroach::util::hlc::protobuf_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto::InitDefaults();
  _SSTUserProperties_default_instance_.DefaultConstruct();
  _SSTUserPropertiesCollection_default_instance_.DefaultConstruct();
  _SSTUserProperties_default_instance_.get_mutable()->ts_min_ = const_cast< ::cockroach::util::hlc::Timestamp*>(
      ::cockroach::util::hlc::Timestamp::internal_default_instance());
  _SSTUserProperties_default_instance_.get_mutable()->ts_max_ = const_cast< ::cockroach::util::hlc::Timestamp*>(
      ::cockroach::util::hlc::Timestamp::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::cockroach::util::hlc::protobuf_cockroach_2fpkg_2futil_2fhlc_2ftimestamp_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

}  // namespace protobuf_cockroach_2fpkg_2fstorage_2fengine_2fenginepb_2frocksdb_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SSTUserProperties::kPathFieldNumber;
const int SSTUserProperties::kTsMinFieldNumber;
const int SSTUserProperties::kTsMaxFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SSTUserProperties::SSTUserProperties()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cockroach_2fpkg_2fstorage_2fengine_2fenginepb_2frocksdb_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.storage.engine.enginepb.SSTUserProperties)
}
SSTUserProperties::SSTUserProperties(const SSTUserProperties& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.path().size() > 0) {
    path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.path_);
  }
  if (from.has_ts_min()) {
    ts_min_ = new ::cockroach::util::hlc::Timestamp(*from.ts_min_);
  } else {
    ts_min_ = NULL;
  }
  if (from.has_ts_max()) {
    ts_max_ = new ::cockroach::util::hlc::Timestamp(*from.ts_max_);
  } else {
    ts_max_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:cockroach.storage.engine.enginepb.SSTUserProperties)
}

void SSTUserProperties::SharedCtor() {
  path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&ts_min_, 0, reinterpret_cast<char*>(&ts_max_) -
    reinterpret_cast<char*>(&ts_min_) + sizeof(ts_max_));
  _cached_size_ = 0;
}

SSTUserProperties::~SSTUserProperties() {
  // @@protoc_insertion_point(destructor:cockroach.storage.engine.enginepb.SSTUserProperties)
  SharedDtor();
}

void SSTUserProperties::SharedDtor() {
  path_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete ts_min_;
  }
  if (this != internal_default_instance()) {
    delete ts_max_;
  }
}

void SSTUserProperties::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SSTUserProperties& SSTUserProperties::default_instance() {
  protobuf_cockroach_2fpkg_2fstorage_2fengine_2fenginepb_2frocksdb_2eproto::InitDefaults();
  return *internal_default_instance();
}

SSTUserProperties* SSTUserProperties::New(::google::protobuf::Arena* arena) const {
  SSTUserProperties* n = new SSTUserProperties;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SSTUserProperties::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.storage.engine.enginepb.SSTUserProperties)
  path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && ts_min_ != NULL) {
    delete ts_min_;
  }
  ts_min_ = NULL;
  if (GetArenaNoVirtual() == NULL && ts_max_ != NULL) {
    delete ts_max_;
  }
  ts_max_ = NULL;
}

bool SSTUserProperties::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cockroach.storage.engine.enginepb.SSTUserProperties)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string path = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->path().data(), this->path().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "cockroach.storage.engine.enginepb.SSTUserProperties.path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cockroach.util.hlc.Timestamp ts_min = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ts_min()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .cockroach.util.hlc.Timestamp ts_max = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ts_max()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.storage.engine.enginepb.SSTUserProperties)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.storage.engine.enginepb.SSTUserProperties)
  return false;
#undef DO_
}

void SSTUserProperties::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.storage.engine.enginepb.SSTUserProperties)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string path = 1;
  if (this->path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->path().data(), this->path().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "cockroach.storage.engine.enginepb.SSTUserProperties.path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->path(), output);
  }

  // .cockroach.util.hlc.Timestamp ts_min = 2;
  if (this->has_ts_min()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->ts_min_, output);
  }

  // .cockroach.util.hlc.Timestamp ts_max = 3;
  if (this->has_ts_max()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, *this->ts_max_, output);
  }

  // @@protoc_insertion_point(serialize_end:cockroach.storage.engine.enginepb.SSTUserProperties)
}

size_t SSTUserProperties::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.storage.engine.enginepb.SSTUserProperties)
  size_t total_size = 0;

  // string path = 1;
  if (this->path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->path());
  }

  // .cockroach.util.hlc.Timestamp ts_min = 2;
  if (this->has_ts_min()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ts_min_);
  }

  // .cockroach.util.hlc.Timestamp ts_max = 3;
  if (this->has_ts_max()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ts_max_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SSTUserProperties::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SSTUserProperties*>(&from));
}

void SSTUserProperties::MergeFrom(const SSTUserProperties& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.storage.engine.enginepb.SSTUserProperties)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.path().size() > 0) {

    path_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.path_);
  }
  if (from.has_ts_min()) {
    mutable_ts_min()->::cockroach::util::hlc::Timestamp::MergeFrom(from.ts_min());
  }
  if (from.has_ts_max()) {
    mutable_ts_max()->::cockroach::util::hlc::Timestamp::MergeFrom(from.ts_max());
  }
}

void SSTUserProperties::CopyFrom(const SSTUserProperties& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.storage.engine.enginepb.SSTUserProperties)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSTUserProperties::IsInitialized() const {
  return true;
}

void SSTUserProperties::Swap(SSTUserProperties* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SSTUserProperties::InternalSwap(SSTUserProperties* other) {
  path_.Swap(&other->path_);
  std::swap(ts_min_, other->ts_min_);
  std::swap(ts_max_, other->ts_max_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string SSTUserProperties::GetTypeName() const {
  return "cockroach.storage.engine.enginepb.SSTUserProperties";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SSTUserProperties

// string path = 1;
void SSTUserProperties::clear_path() {
  path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& SSTUserProperties::path() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.SSTUserProperties.path)
  return path_.GetNoArena();
}
void SSTUserProperties::set_path(const ::std::string& value) {
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.SSTUserProperties.path)
}
#if LANG_CXX11
void SSTUserProperties::set_path(::std::string&& value) {
  
  path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cockroach.storage.engine.enginepb.SSTUserProperties.path)
}
#endif
void SSTUserProperties::set_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cockroach.storage.engine.enginepb.SSTUserProperties.path)
}
void SSTUserProperties::set_path(const char* value, size_t size) {
  
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cockroach.storage.engine.enginepb.SSTUserProperties.path)
}
::std::string* SSTUserProperties::mutable_path() {
  
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.SSTUserProperties.path)
  return path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SSTUserProperties::release_path() {
  // @@protoc_insertion_point(field_release:cockroach.storage.engine.enginepb.SSTUserProperties.path)
  
  return path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SSTUserProperties::set_allocated_path(::std::string* path) {
  if (path != NULL) {
    
  } else {
    
  }
  path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), path);
  // @@protoc_insertion_point(field_set_allocated:cockroach.storage.engine.enginepb.SSTUserProperties.path)
}

// .cockroach.util.hlc.Timestamp ts_min = 2;
bool SSTUserProperties::has_ts_min() const {
  return this != internal_default_instance() && ts_min_ != NULL;
}
void SSTUserProperties::clear_ts_min() {
  if (GetArenaNoVirtual() == NULL && ts_min_ != NULL) delete ts_min_;
  ts_min_ = NULL;
}
const ::cockroach::util::hlc::Timestamp& SSTUserProperties::ts_min() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.SSTUserProperties.ts_min)
  return ts_min_ != NULL ? *ts_min_
                         : *::cockroach::util::hlc::Timestamp::internal_default_instance();
}
::cockroach::util::hlc::Timestamp* SSTUserProperties::mutable_ts_min() {
  
  if (ts_min_ == NULL) {
    ts_min_ = new ::cockroach::util::hlc::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.SSTUserProperties.ts_min)
  return ts_min_;
}
::cockroach::util::hlc::Timestamp* SSTUserProperties::release_ts_min() {
  // @@protoc_insertion_point(field_release:cockroach.storage.engine.enginepb.SSTUserProperties.ts_min)
  
  ::cockroach::util::hlc::Timestamp* temp = ts_min_;
  ts_min_ = NULL;
  return temp;
}
void SSTUserProperties::set_allocated_ts_min(::cockroach::util::hlc::Timestamp* ts_min) {
  delete ts_min_;
  ts_min_ = ts_min;
  if (ts_min) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cockroach.storage.engine.enginepb.SSTUserProperties.ts_min)
}

// .cockroach.util.hlc.Timestamp ts_max = 3;
bool SSTUserProperties::has_ts_max() const {
  return this != internal_default_instance() && ts_max_ != NULL;
}
void SSTUserProperties::clear_ts_max() {
  if (GetArenaNoVirtual() == NULL && ts_max_ != NULL) delete ts_max_;
  ts_max_ = NULL;
}
const ::cockroach::util::hlc::Timestamp& SSTUserProperties::ts_max() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.SSTUserProperties.ts_max)
  return ts_max_ != NULL ? *ts_max_
                         : *::cockroach::util::hlc::Timestamp::internal_default_instance();
}
::cockroach::util::hlc::Timestamp* SSTUserProperties::mutable_ts_max() {
  
  if (ts_max_ == NULL) {
    ts_max_ = new ::cockroach::util::hlc::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.SSTUserProperties.ts_max)
  return ts_max_;
}
::cockroach::util::hlc::Timestamp* SSTUserProperties::release_ts_max() {
  // @@protoc_insertion_point(field_release:cockroach.storage.engine.enginepb.SSTUserProperties.ts_max)
  
  ::cockroach::util::hlc::Timestamp* temp = ts_max_;
  ts_max_ = NULL;
  return temp;
}
void SSTUserProperties::set_allocated_ts_max(::cockroach::util::hlc::Timestamp* ts_max) {
  delete ts_max_;
  ts_max_ = ts_max;
  if (ts_max) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cockroach.storage.engine.enginepb.SSTUserProperties.ts_max)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SSTUserPropertiesCollection::kSstFieldNumber;
const int SSTUserPropertiesCollection::kErrorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SSTUserPropertiesCollection::SSTUserPropertiesCollection()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cockroach_2fpkg_2fstorage_2fengine_2fenginepb_2frocksdb_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
}
SSTUserPropertiesCollection::SSTUserPropertiesCollection(const SSTUserPropertiesCollection& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      sst_(from.sst_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  error_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.error().size() > 0) {
    error_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_);
  }
  // @@protoc_insertion_point(copy_constructor:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
}

void SSTUserPropertiesCollection::SharedCtor() {
  error_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

SSTUserPropertiesCollection::~SSTUserPropertiesCollection() {
  // @@protoc_insertion_point(destructor:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  SharedDtor();
}

void SSTUserPropertiesCollection::SharedDtor() {
  error_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SSTUserPropertiesCollection::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SSTUserPropertiesCollection& SSTUserPropertiesCollection::default_instance() {
  protobuf_cockroach_2fpkg_2fstorage_2fengine_2fenginepb_2frocksdb_2eproto::InitDefaults();
  return *internal_default_instance();
}

SSTUserPropertiesCollection* SSTUserPropertiesCollection::New(::google::protobuf::Arena* arena) const {
  SSTUserPropertiesCollection* n = new SSTUserPropertiesCollection;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SSTUserPropertiesCollection::Clear() {
// @@protoc_insertion_point(message_clear_start:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  sst_.Clear();
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool SSTUserPropertiesCollection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_sst()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string error = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->error().data(), this->error().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  return false;
#undef DO_
}

void SSTUserPropertiesCollection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  for (unsigned int i = 0, n = this->sst_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->sst(i), output);
  }

  // string error = 2;
  if (this->error().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->error().data(), this->error().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->error(), output);
  }

  // @@protoc_insertion_point(serialize_end:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
}

size_t SSTUserPropertiesCollection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  size_t total_size = 0;

  {
    unsigned int count = this->sst_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->sst(i));
    }
  }

  // string error = 2;
  if (this->error().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->error());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SSTUserPropertiesCollection::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SSTUserPropertiesCollection*>(&from));
}

void SSTUserPropertiesCollection::MergeFrom(const SSTUserPropertiesCollection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  sst_.MergeFrom(from.sst_);
  if (from.error().size() > 0) {

    error_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.error_);
  }
}

void SSTUserPropertiesCollection::CopyFrom(const SSTUserPropertiesCollection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSTUserPropertiesCollection::IsInitialized() const {
  return true;
}

void SSTUserPropertiesCollection::Swap(SSTUserPropertiesCollection* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SSTUserPropertiesCollection::InternalSwap(SSTUserPropertiesCollection* other) {
  sst_.InternalSwap(&other->sst_);
  error_.Swap(&other->error_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string SSTUserPropertiesCollection::GetTypeName() const {
  return "cockroach.storage.engine.enginepb.SSTUserPropertiesCollection";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SSTUserPropertiesCollection

int SSTUserPropertiesCollection::sst_size() const {
  return sst_.size();
}
void SSTUserPropertiesCollection::clear_sst() {
  sst_.Clear();
}
const ::cockroach::storage::engine::enginepb::SSTUserProperties& SSTUserPropertiesCollection::sst(int index) const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.sst)
  return sst_.Get(index);
}
::cockroach::storage::engine::enginepb::SSTUserProperties* SSTUserPropertiesCollection::mutable_sst(int index) {
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.sst)
  return sst_.Mutable(index);
}
::cockroach::storage::engine::enginepb::SSTUserProperties* SSTUserPropertiesCollection::add_sst() {
  // @@protoc_insertion_point(field_add:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.sst)
  return sst_.Add();
}
::google::protobuf::RepeatedPtrField< ::cockroach::storage::engine::enginepb::SSTUserProperties >*
SSTUserPropertiesCollection::mutable_sst() {
  // @@protoc_insertion_point(field_mutable_list:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.sst)
  return &sst_;
}
const ::google::protobuf::RepeatedPtrField< ::cockroach::storage::engine::enginepb::SSTUserProperties >&
SSTUserPropertiesCollection::sst() const {
  // @@protoc_insertion_point(field_list:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.sst)
  return sst_;
}

// string error = 2;
void SSTUserPropertiesCollection::clear_error() {
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& SSTUserPropertiesCollection::error() const {
  // @@protoc_insertion_point(field_get:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
  return error_.GetNoArena();
}
void SSTUserPropertiesCollection::set_error(const ::std::string& value) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
}
#if LANG_CXX11
void SSTUserPropertiesCollection::set_error(::std::string&& value) {
  
  error_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
}
#endif
void SSTUserPropertiesCollection::set_error(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
}
void SSTUserPropertiesCollection::set_error(const char* value, size_t size) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
}
::std::string* SSTUserPropertiesCollection::mutable_error() {
  
  // @@protoc_insertion_point(field_mutable:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
  return error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SSTUserPropertiesCollection::release_error() {
  // @@protoc_insertion_point(field_release:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
  
  return error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SSTUserPropertiesCollection::set_allocated_error(::std::string* error) {
  if (error != NULL) {
    
  } else {
    
  }
  error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:cockroach.storage.engine.enginepb.SSTUserPropertiesCollection.error)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace enginepb
}  // namespace engine
}  // namespace storage
}  // namespace cockroach

// @@protoc_insertion_point(global_scope)
