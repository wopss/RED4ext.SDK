#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SBehaviorConstraintNodeFloorIKCommonData.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloorIkBase : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FloorIkBase";
    static constexpr const char* ALIAS = NAME;

    anim::SBehaviorConstraintNodeFloorIKCommonData common; // 60
    CName requiredAnimEvent; // 90
    CName blockAnimEvent; // 98
    float slopeAngleDamp; // A0
    bool useFixedVersion; // A4
    bool canBeDisabledDueToFrameRate; // A5
    uint8_t unkA6[0x108 - 0xA6]; // A6
};
RED4EXT_ASSERT_SIZE(AnimNode_FloorIkBase, 0x108);
} // namespace anim
using animAnimNode_FloorIkBase = anim::AnimNode_FloorIkBase;
} // namespace RED4ext

// clang-format on
