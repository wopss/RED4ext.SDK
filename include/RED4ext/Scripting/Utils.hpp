#pragma once

#include <vector>

#include <RED4ext/Scripting/Functions.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <RED4ext/Types/InstanceType.hpp>

namespace RED4ext
{
bool ExecuteFunction(ScriptInstance aInstance, CBaseFunction* aFunc, void* aOut, std::vector<CStackType> aArgs);
bool ExecuteFunction(CName aParent, CName aFunc, void* aOut, std::vector<CStackType> aArgs);

bool ExecuteGlobalFunction(CName aContext, CName aFunc, void* aOut, std::vector<CStackType> aArgs);
bool ExecuteGlobalFunction(CName aFunc, void* aOut, std::vector<CStackType> aArgs);

template<typename... Args>
bool ExecuteFunction(CName aParent, CName aFunc, void* aOut, Args&&... aArgs)
{
    std::vector<CStackType> args;
    ((args.emplace_back(nullptr, &aArgs)), ...);

    return ExecuteFunction(aParent, aFunc, aOut, args);
}

template<typename... Args>
bool ExecuteGlobalFunction(CName aContext, CName aFunc, void* aOut, Args&&... aArgs)
{
    std::vector<CStackType> args;
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
