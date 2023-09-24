#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCheck_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISquadORCondition_Record : game::data::AITicketCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadORCondition_Record";
    static constexpr const char* ALIAS = "AISquadORCondition_Record";

    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AISquadORCondition_Record, 0x78);
} // namespace game::data
using gamedataAISquadORCondition_Record = game::data::AISquadORCondition_Record;
using AISquadORCondition_Record = game::data::AISquadORCondition_Record;
} // namespace RED4ext

// clang-format on
