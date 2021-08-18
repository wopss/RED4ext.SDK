#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompositeTreeNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ParallelNodeWaitFor.hpp>

namespace RED4ext
{
namespace AI::behavior { 
struct ParallelNodeDefinition : AI::behavior::CompositeTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorParallelNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::ParallelNodeWaitFor waitFor; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ParallelNodeDefinition, 0x48);
} // namespace AI::behavior
} // namespace RED4ext
