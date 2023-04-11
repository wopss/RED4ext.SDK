#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/FSMTransitionListDefinition.hpp>

namespace RED4ext
{
namespace AI { struct CTreeNodeDefinition; }

namespace AI
{
struct FSMStateDefinition
{
    static constexpr const char* NAME = "AIFSMStateDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::FSMTransitionListDefinition onUpdateTransition; // 00
    AI::FSMTransitionListDefinition onCompleteTransition; // 04
    AI::FSMTransitionListDefinition onSuccessTransition; // 08
    AI::FSMTransitionListDefinition onFailureTransition; // 0C
    AI::FSMTransitionListDefinition onInterruptionTransition; // 10
    AI::FSMTransitionListDefinition onEventTransitions; // 14
    Handle<AI::CTreeNodeDefinition> childNode; // 18
};
RED4EXT_ASSERT_SIZE(FSMStateDefinition, 0x28);
} // namespace AI
using AIFSMStateDefinition = AI::FSMStateDefinition;
} // namespace RED4ext

// clang-format on
