#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <RED4ext/Types/InstanceType.hpp>

namespace RED4ext
{
struct CBaseFunction;
struct CClass;

bool ExecuteFunction(ScriptInstance aInstance, CBaseFunction* aFunc, void* aOut, StackArgs_t aArgs);

bool ExecuteFunction(CClass* aContext, CBaseFunction* aFunc, void* aOut, StackArgs_t aArgs);
bool ExecuteFunction(CClass* aContext, CName aFunc, void* aOut, StackArgs_t aArgs);
bool ExecuteFunction(CName aContext, CName aFunc, void* aOut, StackArgs_t aArgs);

bool ExecuteGlobalFunction(CClass* aContext, CName aFunc, void* aOut, StackArgs_t aArgs);
bool ExecuteGlobalFunction(CName aContext, CName aFunc, void* aOut, StackArgs_t aArgs);
bool ExecuteGlobalFunction(CName aFunc, void* aOut, StackArgs_t aArgs);

template<typename... Args>
bool ExecuteFunction(CClass* aContext, CBaseFunction* aFunc, void* aOut, Args&&... aArgs)
{
    StackArgs_t args;
    ((args.emplace_back(nullptr, &aArgs)), ...);

    return ExecuteFunction(aContext, aFunc, aOut, args);
}

template<typename... Args>
bool ExecuteFunction(CClass* aContext, CName aFunc, void* aOut, Args&&... aArgs)
{
    StackArgs_t args;
    ((args.emplace_back(nullptr, &aArgs)), ...);

    return ExecuteFunction(aContext, aFunc, aOut, args);
}

template<typename... Args>
bool ExecuteFunction(CName aContext, CName aFunc, void* aOut, Args&&... aArgs)
{
    StackArgs_t args;
    ((args.emplace_back(nullptr, &aArgs)), ...);

    return ExecuteFunction(aContext, aFunc, aOut, args);
}

template<typename... Args>
bool ExecuteGlobalFunction(CClass* aContext, CName aFunc, void* aOut, Args&&... aArgs)
{
    StackArgs_t args;
    ((args.emplace_back(nullptr, &aArgs)), ...);

    return ExecuteGlobalFunction(aContext, aFunc, aOut, args);
}

template<typename... Args>
bool ExecuteGlobalFunction(CName aContext, CName aFunc, void* aOut, Args&&... aArgs)
{
    StackArgs_t args;
    ((args.emplace_back(nullptr, &aArgs)), ...);

    return ExecuteGlobalFunction(aContext, aFunc, aOut, args);
}

template<typename... Args>
bool ExecuteGlobalFunction(CName aFunc, void* aOut, Args&&... aArgs)
{
    return ExecuteGlobalFunction("cpPlayerSystem", aFunc, aOut, std::forward<Args>(aArgs)...);
}
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Utils-inl.hpp>
#endif
