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
struct SettingsVarBool : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarBool";
    static constexpr const char* ALIAS = "ConfigVarBool";

};
RED4EXT_ASSERT_SIZE(SettingsVarBool, 0x48);
} // namespace user
using userSettingsVarBool = user::SettingsVarBool;
using ConfigVarBool = user::SettingsVarBool;
} // namespace RED4ext

// clang-format on
