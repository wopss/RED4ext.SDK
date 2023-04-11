#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct SBehaviorConstraintNodeFloorIKVerticalBoneData
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKVerticalBoneData";
    static constexpr const char* ALIAS = NAME;

    float Min_offset; // 00 -- Min offset
    float Max_offset; // 04 -- Max offset
    anim::TransformIndex bone; // 08
    float offsetToDesiredBlendTime; // 20
    float verticalOffsetBlendTime; // 24
    float stiffness; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKVerticalBoneData, 0x30);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKVerticalBoneData = anim::SBehaviorConstraintNodeFloorIKVerticalBoneData;
} // namespace RED4ext

// clang-format on
