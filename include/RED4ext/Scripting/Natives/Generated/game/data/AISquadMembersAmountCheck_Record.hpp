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
struct AISquadMembersAmountCheck_Record : game::data::AITicketCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadMembersAmountCheck_Record";
    static constexpr const char* ALIAS = "AISquadMembersAmountCheck_Record";

    uint8_t unk68[0x90 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AISquadMembersAmountCheck_Record, 0x90);
} // namespace game::data
using gamedataAISquadMembersAmountCheck_Record = game::data::AISquadMembersAmountCheck_Record;
using AISquadMembersAmountCheck_Record = game::data::AISquadMembersAmountCheck_Record;
} // namespace RED4ext

// clang-format on
