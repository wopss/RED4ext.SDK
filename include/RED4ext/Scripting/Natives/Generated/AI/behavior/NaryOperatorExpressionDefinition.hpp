#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/NaryExpressionOperators.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ExpressionSocket; }

namespace AI::behavior
{
struct NaryOperatorExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorNaryOperatorExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::NaryExpressionOperators operator; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<Handle<AI::behavior::ExpressionSocket>> operands; // 48
};
RED4EXT_ASSERT_SIZE(NaryOperatorExpressionDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorNaryOperatorExpressionDefinition = AI::behavior::NaryOperatorExpressionDefinition;
} // namespace RED4ext

// clang-format on
