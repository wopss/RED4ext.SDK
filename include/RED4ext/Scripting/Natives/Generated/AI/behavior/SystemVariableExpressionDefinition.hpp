#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/SystemVariableExpressionTypes.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct SystemVariableExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorSystemVariableExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::SystemVariableExpressionTypes variable; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(SystemVariableExpressionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorSystemVariableExpressionDefinition = AI::behavior::SystemVariableExpressionDefinition;
} // namespace RED4ext

// clang-format on
