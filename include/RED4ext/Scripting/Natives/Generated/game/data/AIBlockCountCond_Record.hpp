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
struct AIBlockCountCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIBlockCountCond_Record";
    static constexpr const char* ALIAS = "AIBlockCountCond_Record";

    uint8_t unk58[0xA0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIBlockCountCond_Record, 0xA0);
} // namespace game::data
using gamedataAIBlockCountCond_Record = game::data::AIBlockCountCond_Record;
using AIBlockCountCond_Record = game::data::AIBlockCountCond_Record;
} // namespace RED4ext

// clang-format on
