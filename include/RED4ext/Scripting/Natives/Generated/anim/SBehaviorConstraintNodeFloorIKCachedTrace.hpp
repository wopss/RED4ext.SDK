#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) SBehaviorConstraintNodeFloorIKCachedTrace
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKCachedTrace";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKCachedTrace, 0x50);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKCachedTrace = anim::SBehaviorConstraintNodeFloorIKCachedTrace;
} // namespace RED4ext

// clang-format on
