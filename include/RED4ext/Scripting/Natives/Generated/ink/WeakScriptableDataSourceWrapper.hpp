#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseWeakScriptableDataSource.hpp>

namespace RED4ext
{
namespace ink { 
struct WeakScriptableDataSourceWrapper : ink::BaseWeakScriptableDataSource
{
    static constexpr const char* NAME = "inkWeakScriptableDataSourceWrapper";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WeakScriptableDataSourceWrapper, 0x48);
} // namespace ink
} // namespace RED4ext
