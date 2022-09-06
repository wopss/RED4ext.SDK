#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ExpressionTreeCGeneralNodeDefinition.hpp>

namespace RED4ext
{
struct ExpressionTreeCConstFloatNodeDefinition : ExpressionTreeCGeneralNodeDefinition
{
    static constexpr const char* NAME = "ExpressionTreeCConstFloatNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    float value; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(ExpressionTreeCConstFloatNodeDefinition, 0x38);
} // namespace RED4ext

// clang-format on
