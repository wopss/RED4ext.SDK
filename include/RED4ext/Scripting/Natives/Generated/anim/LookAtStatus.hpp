#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace anim {
enum class LookAtStatus : int32_t
{
    Active = 2,
    LimitReached = 4,
    TransitionInProgress = 8,
};
} // namespace anim
using animLookAtStatus = anim::LookAtStatus;
} // namespace RED4ext

// clang-format on
