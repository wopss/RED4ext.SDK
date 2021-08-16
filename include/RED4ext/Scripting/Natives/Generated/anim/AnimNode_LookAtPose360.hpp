#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_LookAtPose360 : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_LookAtPose360";
    static constexpr const char* ALIAS = NAME;

    CName animation; // 48
    float speedInDegreesPerSecond; // 50
    float durationCut; // 54
    uint8_t unk58[0xA8 - 0x58]; // 58
    anim::FloatLink targetAngleOffsetNode; // A8
    anim::FloatLink angleOffsetNode; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAtPose360, 0xE8);
} // namespace anim
} // namespace RED4ext
