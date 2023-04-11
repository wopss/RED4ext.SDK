#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_AnimEvent : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_AnimEvent";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 30
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_AnimEvent, 0x38);
} // namespace anim
using animAnimStateTransitionCondition_AnimEvent = anim::AnimStateTransitionCondition_AnimEvent;
} // namespace RED4ext

// clang-format on
