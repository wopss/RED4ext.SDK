#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_FloatConstant : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatConstant";
    static constexpr const char* ALIAS = NAME;

    float value; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatConstant, 0x50);
} // namespace anim
} // namespace RED4ext
