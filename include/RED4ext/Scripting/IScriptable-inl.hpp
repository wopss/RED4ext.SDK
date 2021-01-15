#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/IScriptable.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE void* RED4ext::IScriptable::GetValueHolder()
{
    using func_t = void* (*)(IScriptable*);
    static REDfunc<func_t> func(Addresses::IScriptable_GetValueHolder);
    return func(this);
}
