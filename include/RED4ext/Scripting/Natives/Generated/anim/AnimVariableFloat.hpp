#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimVariable.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimVariableFloat : anim::AnimVariable
{
    static constexpr const char* NAME = "animAnimVariableFloat";
    static constexpr const char* ALIAS = NAME;

    float value; // 38
    float default; // 3C
    float min; // 40
    float max; // 44
};
RED4EXT_ASSERT_SIZE(AnimVariableFloat, 0x48);
} // namespace anim
} // namespace RED4ext
