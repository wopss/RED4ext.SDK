#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) SBehaviorConstraintNodeFloorIKVerticalBone
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKVerticalBone";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x20 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKVerticalBone, 0x20);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKVerticalBone = anim::SBehaviorConstraintNodeFloorIKVerticalBone;
} // namespace RED4ext

// clang-format on
