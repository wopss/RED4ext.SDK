#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Player.hpp>

namespace RED4ext
{
namespace mp { 
struct Player : game::Player
{
    static constexpr const char* NAME = "mpPlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(Player, 0x60);
} // namespace mp
} // namespace RED4ext
