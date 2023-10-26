#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) AnimationMotionSample
{
    static constexpr const char* NAME = "scnAnimationMotionSample";
    static constexpr const char* ALIAS = NAME;

    float time; // 00
    uint8_t unk04[0x10 - 0x4]; // 4
    Transform transform; // 10
};
RED4EXT_ASSERT_SIZE(AnimationMotionSample, 0x30);
} // namespace scn
using scnAnimationMotionSample = scn::AnimationMotionSample;
} // namespace RED4ext

// clang-format on
