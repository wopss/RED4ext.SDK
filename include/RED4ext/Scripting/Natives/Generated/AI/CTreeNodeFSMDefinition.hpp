#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeCompositeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/FSMEventTransitionsListDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/FSMStateDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/FSMTransitionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SharedVarTableDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeFSMDefinition : AI::CTreeNodeCompositeDefinition
{
    static constexpr const char* NAME = "AICTreeNodeFSMDefinition";
    static constexpr const char* ALIAS = NAME;

    uint16_t defaultState; // 30
    uint8_t unk32[0x38 - 0x32]; // 32
    DynArray<AI::FSMTransitionDefinition> transitions; // 38
    DynArray<AI::FSMEventTransitionsListDefinition> onEventTransitions; // 48
    DynArray<AI::FSMStateDefinition> states; // 58
    uint8_t unk68[0x78 - 0x68]; // 68
    AI::SharedVarTableDefinition sharedVars; // 78
};
RED4EXT_ASSERT_SIZE(CTreeNodeFSMDefinition, 0x90);
} // namespace AI
using AICTreeNodeFSMDefinition = AI::CTreeNodeFSMDefinition;
} // namespace RED4ext

// clang-format on
