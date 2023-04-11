#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace user
{
struct SettingsUserSettings : IScriptable
{
    static constexpr const char* NAME = "userSettingsUserSettings";
    static constexpr const char* ALIAS = "UserSettings";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SettingsUserSettings, 0x50);
} // namespace user
using userSettingsUserSettings = user::SettingsUserSettings;
using UserSettings = user::SettingsUserSettings;
} // namespace RED4ext

// clang-format on
