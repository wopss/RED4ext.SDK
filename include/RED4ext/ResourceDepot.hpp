#pragma once

#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ResourcePath.hpp>

namespace RED4ext
{
struct Archive
{
    void* instance;      // 00
    int32_t asyncHandle; // 08
    CString path;        // 10
    uint8_t unk30[0x20]; // 30 - Used by LoadEntireArchiveIntoMemory()
};
RED4EXT_ASSERT_SIZE(Archive, 0x50);
RED4EXT_ASSERT_OFFSET(Archive, path, 0x10);

enum class ArchiveScope : uint32_t
{
    Invalid = 0,
    Content = 1, // archive\pc\content
    DLC = 2,     // archive\pc\dlc
    Patch = 3,   // archive\pc\patch
    Mod = 4,     // archive\pc\mod + mods\*\archives
};

struct ArchiveGroup
{
    DynArray<Archive> archives; // 00
    CString basePath;           // 10
    ArchiveScope scope;         // 30
};
RED4EXT_ASSERT_SIZE(ArchiveGroup, 0x38);
RED4EXT_ASSERT_OFFSET(ArchiveGroup, archives, 0x00);
RED4EXT_ASSERT_OFFSET(ArchiveGroup, basePath, 0x10);

struct ResourceDepot
{
    virtual Memory::IAllocator GetAllocator() = 0;
    virtual ~ResourceDepot() = 0;
    virtual void* RequestResource(void* aHandle, ResourcePath aPath, int32_t* aContext) = 0;
    virtual bool ResourceExists(ResourcePath aPath) = 0;

    static ResourceDepot* Get();

    uint64_t unk08;                // 08
    DynArray<ArchiveGroup> groups; // 10
    DynArray<void*> unk20;         // 20
    CString rootPath;              // 30
    bool hasModArchives;           // 50
};
RED4EXT_ASSERT_SIZE(ResourceDepot, 0x58);
RED4EXT_ASSERT_OFFSET(ResourceDepot, groups, 0x10);
RED4EXT_ASSERT_OFFSET(ResourceDepot, rootPath, 0x30);
RED4EXT_ASSERT_OFFSET(ResourceDepot, hasModArchives, 0x50);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/ResourceDepot-inl.hpp>
#endif
