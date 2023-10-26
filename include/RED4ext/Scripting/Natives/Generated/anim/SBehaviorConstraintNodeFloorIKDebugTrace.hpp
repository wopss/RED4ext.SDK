#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) SBehaviorConstraintNodeFloorIKDebugTrace
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKDebugTrace";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x12D0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKDebugTrace, 0x12D0);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKDebugTrace = anim::SBehaviorConstraintNodeFloorIKDebugTrace;
} // namespace RED4ext

// clang-format on
