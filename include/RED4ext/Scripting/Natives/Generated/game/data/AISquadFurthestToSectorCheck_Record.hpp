#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISquadDistanceRelationToSectorCheck_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISquadFurthestToSectorCheck_Record : game::data::AISquadDistanceRelationToSectorCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadFurthestToSectorCheck_Record";
    static constexpr const char* ALIAS = "AISquadFurthestToSectorCheck_Record";

};
RED4EXT_ASSERT_SIZE(AISquadFurthestToSectorCheck_Record, 0x78);
} // namespace game::data
using gamedataAISquadFurthestToSectorCheck_Record = game::data::AISquadFurthestToSectorCheck_Record;
using AISquadFurthestToSectorCheck_Record = game::data::AISquadFurthestToSectorCheck_Record;
} // namespace RED4ext

// clang-format on
