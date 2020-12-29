#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Utils.hpp>
#endif

#include <RED4ext/GameEngine.hpp>
#include <RED4ext/RTTISystem.hpp>

RED4EXT_INLINE bool RED4ext::ExecuteFunction(IScriptable* aParent, CBaseFunction* aFunc, void* aOut,
                                             std::vector<CStackType> aArgs)
{
    CStackType result;
    if (aOut && aFunc->returnType)
    {
        result.type = aFunc->returnType->type;
        result.value = aOut;
    }

    // If the arguments are not supplied or are too many, don't call the function, it will result in a crash or
    // undefined behavior.
    if (aArgs.size() != aFunc->params.size)
    {
        return false;
    }

    // Set the arguments types here. This is done here so that we don't have to copy the code for finding a function
    // multiple times.
    for (size_t i = 0; i < aArgs.size() && i < aFunc->params.size; i++)
    {
        auto& arg = aArgs[i];

        // Don't override the type if it is set, maybe the caller is trying something exotic.
        if (!arg.type)
        {
            arg.type = aFunc->params[static_cast<uint32_t>(i)]->type;
        }
    }

    CStack stack(aParent, aArgs.data(), static_cast<uint32_t>(aArgs.size()),
                 aOut && aFunc->returnType ? &result : nullptr);
    return aFunc->Execute(&stack);
}

RED4EXT_INLINE bool RED4ext::ExecuteFunction(CName aParent, CName aFunc, void* aOut, std::vector<CStackType> aArgs)
{
    auto rtti = CRTTISystem::Get();
    auto type = rtti->GetClass(aParent);
    if (!type)
    {
        return false;
    }

    static auto scriptable = rtti->GetClass("IScriptable");
    if (!type->IsA(scriptable))
    {
        return false;
    }

    auto func = type->GetFunction(aFunc);
    if (!func)
    {
        return false;
    }

    auto engine = CGameEngine::Get();
    auto game = engine->framework->gameInstance;

    // I think we should increment some ref here, but didn't really check into it.
    auto instance = static_cast<IScriptable*>(game->GetInstance(type));
    return ExecuteFunction(instance, func, aOut, aArgs);
}

RED4EXT_INLINE bool RED4ext::ExecuteGlobalFunction(CName aContext, CName aFunc, void* aOut,
                                                   std::vector<CStackType> aArgs)
{
    auto rtti = CRTTISystem::Get();
    auto func = rtti->GetFunction(aFunc);
    if (!func)
    {
        return false;
    }

    auto type = rtti->GetClass(aContext);
    if (!type)
    {
        return false;
    }

    static auto scriptable = rtti->GetClass("IScriptable");
    if (!type->IsA(scriptable))
    {
        return false;
    }

    auto engine = CGameEngine::Get();
    auto game = engine->framework->gameInstance;

    // I think we should increment some ref here, but didn't really check into it.
    auto instance = static_cast<IScriptable*>(game->GetInstance(type));
    return ExecuteFunction(instance, func, aOut, aArgs);
}

RED4EXT_INLINE bool RED4ext::ExecuteGlobalFunction(CName aFunc, void* aOut, std::vector<CStackType> aArgs)
{
    return ExecuteGlobalFunction("cpPlayerSystem", aFunc, aOut, aArgs);
}
