#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketFilter_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISquadItemPriorityFilter_Record : game::data::AITicketFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadItemPriorityFilter_Record";
    static constexpr const char* ALIAS = "AISquadItemPriorityFilter_Record";

    uint8_t unk80[0x90 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(AISquadItemPriorityFilter_Record, 0x90);
} // namespace game::data
using gamedataAISquadItemPriorityFilter_Record = game::data::AISquadItemPriorityFilter_Record;
using AISquadItemPriorityFilter_Record = game::data::AISquadItemPriorityFilter_Record;
} // namespace RED4ext

// clang-format on
