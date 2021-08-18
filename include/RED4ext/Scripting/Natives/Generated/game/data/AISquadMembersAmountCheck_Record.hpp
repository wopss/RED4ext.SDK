#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCheck_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadMembersAmountCheck_Record : game::data::AITicketCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadMembersAmountCheck_Record";
    static constexpr const char* ALIAS = "AISquadMembersAmountCheck_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AISquadMembersAmountCheck_Record, 0x68);
} // namespace game::data
using AISquadMembersAmountCheck_Record = game::data::AISquadMembersAmountCheck_Record;
} // namespace RED4ext
