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
struct SBehaviorConstraintNodeFloorIKCommonData
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKCommonData";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex gravityCentreBone; // 00
    float rootRotationBlendTime; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    float verticalVelocityOffsetUpBlendTime; // 20
    float verticalVelocityOffsetDownBlendTime; // 24
    float slidingOnSlopeBlendTime; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKCommonData, 0x30);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKCommonData = anim::SBehaviorConstraintNodeFloorIKCommonData;
} // namespace RED4ext

// clang-format on
