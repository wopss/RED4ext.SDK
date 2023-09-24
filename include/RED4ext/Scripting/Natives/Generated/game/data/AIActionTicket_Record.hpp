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
struct AIActionTicket_Record : game::data::AITicket_Record
{
    static constexpr const char* NAME = "gamedataAIActionTicket_Record";
    static constexpr const char* ALIAS = "AIActionTicket_Record";

};
RED4EXT_ASSERT_SIZE(AIActionTicket_Record, 0x138);
} // namespace game::data
using gamedataAIActionTicket_Record = game::data::AIActionTicket_Record;
using AIActionTicket_Record = game::data::AIActionTicket_Record;
} // namespace RED4ext

// clang-format on
