#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/IScriptable.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::IScriptable::IScriptable()
    : valueHolder(nullptr)
    , unk30(nullptr)
{
}

RED4EXT_INLINE RED4ext::IScriptable::~IScriptable()
{
    DestructValueHolder();
}

RED4EXT_INLINE RED4ext::CClass* RED4ext::IScriptable::GetType()
{
    if (unk30)
    {
        return unk30;
    }

    return GetNativeType();
}

RED4EXT_INLINE void RED4ext::IScriptable::sub_D8(int64_t a1, int64_t a2)
{
    using func_t = void (*)(ISerializable*, int64_t, int64_t);
    RelocFunc<func_t> func(Addresses::IScriptable_sub_D8);
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

RED4EXT_INLINE void RED4ext::IScriptable::sub_108()
{
}

RED4EXT_INLINE void* RED4ext::IScriptable::GetValueHolder()
{
    using func_t = void* (*)(IScriptable*);
    RelocFunc<func_t> func(Addresses::IScriptable_GetValueHolder);
    return func(this);

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
    RelocFunc<func_t> func(Addresses::IScriptable_DestructValueHolder);
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
