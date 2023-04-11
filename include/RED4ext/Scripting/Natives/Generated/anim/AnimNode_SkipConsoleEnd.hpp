#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkipConsoleEnd : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_SkipConsoleEnd";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink inputLink; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_SkipConsoleEnd, 0x60);
} // namespace anim
using animAnimNode_SkipConsoleEnd = anim::AnimNode_SkipConsoleEnd;
} // namespace RED4ext

// clang-format on
