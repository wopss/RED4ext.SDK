#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct SBehaviorConstraintNodeFloorIKMaintainLookBoneData
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKMaintainLookBoneData";
    static constexpr const char* ALIAS = NAME;

    CName bone; // 00
    float amountOfRotation; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKMaintainLookBoneData, 0x10);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKMaintainLookBoneData = anim::SBehaviorConstraintNodeFloorIKMaintainLookBoneData;
} // namespace RED4ext

// clang-format on
