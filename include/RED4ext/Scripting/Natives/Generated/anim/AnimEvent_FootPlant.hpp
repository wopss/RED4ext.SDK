#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EventSide.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_FootPlant : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_FootPlant";
    static constexpr const char* ALIAS = NAME;

    anim::EventSide side; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName customEvent; // 48
};
RED4EXT_ASSERT_SIZE(AnimEvent_FootPlant, 0x50);
} // namespace anim
using animAnimEvent_FootPlant = anim::AnimEvent_FootPlant;
} // namespace RED4ext

// clang-format on
