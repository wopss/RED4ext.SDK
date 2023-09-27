#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Difficulty.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IStatsConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Difficulty_ConditionType : quest::IStatsConditionType
{
    static constexpr const char* NAME = "questDifficulty_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::Difficulty difficulty; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(Difficulty_ConditionType, 0x50);
} // namespace quest
using questDifficulty_ConditionType = quest::Difficulty_ConditionType;
} // namespace RED4ext

// clang-format on
