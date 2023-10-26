#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloorIkBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SBehaviorConstraintNodeFloorIKLegsData.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SBehaviorConstraintNodeFloorIKVerticalBoneData.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/STwoBonesIKSolverData.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_FloorIk : anim::AnimNode_FloorIkBase
{
    static constexpr const char* NAME = "animAnimNode_FloorIk";
    static constexpr const char* ALIAS = NAME;

    anim::SBehaviorConstraintNodeFloorIKVerticalBoneData pelvis; // 108
    anim::SBehaviorConstraintNodeFloorIKLegsData legs; // 138
    uint8_t unk164[0x170 - 0x164]; // 164
    anim::STwoBonesIKSolverData leftLegIK; // 170
    anim::STwoBonesIKSolverData rightLegIK; // 2A0
    uint8_t unk3D0[0x440 - 0x3D0]; // 3D0
};
RED4EXT_ASSERT_SIZE(AnimNode_FloorIk, 0x440);
} // namespace anim
using animAnimNode_FloorIk = anim::AnimNode_FloorIk;
} // namespace RED4ext

// clang-format on
