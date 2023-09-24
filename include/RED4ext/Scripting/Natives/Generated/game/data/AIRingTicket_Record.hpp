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
struct AIRingTicket_Record : game::data::AITicket_Record
{
    static constexpr const char* NAME = "gamedataAIRingTicket_Record";
    static constexpr const char* ALIAS = "AIRingTicket_Record";

    uint8_t unk138[0x148 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(AIRingTicket_Record, 0x148);
} // namespace game::data
using gamedataAIRingTicket_Record = game::data::AIRingTicket_Record;
using AIRingTicket_Record = game::data::AIRingTicket_Record;
} // namespace RED4ext

// clang-format on
