#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicket_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AITacticTicket_Record : game::data::AITicket_Record
{
    static constexpr const char* NAME = "gamedataAITacticTicket_Record";
    static constexpr const char* ALIAS = "AITacticTicket_Record";

    uint8_t unk80[0x90 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(AITacticTicket_Record, 0x90);
} // namespace game::data
using AITacticTicket_Record = game::data::AITacticTicket_Record;
} // namespace RED4ext
