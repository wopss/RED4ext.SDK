#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIWorkspotCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIWorkspotCond_Record";
    static constexpr const char* ALIAS = "AIWorkspotCond_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIWorkspotCond_Record, 0x58);
} // namespace game::data
using AIWorkspotCond_Record = game::data::AIWorkspotCond_Record;
} // namespace RED4ext
