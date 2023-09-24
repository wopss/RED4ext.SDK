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
struct StatusEffectPlayerData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatusEffectPlayerData_Record";
    static constexpr const char* ALIAS = "StatusEffectPlayerData_Record";

    uint8_t unk48[0x138 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatusEffectPlayerData_Record, 0x138);
} // namespace game::data
using gamedataStatusEffectPlayerData_Record = game::data::StatusEffectPlayerData_Record;
using StatusEffectPlayerData_Record = game::data::StatusEffectPlayerData_Record;
} // namespace RED4ext

// clang-format on
