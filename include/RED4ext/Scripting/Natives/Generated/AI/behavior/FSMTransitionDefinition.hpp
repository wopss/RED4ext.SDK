#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/BehaviorComponentDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct EventConditionDefinition; }
namespace AI::behavior { struct ExpressionSocket; }
namespace AI::behavior { struct InstantConditionDefinition; }
namespace AI::behavior { struct MonitorConditionDefinition; }

namespace AI::behavior
{
struct FSMTransitionDefinition : AI::behavior::BehaviorComponentDefinition
{
    static constexpr const char* NAME = "AIbehaviorFSMTransitionDefinition";
    static constexpr const char* ALIAS = NAME;

    int32_t evaluationOrder; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Handle<AI::behavior::InstantConditionDefinition>> instantConditions; // 38
    DynArray<Handle<AI::behavior::MonitorConditionDefinition>> monitorConditions; // 48
    DynArray<Handle<AI::behavior::EventConditionDefinition>> eventConditions; // 58
    DynArray<Handle<AI::behavior::ExpressionSocket>> passiveConditions; // 68
    uint16_t inState; // 78
    uint16_t outState; // 7A
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(FSMTransitionDefinition, 0x80);
} // namespace AI::behavior
using AIbehaviorFSMTransitionDefinition = AI::behavior::FSMTransitionDefinition;
} // namespace RED4ext

// clang-format on
