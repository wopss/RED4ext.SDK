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
struct WeakScriptableDataViewWrapper : ink::BaseWeakScriptableDataSource
{
    static constexpr const char* NAME = "inkWeakScriptableDataViewWrapper";
    static constexpr const char* ALIAS = "WeakScriptableDataView";

};
RED4EXT_ASSERT_SIZE(WeakScriptableDataViewWrapper, 0x48);
} // namespace ink
using inkWeakScriptableDataViewWrapper = ink::WeakScriptableDataViewWrapper;
using WeakScriptableDataView = ink::WeakScriptableDataViewWrapper;
} // namespace RED4ext

// clang-format on
