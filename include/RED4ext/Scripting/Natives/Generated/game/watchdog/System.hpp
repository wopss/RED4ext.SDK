#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IWatchdogSystem.hpp>

namespace RED4ext
{
namespace game::watchdog
{
struct System : game::IWatchdogSystem
{
    static constexpr const char* NAME = "gamewatchdogSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x110 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(System, 0x110);
} // namespace game::watchdog
using gamewatchdogSystem = game::watchdog::System;
} // namespace RED4ext

// clang-format on
