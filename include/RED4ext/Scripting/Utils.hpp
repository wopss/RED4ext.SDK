#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/Meta.hpp>
#include <RED4ext/Scripting/OpcodeHandlers.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <variant>

namespace RED4ext
{
struct CBaseFunction;
struct CClass;

bool ExecuteFunction(ScriptInstance aInstance, CBaseFunction* aFunc, void* aOut);
bool ExecuteFunction(ScriptInstance aInstance, CBaseFunction* aFunc, void* aOut, StackArgs_t& aArgs);

bool ExecuteFunction(CClass* aContext, CBaseFunction* aFunc, void* aOut, StackArgs_t& aArgs);
bool ExecuteFunction(CClass* aContext, CName aFunc, void* aOut, StackArgs_t& aArgs);
bool ExecuteFunction(CName aContext, CName aFunc, void* aOut, StackArgs_t& aArgs);

bool ExecuteGlobalFunction(CClass* aContext, CName aFunc, void* aOut, StackArgs_t& aArgs);
bool ExecuteGlobalFunction(CName aContext, CName aFunc, void* aOut, StackArgs_t& aArgs);
bool ExecuteGlobalFunction(CName aFunc, void* aOut, StackArgs_t& aArgs);

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

template<typename T>
inline void GetParameter(RED4ext::CStackFrame* aFrame, T* aInstance)
{
    if constexpr (std::is_pointer_v<T>)
    {
        aFrame->useDirectData = true;
    }

    aFrame->data = nullptr;
    aFrame->dataType = nullptr;
    aFrame->currentParam++;

    const auto opcode = *(aFrame->code++);
    RED4ext::OpcodeHandlers::Run(opcode, (IScriptable*)aFrame->context, aFrame, aInstance, nullptr);

    if constexpr (std::is_pointer_v<T>)
    {
        aFrame->useDirectData = false;

        if (aFrame->data)
            *aInstance = reinterpret_cast<T>(aFrame->data);
    }
}

namespace details
{
template<class Func, class Ret, class... Args>
void Call(Func f, Ret* ret, Args&&... args)
{
    Ret result = std::apply(f, std::forward<Args>(args)...);
    if (ret)
        *ret = result;
}

template<class Func, class... Args>
void Call(Func f, void* ret, Args&&... args)
{
    std::apply(f, std::forward<Args>(args)...);
}
} // namespace details

} // namespace RED4ext

#define RED4EXT_MAKE_RED_NATIVE_CALL(retType, name, ...)                                                               \
    static retType name##Impl(__VA_ARGS__);                                                                            \
    static void name(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, retType* aOut, int64_t a4)          \
    {                                                                                                                  \
        auto args = RED4ext::Meta::GetFunctionArgs(&name##Impl);                                                       \
        RED4ext::Meta::ForEach([aFrame](void* apInstance) { RED4ext::GetParameter(aFrame, apInstance); }, args);       \
        aFrame->code++;                                                                                                \
        RED4ext::details::Call(name##Impl, aOut, args);                                                                \
    }

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Utils-inl.hpp>
#endif
