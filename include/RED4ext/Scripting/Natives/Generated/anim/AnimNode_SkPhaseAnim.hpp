#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_SkPhaseAnim : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkPhaseAnim";
    static constexpr const char* ALIAS = NAME;

    CName phase; // D0
};
RED4EXT_ASSERT_SIZE(AnimNode_SkPhaseAnim, 0xD8);
} // namespace anim
} // namespace RED4ext
