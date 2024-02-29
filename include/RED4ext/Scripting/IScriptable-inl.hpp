#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/IScriptable.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::IScriptable::IScriptable()
    : valueHolder(nullptr)
    , nativeType(nullptr)
{
}

RED4EXT_INLINE RED4ext::IScriptable::~IScriptable()
{
    DestructValueHolder();
}

RED4EXT_INLINE RED4ext::CClass* RED4ext::IScriptable::GetType()
{
    if (nativeType)
    {
        return nativeType;
    }

    return GetNativeType();
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_D8(int64_t a1, int64_t a2)
{
    using func_t = void (*)(ISerializable*, int64_t, int64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::IScriptable_sub_D8);
    func(this, a1, a2);
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_E0()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_E8()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_F0()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_F8()
{
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_100()
{
}

RED4EXT_INLINE void* RED4ext::IScriptable::GetValueHolder()
{
    if (valueHolder)
    {
        return valueHolder;
    }

    auto type = nativeType;
    if (!type)
    {
        type = GetNativeType();
    }

    type->InitializeProperties(this);
    return valueHolder;
}

RED4EXT_INLINE void RED4ext::IScriptable::DestructValueHolder()
{
    using func_t = void* (*)(IScriptable*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::IScriptable_DestructValueHolder);
    func(this);
}

RED4EXT_INLINE RED4ext::IScriptable::operator const RED4ext::WeakHandle<RED4ext::IScriptable>&() const noexcept
{
    return *reinterpret_cast<const WeakHandle<IScriptable>*>(&ref);
}

RED4EXT_INLINE RED4ext::IScriptable::operator RED4ext::Handle<RED4ext::IScriptable>() noexcept
{
    if (ref.instance)
    {
        return *reinterpret_cast<const WeakHandle<IScriptable>*>(&ref);
    }
    else
    {
        return Handle<IScriptable>(this);
    }
}
