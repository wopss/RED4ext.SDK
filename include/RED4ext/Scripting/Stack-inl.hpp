#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Stack.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>


RED4EXT_INLINE RED4ext::IScriptable* RED4ext::CBaseStack::GetContext() const
{
    if (context18)
        return context18;

    if (unk28) // They also do some weird checks but let's assume it's not required
        return context20;

    return nullptr;
}

RED4EXT_INLINE RED4ext::CStackType::CStackType(CBaseRTTIType* aType, ScriptInstance aValue)
    : type(aType)
    , value{aValue}
{
}

RED4EXT_INLINE RED4ext::CStack::CStack(ScriptInstance aInstance, CStackType* aArgs, uint32_t aArgsCount,
                                       CStackType* aResult, int64_t a6)
{
    using func_t = CStack* (*)(CStack*, ScriptInstance, CStackType*, uint32_t, CStackType*, int64_t);
    RelocFunc<func_t> func(Addresses::CStack_ctor);

    func(this, aInstance, aArgs, aArgsCount, aResult, a6);
}

RED4EXT_INLINE RED4ext::CStackFrame::CStackFrame(IScriptable* aContext, char* aCode, void* aUnk)
{
    code = aCode;
    unk8 = 0;
    unk10 = 0;
    unk18 = 0;
    unk20 = 0;
    unk28 = std::bit_cast<int64_t>(aUnk);
    unk30 = 0;
    unk38 = 0;
    context = aContext;
    unk48 = 0;
    unk50 = 0;
    unk58 = 0;
    paramFlags = 0;
    currentParam = 0;
}
