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
struct AITargetInUnmountingRangeCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAITargetInUnmountingRangeCond_Record";
    static constexpr const char* ALIAS = "AITargetInUnmountingRangeCond_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AITargetInUnmountingRangeCond_Record, 0x68);
} // namespace game::data
using gamedataAITargetInUnmountingRangeCond_Record = game::data::AITargetInUnmountingRangeCond_Record;
using AITargetInUnmountingRangeCond_Record = game::data::AITargetInUnmountingRangeCond_Record;
} // namespace RED4ext

// clang-format on
