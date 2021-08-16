#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/BehaviorComponentDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct TreeNodeDefinition : AI::behavior::BehaviorComponentDefinition
{
    static constexpr const char* NAME = "AIbehaviorTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TreeNodeDefinition, 0x30);
} // namespace AI::behavior
} // namespace RED4ext
