#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkPhaseAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_SkPhaseWithDurationAnim : anim::AnimNode_SkPhaseAnim
{
    static constexpr const char* NAME = "animAnimNode_SkPhaseWithDurationAnim";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink durationLink; // D8
};
RED4EXT_ASSERT_SIZE(AnimNode_SkPhaseWithDurationAnim, 0xF8);
} // namespace anim
} // namespace RED4ext
