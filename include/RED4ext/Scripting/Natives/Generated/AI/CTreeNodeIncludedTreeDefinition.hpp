#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefTree.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeIncludedTreeDefinition : AI::CTreeNodeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeIncludedTreeDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    LibTreeDefTree tree; // 38
};
RED4EXT_ASSERT_SIZE(CTreeNodeIncludedTreeDefinition, 0x58);
} // namespace AI
using AICTreeNodeIncludedTreeDefinition = AI::CTreeNodeIncludedTreeDefinition;
} // namespace RED4ext

// clang-format on
