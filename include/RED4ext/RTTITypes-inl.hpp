#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/RTTITypes.hpp>
#endif

#include <RED4ext/CNamePool.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Scripting/CProperty.hpp>
#include <RED4ext/Scripting/Functions.hpp>

RED4EXT_INLINE RED4ext::CBaseRTTIType::CBaseRTTIType()
    : unk8(0)
{
}

RED4EXT_INLINE RED4ext::CString RED4ext::CBaseRTTIType::GetTypeName() const
{
    switch (GetType())
    {
    case ERTTIType::Name:
    {
        return "RT_Name";
    }
    case ERTTIType::Fundamental:
    {
        return "RT_Fundamental";
    }
    case ERTTIType::Class:
    {
        return "RT_Class";
    }
    case ERTTIType::Array:
    {
        return "RT_Array";
    }
    case ERTTIType::Simple:
    {
        return "RT_Simple";
    }
    case ERTTIType::Enum:
    {
        return "RT_Enum";
    }
    case ERTTIType::StaticArray:
    {
        return "RT_StaticArray";
    }
    case ERTTIType::NativeArray:
    {
        return "RT_NativeArray";
    }
    case ERTTIType::Pointer:
    {
        return "RT_Pointer";
    }
    case ERTTIType::Handle:
    {
        return "RT_Handle";
    }
    case ERTTIType::WeakHandle:
    {
        return "RT_WeakHandle";
    }
    case ERTTIType::ResourceReference:
    {
        return "RT_ResourceReference";
    }
    case ERTTIType::ResourceAsyncReference:
    {
        return "RT_ResourceAsyncReference";
    }
    case ERTTIType::BitField:
    {
        return "RT_BitField";
    }
    case ERTTIType::LegacySingleChannelCurve:
    {
        return "RT_LegacySingleChannelCurve";
    }
    case ERTTIType::ScriptReference:
    {
        return "RT_ScriptReference";
    }
    default:
    {
        return "Unhandled ERTTITypeType";
    }
    }
}

RED4EXT_INLINE RED4ext::CName RED4ext::CBaseRTTIType::GetComputedName() const
{
    std::string name = "script_ref:";
    auto hash = GetName();
    if (!hash.IsNone())
    {
        name += hash.ToString();
        return CNamePool::Add(name.c_str());
    }

    return 0ull;
}

RED4EXT_INLINE void RED4ext::CBaseRTTIType::Move(ScriptInstance aLhs, ScriptInstance aRhs) const
{
    Assign(aLhs, aRhs);
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::ToString(const ScriptInstance aInstance, CString& aOut) const
{
    RED4EXT_UNUSED_PARAMETER(aInstance);
    RED4EXT_UNUSED_PARAMETER(aOut);

    return false;
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::FromString(ScriptInstance aInstance, const CString& aString) const
{
    RED4EXT_UNUSED_PARAMETER(aInstance);
    RED4EXT_UNUSED_PARAMETER(aString);

    return false;
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::sub_78()
{
    return true;
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::sub_80(int64_t a1, ScriptInstance aInstance)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_80);
    return func(this, a1, aInstance);
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::sub_88(int64_t a1, ScriptInstance aInstance)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_88);
    return func(this, a1, aInstance);
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::sub_90(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance, CString&, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_90);
    return func(this, a1, aInstance, a3, a4);
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::sub_98(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4,
                                                   bool a5)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance, CString&, int64_t, bool);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_98);
    return func(this, a1, aInstance, a3, a4, a5);
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::sub_A0(int64_t a1, CString& a2, bool a3)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, CString&, bool);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_A0);
    return func(this, a1, a2, a3);
}

RED4EXT_INLINE bool RED4ext::CBaseRTTIType::sub_A8()
{
    return false;
}

RED4EXT_INLINE void RED4ext::CBaseRTTIType::sub_B0(int64_t a1, int64_t a2)
{
    RED4EXT_UNUSED_PARAMETER(a1);
    RED4EXT_UNUSED_PARAMETER(a2);
}

RED4EXT_INLINE RED4ext::Memory::IAllocator* RED4ext::CBaseRTTIType::GetAllocator() const
{
    return Memory::RTTIAllocator::Get();
}

RED4EXT_INLINE RED4ext::CClass::CClass(CName aName, uint32_t aSize, Flags aFlags)
    : parent(nullptr)
    , name(aName)
    , computedName(CBaseRTTIType::GetComputedName())
    , size(aSize)
    , flags(aFlags)
    , holderSize(0)
    , alignment(4)
    , props(Memory::RTTIAllocator::Get())
    , overriddenProps(Memory::RTTIAllocator::Get())
    , funcs(Memory::RTTIAllocator::Get())
    , staticFuncs(Memory::RTTIAllocator::Get())
    , funcsByName(Memory::RTTIAllocator::Get())
    , unkA8(Memory::RTTIAllocator::Get())
    , unkD8(0)
    , unkE0(0)
    , propsByName(Memory::RTTIAllocator::Get())
    , unk118(Memory::RTTIAllocator::Get())
    , unk128(Memory::RTTIAllocator::Get())
    , unk138(Memory::RTTIAllocator::Get())
    , unk148(Memory::RTTIAllocator::Get())
    , defaults(Memory::ScriptAllocator::Get())
    , unk180(Memory::RTTIAllocator::Get())
    , listeners(Memory::RTTIAllocator::Get())
    , eventTypeId(-1)
    , unk2C4(-1)
    , unk2C9(0xE6)
{
    std::memset(listening, 0, sizeof(listening));
}

RED4EXT_INLINE RED4ext::CName RED4ext::CClass::GetName() const
{
    return name;
}

RED4EXT_INLINE uint32_t RED4ext::CClass::GetSize() const
{
    return size;
}

RED4EXT_INLINE uint32_t RED4ext::CClass::GetAlignment() const
{
    return alignment;
}

RED4EXT_INLINE RED4ext::ERTTIType RED4ext::CClass::GetType() const
{
    return ERTTIType::Class;
}

RED4EXT_INLINE RED4ext::CName RED4ext::CClass::GetComputedName() const
{
    return computedName;
}

RED4EXT_INLINE void RED4ext::CClass::Construct(ScriptInstance aMemory) const
{
    ConstructCls(aMemory);
}

RED4EXT_INLINE void RED4ext::CClass::Destruct(ScriptInstance aMemory) const
{
    DestructCls(aMemory);
}

RED4EXT_INLINE bool RED4ext::CClass::Unserialize(BaseStream* aStream, ScriptInstance aInstance, int64_t a3) const
{
    using func_t = bool (*)(const CClass*, BaseStream*, ScriptInstance, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_Unserialize);
    return func(this, aStream, aInstance, a3);
}

RED4EXT_INLINE bool RED4ext::CClass::ToString(const ScriptInstance aInstance, CString& aOut) const
{
    using func_t = bool (*)(const CClass*, ScriptInstance, CString&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_ToString);
    return func(this, aInstance, aOut);
}

RED4EXT_INLINE bool RED4ext::CClass::sub_80(int64_t a1, ScriptInstance aInstance)
{
    using func_t = bool (*)(const CClass*, int64_t, ScriptInstance);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_80);
    return func(this, a1, aInstance);
}

RED4EXT_INLINE bool RED4ext::CClass::sub_88(int64_t a1, ScriptInstance aInstance)
{
    using func_t = bool (*)(const CClass*, int64_t, ScriptInstance);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_88);
    return func(this, a1, aInstance);
}

RED4EXT_INLINE bool RED4ext::CClass::sub_90(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4)
{
    using func_t = bool (*)(const CClass*, int64_t, ScriptInstance, CString&, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_90);
    return func(this, a1, aInstance, a3, a4);
}

RED4EXT_INLINE bool RED4ext::CClass::sub_98(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4, bool a5)
{
    RED4EXT_UNUSED_PARAMETER(a5);

    using func_t = bool (*)(const CClass*, int64_t, ScriptInstance, CString&, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_90);
    return func(this, a1, aInstance, a3, a4);
}

RED4EXT_INLINE bool RED4ext::CClass::sub_A0(int64_t a1, CString& a2, bool a3)
{
    using func_t = bool (*)(const CClass*, int64_t, CString&, bool);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_A0);
    return func(this, a1, a2, a3);
}

RED4EXT_INLINE void RED4ext::CClass::sub_B0(int64_t a1, int64_t a2)
{
    using func_t = bool (*)(const CClass*, int64_t, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_B0);
    func(this, a1, a2);
}

RED4EXT_INLINE void RED4ext::CClass::sub_C0()
{
    using func_t = void (*)(CClass*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_C0);
    func(this);
}

RED4EXT_INLINE uint32_t RED4ext::CClass::GetMaxAlignment() const
{
    using func_t = uint32_t (*)(const CClass*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_GetMaxAlignment);
    return func(this);
}

RED4EXT_INLINE bool RED4ext::CClass::sub_D0() const
{
    using func_t = bool (*)(const CClass*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_sub_D0);
    return func(this);
}

RED4EXT_INLINE RED4ext::ScriptInstance RED4ext::CClass::CreateInstance(bool aZeroMemory) const
{
    using func_t = ScriptInstance (*)(const CClass*, uint32_t, bool);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_CreateInstance);
    return func(this, GetSize(), aZeroMemory);
}

RED4EXT_INLINE bool RED4ext::CClass::IsA(const CBaseRTTIType* aType) const
{
    if (this == aType)
    {
        return true;
    }

    if (parent)
    {
        return parent->IsA(aType);
    }

    return false;
}

RED4EXT_INLINE RED4ext::CProperty* RED4ext::CClass::GetProperty(CName aName)
{
    // Not recreating this because they do something strage with overriden properties and I am not sure what exactly
    // they do.

    using func_t = CProperty* (*)(CClass*, CName);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_GetProperty);
    return func(this, aName);
}

RED4EXT_INLINE void RED4ext::CClass::InitializeProperties(ScriptInstance aInstance)
{
    static UniversalRelocFunc<void (*)(CClass*, ScriptInstance)> initializeProperties(
        Detail::AddressHashes::CClass_InitializeProperties);
    initializeProperties(this, aInstance);

    static UniversalRelocFunc<void (*)(CClass*, ScriptInstance)> assignDefaultValuesToProperties(
        Detail::AddressHashes::CClass_AssignDefaultValuesToProperties);
    assignDefaultValuesToProperties(this, aInstance);
}

RED4EXT_INLINE void RED4ext::CClass::GetProperties(DynArray<CProperty*>& aProps)
{
    using func_t = CProperty* (*)(CClass*, DynArray<CProperty*>&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_GetProperties);
    func(this, aProps);
}

RED4EXT_INLINE RED4ext::CClassFunction* RED4ext::CClass::GetFunction(CName aShortName) const
{
    for (auto func : staticFuncs)
    {
        if (func->shortName == aShortName)
        {
            return func;
        }
    }

    for (auto func : funcs)
    {
        if (func->shortName == aShortName)
        {
            return func;
        }
    }

    if (parent)
    {
        return parent->GetFunction(aShortName);
    }

    return nullptr;
}

RED4EXT_INLINE void RED4ext::CClass::RegisterFunction(CClassFunction* aFunc)
{
    if (aFunc->flags.isStatic)
    {
        staticFuncs.PushBack(static_cast<CClassStaticFunction*>(aFunc));
    }
    else
    {
        funcs.PushBack(aFunc);
    }
}

RED4EXT_INLINE void RED4ext::CClass::ClearScriptedData()
{
    using func_t = void (*)(CClass*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClass_ClearScriptedData);
    func(this);
}

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
