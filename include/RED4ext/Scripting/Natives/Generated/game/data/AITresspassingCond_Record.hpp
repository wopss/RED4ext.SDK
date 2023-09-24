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
struct AITresspassingCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAITresspassingCond_Record";
    static constexpr const char* ALIAS = "AITresspassingCond_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AITresspassingCond_Record, 0x70);
} // namespace game::data
using gamedataAITresspassingCond_Record = game::data::AITresspassingCond_Record;
using AITresspassingCond_Record = game::data::AITresspassingCond_Record;
} // namespace RED4ext

// clang-format on
