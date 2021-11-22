#pragma once

#include <array>
#include <cstdint>
#include <string_view>

#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/Unks.hpp>

namespace RED4ext
{
struct CBaseRTTIType;

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
            uint8_t tdbOffsetBE[3]; // 05 - Big Endian
        };
    };
#pragma pack(pop)

    TweakDBID() noexcept = default;
    TweakDBID(uint64_t aValue) noexcept;
    TweakDBID(uint32_t aNameHash, uint8_t aNameLength) noexcept;
    TweakDBID(const std::string_view aName) noexcept;
    TweakDBID(const TweakDBID& aBase, const std::string_view aName) noexcept;
    bool IsValid() const;
    bool HasTDBOffset() const;
    int32_t ToTDBOffset() const;
    void SetTDBOffset(int32_t aTDBOffset);

    operator uint64_t() const noexcept;
    TweakDBID& operator=(const std::string_view aName) noexcept;
    TweakDBID operator+(const std::string_view aName) const noexcept;
    bool operator<(const TweakDBID& aDBID) const noexcept;
    bool operator>(const TweakDBID& aDBID) const noexcept;
    bool operator==(const TweakDBID& aDBID) const noexcept;
    bool operator!=(const TweakDBID& aDBID) const noexcept;
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
    static constexpr uint32_t InlineSize = 16;
    static constexpr uint32_t InlineAlignment = 8;

    static constexpr uintptr_t InlineFlag = 1;
    static constexpr uintptr_t TypeMask = ~InlineFlag;
 
    Variant() noexcept = default;
    Variant(const CBaseRTTIType* aType);
    Variant(const CBaseRTTIType* aType, const ScriptInstance aData);
    Variant(const CName& aTypeName, const ScriptInstance aData);
    Variant(const Variant& aOther);
    ~Variant();

    bool IsEmpty() const noexcept;
    bool IsInlined() const noexcept;
    
    CBaseRTTIType* GetType() const noexcept;
    ScriptInstance GetDataPtr() const noexcept;
    
    bool Init(const CBaseRTTIType* aType);
    bool Fill(const CBaseRTTIType* aType, const ScriptInstance aData);
    bool Extract(ScriptInstance aBuffer);
    void Free();

    static bool CanBeInlined(const CBaseRTTIType* aType) noexcept;

    const CBaseRTTIType* type{ nullptr };
    union
    {
        uint8_t inlined[InlineSize]{ 0 };
        ScriptInstance instance;
    };
};
RED4EXT_ASSERT_SIZE(Variant, 0x18);

struct RawBuffer
{
    void* data;         // 00
    uint32_t size;      // 08
    uint32_t alignment; // 0C
    Unk530 unk10;       // 10
};
RED4EXT_ASSERT_SIZE(RawBuffer, 0x20);

struct DataBuffer
{
    RawBuffer buffer; // 00
    uint64_t unk20;   // 20 - Pointer to something
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
    RawBuffer buffer; // 10
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
static_assert(sizeof(StaticArray<std::array<uint8_t, 5>, 32>) ==
              164); // StaticArray<GpuWrapApiVertexPackingPackingElement, 32>

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
    uint8_t unk00[0x10];      // 00
    CBaseRTTIType* innerType; // 10
    T* ref;                   // 18
    CName hash;               // 20
};
RED4EXT_ASSERT_SIZE(ScriptRef<void>, 0x28);

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, TweakDBID>>>
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        return static_cast<uint32_t>(aKey);
    }
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/NativeTypes-inl.hpp>
#endif
