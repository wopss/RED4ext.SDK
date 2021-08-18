#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/InertializationRotationLimit.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_Inertialization : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Inertialization";
    static constexpr const char* ALIAS = NAME;

    uint32_t transformsCountUpperBound; // 60
    uint32_t tracksCountUpperBound; // 64
    bool safeMode; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    DynArray<anim::InertializationRotationLimit> rotationLimits; // 70
    uint8_t unk80[0x1F0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(AnimNode_Inertialization, 0x1F0);
} // namespace anim
} // namespace RED4ext
