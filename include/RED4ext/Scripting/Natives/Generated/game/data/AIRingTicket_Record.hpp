#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicket_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIRingTicket_Record : game::data::AITicket_Record
{
    static constexpr const char* NAME = "gamedataAIRingTicket_Record";
    static constexpr const char* ALIAS = "AIRingTicket_Record";

    uint8_t unk80[0x88 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(AIRingTicket_Record, 0x88);
} // namespace game::data
using AIRingTicket_Record = game::data::AIRingTicket_Record;
} // namespace RED4ext
