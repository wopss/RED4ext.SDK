#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/user/SettingsVar.hpp>

namespace RED4ext
{
namespace user
{
struct SettingsVarListFloat : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarListFloat";
    static constexpr const char* ALIAS = "ConfigVarListFloat";

};
RED4EXT_ASSERT_SIZE(SettingsVarListFloat, 0x48);
} // namespace user
using userSettingsVarListFloat = user::SettingsVarListFloat;
using ConfigVarListFloat = user::SettingsVarListFloat;
} // namespace RED4ext

// clang-format on
