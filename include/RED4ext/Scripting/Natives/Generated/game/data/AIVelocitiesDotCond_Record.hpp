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
struct AIVelocitiesDotCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIVelocitiesDotCond_Record";
    static constexpr const char* ALIAS = "AIVelocitiesDotCond_Record";

    uint8_t unk58[0x98 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIVelocitiesDotCond_Record, 0x98);
} // namespace game::data
using gamedataAIVelocitiesDotCond_Record = game::data::AIVelocitiesDotCond_Record;
using AIVelocitiesDotCond_Record = game::data::AIVelocitiesDotCond_Record;
} // namespace RED4ext

// clang-format on
