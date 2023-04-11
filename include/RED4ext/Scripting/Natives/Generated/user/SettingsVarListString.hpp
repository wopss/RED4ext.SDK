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
struct SettingsVarListString : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarListString";
    static constexpr const char* ALIAS = "ConfigVarListString";

};
RED4EXT_ASSERT_SIZE(SettingsVarListString, 0x48);
} // namespace user
using userSettingsVarListString = user::SettingsVarListString;
using ConfigVarListString = user::SettingsVarListString;
} // namespace RED4ext

// clang-format on
