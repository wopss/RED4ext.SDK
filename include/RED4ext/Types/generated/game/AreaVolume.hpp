#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/AreaData.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct AreaVolume : game::Object
{
    static constexpr const char* NAME = "gameAreaVolume";
    static constexpr const char* ALIAS = NAME;

    game::AreaData areaData; // 230
    uint8_t unk260[0x270 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(AreaVolume, 0x270);
} // namespace game
} // namespace RED4ext
