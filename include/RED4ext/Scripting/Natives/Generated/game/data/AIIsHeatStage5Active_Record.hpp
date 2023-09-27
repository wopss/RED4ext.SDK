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
struct AIIsHeatStage5Active_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIIsHeatStage5Active_Record";
    static constexpr const char* ALIAS = "AIIsHeatStage5Active_Record";

};
RED4EXT_ASSERT_SIZE(AIIsHeatStage5Active_Record, 0x58);
} // namespace game::data
using gamedataAIIsHeatStage5Active_Record = game::data::AIIsHeatStage5Active_Record;
using AIIsHeatStage5Active_Record = game::data::AIIsHeatStage5Active_Record;
} // namespace RED4ext

// clang-format on
