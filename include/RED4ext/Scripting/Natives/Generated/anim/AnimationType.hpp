#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace anim {
enum class AnimationType : int8_t
{
    Normal = 0,
    AdditiveFromRefPose = 1,
    AdditiveFromFirstFrame = 2,
    Additive = 3,
    AdditiveWithoutFirstFrame = 4,
};
} // namespace anim
using animAnimationType = anim::AnimationType;
} // namespace RED4ext

// clang-format on
