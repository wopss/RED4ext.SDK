#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/PlaybackOptions.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetStateAnimatedTransition
{
    static constexpr const char* NAME = "inkWidgetStateAnimatedTransition";
    static constexpr const char* ALIAS = NAME;

    CName startState; // 00
    CName endState; // 08
    CName animationName; // 10
    ink::anim::PlaybackOptions playbackOptions; // 18
};
RED4EXT_ASSERT_SIZE(WidgetStateAnimatedTransition, 0x48);
} // namespace ink
using inkWidgetStateAnimatedTransition = ink::WidgetStateAnimatedTransition;
} // namespace RED4ext

// clang-format on
