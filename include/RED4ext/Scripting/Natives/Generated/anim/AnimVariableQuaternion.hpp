#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimVariable.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimVariableQuaternion : anim::AnimVariable
{
    static constexpr const char* NAME = "animAnimVariableQuaternion";
    static constexpr const char* ALIAS = NAME;

    float roll; // 38
    float pitch; // 3C
    float yaw; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Quaternion default; // 50
};
RED4EXT_ASSERT_SIZE(AnimVariableQuaternion, 0x60);
} // namespace anim
} // namespace RED4ext
