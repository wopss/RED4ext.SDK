#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct GameSessionDesc
{
    static constexpr const char* NAME = "gameGameSessionDesc";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1C0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GameSessionDesc, 0x1C0);
} // namespace game
} // namespace RED4ext
