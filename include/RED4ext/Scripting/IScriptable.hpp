#pragma once
#include <optional>

#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <RED4ext/Scripting/Utils.hpp>
#include <RED4ext/Types/InstanceType.hpp>

namespace RED4ext
{
struct CBaseFunction;
struct IScriptable : ISerializable
{
    virtual void sub_D8() = 0;  // D8
    virtual void sub_E0() = 0;  // E0
    virtual void sub_E8() = 0;  // E8
    virtual void sub_F0() = 0;  // F0
    virtual void sub_F8() = 0;  // F8
    virtual void sub_100() = 0; // 100
    virtual void sub_108() = 0; // 108

    void* GetValueHolder();

    CClass* GetType()
    {
        return classType ? classType : reinterpret_cast<CClass*>(GetNativeType());
    }

    template<typename ReturnT = void, typename... Args, typename = std::enable_if_t<!std::is_same_v<ReturnT, void>>>
    std::optional<ReturnT> ExecuteFunction(CName aFunc, Args&&... aArgs)
    {
        ReturnT ret{};

        if (!ExecuteFunctionImpl<ReturnT>(aFunc, &ret, std::forward<Args>(aArgs)...))
        {
            return std::nullopt;
        }

        return std::make_optional<ReturnT>(ret);
    }

    template<typename ReturnT = void, typename... Args, typename = std::enable_if_t<std::is_same_v<ReturnT, void>>>
    bool ExecuteFunction(CName aFunc, Args&&... aArgs)
    {
        return ExecuteFunctionImpl<void>(aFunc, nullptr, std::forward<Args>(aArgs)...);
    }

    CClass* classType; // 30
    void* valueHolder; // 38

protected:
    template<typename ReturnType, typename... Args>
    bool ExecuteFunctionImpl(CName aFunc, ReturnType* ret, Args&&... aArgs)
    {
        CClass* cls = GetType();
        if (!cls)
        {
            return false;
        }

        CBaseFunction* func = cls->GetFunction(aFunc);
        if (!func)
        {
            return false;
        }

        StackArgs_t args;
        ((args.emplace_back(nullptr, &aArgs)), ...);
        return ::RED4ext::ExecuteFunction(static_cast<void*>(this), func, ret, args);
    }
};

RED4EXT_ASSERT_SIZE(IScriptable, 0x40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/IScriptable-inl.hpp>
#endif
