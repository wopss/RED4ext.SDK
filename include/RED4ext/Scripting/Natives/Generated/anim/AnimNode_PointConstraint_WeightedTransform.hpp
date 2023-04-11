#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_PointConstraint_WeightedTransform
{
    static constexpr const char* NAME = "animAnimNode_PointConstraint_WeightedTransform";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transform; // 00
    float weight; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(AnimNode_PointConstraint_WeightedTransform, 0x20);
} // namespace anim
using animAnimNode_PointConstraint_WeightedTransform = anim::AnimNode_PointConstraint_WeightedTransform;
} // namespace RED4ext

// clang-format on
