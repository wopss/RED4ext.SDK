#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIIsShootingBlockedFromPrevention_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIIsShootingBlockedFromPrevention_Record";
    static constexpr const char* ALIAS = "AIIsShootingBlockedFromPrevention_Record";

};
RED4EXT_ASSERT_SIZE(AIIsShootingBlockedFromPrevention_Record, 0x58);
} // namespace game::data
using gamedataAIIsShootingBlockedFromPrevention_Record = game::data::AIIsShootingBlockedFromPrevention_Record;
using AIIsShootingBlockedFromPrevention_Record = game::data::AIIsShootingBlockedFromPrevention_Record;
} // namespace RED4ext

// clang-format on
