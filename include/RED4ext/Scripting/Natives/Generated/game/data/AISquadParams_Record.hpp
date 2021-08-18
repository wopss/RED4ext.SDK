#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadParams_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAISquadParams_Record";
    static constexpr const char* ALIAS = "AISquadParams_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISquadParams_Record, 0x58);
} // namespace game::data
using AISquadParams_Record = game::data::AISquadParams_Record;
} // namespace RED4ext
