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
struct AnimNode_DisableSleepMode : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_DisableSleepMode";
    static constexpr const char* ALIAS = NAME;

    bool forceUpdate; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(AnimNode_DisableSleepMode, 0x68);
} // namespace anim
using animAnimNode_DisableSleepMode = anim::AnimNode_DisableSleepMode;
} // namespace RED4ext

// clang-format on
