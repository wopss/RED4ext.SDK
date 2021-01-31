#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/RTTITypes.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>
#include <RED4ext/Scripting/Functions.hpp>

RED4EXT_INLINE RED4ext::IScriptable* RED4ext::CClass::AllocInstance()
{
    using func_t = IScriptable* (*)(CClass*, uint32_t, bool);
    static REDfunc<func_t> func(Addresses::CClass_AllocInstance);
    return func(this, GetSize(), 0);
}

RED4EXT_INLINE bool RED4ext::CClass::IsA(const IRTTIType* aType) const
{
    if (this == aType)
    {
        return true;
    }

    if (parent)
    {
        return parent->IsA(aType);
    }

    return false;
}

RED4EXT_INLINE RED4ext::CProperty* RED4ext::CClass::GetProperty(CName aName)
{
    using func_t = CProperty* (*)(CClass*, CName);
    static REDfunc<func_t> func(Addresses::CClass_GetProperty);
    return func(this, aName);
}

RED4EXT_INLINE RED4ext::CClassFunction* RED4ext::CClass::GetFunction(CName aName)
{
    using func_t = CClassFunction* (*)(CClass*, CName);
    static REDfunc<func_t> func(Addresses::CClass_GetFunction);
    return func(this, aName);
}

RED4EXT_INLINE void RED4ext::CClass::RegisterFunction(CClassFunction* aFunc)
{
    if (aFunc->flags.isStatic)
    {
        staticFuncs.PushBack(aFunc);
    }
    else
    {
        funcs.PushBack(aFunc);
    }
}
