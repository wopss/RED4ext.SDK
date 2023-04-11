#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct SelectCombatTargetTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorSelectCombatTargetTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> target; // 38
    bool targetClosest; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(SelectCombatTargetTaskDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorSelectCombatTargetTaskDefinition = AI::behavior::SelectCombatTargetTaskDefinition;
} // namespace RED4ext

// clang-format on
