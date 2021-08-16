#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIDirectorSchedulePlanEnemyEntry_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIDirectorSchedulePlanEnemyEntry_Record";
    static constexpr const char* ALIAS = "AIDirectorSchedulePlanEnemyEntry_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIDirectorSchedulePlanEnemyEntry_Record, 0x58);
} // namespace game::data
using AIDirectorSchedulePlanEnemyEntry_Record = game::data::AIDirectorSchedulePlanEnemyEntry_Record;
} // namespace RED4ext
