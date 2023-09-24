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
struct AIGoToCoverCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIGoToCoverCond_Record";
    static constexpr const char* ALIAS = "AIGoToCoverCond_Record";

    uint8_t unk58[0xA0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIGoToCoverCond_Record, 0xA0);
} // namespace game::data
using gamedataAIGoToCoverCond_Record = game::data::AIGoToCoverCond_Record;
using AIGoToCoverCond_Record = game::data::AIGoToCoverCond_Record;
} // namespace RED4ext

// clang-format on
