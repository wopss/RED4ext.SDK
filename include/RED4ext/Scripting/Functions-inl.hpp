#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Functions.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/CNamePool.hpp>
#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Scripting/CProperty.hpp>
#include <RED4ext/Scripting/OpcodeHandlers.hpp>
#include <RED4ext/Scripting/Stack.hpp>

RED4EXT_INLINE bool RED4ext::CBaseFunction::SetReturnType(CName aType)
{
    auto rtti = CRTTISystem::Get();
    auto type = rtti->GetType(aType);
    if (!type)
    {
        return false;
    }

    CProperty::Flags flags{};
    flags.isReturn = true;

    returnType = CProperty::Create(type, "__return", nullptr, 0, {}, flags);
    return returnType != nullptr;
}

RED4EXT_INLINE bool RED4ext::CBaseFunction::AddParam(CName aType, const char* aName, bool aIsOut, bool aIsOptional)
{
    auto rtti = CRTTISystem::Get();
    auto type = rtti->GetType(aType);
    if (!type)
    {
        return false;
    }

    CProperty::Flags flags{};
    flags.isOut = aIsOut;
    flags.isOptional = aIsOptional;

    auto param = CProperty::Create(type, aName, nullptr, unkAC, nullptr, flags);
    if (!param)
    {
        return false;
    }

    params.PushBack(param);
    return true;
}

RED4EXT_INLINE bool RED4ext::CBaseFunction::Execute(CStack* aStack)
{
    if (!flags.isNative)
    {
        using executeScriptedFn_t = bool (*)(CBaseFunction*, CStack*, void*);
        RelocFunc<executeScriptedFn_t> executeScriptedFn(Addresses::CBaseFunction_ExecuteScripted);
        return executeScriptedFn(this, aStack, nullptr);
    }

    using executeNativeFn_t = bool (*)(CBaseFunction*, CStack*);
    RelocFunc<executeNativeFn_t> executeNativeFn(Addresses::CBaseFunction_ExecuteNative);
    return executeNativeFn(this, aStack);
}

RED4EXT_INLINE bool RED4ext::CBaseFunction::Execute_(CStack* aStack)
{
    if (!flags.isNative)
    {
        using func_t = bool (*)(CBaseFunction*, CStack*);
        RelocFunc<func_t> func(Addresses::CBaseFunction_ExecuteScripted);
        return func(this, aStack);
    }

    char code[264];
    aStack->GenerateCode(code);
    CStackFrame stackFrame(aStack->GetContext(), code, aStack->unk10);

    return ExecuteNative(aStack, stackFrame);
}

RED4EXT_INLINE RED4ext::CBaseFunction::Handler_t RED4ext::CBaseFunction::GetHandler(uint32_t aIndex)
{
    static uint8_t* pLocation = reinterpret_cast<uint8_t*>(Addresses::CBaseFunction_Register) + 0x43 +
                                reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
    static uintptr_t pSecondCall =
        reinterpret_cast<uintptr_t>(pLocation) + 4 + *reinterpret_cast<uint32_t*>(pLocation) + 9;
    static uintptr_t pFinalAddress = pSecondCall + 4 + *reinterpret_cast<uint32_t*>(pSecondCall);

    static auto* s_handlers = reinterpret_cast<Handler_t*>(pFinalAddress);

    return s_handlers[aIndex];
}

RED4EXT_INLINE bool RED4ext::CBaseFunction::ExecuteNative(CStack* aStack, CStackFrame& aFrame)
{
    if (!flags.isStatic)
    {
        auto context = aStack->GetContext();
        if (!context)
        {
            auto returnType = aStack->GetType();
            auto resultAddress = aStack->GetResultAddr();
            auto context = aStack->context20;

            GetInvokable()->Execute(context, aFrame, resultAddress, returnType);

            return true;
        }

        auto func = GetHandler(GetRegIndex());
        if (func)
        {
            auto returnType = aStack->GetType();
            auto resultAddress = aStack->GetResultAddr();

            func(context, aFrame, resultAddress, returnType);

            return true;
        }

        return false;
    }

    auto func = OpcodeHandlers::Get(GetRegIndex() & 0xFF);
    if (!func)
        return false;

    auto returnType = aStack->GetType();
    auto resultAddress = aStack->GetResultAddr();
    auto context = (IScriptable*)aStack->GetContext();
    func(context, &aFrame, resultAddress, returnType);

    return true;
}
