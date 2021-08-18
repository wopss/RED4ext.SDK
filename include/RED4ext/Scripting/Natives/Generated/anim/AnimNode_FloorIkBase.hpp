#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SBehaviorConstraintNodeFloorIKCommonData.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_FloorIkBase : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FloorIkBase";
    static constexpr const char* ALIAS = NAME;

    anim::SBehaviorConstraintNodeFloorIKCommonData common; // 60
    bool canBeDisabledDueToFrameRate; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
    CName requiredAnimEvent; // 98
    CName blockAnimEvent; // A0
    bool useFixedVersion; // A8
    uint8_t unkA9[0xAC - 0xA9]; // A9
    float slopeAngleDamp; // AC
    uint8_t unkB0[0x110 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(AnimNode_FloorIkBase, 0x110);
} // namespace anim
} // namespace RED4ext
