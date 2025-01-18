#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Functions.hpp>
#endif

#include <RED4ext/CNamePool.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
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

    CProperty::Flags propertyFlags{};
    propertyFlags.isReturn = true;

    returnType = CProperty::Create(type, "__return", nullptr, 0, {}, propertyFlags);
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

    CProperty::Flags paramFlags{};
    paramFlags.isOut = aIsOut;
    paramFlags.isOptional = aIsOptional;

    auto param = CProperty::Create(type, aName, nullptr, unkAC, nullptr, paramFlags);
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
        static UniversalRelocFunc<executeScriptedFn_t> executeScriptedFn(
            Detail::AddressHashes::CBaseFunction_ExecuteScripted);
        return executeScriptedFn(this, aStack, nullptr);
    }

    using executeNativeFn_t = bool (*)(CBaseFunction*, CStack*);
    static UniversalRelocFunc<executeNativeFn_t> executeNativeFn(Detail::AddressHashes::CBaseFunction_ExecuteNative);
    return executeNativeFn(this, aStack);
}

RED4EXT_INLINE bool RED4ext::CBaseFunction::Execute_(CStack* aStack)
{
    if (!flags.isNative)
    {
        using func_t = bool (*)(CBaseFunction*, CStack*);
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CBaseFunction_ExecuteScripted);
        return func(this, aStack);
    }

    char code[264];
    aStack->GenerateCode(code);
    CStackFrame stackFrame(aStack->GetContext(), code, aStack->unk10);

    return ExecuteNative(aStack, stackFrame);
}

RED4EXT_INLINE RED4ext::CBaseFunction::Handler_t RED4ext::CBaseFunction::GetHandler(uint32_t aIndex)
{
    static UniversalRelocPtr<Handler_t*> handlers(Detail::AddressHashes::CBaseFunction_Handlers);
    return handlers[aIndex];
}

RED4EXT_INLINE bool RED4ext::CBaseFunction::ExecuteNative(CStack* aStack, CStackFrame& aFrame)
{
    auto context = aStack->GetContext();
    auto resultType = aStack->GetResultType();
    auto resultAddress = aStack->GetResultAddr();

    if (!flags.isStatic)
    {
        if (!context)
        {
            context = aStack->context20;

            GetInvokable()->Execute(context, aFrame, resultAddress, resultType);
            return true;
        }

        auto func = GetHandler(GetRegIndex());
        if (func)
        {
            func(context, aFrame, resultAddress, resultType);
            return true;
        }

        return false;
    }

    auto func = OpcodeHandlers::Get(GetRegIndex() & 0xFF);
    if (!func)
    {
        return false;
    }

    func(context, &aFrame, resultAddress, resultType);
    return true;
}
