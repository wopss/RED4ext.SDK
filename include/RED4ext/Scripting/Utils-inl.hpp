#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Utils.hpp>
#endif

#include <RED4ext/GameEngine.hpp>
#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/CProperty.hpp>
#include <RED4ext/Scripting/Functions.hpp>

RED4EXT_INLINE bool RED4ext::ExecuteFunction(ScriptInstance aInstance, CBaseFunction* aFunc, void* aOut,
                                             StackArgs_t aArgs)
{
    CStackType result;
    if (aFunc->returnType)
    {
        if (!aOut)
        {
            return false;
        }

        result.type = aFunc->returnType->type;
        result.value = aOut;
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

    CStack stack(aInstance, aArgs.data(), static_cast<uint32_t>(aArgs.size()), aFunc->returnType ? &result : nullptr);
    return aFunc->Execute(&stack);
}

RED4EXT_INLINE bool RED4ext::ExecuteFunction(CClass* aContext, CBaseFunction* aFunc, void* aOut, StackArgs_t aArgs)
{
    auto engine = CGameEngine::Get();
    auto game = engine->framework->gameInstance;

    Handle<IScriptable> instance(game->GetInstance(aContext));
    return ExecuteFunction(instance, aFunc, aOut, aArgs);
}

RED4EXT_INLINE bool RED4ext::ExecuteFunction(CClass* aContext, CName aFunc, void* aOut, StackArgs_t aArgs)
{
    auto func = aContext->GetFunction(aFunc);
    if (!func)
    {
        return false;
    }

    return ExecuteFunction(aContext, func, aOut, aArgs);
}

RED4EXT_INLINE bool RED4ext::ExecuteFunction(CName aContext, CName aFunc, void* aOut, StackArgs_t aArgs)
{
    auto rtti = CRTTISystem::Get();
    auto type = rtti->GetClass(aContext);
    if (!type)
    {
        return false;
    }

    return ExecuteFunction(type, aFunc, aOut, aArgs);
}

RED4EXT_INLINE bool RED4ext::ExecuteGlobalFunction(CClass* aContext, CName aFunc, void* aOut, StackArgs_t aArgs)
{
    auto rtti = CRTTISystem::Get();
    auto func = rtti->GetFunction(aFunc);
    if (!func)
    {
        return false;
    }

    return ExecuteFunction(aContext, func, aOut, aArgs);
}

RED4EXT_INLINE bool RED4ext::ExecuteGlobalFunction(CName aContext, CName aFunc, void* aOut, StackArgs_t aArgs)
{
    auto rtti = CRTTISystem::Get();
    auto type = rtti->GetClass(aContext);
    if (!type)
    {
        return false;
    }

    return ExecuteGlobalFunction(type, aFunc, aOut, aArgs);
}

RED4EXT_INLINE bool RED4ext::ExecuteGlobalFunction(CName aFunc, void* aOut, StackArgs_t aArgs)
{
    return ExecuteGlobalFunction("cpPlayerSystem", aFunc, aOut, aArgs);
}
