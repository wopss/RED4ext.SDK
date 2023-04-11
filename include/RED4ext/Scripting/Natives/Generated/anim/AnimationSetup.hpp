#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimSetCollection.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimationSetup
{
    static constexpr const char* NAME = "animAnimationSetup";
    static constexpr const char* ALIAS = NAME;

    anim::AnimSetCollection cinematics; // 00
    anim::AnimSetCollection gameplay; // 30
    anim::AnimSetCollection finalAnimSetCollection; // 60
};
RED4EXT_ASSERT_SIZE(AnimationSetup, 0x90);
} // namespace anim
using animAnimationSetup = anim::AnimationSetup;
} // namespace RED4ext

// clang-format on
