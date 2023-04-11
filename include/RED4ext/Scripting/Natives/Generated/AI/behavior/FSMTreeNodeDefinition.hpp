#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct FSMStateDefinition; }
namespace AI::behavior { struct FSMTransitionDefinition; }

namespace AI::behavior
{
struct FSMTreeNodeDefinition : AI::behavior::TreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorFSMTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<AI::behavior::FSMStateDefinition>> states; // 30
    DynArray<Handle<AI::behavior::FSMTransitionDefinition>> transitions; // 40
    Handle<AI::behavior::FSMStateDefinition> initialState; // 50
};
RED4EXT_ASSERT_SIZE(FSMTreeNodeDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorFSMTreeNodeDefinition = AI::behavior::FSMTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
