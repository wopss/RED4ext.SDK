#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EFootPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_FootPhaseEvent : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_FootPhaseEvent";
    static constexpr const char* ALIAS = NAME;

    anim::EFootPhase footPhase; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_FootPhaseEvent, 0x38);
} // namespace anim
using animAnimStateTransitionCondition_FootPhaseEvent = anim::AnimStateTransitionCondition_FootPhaseEvent;
} // namespace RED4ext

// clang-format on
