#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketFilter_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadFilterOwnTargetSpotted_Record : game::data::AITicketFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadFilterOwnTargetSpotted_Record";
    static constexpr const char* ALIAS = "AISquadFilterOwnTargetSpotted_Record";

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(AISquadFilterOwnTargetSpotted_Record, 0x68);
} // namespace game::data
using AISquadFilterOwnTargetSpotted_Record = game::data::AISquadFilterOwnTargetSpotted_Record;
} // namespace RED4ext
