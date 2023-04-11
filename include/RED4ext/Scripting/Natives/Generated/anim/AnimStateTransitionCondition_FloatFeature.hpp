#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CompareFunc.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionCondition_FloatFeature : anim::IAnimStateTransitionCondition
{
    static constexpr const char* NAME = "animAnimStateTransitionCondition_FloatFeature";
    static constexpr const char* ALIAS = NAME;

    float compareValue; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    CName featureName; // 38
    CName featurePropertyName; // 40
    anim::CompareFunc compareFunc; // 48
    uint8_t unk4C[0x60 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionCondition_FloatFeature, 0x60);
} // namespace anim
using animAnimStateTransitionCondition_FloatFeature = anim::AnimStateTransitionCondition_FloatFeature;
} // namespace RED4ext

// clang-format on
