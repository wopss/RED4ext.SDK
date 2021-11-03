#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/IScriptable.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

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
}
