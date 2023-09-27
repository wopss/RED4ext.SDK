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
struct AIActionCondition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionCondition_Record";
    static constexpr const char* ALIAS = "AIActionCondition_Record";

    uint8_t unk48[0x2B0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionCondition_Record, 0x2B0);
} // namespace game::data
using gamedataAIActionCondition_Record = game::data::AIActionCondition_Record;
using AIActionCondition_Record = game::data::AIActionCondition_Record;
} // namespace RED4ext

// clang-format on
