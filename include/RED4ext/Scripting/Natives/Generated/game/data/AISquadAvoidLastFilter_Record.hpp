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
struct AISquadAvoidLastFilter_Record : game::data::AITicketFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadAvoidLastFilter_Record";
    static constexpr const char* ALIAS = "AISquadAvoidLastFilter_Record";

};
RED4EXT_ASSERT_SIZE(AISquadAvoidLastFilter_Record, 0x80);
} // namespace game::data
using gamedataAISquadAvoidLastFilter_Record = game::data::AISquadAvoidLastFilter_Record;
using AISquadAvoidLastFilter_Record = game::data::AISquadAvoidLastFilter_Record;
} // namespace RED4ext

// clang-format on
