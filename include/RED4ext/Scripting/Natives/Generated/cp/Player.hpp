#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Player.hpp>

namespace RED4ext
{
namespace cp
{
struct Player : game::Player
{
    static constexpr const char* NAME = "cpPlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0xF0 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(Player, 0xF0);
} // namespace cp
using cpPlayer = cp::Player;
} // namespace RED4ext

// clang-format on
