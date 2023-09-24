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
struct AISignalCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAISignalCond_Record";
    static constexpr const char* ALIAS = "AISignalCond_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AISignalCond_Record, 0x68);
} // namespace game::data
using gamedataAISignalCond_Record = game::data::AISignalCond_Record;
using AISignalCond_Record = game::data::AISignalCond_Record;
} // namespace RED4ext

// clang-format on
