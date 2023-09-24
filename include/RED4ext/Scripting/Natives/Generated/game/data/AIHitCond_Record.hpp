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
struct AIHitCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIHitCond_Record";
    static constexpr const char* ALIAS = "AIHitCond_Record";

    uint8_t unk58[0xB8 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIHitCond_Record, 0xB8);
} // namespace game::data
using gamedataAIHitCond_Record = game::data::AIHitCond_Record;
using AIHitCond_Record = game::data::AIHitCond_Record;
} // namespace RED4ext

// clang-format on
