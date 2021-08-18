#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AITargetCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAITargetCond_Record";
    static constexpr const char* ALIAS = "AITargetCond_Record";

    uint8_t unk50[0x78 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AITargetCond_Record, 0x78);
} // namespace game::data
using AITargetCond_Record = game::data::AITargetCond_Record;
} // namespace RED4ext
