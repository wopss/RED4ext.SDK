#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Player.hpp>

namespace RED4ext
{
namespace mp
{
struct Player : game::Player
{
    static constexpr const char* NAME = "mpPlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkE8[0xF8 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(Player, 0xF8);
} // namespace mp
using mpPlayer = mp::Player;
} // namespace RED4ext

// clang-format on
