#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Package.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::PackageReader::PackageReader(void* aBuffer, uint32_t aSize)
    : buffer(aBuffer)
    , size(aSize)
{
}

RED4EXT_INLINE RED4ext::PackageReader::PackageReader(const DeferredDataBuffer& aBuffer)
    : buffer(aBuffer.raw->data)
    , size(aBuffer.raw->size)
{
}

RED4EXT_INLINE RED4ext::PackageReader::PackageReader(const DataBuffer& aBuffer)
    : buffer(aBuffer.buffer.data)
    , size(aBuffer.buffer.size)
{
}

RED4EXT_INLINE RED4ext::PackageReader::PackageReader(const RawBuffer& aBuffer)
    : buffer(aBuffer.data)
    , size(aBuffer.size)
{
}

RED4EXT_INLINE bool RED4ext::PackageReader::IsEmpty() const
{
    return !buffer;
}

RED4EXT_INLINE void RED4ext::PackageReader::ReadHeader(RED4ext::PackageHeader& aOut)
{
    using func_t = void (*)(PackageReader*, PackageHeader&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::BasePackageReader_ReadHeader);

    func(this, aOut);
}

RED4EXT_INLINE RED4ext::ObjectPackageHeader::ObjectPackageHeader()
    : rootIndex(-1)
{
}

RED4EXT_INLINE bool RED4ext::ObjectPackageHeader::IsEmpty() const
{
    return cruids.IsEmpty();
}

RED4EXT_INLINE void RED4ext::ObjectPackageReader::OnReadHeader(uint64_t a1, uint64_t a2)
{
    using func_t = void (*)(ObjectPackageReader*, uint64_t, uint64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::ObjectPackageReader_OnReadHeader);

    func(this, a1, a2);
}

RED4EXT_INLINE void RED4ext::ObjectPackageReader::ReadHeader()
{
    using func_t = void (*)(ObjectPackageReader*, ObjectPackageHeader&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::ObjectPackageReader_ReadHeader);

    func(this, header);
}

RED4EXT_INLINE void RED4ext::ObjectPackageReader::ReadHeader(RED4ext::ObjectPackageHeader& aOut)
{
    using func_t = void (*)(ObjectPackageReader*, ObjectPackageHeader&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::ObjectPackageReader_ReadHeader);

    func(this, aOut);
}

RED4EXT_INLINE RED4ext::ObjectPackageExtractorParams::ObjectPackageExtractorParams(
    const RED4ext::PackageHeader& aHeader)
    : header(aHeader)
    , loader(ResourceLoader::Get())
    , disablePostLoad(false)
    , disableImports(false)
    , disablePreInitialization(false)
    , unk63(0)
    , unk64(0)
    , unk78(0)
{
}

RED4EXT_INLINE RED4ext::ObjectPackageExtractorParams::ObjectPackageExtractorParams(
    const RED4ext::ObjectPackageHeader& aHeader)
    : ObjectPackageExtractorParams(aHeader.package)
{
}

RED4EXT_INLINE RED4ext::ObjectPackageExtractor::ObjectPackageExtractor(
    const RED4ext::ObjectPackageExtractorParams& aParams)
    : unk78(0)
    , loader(nullptr)
    , disablePostLoad(false)
    , disableImports(false)
    , disablePreInitialization(false)
    , unkBB(0)
    , unkBC(0)
    , unkF0(nullptr)
    , unkF8(nullptr)
    , unk100(nullptr)
    , unk108(nullptr)
    , unk110(nullptr)
    , unk118(nullptr)
{
    using func_t = void (*)(ObjectPackageExtractor*, const ObjectPackageExtractorParams&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::ObjectPackageExtractor_Initialize);

    func(this, aParams);
}

RED4EXT_INLINE void RED4ext::ObjectPackageExtractor::ExtractSync()
{
    using func_t = void (*)(ObjectPackageExtractor*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::ObjectPackageExtractor_ExtractSync);

    func(this);
}

RED4EXT_INLINE RED4ext::JobHandle RED4ext::ObjectPackageExtractor::ExtractAsync()
{
    using func_t = void (*)(ObjectPackageExtractor*, JobHandle&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::ObjectPackageExtractor_ExtractAsync);

    JobHandle job;
    func(this, job);

    return job;
}
