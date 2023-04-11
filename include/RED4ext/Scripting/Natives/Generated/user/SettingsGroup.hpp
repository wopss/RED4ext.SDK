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
struct SettingsGroup : IScriptable
{
    static constexpr const char* NAME = "userSettingsGroup";
    static constexpr const char* ALIAS = "ConfigGroup";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SettingsGroup, 0x48);
} // namespace user
using userSettingsGroup = user::SettingsGroup;
using ConfigGroup = user::SettingsGroup;
} // namespace RED4ext

// clang-format on
