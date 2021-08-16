#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIActionAND_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIActionAND_Record";
    static constexpr const char* ALIAS = "AIActionAND_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIActionAND_Record, 0x58);
} // namespace game::data
using AIActionAND_Record = game::data::AIActionAND_Record;
} // namespace RED4ext
