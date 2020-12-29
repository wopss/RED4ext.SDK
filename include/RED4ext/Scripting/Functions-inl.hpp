#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Functions.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE bool RED4ext::CBaseFunction::Execute(CStack* aStack)
{
    using func_t = bool (*)(CBaseFunction*, CStack*);
    static REDfunc<func_t> func(Addresses::CBaseFunction_Execute);
    return func(this, aStack);
}
