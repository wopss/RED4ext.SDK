#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionShootWithWeapon_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionMissileRainGrid_Record : game::data::AISubActionShootWithWeapon_Record
{
    static constexpr const char* NAME = "gamedataAISubActionMissileRainGrid_Record";
    static constexpr const char* ALIAS = "AISubActionMissileRainGrid_Record";

    uint8_t unk118[0x128 - 0x118]; // 118
};
RED4EXT_ASSERT_SIZE(AISubActionMissileRainGrid_Record, 0x128);
} // namespace game::data
using gamedataAISubActionMissileRainGrid_Record = game::data::AISubActionMissileRainGrid_Record;
using AISubActionMissileRainGrid_Record = game::data::AISubActionMissileRainGrid_Record;
} // namespace RED4ext

// clang-format on
