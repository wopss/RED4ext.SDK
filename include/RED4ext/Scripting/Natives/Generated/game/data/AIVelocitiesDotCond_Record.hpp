#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIVelocitiesDotCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIVelocitiesDotCond_Record";
    static constexpr const char* ALIAS = "AIVelocitiesDotCond_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIVelocitiesDotCond_Record, 0x60);
} // namespace game::data
using AIVelocitiesDotCond_Record = game::data::AIVelocitiesDotCond_Record;
} // namespace RED4ext
