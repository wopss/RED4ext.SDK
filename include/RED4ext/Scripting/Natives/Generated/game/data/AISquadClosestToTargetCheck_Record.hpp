#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISquadDistanceRelationToTargetCheck_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadClosestToTargetCheck_Record : game::data::AISquadDistanceRelationToTargetCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadClosestToTargetCheck_Record";
    static constexpr const char* ALIAS = "AISquadClosestToTargetCheck_Record";

};
RED4EXT_ASSERT_SIZE(AISquadClosestToTargetCheck_Record, 0x60);
} // namespace game::data
using AISquadClosestToTargetCheck_Record = game::data::AISquadClosestToTargetCheck_Record;
} // namespace RED4ext
