#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AITicketCheck_Record : game::data::AITicketCondition_Record
{
    static constexpr const char* NAME = "gamedataAITicketCheck_Record";
    static constexpr const char* ALIAS = "AITicketCheck_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AITicketCheck_Record, 0x58);
} // namespace game::data
using AITicketCheck_Record = game::data::AITicketCheck_Record;
} // namespace RED4ext
