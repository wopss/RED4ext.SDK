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
struct AISquadContainsSelfCheck_Record : game::data::AITicketCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadContainsSelfCheck_Record";
    static constexpr const char* ALIAS = "AISquadContainsSelfCheck_Record";

};
RED4EXT_ASSERT_SIZE(AISquadContainsSelfCheck_Record, 0x68);
} // namespace game::data
using gamedataAISquadContainsSelfCheck_Record = game::data::AISquadContainsSelfCheck_Record;
using AISquadContainsSelfCheck_Record = game::data::AISquadContainsSelfCheck_Record;
} // namespace RED4ext

// clang-format on
