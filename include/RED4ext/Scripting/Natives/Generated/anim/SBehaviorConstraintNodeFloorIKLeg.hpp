#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) SBehaviorConstraintNodeFloorIKLeg
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKLeg";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x190 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKLeg, 0x190);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKLeg = anim::SBehaviorConstraintNodeFloorIKLeg;
} // namespace RED4ext

// clang-format on
