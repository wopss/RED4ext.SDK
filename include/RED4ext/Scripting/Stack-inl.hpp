#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Stack.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

RED4EXT_INLINE RED4ext::CStackType::CStackType(IRTTIType* aType, ScriptInstance aValue)
    : type(aType)
    , value{aValue}
{
}

RED4EXT_INLINE RED4ext::CStack::CStack(ScriptInstance aInstance, CStackType* aArgs, uint32_t aArgsCount,
                                       CStackType* aResult, int64_t a6)
{
    using func_t = CStack* (*)(CStack*, ScriptInstance, CStackType*, uint32_t, CStackType*, int64_t);
    static REDfunc<func_t> func(Addresses::CStack_ctor);

    func(this, aInstance, aArgs, aArgsCount, aResult, a6);
}
