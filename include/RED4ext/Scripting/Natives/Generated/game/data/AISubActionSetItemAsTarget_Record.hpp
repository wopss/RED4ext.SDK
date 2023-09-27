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
struct AISubActionSetItemAsTarget_Record : game::data::AISubActionSetTargetByTag_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetItemAsTarget_Record";
    static constexpr const char* ALIAS = "AISubActionSetItemAsTarget_Record";

    uint8_t unkD0[0xE8 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(AISubActionSetItemAsTarget_Record, 0xE8);
} // namespace game::data
using gamedataAISubActionSetItemAsTarget_Record = game::data::AISubActionSetItemAsTarget_Record;
using AISubActionSetItemAsTarget_Record = game::data::AISubActionSetItemAsTarget_Record;
} // namespace RED4ext

// clang-format on
