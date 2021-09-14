#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketFilter_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadSpatialForOwnTarget_Record : game::data::AITicketFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadSpatialForOwnTarget_Record";
    static constexpr const char* ALIAS = "AISquadSpatialForOwnTarget_Record";

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AISquadSpatialForOwnTarget_Record, 0x68);
} // namespace game::data
using AISquadSpatialForOwnTarget_Record = game::data::AISquadSpatialForOwnTarget_Record;
} // namespace RED4ext
