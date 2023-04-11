#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IRuntimeCondition.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimsetWithOverridesTagCondition : anim::IRuntimeCondition
{
    static constexpr const char* NAME = "animAnimsetWithOverridesTagCondition";
    static constexpr const char* ALIAS = NAME;

    red::TagList animsetTags; // 30
};
RED4EXT_ASSERT_SIZE(AnimsetWithOverridesTagCondition, 0x40);
} // namespace anim
using animAnimsetWithOverridesTagCondition = anim::AnimsetWithOverridesTagCondition;
} // namespace RED4ext

// clang-format on
