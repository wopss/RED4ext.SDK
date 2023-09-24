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
struct AICanShootInCarChaseCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAICanShootInCarChaseCond_Record";
    static constexpr const char* ALIAS = "AICanShootInCarChaseCond_Record";

};
RED4EXT_ASSERT_SIZE(AICanShootInCarChaseCond_Record, 0x58);
} // namespace game::data
using gamedataAICanShootInCarChaseCond_Record = game::data::AICanShootInCarChaseCond_Record;
using AICanShootInCarChaseCond_Record = game::data::AICanShootInCarChaseCond_Record;
} // namespace RED4ext

// clang-format on
