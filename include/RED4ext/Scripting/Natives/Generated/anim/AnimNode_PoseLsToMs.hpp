#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_PoseLsToMs : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_PoseLsToMs";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNode_PoseLsToMs, 0x60);
} // namespace anim
using animAnimNode_PoseLsToMs = anim::AnimNode_PoseLsToMs;
} // namespace RED4ext

// clang-format on
