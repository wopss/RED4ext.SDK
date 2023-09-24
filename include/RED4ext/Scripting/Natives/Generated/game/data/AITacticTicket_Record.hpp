#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicket_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AITacticTicket_Record : game::data::AITicket_Record
{
    static constexpr const char* NAME = "gamedataAITacticTicket_Record";
    static constexpr const char* ALIAS = "AITacticTicket_Record";

    uint8_t unk138[0x160 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(AITacticTicket_Record, 0x160);
} // namespace game::data
using gamedataAITacticTicket_Record = game::data::AITacticTicket_Record;
using AITacticTicket_Record = game::data::AITacticTicket_Record;
} // namespace RED4ext

// clang-format on
