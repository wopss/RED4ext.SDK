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
struct StatusEffectAIData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatusEffectAIData_Record";
    static constexpr const char* ALIAS = "StatusEffectAIData_Record";

    uint8_t unk48[0xE8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatusEffectAIData_Record, 0xE8);
} // namespace game::data
using gamedataStatusEffectAIData_Record = game::data::StatusEffectAIData_Record;
using StatusEffectAIData_Record = game::data::StatusEffectAIData_Record;
} // namespace RED4ext

// clang-format on
