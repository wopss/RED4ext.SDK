#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDynamicDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeForcedBehaviourDefinition : AI::CTreeNodeDynamicDefinition
{
    static constexpr const char* NAME = "AICTreeNodeForcedBehaviourDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CTreeNodeForcedBehaviourDefinition, 0x30);
} // namespace AI
using AICTreeNodeForcedBehaviourDefinition = AI::CTreeNodeForcedBehaviourDefinition;
} // namespace RED4ext

// clang-format on
