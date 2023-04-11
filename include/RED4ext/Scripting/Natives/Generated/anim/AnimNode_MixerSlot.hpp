#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_MixerSlot : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_MixerSlot";
    static constexpr const char* ALIAS = NAME;

    uint16_t maxNormalAnimEntriesCount; // 60
    uint16_t maxAdditiveAnimEntriesCount; // 62
    uint16_t maxOverrideAnimEntriesCount; // 64
    uint8_t unk66[0x150 - 0x66]; // 66
};
RED4EXT_ASSERT_SIZE(AnimNode_MixerSlot, 0x150);
} // namespace anim
using animAnimNode_MixerSlot = anim::AnimNode_MixerSlot;
} // namespace RED4ext

// clang-format on
