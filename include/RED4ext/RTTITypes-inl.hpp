#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/RTTITypes.hpp>
#endif

#include <RED4ext/CNamePool.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Scripting/CProperty.hpp>
#include <RED4ext/Scripting/Functions.hpp>
#include <RED4ext/ERTTIType.hpp>

RED4EXT_INLINE RED4ext::CEnum::CEnum(CName aName, int8_t aActualSize, Flags aFlags)
    : name(aName)
    , computedName(CBaseRTTIType::GetComputedName())
    , actualSize(aActualSize)
    , flags(aFlags)
    , hashList(Memory::RTTIAllocator::Get())
    , valueList(Memory::RTTIAllocator::Get())
    , aliasList(Memory::RTTIAllocator::Get())
    , aliasValueList(Memory::RTTIAllocator::Get())
{
}

RED4EXT_INLINE RED4ext::CName RED4ext::CEnum::GetName() const
{
    return name;
}

RED4EXT_INLINE uint32_t RED4ext::CEnum::GetSize() const
{
    return actualSize;
}

RED4EXT_INLINE uint32_t RED4ext::CEnum::GetAlignment() const
{
    return 1;
}

RED4EXT_INLINE RED4ext::ERTTIType RED4ext::CEnum::GetType() const
{
    return ERTTIType::Enum;
}

RED4EXT_INLINE RED4ext::CName RED4ext::CEnum::GetComputedName() const
{
    return computedName;
}

RED4EXT_INLINE void RED4ext::CEnum::Construct(ScriptInstance aMemory) const
{
    RED4EXT_UNUSED_PARAMETER(aMemory);
}

RED4EXT_INLINE void RED4ext::CEnum::Destruct(ScriptInstance aMemory) const
{
    RED4EXT_UNUSED_PARAMETER(aMemory);
}

RED4EXT_INLINE const bool RED4ext::CEnum::IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs, uint32_t a3)
{
    RED4EXT_UNUSED_PARAMETER(a3);

    switch (actualSize)
    {
    case 1:
    {
        return *static_cast<const int8_t*>(aLhs) == *static_cast<const int8_t*>(aRhs);
    }
    case 2:
    {
        return *static_cast<const int16_t*>(aLhs) == *static_cast<const int16_t*>(aRhs);
    }
    case 4:
    {
        return *static_cast<const int32_t*>(aLhs) == *static_cast<const int32_t*>(aRhs);
    }
    case 8:
    {
        return *static_cast<const int64_t*>(aLhs) == *static_cast<const int64_t*>(aRhs);
    }
    }

    return false;
}

RED4EXT_INLINE void RED4ext::CEnum::Assign(ScriptInstance aLhs, const ScriptInstance aRhs) const
{
    switch (actualSize)
    {
    case 1:
    {
        *static_cast<int8_t*>(aLhs) = *static_cast<const int8_t*>(aRhs);
        break;
    }
    case 2:
    {
        *static_cast<int16_t*>(aLhs) = *static_cast<const int16_t*>(aRhs);
        break;
    }
    case 4:
    {
        *static_cast<int32_t*>(aLhs) = *static_cast<const int32_t*>(aRhs);
        break;
    }
    case 8:
    {
        *static_cast<int64_t*>(aLhs) = *static_cast<const int64_t*>(aRhs);
        break;
    }
    }
}

RED4EXT_INLINE bool RED4ext::CEnum::Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) const
{
    using func_t = bool (*)(const CEnum*, BaseStream*, ScriptInstance, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CEnum_Unserialize);
    return func(this, aStream, aInstance, a3);
}

RED4EXT_INLINE bool RED4ext::CEnum::ToString(const ScriptInstance aInstance, CString& aOut) const
{
    using func_t = bool (*)(const CEnum*, const ScriptInstance, CString&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CEnum_ToString);
    return func(this, aInstance, aOut);
}

RED4EXT_INLINE bool RED4ext::CEnum::FromString(ScriptInstance aInstance, const CString& aString) const
{
    using func_t = bool (*)(const CEnum*, ScriptInstance, const CString&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CEnum_FromString);
    return func(this, aInstance, aString);
}

RED4EXT_INLINE RED4ext::CBitfield::CBitfield(CName aName, int8_t aActualSize, Flags aFlags)
    : name(aName)
    , computedName(CBaseRTTIType::GetComputedName())
    , actualSize(aActualSize)
    , flags(aFlags)
    , validBits(0)
{
    std::memset(bitNames, 0, sizeof(bitNames));
}

RED4EXT_INLINE RED4ext::CName RED4ext::CBitfield::GetName() const
{
    return name;
}

RED4EXT_INLINE uint32_t RED4ext::CBitfield::GetSize() const
{
    return actualSize;
}

RED4EXT_INLINE uint32_t RED4ext::CBitfield::GetAlignment() const
{
    return 1;
}

RED4EXT_INLINE RED4ext::ERTTIType RED4ext::CBitfield::GetType() const
{
    return ERTTIType::BitField;
}

RED4EXT_INLINE RED4ext::CName RED4ext::CBitfield::GetComputedName() const
{
    return computedName;
}

RED4EXT_INLINE void RED4ext::CBitfield::Construct(ScriptInstance aMemory) const
{
    RED4EXT_UNUSED_PARAMETER(aMemory);
}

RED4EXT_INLINE void RED4ext::CBitfield::Destruct(ScriptInstance aMemory) const
{
    RED4EXT_UNUSED_PARAMETER(aMemory);
}

RED4EXT_INLINE const bool RED4ext::CBitfield::IsEqual(const ScriptInstance aLhs, const ScriptInstance aRhs, uint32_t a3)
{
    RED4EXT_UNUSED_PARAMETER(a3);

    switch (actualSize)
    {
    case 1:
    {
        return *static_cast<const uint8_t*>(aLhs) == *static_cast<const uint8_t*>(aRhs);
    }
    case 2:
    {
        return *static_cast<const uint16_t*>(aLhs) == *static_cast<const uint16_t*>(aRhs);
    }
    case 4:
    {
        return *static_cast<const uint32_t*>(aLhs) == *static_cast<const uint32_t*>(aRhs);
    }
    case 8:
    {
        return *static_cast<const uint64_t*>(aLhs) == *static_cast<const uint64_t*>(aRhs);
    }
    }

    return false;
}

RED4EXT_INLINE void RED4ext::CBitfield::Assign(ScriptInstance aLhs, const ScriptInstance aRhs) const
{
    switch (actualSize)
    {
    case 1:
    {
        *static_cast<uint8_t*>(aLhs) = *static_cast<const uint8_t*>(aRhs);
        break;
    }
    case 2:
    {
        *static_cast<uint16_t*>(aLhs) = *static_cast<const uint16_t*>(aRhs);
        break;
    }
    case 4:
    {
        *static_cast<uint32_t*>(aLhs) = *static_cast<const uint32_t*>(aRhs);
        break;
    }
    case 8:
    {
        *static_cast<uint64_t*>(aLhs) = *static_cast<const uint64_t*>(aRhs);
        break;
    }
    }
}

RED4EXT_INLINE bool RED4ext::CBitfield::Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) const
{
    using func_t = bool (*)(const CBitfield*, BaseStream*, ScriptInstance, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBitfield_Unserialize);
    return func(this, aStream, aInstance, a3);
}

RED4EXT_INLINE bool RED4ext::CBitfield::ToString(const ScriptInstance aInstance, CString& aOut) const
{
    using func_t = bool (*)(const CBitfield*, ScriptInstance, CString&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBitfield_ToString);
    return func(this, aInstance, aOut);
}

RED4EXT_INLINE bool RED4ext::CBitfield::FromString(ScriptInstance aInstance, const CString& aString) const
{
    using func_t = bool (*)(const CBitfield*, ScriptInstance, const CString&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBitfield_FromString);
    return func(this, aInstance, aString);
}
