#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompositeTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct SequenceTreeNodeDefinition : AI::behavior::CompositeTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorSequenceTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SequenceTreeNodeDefinition, 0x40);
} // namespace AI::behavior
} // namespace RED4ext
