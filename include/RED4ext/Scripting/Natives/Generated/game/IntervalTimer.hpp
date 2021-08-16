#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BaseTimer.hpp>

namespace RED4ext
{
namespace game { 
struct IntervalTimer : game::BaseTimer
{
    static constexpr const char* NAME = "gameIntervalTimer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(IntervalTimer, 0xA0);
} // namespace game
} // namespace RED4ext
