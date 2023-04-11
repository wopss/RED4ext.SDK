#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseScriptableDataSource.hpp>

namespace RED4ext
{
namespace ink
{
struct ScriptableDataViewWrapper : ink::BaseScriptableDataSource
{
    static constexpr const char* NAME = "inkScriptableDataViewWrapper";
    static constexpr const char* ALIAS = "ScriptableDataView";

};
RED4EXT_ASSERT_SIZE(ScriptableDataViewWrapper, 0x48);
} // namespace ink
using inkScriptableDataViewWrapper = ink::ScriptableDataViewWrapper;
using ScriptableDataView = ink::ScriptableDataViewWrapper;
} // namespace RED4ext

// clang-format on
