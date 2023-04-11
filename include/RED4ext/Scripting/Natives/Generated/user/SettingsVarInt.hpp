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
struct SettingsVarInt : user::SettingsVar
{
    static constexpr const char* NAME = "userSettingsVarInt";
    static constexpr const char* ALIAS = "ConfigVarInt";

};
RED4EXT_ASSERT_SIZE(SettingsVarInt, 0x48);
} // namespace user
using userSettingsVarInt = user::SettingsVarInt;
using ConfigVarInt = user::SettingsVarInt;
} // namespace RED4ext

// clang-format on
