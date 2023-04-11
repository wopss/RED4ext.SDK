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
struct SettingsNotificationListener : IScriptable
{
    static constexpr const char* NAME = "userSettingsNotificationListener";
    static constexpr const char* ALIAS = "ConfigNotificationListener";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SettingsNotificationListener, 0x48);
} // namespace user
using userSettingsNotificationListener = user::SettingsNotificationListener;
using ConfigNotificationListener = user::SettingsNotificationListener;
} // namespace RED4ext

// clang-format on
