#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>

namespace RED4ext
{
namespace anim { struct AnimNode_State; }
namespace anim { struct AnimNode_StateFrozen; }
namespace anim { struct AnimStateMachineConditionalEntry; }
namespace anim { struct AnimStateTransitionDescription; }
namespace anim { struct IAnimStateTransitionInterpolator; }

namespace anim
{
struct AnimNode_StateMachine : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_StateMachine";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimNode_State>> states; // 48
    DynArray<Handle<anim::AnimStateMachineConditionalEntry>> conditionalEntries; // 58
    DynArray<Handle<anim::AnimStateTransitionDescription>> transitions; // 68
    DynArray<Handle<anim::AnimStateTransitionDescription>> globalTransitions; // 78
    Handle<anim::IAnimStateTransitionInterpolator> anyStateInterpolator; // 88
    Handle<anim::AnimNode_StateFrozen> frozenState; // 98
    uint32_t defaultStateIndex; // A8
    bool notifyOnEnterState; // AC
    uint8_t unkAD[0x140 - 0xAD]; // AD
};
RED4EXT_ASSERT_SIZE(AnimNode_StateMachine, 0x140);
} // namespace anim
using animAnimNode_StateMachine = anim::AnimNode_StateMachine;
} // namespace RED4ext

// clang-format on
