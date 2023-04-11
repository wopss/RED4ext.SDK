#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseWeakScriptableDataSource.hpp>

namespace RED4ext
{
namespace ink
{
struct WeakScriptableDataSourceWrapper : ink::BaseWeakScriptableDataSource
{
    static constexpr const char* NAME = "inkWeakScriptableDataSourceWrapper";
    static constexpr const char* ALIAS = "WeakScriptableDataSource";

};
RED4EXT_ASSERT_SIZE(WeakScriptableDataSourceWrapper, 0x48);
} // namespace ink
using inkWeakScriptableDataSourceWrapper = ink::WeakScriptableDataSourceWrapper;
using WeakScriptableDataSource = ink::WeakScriptableDataSourceWrapper;
} // namespace RED4ext

// clang-format on
