#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloorIkBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SBehaviorConstraintNodeFloorIKLegsData.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SBehaviorConstraintNodeFloorIKVerticalBoneData.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/STwoBonesIKSolverData.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_FloorIk : anim::AnimNode_FloorIkBase
{
    static constexpr const char* NAME = "animAnimNode_FloorIk";
    static constexpr const char* ALIAS = NAME;

    anim::SBehaviorConstraintNodeFloorIKVerticalBoneData pelvis; // 110
    anim::SBehaviorConstraintNodeFloorIKLegsData legs; // 140
    uint8_t unk16C[0x170 - 0x16C]; // 16C
    anim::STwoBonesIKSolverData leftLegIK; // 170
    anim::STwoBonesIKSolverData rightLegIK; // 2A0
    uint8_t unk3D0[0x440 - 0x3D0]; // 3D0
};
RED4EXT_ASSERT_SIZE(AnimNode_FloorIk, 0x440);
} // namespace anim
} // namespace RED4ext
