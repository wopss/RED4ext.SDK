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
struct SettingsVarButton : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarButton";
    static constexpr const char* ALIAS = "ConfigVarButton";

};
RED4EXT_ASSERT_SIZE(SettingsVarButton, 0x48);
} // namespace user
using userSettingsVarButton = user::SettingsVarButton;
using ConfigVarButton = user::SettingsVarButton;
} // namespace RED4ext

// clang-format on
