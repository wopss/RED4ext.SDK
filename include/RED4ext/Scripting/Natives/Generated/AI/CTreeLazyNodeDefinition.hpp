#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDefinition.hpp>

namespace RED4ext
{
struct LibTreeCTreeResource;

namespace AI
{
struct CTreeLazyNodeDefinition : AI::CTreeNodeDefinition
{
    static constexpr const char* NAME = "AICTreeLazyNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<LibTreeCTreeResource> tree; // 30
};
RED4EXT_ASSERT_SIZE(CTreeLazyNodeDefinition, 0x40);
} // namespace AI
using AICTreeLazyNodeDefinition = AI::CTreeLazyNodeDefinition;
} // namespace RED4ext

// clang-format on
