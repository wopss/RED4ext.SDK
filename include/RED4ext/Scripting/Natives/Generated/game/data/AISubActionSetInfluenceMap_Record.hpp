#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionSetInfluenceMap_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetInfluenceMap_Record";
    static constexpr const char* ALIAS = "AISubActionSetInfluenceMap_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionSetInfluenceMap_Record, 0x58);
} // namespace game::data
using AISubActionSetInfluenceMap_Record = game::data::AISubActionSetInfluenceMap_Record;
} // namespace RED4ext
