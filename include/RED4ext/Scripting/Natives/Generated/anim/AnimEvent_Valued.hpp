#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_Valued : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_Valued";
    static constexpr const char* ALIAS = NAME;

    float value; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimEvent_Valued, 0x48);
} // namespace anim
using animAnimEvent_Valued = anim::AnimEvent_Valued;
} // namespace RED4ext

// clang-format on
