#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIGoToCoverCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIGoToCoverCond_Record";
    static constexpr const char* ALIAS = "AIGoToCoverCond_Record";

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIGoToCoverCond_Record, 0x68);
} // namespace game::data
using AIGoToCoverCond_Record = game::data::AIGoToCoverCond_Record;
} // namespace RED4ext
