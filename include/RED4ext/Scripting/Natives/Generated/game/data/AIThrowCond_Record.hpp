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
struct AIThrowCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIThrowCond_Record";
    static constexpr const char* ALIAS = "AIThrowCond_Record";

    uint8_t unk58[0x98 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIThrowCond_Record, 0x98);
} // namespace game::data
using gamedataAIThrowCond_Record = game::data::AIThrowCond_Record;
using AIThrowCond_Record = game::data::AIThrowCond_Record;
} // namespace RED4ext

// clang-format on
