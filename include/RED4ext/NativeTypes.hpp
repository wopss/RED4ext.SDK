#pragma once

#include <array>
#include <cstdint>
#include <limits>
#include <string_view>

#include <RED4ext/Buffer.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Hashing/CRC.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/NodeRef.hpp>
#include <RED4ext/ResourceReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/curve/EInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/curve/ESegmentsLinkType.hpp>

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
            uint32_t hash;          // 00 - CRC32
            uint8_t length;         // 04
            uint8_t tdbOffsetBE[3]; // 05 - Big Endian
        } name;
    };
#pragma pack(pop)

    constexpr TweakDBID() noexcept
        : value(0)
    {
    }

    constexpr TweakDBID(uint64_t aValue) noexcept
        : value(aValue)
    {
    }

    constexpr TweakDBID(uint32_t aNameHash, uint8_t aNameLength) noexcept
    {
        name.hash = aNameHash;
        name.length = aNameLength;
        name.tdbOffsetBE[0] = 0;
        name.tdbOffsetBE[1] = 0;
        name.tdbOffsetBE[2] = 0;
    }

    constexpr TweakDBID(const char* aName, size_t aLength = 0) noexcept
    {
        if (aLength <= 0)
        {
            name.hash = CRC32(aName, 0);
            name.length = static_cast<uint8_t>(std::char_traits<char>::length(aName));
        }
        else
        {
            name.hash = CRC32(reinterpret_cast<const uint8_t*>(aName), aLength, 0);
            name.length = static_cast<uint8_t>(aLength);
        }

        name.tdbOffsetBE[0] = 0;
        name.tdbOffsetBE[1] = 0;
        name.tdbOffsetBE[2] = 0;
    }

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
    TweakDBID tdbid;        // 00
    uint32_t rngSeed;       // 08
    uint16_t uniqueCounter; // 0C
    uint8_t structure;      // 0E -- gamedataItemStructure
    uint8_t flags;          // 0F -- gameEItemIDFlag

    bool IsValid() const noexcept;

    operator bool() const noexcept;
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
    Variant(CName aTypeName);
    Variant(CName aTypeName, const ScriptInstance aData);
    Variant(const Variant& aOther);
    Variant(Variant&& aOther) noexcept;
    ~Variant();

    Variant& operator=(const Variant& aRhs);
    Variant& operator=(Variant&& aRhs) noexcept;

    bool IsEmpty() const noexcept;
    bool IsInlined() const noexcept;

    CBaseRTTIType* GetType() const noexcept;
    ScriptInstance GetDataPtr() const noexcept;

    bool Init(const CBaseRTTIType* aType);
    bool Fill(const CBaseRTTIType* aType, const ScriptInstance aData);
    bool Extract(ScriptInstance aBuffer);
    void Free();

    static bool CanBeInlined(const CBaseRTTIType* aType) noexcept;

    const CBaseRTTIType* type{nullptr};
    union
    {
        uint8_t inlined[InlineSize]{0};
        ScriptInstance instance;
    };
};
RED4EXT_ASSERT_SIZE(Variant, 0x18);

struct gamedataLocKeyWrapper
{
    gamedataLocKeyWrapper() noexcept;
    gamedataLocKeyWrapper(uint64_t aPrimaryKey) noexcept;
    gamedataLocKeyWrapper(const char* aSecondaryKey) noexcept;

    uint64_t primaryKey; // 00
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

struct RuntimeEntityRef
{
    int64_t unk00; // 00
};
RED4EXT_ASSERT_SIZE(RuntimeEntityRef, 0x8);

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
struct CurvePoint
{
    float point;
    T value;
};

template<typename T>
struct CurveBuffer
{
    [[nodiscard]] float* GetPoints() noexcept;
    [[nodiscard]] T* GetValues() noexcept;

    uint32_t size;         // 00
    uint32_t unk04;        // 04
    uint32_t pointsOffset; // 08
    uint32_t valuesOffset; // 0C
    // float points[size]; // 10h
    // T values[size];     // 10h + size * sizeof(float)
};
RED4EXT_ASSERT_SIZE(CurveBuffer<float>, 0x10);
RED4EXT_ASSERT_OFFSET(CurveBuffer<float>, size, 0x00);
RED4EXT_ASSERT_OFFSET(CurveBuffer<float>, pointsOffset, 0x08);
RED4EXT_ASSERT_OFFSET(CurveBuffer<float>, valuesOffset, 0x0C);

template<typename T>
struct CurveData
{
    [[nodiscard]] CurveBuffer<T>* GetCurve() const noexcept;
    [[nodiscard]] uint32_t GetSize() const noexcept;

    [[nodiscard]] CurvePoint<T> GetPoint(uint32_t aIndex) const noexcept;
    void SetPoint(uint32_t aIndex, const CurvePoint<T>& acPoint) noexcept;
    void SetPoint(uint32_t aIndex, float aPoint, const T& acValue) noexcept;

    void Resize(uint32_t aNewSize) noexcept;

    [[nodiscard]] inline CurvePoint<T> operator[](uint32_t aIndex) const noexcept;

    CName name;                                  // 00
    RawBuffer buffer;                            // 08
    CBaseRTTIType* valueType;                    // 40
    curve::EInterpolationType interpolationType; // 48
    curve::ESegmentsLinkType linkType;           // 49
};
RED4EXT_ASSERT_SIZE(CurveData<float>, 0x38);
RED4EXT_ASSERT_OFFSET(CurveData<float>, name, 0x00);
RED4EXT_ASSERT_OFFSET(CurveData<float>, buffer, 0x08);
RED4EXT_ASSERT_OFFSET(CurveData<float>, valueType, 0x28);
RED4EXT_ASSERT_OFFSET(CurveData<float>, interpolationType, 0x30);
RED4EXT_ASSERT_OFFSET(CurveData<float>, linkType, 0x31);

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
