#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Functions.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/CNamePool.hpp>
#include <RED4ext/REDfunc.hpp>
#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/Scripting/CProperty.hpp>

RED4EXT_INLINE bool RED4ext::CBaseFunction::SetReturnType(CName aType)
{
    auto rtti = CRTTISystem::Get();
    auto type = rtti->GetType(aType);
    if (!type)
    {
        return false;
    }

    CProperty::Flags flags{};
    flags.b6 = true;

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

    auto param = CProperty::Create(type, aName, nullptr, unk7C, nullptr, flags);
    if (!param)
    {
        return false;
    }

    params.PushBack(param);
    return true;
}

RED4EXT_INLINE bool RED4ext::CBaseFunction::Execute(CStack* aStack)
{
    using func_t = bool (*)(CBaseFunction*, CStack*);
    static REDfunc<func_t> func(Addresses::CBaseFunction_Execute);
    return func(this, aStack);
}
