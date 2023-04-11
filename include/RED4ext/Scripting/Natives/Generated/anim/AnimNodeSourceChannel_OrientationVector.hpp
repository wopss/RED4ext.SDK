#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Vector.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeSourceChannel_OrientationVector : anim::IAnimNodeSourceChannel_Vector
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_OrientationVector";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transformIndex; // 30
    anim::TransformIndex inputTransformIndex; // 48
    Vector3 up; // 60
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_OrientationVector, 0x70);
} // namespace anim
using animAnimNodeSourceChannel_OrientationVector = anim::AnimNodeSourceChannel_OrientationVector;
} // namespace RED4ext

// clang-format on
