#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_QuaternionValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_QuaternionWsToMs : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_QuaternionWsToMs";
    static constexpr const char* ALIAS = NAME;

    anim::QuaternionLink quaternionWs; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_QuaternionWsToMs, 0x68);
} // namespace anim
} // namespace RED4ext
