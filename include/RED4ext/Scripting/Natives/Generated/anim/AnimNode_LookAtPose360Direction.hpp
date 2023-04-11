#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LookAtPose360Direction : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_LookAtPose360Direction";
    static constexpr const char* ALIAS = NAME;

    float defaultValue; // 48
    float angleOffset; // 4C
    bool negateOutput; // 50
    uint8_t unk51[0x68 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(AnimNode_LookAtPose360Direction, 0x68);
} // namespace anim
using animAnimNode_LookAtPose360Direction = anim::AnimNode_LookAtPose360Direction;
} // namespace RED4ext

// clang-format on
