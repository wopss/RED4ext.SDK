#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_TransformValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TransformInterpolation : anim::AnimNode_TransformValue
{
    static constexpr const char* NAME = "animAnimNode_TransformInterpolation";
    static constexpr const char* ALIAS = NAME;

    anim::QuaternionInterpolationType interpolationType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    anim::TransformLink firstInput; // 50
    anim::TransformLink secondInput; // 70
    anim::FloatLink weight; // 90
};
RED4EXT_ASSERT_SIZE(AnimNode_TransformInterpolation, 0xB0);
} // namespace anim
using animAnimNode_TransformInterpolation = anim::AnimNode_TransformInterpolation;
} // namespace RED4ext

// clang-format on
