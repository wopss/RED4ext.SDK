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
struct AnimStateTransitionCondition_IntEdgeGreaterFromZeroFeature : anim::AnimStateTransitionCondition_IntEdgeFeature
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_IntEdgeGreaterFromZeroFeature";
    static constexpr const char* ALIAS = NAME;

    int32_t greaterThenValue; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_IntEdgeGreaterFromZeroFeature, 0x78);
} // namespace anim
using animAnimStateTransitionCondition_IntEdgeGreaterFromZeroFeature = anim::AnimStateTransitionCondition_IntEdgeGreaterFromZeroFeature;
} // namespace RED4ext

// clang-format on
