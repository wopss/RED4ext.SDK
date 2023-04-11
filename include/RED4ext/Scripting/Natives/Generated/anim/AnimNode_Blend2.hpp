#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim { struct ISyncMethod; }

namespace anim
{
struct AnimNode_Blend2 : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_Blend2";
    static constexpr const char* ALIAS = NAME;

    float minInputValue; // 48
    float maxInputValue; // 4C
    bool timeWarpingEnabled; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    Handle<anim::ISyncMethod> syncMethod; // 58
    uint8_t unk68[0x88 - 0x68]; // 68
    anim::PoseLink firstInputNode; // 88
    anim::PoseLink secondInputNode; // A0
    anim::FloatLink weightNode; // B8
};
RED4EXT_ASSERT_SIZE(AnimNode_Blend2, 0xD8);
} // namespace anim
using animAnimNode_Blend2 = anim::AnimNode_Blend2;
} // namespace RED4ext

// clang-format on
