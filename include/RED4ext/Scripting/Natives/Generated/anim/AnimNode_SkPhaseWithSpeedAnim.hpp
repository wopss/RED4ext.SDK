#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkPhaseAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkPhaseWithSpeedAnim : anim::AnimNode_SkPhaseAnim
{
    static constexpr const char* NAME = "animAnimNode_SkPhaseWithSpeedAnim";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink speedLink; // D8
};
RED4EXT_ASSERT_SIZE(AnimNode_SkPhaseWithSpeedAnim, 0xF8);
} // namespace anim
using animAnimNode_SkPhaseWithSpeedAnim = anim::AnimNode_SkPhaseWithSpeedAnim;
} // namespace RED4ext

// clang-format on
