#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ExpressionSocket; }

namespace AI::behavior
{
struct DistanceToExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorDistanceToExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ExpressionSocket> target; // 40
    float tolerance; // 50
    float updatePeriod; // 54
};
RED4EXT_ASSERT_SIZE(DistanceToExpressionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorDistanceToExpressionDefinition = AI::behavior::DistanceToExpressionDefinition;
} // namespace RED4ext

// clang-format on
