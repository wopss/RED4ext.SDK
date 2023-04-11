#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CombatModes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct CombatModeTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorCombatModeTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::CombatModes mode; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    int32_t priority; // 3C
    float timeToLive; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(CombatModeTaskDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorCombatModeTaskDefinition = AI::behavior::CombatModeTaskDefinition;
} // namespace RED4ext

// clang-format on
