#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIVelocityCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIVelocityCond_Record";
    static constexpr const char* ALIAS = "AIVelocityCond_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIVelocityCond_Record, 0x60);
} // namespace game::data
using AIVelocityCond_Record = game::data::AIVelocityCond_Record;
} // namespace RED4ext
