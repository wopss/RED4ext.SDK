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
struct AnimStateTransitionCondition_BoolFeature : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_BoolFeature";
    static constexpr const char* ALIAS = NAME;

    CName featureName; // 30
    CName featurePropertyName; // 38
    bool compareValue; // 40
    uint8_t unk41[0x58 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_BoolFeature, 0x58);
} // namespace anim
using animAnimStateTransitionCondition_BoolFeature = anim::AnimStateTransitionCondition_BoolFeature;
} // namespace RED4ext

// clang-format on
