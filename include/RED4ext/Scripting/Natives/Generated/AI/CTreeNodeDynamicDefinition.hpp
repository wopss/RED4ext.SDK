#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeDynamicDefinition : AI::CTreeNodeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeDynamicDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeDynamicDefinition, 0x30);
} // namespace AI
using AICTreeNodeDynamicDefinition = AI::CTreeNodeDynamicDefinition;
} // namespace RED4ext

// clang-format on
