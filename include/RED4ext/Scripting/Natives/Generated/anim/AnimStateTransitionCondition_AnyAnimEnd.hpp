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
struct AnimStateTransitionCondition_AnyAnimEnd : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_AnyAnimEnd";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_AnyAnimEnd, 0x30);
} // namespace anim
using animAnimStateTransitionCondition_AnyAnimEnd = anim::AnimStateTransitionCondition_AnyAnimEnd;
} // namespace RED4ext

// clang-format on
