#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_CriticalSpringDamp : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_CriticalSpringDamp";
    static constexpr const char* ALIAS = NAME;

    float smoothTime; // 48
    bool useRange; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    float rangeMin; // 50
    float rangeMax; // 54
    anim::FloatLink inputNode; // 58
    uint8_t unk78[0x98 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(AnimNode_CriticalSpringDamp, 0x98);
} // namespace anim
} // namespace RED4ext
