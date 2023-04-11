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
struct BaseScriptableDataSource : ink::AbstractDataSourceWrapper
{
    static constexpr const char* NAME = "inkBaseScriptableDataSource";
    static constexpr const char* ALIAS = "BaseScriptableDataSource";

};
RED4EXT_ASSERT_SIZE(BaseScriptableDataSource, 0x48);
} // namespace ink
using inkBaseScriptableDataSource = ink::BaseScriptableDataSource;
using BaseScriptableDataSource = ink::BaseScriptableDataSource;
} // namespace RED4ext

// clang-format on
