#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct SBehaviorConstraintNodeFloorIKLegsData
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKLegsData";
    static constexpr const char* ALIAS = NAME;

    float Min_rel_offset; // 00 -- Min rel offset
    float Max_rel_offset; // 04 -- Max rel offset
    float Min_trace_offset; // 08 -- Min trace offset
    float Max_trace_offset; // 0C -- Max trace offset
    float verticalOffsetBlendUpTime; // 10
    float verticalOffsetBlendDownTime; // 14
    float Max_distance_for_trace_update; // 18 -- Max distance for trace update
    float Max_angle_from_upright_normal; // 1C -- Max angle from upright normal
    float Max_angle_from_upright_normal_to_side; // 20 -- Max angle from upright normal to side
    float Max_angle_from_upright_normal_to_revert_orientation; // 24 -- Max angle from upright normal to revert orientation
    uint8_t unk28[0x2C - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKLegsData, 0x2C);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKLegsData = anim::SBehaviorConstraintNodeFloorIKLegsData;
} // namespace RED4ext

// clang-format on
