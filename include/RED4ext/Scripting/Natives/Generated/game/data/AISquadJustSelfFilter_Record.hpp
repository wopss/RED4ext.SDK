#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketFilter_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISquadJustSelfFilter_Record : game::data::AITicketFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadJustSelfFilter_Record";
    static constexpr const char* ALIAS = "AISquadJustSelfFilter_Record";

};
RED4EXT_ASSERT_SIZE(AISquadJustSelfFilter_Record, 0x60);
} // namespace game::data
using AISquadJustSelfFilter_Record = game::data::AISquadJustSelfFilter_Record;
} // namespace RED4ext
