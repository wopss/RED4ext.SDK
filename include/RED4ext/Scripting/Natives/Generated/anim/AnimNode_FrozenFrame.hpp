#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FrozenFrame : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FrozenFrame";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x80 - 0x60]; // 60
    int32_t maxFramesFrozen; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
    CName triggerEventName; // 88
    CName clearEventName; // 90
};
RED4EXT_ASSERT_SIZE(AnimNode_FrozenFrame, 0x98);
} // namespace anim
using animAnimNode_FrozenFrame = anim::AnimNode_FrozenFrame;
} // namespace RED4ext

// clang-format on
