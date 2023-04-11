#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeChildrenListDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeParallelDefinition : AI::CTreeNodeChildrenListDefinition
{
    static constexpr const char* NAME = "AICTreeNodeParallelDefinition";
    static constexpr const char* ALIAS = NAME;

    bool forwardChildrenCompleteness; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(CTreeNodeParallelDefinition, 0x50);
} // namespace AI
using AICTreeNodeParallelDefinition = AI::CTreeNodeParallelDefinition;
} // namespace RED4ext

// clang-format on
