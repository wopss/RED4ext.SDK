#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionSetTargetByTag_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionSetWaypointByTag_Record : game::data::AISubActionSetTargetByTag_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetWaypointByTag_Record";
    static constexpr const char* ALIAS = "AISubActionSetWaypointByTag_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionSetWaypointByTag_Record, 0xD0);
} // namespace game::data
using gamedataAISubActionSetWaypointByTag_Record = game::data::AISubActionSetWaypointByTag_Record;
using AISubActionSetWaypointByTag_Record = game::data::AISubActionSetWaypointByTag_Record;
} // namespace RED4ext

// clang-format on
