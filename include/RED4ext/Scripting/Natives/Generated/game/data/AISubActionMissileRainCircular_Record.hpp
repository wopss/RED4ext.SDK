#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionShootWithWeapon_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionMissileRainCircular_Record : game::data::AISubActionShootWithWeapon_Record
{
    static constexpr const char* NAME = "gamedataAISubActionMissileRainCircular_Record";
    static constexpr const char* ALIAS = "AISubActionMissileRainCircular_Record";

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(AISubActionMissileRainCircular_Record, 0x88);
} // namespace game::data
using AISubActionMissileRainCircular_Record = game::data::AISubActionMissileRainCircular_Record;
} // namespace RED4ext
