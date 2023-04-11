#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/EdgeConditionAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/UnaryConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct EdgeConditionDefinition : AI::behavior::UnaryConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorEdgeConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::EdgeConditionAction risingEdgeAction; // 48
    AI::behavior::EdgeConditionAction fallingEdgeAction; // 4C
    bool initialValue; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(EdgeConditionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorEdgeConditionDefinition = AI::behavior::EdgeConditionDefinition;
} // namespace RED4ext

// clang-format on
