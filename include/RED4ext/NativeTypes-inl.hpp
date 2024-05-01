#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/NativeTypes.hpp>
#endif

#include <RED4ext/RTTISystem.hpp>

RED4EXT_INLINE RED4ext::TweakDBID::TweakDBID(const std::string_view aName) noexcept
{
    size_t len = aName.size();
    name.hash = CRC32(reinterpret_cast<const uint8_t*>(aName.data()), len, 0);
    name.length = static_cast<uint8_t>(len);
    std::memset(name.tdbOffsetBE, 0, sizeof(name.tdbOffsetBE));
}

RED4EXT_INLINE RED4ext::TweakDBID::TweakDBID(const TweakDBID& aBase, const std::string_view aName) noexcept
{
    *this = aBase + aName;
    std::memset(name.tdbOffsetBE, 0, sizeof(name.tdbOffsetBE));
}

RED4EXT_INLINE bool RED4ext::TweakDBID::IsValid() const
{
    return name.hash != 0 && name.length != 0;
}

RED4EXT_INLINE bool RED4ext::TweakDBID::HasTDBOffset() const
{
    return name.tdbOffsetBE[0] != 0 || name.tdbOffsetBE[1] != 0 || name.tdbOffsetBE[2] != 0;
}

RED4EXT_INLINE int32_t RED4ext::TweakDBID::ToTDBOffset() const
{
    int32_t offset = 0;
    reinterpret_cast<uint8_t*>(&offset)[0] = name.tdbOffsetBE[2];
    reinterpret_cast<uint8_t*>(&offset)[1] = name.tdbOffsetBE[1];
    reinterpret_cast<uint8_t*>(&offset)[2] = name.tdbOffsetBE[0];
    return offset;
}

RED4EXT_INLINE void RED4ext::TweakDBID::SetTDBOffset(int32_t aTDBOffset)
{
    name.tdbOffsetBE[0] = reinterpret_cast<uint8_t*>(&aTDBOffset)[2];
    name.tdbOffsetBE[1] = reinterpret_cast<uint8_t*>(&aTDBOffset)[1];
    name.tdbOffsetBE[2] = reinterpret_cast<uint8_t*>(&aTDBOffset)[0];
}

RED4EXT_INLINE RED4ext::TweakDBID::operator uint64_t() const noexcept
{
    return value;
}

RED4EXT_INLINE RED4ext::TweakDBID& RED4ext::TweakDBID::operator=(const std::string_view aName) noexcept
{
    *this = TweakDBID(aName);
    return *this;
}

RED4EXT_INLINE RED4ext::TweakDBID RED4ext::TweakDBID::operator+(const std::string_view aName) const noexcept
{
    size_t len = aName.size();
    uint32_t hash = CRC32(reinterpret_cast<const uint8_t*>(aName.data()), len, name.hash);
    return TweakDBID(hash, name.length + static_cast<uint8_t>(len));
}

RED4EXT_INLINE bool RED4ext::TweakDBID::operator<(const TweakDBID& aDBID) const noexcept
{
    if (name.hash < aDBID.name.hash)
        return true;

    return aDBID.name.hash == name.hash && name.length < aDBID.name.length;
}

RED4EXT_INLINE bool RED4ext::TweakDBID::operator>(const TweakDBID& aDBID) const noexcept
{
    if (name.hash > aDBID.name.hash)
        return true;

    return aDBID.name.hash == name.hash && name.length > aDBID.name.length;
}

RED4EXT_INLINE bool RED4ext::TweakDBID::operator==(const TweakDBID& aDBID) const noexcept
{
    return aDBID.name.hash == name.hash && aDBID.name.length == name.length;
}

RED4EXT_INLINE bool RED4ext::TweakDBID::operator!=(const TweakDBID& aDBID) const noexcept
{
    return !(aDBID == *this);
}

RED4EXT_INLINE bool RED4ext::ItemID::IsValid() const noexcept
{
    return tdbid.IsValid() && rngSeed;
}

RED4EXT_INLINE RED4ext::ItemID::operator bool() const noexcept
{
    return IsValid();
}

RED4EXT_INLINE RED4ext::gamedataLocKeyWrapper::gamedataLocKeyWrapper() noexcept
    : primaryKey(0)
{
}

RED4EXT_INLINE RED4ext::gamedataLocKeyWrapper::gamedataLocKeyWrapper(uint64_t aPrimaryKey) noexcept
    : primaryKey(aPrimaryKey)
{
}

RED4EXT_INLINE RED4ext::gamedataLocKeyWrapper::gamedataLocKeyWrapper(const char* aSecondaryKey) noexcept
    : primaryKey(RED4ext::FNV1a64(aSecondaryKey))
{
}

RED4EXT_INLINE RED4ext::Variant::Variant(const RED4ext::CBaseRTTIType* aType)
    : Variant()
{
    if (aType)
    {
        Init(aType);
    }
}

RED4EXT_INLINE RED4ext::Variant::Variant(const RED4ext::CBaseRTTIType* aType, const RED4ext::ScriptInstance aData)
    : Variant()
{
    if (aType)
    {
        Fill(aType, aData);
    }
}

RED4EXT_INLINE RED4ext::Variant::Variant(RED4ext::CName aTypeName)
    : Variant(RED4ext::CRTTISystem::Get()->GetType(aTypeName))
{
}

RED4EXT_INLINE RED4ext::Variant::Variant(RED4ext::CName aTypeName, const RED4ext::ScriptInstance aData)
    : Variant(RED4ext::CRTTISystem::Get()->GetType(aTypeName), aData)
{
}

RED4EXT_INLINE RED4ext::Variant::Variant(const Variant& aOther)
    : Variant(aOther.GetType(), aOther.GetDataPtr())
{
}

RED4EXT_INLINE RED4ext::Variant::Variant(Variant&& aOther) noexcept
    : type(aOther.type)
{
    std::copy(std::begin(aOther.inlined), std::end(aOther.inlined), std::begin(inlined));
    std::fill(std::begin(aOther.inlined), std::end(aOther.inlined), static_cast<uint8_t>(0));
    aOther.type = nullptr;
}

RED4EXT_INLINE RED4ext::Variant::~Variant()
{
    Free();
}

RED4EXT_INLINE RED4ext::Variant& RED4ext::Variant::operator=(const Variant& aRhs)
{
    Fill(aRhs.GetType(), aRhs.GetDataPtr());
    return *this;
}

RED4EXT_INLINE RED4ext::Variant& RED4ext::Variant::operator=(Variant&& aRhs) noexcept
{
    type = aRhs.type;
    aRhs.type = nullptr;

    std::copy(std::begin(aRhs.inlined), std::end(aRhs.inlined), std::begin(inlined));
    std::fill(std::begin(aRhs.inlined), std::end(aRhs.inlined), static_cast<uint8_t>(0));

    return *this;
}

RED4EXT_INLINE bool RED4ext::Variant::IsEmpty() const noexcept
{
    return !type;
}

RED4EXT_INLINE bool RED4ext::Variant::IsInlined() const noexcept
{
    return reinterpret_cast<uintptr_t>(type) & InlineFlag;
}

RED4EXT_INLINE RED4ext::CBaseRTTIType* RED4ext::Variant::GetType() const noexcept
{
    return reinterpret_cast<RED4ext::CBaseRTTIType*>(reinterpret_cast<uintptr_t>(type) & TypeMask);
}

RED4EXT_INLINE RED4ext::ScriptInstance RED4ext::Variant::GetDataPtr() const noexcept
{
    return IsInlined() ? const_cast<uint8_t*>(inlined) : instance;
}

RED4EXT_INLINE bool RED4ext::Variant::Init(const RED4ext::CBaseRTTIType* aType)
{
    if (!aType)
    {
        Free();
        return false;
    }

    RED4ext::CBaseRTTIType* ownType = GetType();
    RED4ext::ScriptInstance ownData = GetDataPtr();

    if (ownType)
    {
        if (aType == ownType)
            return true;

        if (ownData)
        {
            ownType->Destruct(ownData);

            if (!IsInlined())
                ownType->GetAllocator()->Free(ownData);
        }
    }

    type = aType;

    if (CanBeInlined(aType))
    {
        reinterpret_cast<uintptr_t&>(type) |= InlineFlag;
        ownData = inlined;
    }
    else
    {
        instance = aType->GetAllocator()->AllocAligned(aType->GetSize(), aType->GetAlignment()).memory;
        ownData = instance;
    }

    aType->Construct(ownData);

    return true;
}

RED4EXT_INLINE bool RED4ext::Variant::Fill(const RED4ext::CBaseRTTIType* aType, const RED4ext::ScriptInstance aData)
{
    if (!Init(aType))
        return false;

    if (!aData)
        return false;

    GetType()->Assign(GetDataPtr(), aData);

    return true;
}

RED4EXT_INLINE bool RED4ext::Variant::Extract(RED4ext::ScriptInstance aBuffer)
{
    if (IsEmpty())
        return false;

    GetType()->Assign(aBuffer, GetDataPtr());

    return true;
}

RED4EXT_INLINE void RED4ext::Variant::Free()
{
    if (IsEmpty())
        return;

    RED4ext::CBaseRTTIType* ownType = GetType();
    RED4ext::ScriptInstance ownData = GetDataPtr();

    if (ownData)
    {
        ownType->Destruct(ownData);

        if (!IsInlined())
            ownType->GetAllocator()->Free(ownData);
    }

    instance = nullptr;
    type = nullptr;
}

RED4EXT_INLINE bool RED4ext::Variant::CanBeInlined(const RED4ext::CBaseRTTIType* aType) noexcept
{
    return aType->GetSize() <= InlineSize && aType->GetAlignment() <= InlineAlignment;
}
