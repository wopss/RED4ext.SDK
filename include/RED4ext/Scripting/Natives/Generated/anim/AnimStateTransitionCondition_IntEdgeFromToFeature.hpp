#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimStateTransitionCondition_IntEdgeFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_IntEdgeFromToFeature : anim::AnimStateTransitionCondition_IntEdgeFeature
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_IntEdgeFromToFeature";
    static constexpr const char* ALIAS = NAME;

    int32_t fromValue; // 70
    int32_t toValue; // 74
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_IntEdgeFromToFeature, 0x78);
} // namespace anim
using animAnimStateTransitionCondition_IntEdgeFromToFeature = anim::AnimStateTransitionCondition_IntEdgeFromToFeature;
} // namespace RED4ext

// clang-format on
