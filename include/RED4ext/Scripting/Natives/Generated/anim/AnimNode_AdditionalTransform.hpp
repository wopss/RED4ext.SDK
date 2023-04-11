#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AdditionalTransformContainer.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_AdditionalTransform : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AdditionalTransform";
    static constexpr const char* ALIAS = NAME;

    anim::AdditionalTransformContainer additionalTransforms; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_AdditionalTransform, 0x70);
} // namespace anim
using animAnimNode_AdditionalTransform = anim::AnimNode_AdditionalTransform;
} // namespace RED4ext

// clang-format on
