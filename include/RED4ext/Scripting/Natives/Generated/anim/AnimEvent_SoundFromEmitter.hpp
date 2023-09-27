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
struct AnimEvent_SoundFromEmitter : anim::AnimEvent
{
    static constexpr const char* NAME = "animAnimEvent_SoundFromEmitter";
    static constexpr const char* ALIAS = NAME;

    CName emitterName; // 40
};
RED4EXT_ASSERT_SIZE(AnimEvent_SoundFromEmitter, 0x48);
} // namespace anim
using animAnimEvent_SoundFromEmitter = anim::AnimEvent_SoundFromEmitter;
} // namespace RED4ext

// clang-format on
