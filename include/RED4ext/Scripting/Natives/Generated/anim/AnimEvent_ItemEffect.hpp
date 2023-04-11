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
struct AnimEvent_ItemEffect : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_ItemEffect";
    static constexpr const char* ALIAS = NAME;

    CName effectName; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AnimEvent_ItemEffect, 0x50);
} // namespace anim
using animAnimEvent_ItemEffect = anim::AnimEvent_ItemEffect;
} // namespace RED4ext

// clang-format on
