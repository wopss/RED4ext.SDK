#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIActionSubCondition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionSubCondition_Record";
    static constexpr const char* ALIAS = "AIActionSubCondition_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionSubCondition_Record, 0x58);
} // namespace game::data
using gamedataAIActionSubCondition_Record = game::data::AIActionSubCondition_Record;
using AIActionSubCondition_Record = game::data::AIActionSubCondition_Record;
} // namespace RED4ext

// clang-format on
