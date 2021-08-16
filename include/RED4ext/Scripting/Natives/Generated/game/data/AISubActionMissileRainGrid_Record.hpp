#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionShootWithWeapon_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionMissileRainGrid_Record : game::data::AISubActionShootWithWeapon_Record
{
    static constexpr const char* NAME = "gamedataAISubActionMissileRainGrid_Record";
    static constexpr const char* ALIAS = "AISubActionMissileRainGrid_Record";

    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(AISubActionMissileRainGrid_Record, 0x80);
} // namespace game::data
using AISubActionMissileRainGrid_Record = game::data::AISubActionMissileRainGrid_Record;
} // namespace RED4ext
