#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Stack.hpp>
#endif

#include <bit>

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CBaseStack::CBaseStack(IScriptable* aContext) noexcept
    : unk08(0)
    , unk10(0)
    , context18(aContext)
    , context20(aContext)
{
    auto rtti = CRTTISystem::Get();
    unk28 = rtti->GetClass("IScriptable");
}

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

RED4EXT_INLINE RED4ext::CStack::CStack(ScriptInstance aContext, CStackType* aArgs, uint32_t aArgsCount,
                                       CStackType* aResult)

    : CBaseStack(static_cast<IScriptable*>(aContext))
    , args(aArgs)
    , argsCount(aArgsCount)
    , result(aResult)
{
    static UniversalRelocVtbl vtbl(Detail::AddressHashes::CStack_vtbl);
    *reinterpret_cast<uintptr_t**>(this) = vtbl;
}

RED4EXT_INLINE RED4ext::CStackFrame::CStackFrame(IScriptable* aContext, char* aCode, void* aUnk)
{
    code = aCode;
    func = nullptr;
    localVars = nullptr;
    params = nullptr;
    unk20 = 0;
    unk28 = std::bit_cast<int64_t>(aUnk);
    data = nullptr;
    dataType = nullptr;
    context = aContext;
    parent = nullptr;
    unk50 = 0;
    unk58 = 0;
    paramFlags = 0;
    currentParam = 0;
    useDirectData = false;
}
