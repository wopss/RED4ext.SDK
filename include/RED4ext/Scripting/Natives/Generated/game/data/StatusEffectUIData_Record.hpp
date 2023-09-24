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
struct StatusEffectUIData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatusEffectUIData_Record";
    static constexpr const char* ALIAS = "StatusEffectUIData_Record";

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatusEffectUIData_Record, 0xB8);
} // namespace game::data
using gamedataStatusEffectUIData_Record = game::data::StatusEffectUIData_Record;
using StatusEffectUIData_Record = game::data::StatusEffectUIData_Record;
} // namespace RED4ext

// clang-format on
