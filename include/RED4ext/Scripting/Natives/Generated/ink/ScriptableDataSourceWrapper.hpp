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
struct ScriptableDataSourceWrapper : ink::BaseScriptableDataSource
{
    static constexpr const char* NAME = "inkScriptableDataSourceWrapper";
    static constexpr const char* ALIAS = "ScriptableDataSource";

};
RED4EXT_ASSERT_SIZE(ScriptableDataSourceWrapper, 0x48);
} // namespace ink
using inkScriptableDataSourceWrapper = ink::ScriptableDataSourceWrapper;
using ScriptableDataSource = ink::ScriptableDataSourceWrapper;
} // namespace RED4ext

// clang-format on
