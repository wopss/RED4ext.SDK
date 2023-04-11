#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_SkAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SkAnimDecorator : anim::AnimNode_SkAnim
{
    static constexpr const char* NAME = "animAnimNode_SkAnimDecorator";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink Fallback; // D0
};
RED4EXT_ASSERT_SIZE(AnimNode_SkAnimDecorator, 0xE8);
} // namespace anim
using animAnimNode_SkAnimDecorator = anim::AnimNode_SkAnimDecorator;
} // namespace RED4ext

// clang-format on
