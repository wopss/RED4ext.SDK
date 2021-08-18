#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCheck_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadANDCondition_Record : game::data::AITicketCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadANDCondition_Record";
    static constexpr const char* ALIAS = "AISquadANDCondition_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AISquadANDCondition_Record, 0x60);
} // namespace game::data
using AISquadANDCondition_Record = game::data::AISquadANDCondition_Record;
} // namespace RED4ext
