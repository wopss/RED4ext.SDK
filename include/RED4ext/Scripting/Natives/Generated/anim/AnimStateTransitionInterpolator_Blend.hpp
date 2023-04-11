#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimStateInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimStateTransitionInterpolator.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimStateTransitionInterpolator_Blend : anim::IAnimStateTransitionInterpolator
{
    static constexpr const char* NAME = "animAnimStateTransitionInterpolator_Blend";
    static constexpr const char* ALIAS = NAME;

    anim::AnimStateInterpolationType interpolationType; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(AnimStateTransitionInterpolator_Blend, 0x38);
} // namespace anim
using animAnimStateTransitionInterpolator_Blend = anim::AnimStateTransitionInterpolator_Blend;
} // namespace RED4ext

// clang-format on
