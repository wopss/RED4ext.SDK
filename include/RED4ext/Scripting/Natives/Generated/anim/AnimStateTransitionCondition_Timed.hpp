#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_Timed : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_Timed";
    static constexpr const char* ALIAS = NAME;

    float timeToFireTransition; // 30
    uint8_t unk34[0x48 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_Timed, 0x48);
} // namespace anim
using animAnimStateTransitionCondition_Timed = anim::AnimStateTransitionCondition_Timed;
} // namespace RED4ext

// clang-format on
