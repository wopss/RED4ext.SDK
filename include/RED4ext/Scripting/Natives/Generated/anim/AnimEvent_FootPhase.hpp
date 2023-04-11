#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EFootPhase.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimEvent_FootPhase : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_FootPhase";
    static constexpr const char* ALIAS = NAME;

    anim::EFootPhase phase; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AnimEvent_FootPhase, 0x48);
} // namespace anim
using animAnimEvent_FootPhase = anim::AnimEvent_FootPhase;
} // namespace RED4ext

// clang-format on
