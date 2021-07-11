#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <RED4ext/Types/InstanceType.hpp>
#include <RED4ext/Scripting/Meta.hpp>

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
void GetParameter(RED4ext::CStackFrame* aFrame, void* aInstance);

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

#define RED4EXT_MAKE_RED_NATIVE_CALL(retType, name, ...)                                                               \
    static retType name##Impl(__VA_ARGS__);                                                                            \
    static void name(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, RED4ext::CString* aOut, int64_t a4) \
    {                                                                                                                  \
        auto args = RED4ext::Meta::GetFunctionArgs(&name##Impl);                                                       \
        RED4ext::Meta::ForEach([aFrame](void* apInstance) { RED4ext::GetParameter(aFrame, apInstance); }, args);       \
        aFrame->code++;                                                                                                \
        (void)std::apply(name##Impl, args);                                                                            \
    }

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Utils-inl.hpp>
#endif
