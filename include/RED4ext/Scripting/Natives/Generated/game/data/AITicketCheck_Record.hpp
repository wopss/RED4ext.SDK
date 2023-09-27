#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AITicketCheck_Record : game::data::AITicketCondition_Record
{
    static constexpr const char* NAME = "gamedataAITicketCheck_Record";
    static constexpr const char* ALIAS = "AITicketCheck_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AITicketCheck_Record, 0x68);
} // namespace game::data
using gamedataAITicketCheck_Record = game::data::AITicketCheck_Record;
using AITicketCheck_Record = game::data::AITicketCheck_Record;
} // namespace RED4ext

// clang-format on
