#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISquadDistanceRelationToTargetCheck_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISquadFurthestToTargetCheck_Record : game::data::AISquadDistanceRelationToTargetCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadFurthestToTargetCheck_Record";
    static constexpr const char* ALIAS = "AISquadFurthestToTargetCheck_Record";

};
RED4EXT_ASSERT_SIZE(AISquadFurthestToTargetCheck_Record, 0x80);
} // namespace game::data
using gamedataAISquadFurthestToTargetCheck_Record = game::data::AISquadFurthestToTargetCheck_Record;
using AISquadFurthestToTargetCheck_Record = game::data::AISquadFurthestToTargetCheck_Record;
} // namespace RED4ext

// clang-format on
