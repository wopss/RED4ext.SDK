#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameTime.hpp>

namespace RED4ext
{
namespace game
{
struct GameTimeInterval
{
    static constexpr const char* NAME = "gameGameTimeInterval";
    static constexpr const char* ALIAS = NAME;

    GameTime begin; // 00
    GameTime end; // 04
    bool ignoreDays; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(GameTimeInterval, 0xC);
} // namespace game
using gameGameTimeInterval = game::GameTimeInterval;
} // namespace RED4ext

// clang-format on
