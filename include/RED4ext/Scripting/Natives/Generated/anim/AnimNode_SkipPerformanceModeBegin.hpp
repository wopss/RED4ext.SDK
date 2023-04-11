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
struct AnimNode_SkipPerformanceModeBegin : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SkipPerformanceModeBegin";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimNode_SkipPerformanceModeBegin, 0x60);
} // namespace anim
using animAnimNode_SkipPerformanceModeBegin = anim::AnimNode_SkipPerformanceModeBegin;
} // namespace RED4ext

// clang-format on
