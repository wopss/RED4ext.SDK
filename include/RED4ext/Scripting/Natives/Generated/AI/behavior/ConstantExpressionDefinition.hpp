#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TypeRef.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ConstantExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorConstantExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::TypeRef type; // 40
    Variant value; // 58
};
RED4EXT_ASSERT_SIZE(ConstantExpressionDefinition, 0x70);
} // namespace AI::behavior
using AIbehaviorConstantExpressionDefinition = AI::behavior::ConstantExpressionDefinition;
} // namespace RED4ext

// clang-format on
