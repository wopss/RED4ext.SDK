#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_QuaternionValue.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_QuaternionConstant : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_QuaternionConstant";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Quaternion value; // 50
};
RED4EXT_ASSERT_SIZE(AnimNode_QuaternionConstant, 0x60);
} // namespace anim
} // namespace RED4ext
