#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketFilter_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadInSectorFilter_Record : game::data::AITicketFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadInSectorFilter_Record";
    static constexpr const char* ALIAS = "AISquadInSectorFilter_Record";

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AISquadInSectorFilter_Record, 0x68);
} // namespace game::data
using AISquadInSectorFilter_Record = game::data::AISquadInSectorFilter_Record;
} // namespace RED4ext
