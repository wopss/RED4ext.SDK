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
struct SettingsVarListener : IScriptable
{
    static constexpr const char* NAME = "userSettingsVarListener";
    static constexpr const char* ALIAS = "ConfigVarListener";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SettingsVarListener, 0x70);
} // namespace user
using userSettingsVarListener = user::SettingsVarListener;
using ConfigVarListener = user::SettingsVarListener;
} // namespace RED4ext

// clang-format on
