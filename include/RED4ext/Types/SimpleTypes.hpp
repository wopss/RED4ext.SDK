#pragma once

#include <array>
#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Unks.hpp>

namespace RED4ext
{
struct IRTTIType;

struct CDateTime
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(CDateTime, 0x8);

struct CGUID
{
    int64_t unk00; // 00
    int64_t unk08; // 08
};
RED4EXT_ASSERT_SIZE(CGUID, 0x10);

struct CRUID
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(CRUID, 0x8);

struct CRUIDRef
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(CRUIDRef, 0x8);

struct TweakDBID
{
#pragma pack(push, 1)
    union
    {
        uint64_t value = 0;
        struct
        {
            uint32_t nameHash;      // 00 CRC32
            uint8_t nameLength;     // 04
            uint8_t tdbOffset[3];   // 05
        };
    };
#pragma pack(pop)

    operator uint64_t() const noexcept;
    bool operator==(const TweakDBID& aDBID) const noexcept;
    bool IsValid() const noexcept;
    uint32_t ToTDBOffset() const noexcept;
};
RED4EXT_ASSERT_SIZE(TweakDBID, 0x8);

struct ItemID
{
    TweakDBID tdbid;  // 00
    uint32_t rngSeed; // 08
    uint16_t unk0C;   // 0C
    uint8_t unk0E;    // 0E
    uint8_t pad0F;    // 0F
};
RED4EXT_ASSERT_SIZE(ItemID, 0x10);

struct EditorObjectID
{
    int64_t unk00; // 00
    int64_t unk08; // 08
    int64_t unk10; // 10
    int64_t unk18; // 18
};
RED4EXT_ASSERT_SIZE(EditorObjectID, 0x20);

struct Variant
{
    int64_t unk00; // 00
    int64_t unk08; // 08
    int64_t unk10; // 10
};
RED4EXT_ASSERT_SIZE(Variant, 0x18);

struct DataBuffer
{
    int64_t unk00; // 00
    int32_t unk08; // 08
    int32_t unk0C; // 0C
    Unk530 unk10;  // 10
    int64_t unk20; // 20
};
RED4EXT_ASSERT_SIZE(DataBuffer, 0x28);

struct SharedDataBuffer
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(SharedDataBuffer, 0x8);

struct DeferredDataBuffer
{
    int64_t unk00; // 00
    int64_t unk08; // 08
    int64_t unk10; // 10
    int64_t unk18; // 18
    Unk530 unk20;  // 20
    int64_t unk30; // 30
    int8_t unk38;  // 38
    int64_t unk40; // 40
    int64_t unk48; // 48
    int64_t unk50; // 50
};
RED4EXT_ASSERT_SIZE(DeferredDataBuffer, 0x58);

struct gamedataLocKeyWrapper
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(gamedataLocKeyWrapper, 0x8);

struct LocalizationString
{
    int64_t unk00; // 00
    CString unk08; // 08
};
RED4EXT_ASSERT_SIZE(LocalizationString, 0x28);

struct MessageResourcePath
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(MessageResourcePath, 0x8);

struct NodeRef
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(NodeRef, 0x8);

struct RuntimeEntityRef
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(RuntimeEntityRef, 0x8);

template<typename T>
struct ResourceAsyncReference
{
    T* ref; // 00
};
RED4EXT_ASSERT_SIZE(ResourceAsyncReference<void>, 0x8);

template<typename T>
using RaRef = ResourceAsyncReference<T>;

template<typename T>
struct ResourceReference
{
    T* ref;          // 00
    uintptr_t unk08; // 08
    uintptr_t unk10; // 10
};
RED4EXT_ASSERT_SIZE(ResourceReference<void>, 0x18);

template<typename T>
using Ref = ResourceReference<T>;

template<typename T, uint32_t MAX_LEN>
struct StaticArray
{
    T entries[MAX_LEN]; // 00
    uint32_t size;
};
static_assert(sizeof(StaticArray<std::array<uint8_t,5>, 32>) == 164); // StaticArray<GpuWrapApiVertexPackingPackingElement, 32>

template<typename T, uint32_t MAX_LEN>
using NativeArray = std::array<T, MAX_LEN>;

template<typename T>
struct CurveData
{
    uint64_t unk00; // 00
    uint64_t unk08; // 08
    uint64_t unk10; // 10
    uint64_t unk18; // 18
    uint64_t unk20; // 20
    uint64_t unk28; // 28
    uint64_t unk30; // 30
};
RED4EXT_ASSERT_SIZE(CurveData<float>, 0x38);

template<typename T>
struct ScriptRef
{
    uint8_t unk00[0x10];    // 00
    IRTTIType* innerType;   // 10
    T* ref;                 // 18
    CName hash;             // 20
};
RED4EXT_ASSERT_SIZE(ScriptRef<void>, 0x28);

} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Types/SimpleTypes-inl.hpp>
#endif
