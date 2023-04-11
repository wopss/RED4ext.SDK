#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ExpressionSocket; }

namespace AI::behavior
{
struct ComparisonExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorComparisonExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ExpressionSocket> leftHandSide; // 40
    EComparisonType operator; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    Handle<AI::behavior::ExpressionSocket> rightHandSide; // 58
};
RED4EXT_ASSERT_SIZE(ComparisonExpressionDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorComparisonExpressionDefinition = AI::behavior::ComparisonExpressionDefinition;
} // namespace RED4ext

// clang-format on
