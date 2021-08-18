#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIMovementCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIMovementCond_Record";
    static constexpr const char* ALIAS = "AIMovementCond_Record";

    uint8_t unk50[0x80 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIMovementCond_Record, 0x80);
} // namespace game::data
using AIMovementCond_Record = game::data::AIMovementCond_Record;
} // namespace RED4ext
