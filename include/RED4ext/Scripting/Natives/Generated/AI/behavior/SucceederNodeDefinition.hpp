#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/LeafTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct SucceederNodeDefinition : AI::behavior::LeafTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorSucceederNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SucceederNodeDefinition, 0x30);
} // namespace AI::behavior
} // namespace RED4ext
