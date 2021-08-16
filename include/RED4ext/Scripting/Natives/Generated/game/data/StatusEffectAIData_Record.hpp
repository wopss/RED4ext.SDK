#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct StatusEffectAIData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatusEffectAIData_Record";
    static constexpr const char* ALIAS = "StatusEffectAIData_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatusEffectAIData_Record, 0x70);
} // namespace game::data
using StatusEffectAIData_Record = game::data::StatusEffectAIData_Record;
} // namespace RED4ext
