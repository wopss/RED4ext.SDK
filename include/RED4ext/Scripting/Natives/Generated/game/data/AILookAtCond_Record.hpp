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
struct AILookAtCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAILookAtCond_Record";
    static constexpr const char* ALIAS = "AILookAtCond_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AILookAtCond_Record, 0x70);
} // namespace game::data
using gamedataAILookAtCond_Record = game::data::AILookAtCond_Record;
using AILookAtCond_Record = game::data::AILookAtCond_Record;
} // namespace RED4ext

// clang-format on
