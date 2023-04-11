#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/StateCompletionStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct TreeNodeDefinition; }

namespace AI::behavior
{
struct FSMStateDefinition : AI::behavior::TreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorFSMStateDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::TreeNodeDefinition> behaviorRoot; // 30
    bool isInitial; // 40
    bool isExit; // 41
    uint8_t unk42[0x44 - 0x42]; // 42
    AI::behavior::StateCompletionStatus completionStatus; // 44
};
RED4EXT_ASSERT_SIZE(FSMStateDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorFSMStateDefinition = AI::behavior::FSMStateDefinition;
} // namespace RED4ext

// clang-format on
