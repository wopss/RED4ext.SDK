#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeCompositeDefinition.hpp>

namespace RED4ext
{
struct LibTreeINodeDefinition;

namespace AI
{
struct CTreeNodeChildrenListDefinition : AI::CTreeNodeCompositeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeChildrenListDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<LibTreeINodeDefinition>> children; // 38
};
RED4EXT_ASSERT_SIZE(CTreeNodeChildrenListDefinition, 0x48);
} // namespace AI
using AICTreeNodeChildrenListDefinition = AI::CTreeNodeChildrenListDefinition;
} // namespace RED4ext

// clang-format on
