#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/ResourceLoader.hpp>
#include <RED4ext/Span.hpp>

namespace RED4ext
{
struct PackageHeader
{
    struct Chunk
    {
        uint32_t typeID;
        uint32_t offset;
    };
    RED4EXT_ASSERT_SIZE(Chunk, 0x8);

    struct Name
    {
        uint32_t offset : 24;
        uint32_t size : 8;
    };
    RED4EXT_ASSERT_SIZE(Name, 0x4);

    struct Import
    {
        uint32_t offset : 23;
        uint32_t size : 8;
        uint32_t sync : 1;
    };
    RED4EXT_ASSERT_SIZE(Import, 0x4);

    uint8_t version;      // 00
    uint8_t unk01;        // 01
    uint16_t unk02;       // 02
    Span<Chunk> root;     // 08
    Span<Chunk> chunks;   // 18
    Span<Name> names;     // 28
    Span<Import> imports; // 38
    void* buffer;         // 48
    uint32_t size;        // 50
};
RED4EXT_ASSERT_SIZE(PackageHeader, 0x58);
RED4EXT_ASSERT_OFFSET(PackageHeader, unk02, 0x02);
RED4EXT_ASSERT_OFFSET(PackageHeader, root, 0x08);
RED4EXT_ASSERT_OFFSET(PackageHeader, buffer, 0x48);

struct PackageReader
{
    PackageReader(void* aBuffer, uint32_t aSize);
    PackageReader(const DeferredDataBuffer& aBuffer);
    PackageReader(const DataBuffer& aBuffer);
    PackageReader(const RawBuffer& aBuffer);

    virtual ~PackageReader() = default;                      // 00
    virtual void OnReadHeader(uint64_t a1, uint64_t a2) = 0; // 08

    void ReadHeader(PackageHeader& aOut);

    [[nodiscard]] bool IsEmpty() const;

    void* buffer;  // 08
    uint32_t size; // 10
};
RED4EXT_ASSERT_SIZE(PackageReader, 0x18);
RED4EXT_ASSERT_OFFSET(PackageReader, buffer, 0x08);
RED4EXT_ASSERT_OFFSET(PackageReader, size, 0x10);

struct ObjectPackageHeader
{
    ObjectPackageHeader();

    [[nodiscard]] bool IsEmpty() const;

    int16_t rootIndex;     // 00 - Set to 0 if package contains root Entity, otherwise -1
    Span<CRUID> cruids;    // 08
    PackageHeader package; // 18
};
RED4EXT_ASSERT_SIZE(ObjectPackageHeader, 0x70);
RED4EXT_ASSERT_OFFSET(ObjectPackageHeader, rootIndex, 0x0);
RED4EXT_ASSERT_OFFSET(ObjectPackageHeader, cruids, 0x08);
RED4EXT_ASSERT_OFFSET(ObjectPackageHeader, package, 0x18);

struct ObjectPackageReader : PackageReader
{
    using PackageReader::PackageReader;

    ~ObjectPackageReader() override = default;            // 00
    void OnReadHeader(uint64_t a1, uint64_t a2) override; // 08

    void ReadHeader();
    void ReadHeader(ObjectPackageHeader& aOut);

    ObjectPackageHeader header; // 18
};
RED4EXT_ASSERT_SIZE(ObjectPackageReader, 0x88);
RED4EXT_ASSERT_OFFSET(ObjectPackageReader, header, 0x18);

struct ObjectPackageExtractorParams
{
    ObjectPackageExtractorParams(const ObjectPackageHeader& aHeader);
    ObjectPackageExtractorParams(const PackageHeader& aHeader);

    PackageHeader header;          // 00
    ResourceLoader* loader;        // 58
    bool disablePostLoad;          // 60 - See ObjectPackageExtractor
    bool disableImports;           // 61 - See ObjectPackageExtractor
    bool disablePreInitialization; // 62 - See ObjectPackageExtractor
    uint8_t unk63;                 // 63
    uint8_t unk64;                 // 64
    DynArray<uint32_t> unk68;      // 68
    uint32_t unk78;                // 78
    RawBuffer unk80;               // 80 - Moved to ObjectPackageExtractor in ctor
};
RED4EXT_ASSERT_SIZE(ObjectPackageExtractorParams, 0xA0);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractorParams, loader, 0x58);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractorParams, disablePostLoad, 0x60);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractorParams, disableImports, 0x61);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractorParams, disablePreInitialization, 0x62);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractorParams, unk80, 0x80);

struct ObjectPackageExtractor
{
    using AllocatorType = Memory::EngineAllocator;

    ObjectPackageExtractor(const ObjectPackageExtractorParams& aParams);

    void ExtractSync();
    JobHandle ExtractAsync();

    WeakPtr<ObjectPackageExtractor> self;           // 00
    PackageHeader header;                           // 10
    DynArray<uint32_t> unk68;                       // 68
    uint32_t unk78;                                 // 78
    RawBuffer unk80;                                // 80
    ResourceLoader* loader;                         // A0
    DynArray<Handle<ISerializable>> results;        // A8
    bool disablePostLoad;                           // B8 - Don't call serializable->PostLoad()
    bool disableImports;                            // B9 - Don't load resource references
    bool disablePreInitialization;                  // BA - Don't call pre-initilization during PostLoad()
    uint8_t unkBB;                                  // BB
    uint8_t unkBC;                                  // BC
    DynArray<Handle<ISerializable>> objects;        // C0
    DynArray<SharedPtr<ResourceToken<>>> resources; // D0
    DynArray<uint32_t> unkE0;                       // E0
    void* unkF0;                                    // F0
    void* unkF8;                                    // F8
    void* unk100;                                   // 100
    void* unk108;                                   // 108
    void* unk110;                                   // 110
    void* unk118;                                   // 118
};
RED4EXT_ASSERT_SIZE(ObjectPackageExtractor, 0x120);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractor, header, 0x10);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractor, results, 0xA8);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractor, disablePostLoad, 0xB8);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractor, disableImports, 0xB9);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractor, disablePreInitialization, 0xBA);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractor, objects, 0xC0);
RED4EXT_ASSERT_OFFSET(ObjectPackageExtractor, resources, 0xD0);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Package-inl.hpp>
#endif
