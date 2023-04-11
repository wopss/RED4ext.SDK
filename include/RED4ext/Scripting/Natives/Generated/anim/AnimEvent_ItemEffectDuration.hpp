#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_ItemEffectDuration : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_ItemEffectDuration";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
    uint32_t sequenceShift; // 50
    bool breakAllLoopsOnStop; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(AnimEvent_ItemEffectDuration, 0x58);
} // namespace anim
using animAnimEvent_ItemEffectDuration = anim::AnimEvent_ItemEffectDuration;
} // namespace RED4ext

// clang-format on
