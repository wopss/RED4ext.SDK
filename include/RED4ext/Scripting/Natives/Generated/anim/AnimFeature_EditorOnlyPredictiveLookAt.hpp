#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_EditorOnlyPredictiveLookAt : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_EditorOnlyPredictiveLookAt";
    static constexpr const char* ALIAS = NAME;

    bool isEnabled; // 40
    uint8_t unk41[0x50 - 0x41]; // 41
    Vector4 target; // 50
    float suppress; // 60
    int32_t mode; // 64
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimFeature_EditorOnlyPredictiveLookAt, 0x70);
} // namespace anim
using animAnimFeature_EditorOnlyPredictiveLookAt = anim::AnimFeature_EditorOnlyPredictiveLookAt;
} // namespace RED4ext

// clang-format on
