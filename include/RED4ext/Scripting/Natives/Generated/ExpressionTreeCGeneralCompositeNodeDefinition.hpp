#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ExpressionTreeCGeneralNodeDefinition.hpp>

namespace RED4ext
{
struct LibTreeINodeDefinition;

struct ExpressionTreeCGeneralCompositeNodeDefinition : ExpressionTreeCGeneralNodeDefinition
{
    static constexpr const char* NAME = "ExpressionTreeCGeneralCompositeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<LibTreeINodeDefinition>> children; // 38
};
RED4EXT_ASSERT_SIZE(ExpressionTreeCGeneralCompositeNodeDefinition, 0x48);
} // namespace RED4ext

// clang-format on
