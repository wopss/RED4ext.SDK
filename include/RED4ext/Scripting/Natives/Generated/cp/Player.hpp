#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Player.hpp>

namespace RED4ext
{
namespace cp { 
struct Player : game::Player
{
    static constexpr const char* NAME = "cpPlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(Player, 0x60);
} // namespace cp
} // namespace RED4ext
