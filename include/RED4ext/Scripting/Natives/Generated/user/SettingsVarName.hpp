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
struct SettingsVarName : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarName";
    static constexpr const char* ALIAS = "ConfigVarName";

};
RED4EXT_ASSERT_SIZE(SettingsVarName, 0x48);
} // namespace user
using userSettingsVarName = user::SettingsVarName;
using ConfigVarName = user::SettingsVarName;
} // namespace RED4ext

// clang-format on
