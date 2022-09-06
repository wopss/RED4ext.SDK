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

struct ExpressionTreeCGeneralIfNodeDefinition : ExpressionTreeCGeneralNodeDefinition
{
    static constexpr const char* NAME = "ExpressionTreeCGeneralIfNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<LibTreeINodeDefinition>> expressions; // 38
    Handle<LibTreeINodeDefinition> trueBranch; // 48
    Handle<LibTreeINodeDefinition> falseBranch; // 58
};
RED4EXT_ASSERT_SIZE(ExpressionTreeCGeneralIfNodeDefinition, 0x68);
} // namespace RED4ext

// clang-format on
