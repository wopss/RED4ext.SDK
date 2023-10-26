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
struct __declspec(align(0x10)) AnimFeature_IK : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_IK";
    static constexpr const char* ALIAS = NAME;

    Vector4 point; // 40
    Vector4 normal; // 50
    float weight; // 60
    uint8_t unk64[0x70 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(AnimFeature_IK, 0x70);
} // namespace anim
using animAnimFeature_IK = anim::AnimFeature_IK;
} // namespace RED4ext

// clang-format on
