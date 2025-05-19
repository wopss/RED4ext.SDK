#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace anim {
enum class CoverAction : int32_t
{
    NoAction = 0,
    LeanLeft = 1,
    LeanRight = 2,
    StepOutLeft = 3,
    StepOutRight = 4,
    LeanOver = 5,
    StepUp = 6,
    EnterCover = 7,
    SlideTo = 8,
    Vault = 9,
    LeaveCover = 10,
    BlindfireLeft = 11,
    BlindfireRight = 12,
    BlindfireOver = 13,
    OverheadStepOutLeft = 14,
    OverheadStepOutRight = 15,
    OverheadStepUp = 16,
};
} // namespace anim
using animCoverAction = anim::CoverAction;
} // namespace RED4ext

// clang-format on
