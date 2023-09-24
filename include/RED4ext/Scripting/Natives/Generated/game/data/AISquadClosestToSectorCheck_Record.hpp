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
struct AISquadClosestToSectorCheck_Record : game::data::AISquadDistanceRelationToSectorCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadClosestToSectorCheck_Record";
    static constexpr const char* ALIAS = "AISquadClosestToSectorCheck_Record";

};
RED4EXT_ASSERT_SIZE(AISquadClosestToSectorCheck_Record, 0x78);
} // namespace game::data
using gamedataAISquadClosestToSectorCheck_Record = game::data::AISquadClosestToSectorCheck_Record;
using AISquadClosestToSectorCheck_Record = game::data::AISquadClosestToSectorCheck_Record;
} // namespace RED4ext

// clang-format on
