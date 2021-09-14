#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCheck_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadDistanceRelationToSectorCheck_Record : game::data::AITicketCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadDistanceRelationToSectorCheck_Record";
    static constexpr const char* ALIAS = "AISquadDistanceRelationToSectorCheck_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AISquadDistanceRelationToSectorCheck_Record, 0x60);
} // namespace game::data
using AISquadDistanceRelationToSectorCheck_Record = game::data::AISquadDistanceRelationToSectorCheck_Record;
} // namespace RED4ext
