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
struct SettingsVarFloat : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarFloat";
    static constexpr const char* ALIAS = "ConfigVarFloat";

};
RED4EXT_ASSERT_SIZE(SettingsVarFloat, 0x48);
} // namespace user
using userSettingsVarFloat = user::SettingsVarFloat;
using ConfigVarFloat = user::SettingsVarFloat;
} // namespace RED4ext

// clang-format on
