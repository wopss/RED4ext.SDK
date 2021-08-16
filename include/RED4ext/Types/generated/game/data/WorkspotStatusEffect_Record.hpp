#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/StatusEffect_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct WorkspotStatusEffect_Record : game::data::StatusEffect_Record
{
    static constexpr const char* NAME = "gamedataWorkspotStatusEffect_Record";
    static constexpr const char* ALIAS = "WorkspotStatusEffect_Record";

};
RED4EXT_ASSERT_SIZE(WorkspotStatusEffect_Record, 0x88);
} // namespace game::data
using WorkspotStatusEffect_Record = game::data::WorkspotStatusEffect_Record;
} // namespace RED4ext
