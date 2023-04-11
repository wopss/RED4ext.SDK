#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/AbstractDataSourceWrapper.hpp>

namespace RED4ext
{
namespace ink
{
struct BaseWeakScriptableDataSource : ink::AbstractDataSourceWrapper
{
    static constexpr const char* NAME = "inkBaseWeakScriptableDataSource";
    static constexpr const char* ALIAS = "BaseWeakScriptableDataSource";

};
RED4EXT_ASSERT_SIZE(BaseWeakScriptableDataSource, 0x48);
} // namespace ink
using inkBaseWeakScriptableDataSource = ink::BaseWeakScriptableDataSource;
using BaseWeakScriptableDataSource = ink::BaseWeakScriptableDataSource;
} // namespace RED4ext

// clang-format on
