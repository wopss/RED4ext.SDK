#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/rtti/IType.hpp>
#endif

#include <RED4ext/CNamePool.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Scripting/CProperty.hpp>
#include <RED4ext/Scripting/Functions.hpp>

RED4EXT_INLINE RED4ext::rtti::IType::CBaseRTTIType()
    : unk8(0)
{
}

RED4EXT_INLINE RED4ext::CString RED4ext::rtti::IType::GetTypeName() const
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

RED4EXT_INLINE RED4ext::CName RED4ext::rtti::IType::GetComputedName() const
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

RED4EXT_INLINE void RED4ext::rtti::IType::Move(ScriptInstance aLhs, ScriptInstance aRhs) const
{
    Assign(aLhs, aRhs);
}

RED4EXT_INLINE bool RED4ext::rtti::IType::ToString(const ScriptInstance aInstance, CString& aOut) const
{
    RED4EXT_UNUSED_PARAMETER(aInstance);
    RED4EXT_UNUSED_PARAMETER(aOut);

    return false;
}

RED4EXT_INLINE bool RED4ext::rtti::IType::FromString(ScriptInstance aInstance, const CString& aString) const
{
    RED4EXT_UNUSED_PARAMETER(aInstance);
    RED4EXT_UNUSED_PARAMETER(aString);

    return false;
}

RED4EXT_INLINE bool RED4ext::rtti::IType::sub_78()
{
    return true;
}

RED4EXT_INLINE bool RED4ext::rtti::IType::sub_80(int64_t a1, ScriptInstance aInstance)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_80);
    return func(this, a1, aInstance);
}

RED4EXT_INLINE bool RED4ext::rtti::IType::sub_88(int64_t a1, ScriptInstance aInstance)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_88);
    return func(this, a1, aInstance);
}

RED4EXT_INLINE bool RED4ext::rtti::IType::sub_90(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance, CString&, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_90);
    return func(this, a1, aInstance, a3, a4);
}

RED4EXT_INLINE bool RED4ext::rtti::IType::sub_98(int64_t a1, ScriptInstance aInstance, CString& a3, int64_t a4,
                                                   bool a5)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, ScriptInstance, CString&, int64_t, bool);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_98);
    return func(this, a1, aInstance, a3, a4, a5);
}

RED4EXT_INLINE bool RED4ext::rtti::IType::sub_A0(int64_t a1, CString& a2, bool a3)
{
    using func_t = bool (*)(CBaseRTTIType*, int64_t, CString&, bool);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseRTTIType_sub_A0);
    return func(this, a1, a2, a3);
}

RED4EXT_INLINE bool RED4ext::rtti::IType::sub_A8()
{
    return false;
}

RED4EXT_INLINE void RED4ext::rtti::IType::sub_B0(int64_t a1, int64_t a2)
{
    RED4EXT_UNUSED_PARAMETER(a1);
    RED4EXT_UNUSED_PARAMETER(a2);
}

RED4EXT_INLINE RED4ext::Memory::IAllocator* RED4ext::rtti::IType::GetAllocator() const
{
    return Memory::RTTIAllocator::Get();
}