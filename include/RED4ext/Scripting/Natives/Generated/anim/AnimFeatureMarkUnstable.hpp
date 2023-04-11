#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeatureMarkUnstable : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeatureMarkUnstable";
    static constexpr const char* ALIAS = "AnimFeatureMarkUnstable";

};
RED4EXT_ASSERT_SIZE(AnimFeatureMarkUnstable, 0x40);
} // namespace anim
using animAnimFeatureMarkUnstable = anim::AnimFeatureMarkUnstable;
using AnimFeatureMarkUnstable = anim::AnimFeatureMarkUnstable;
} // namespace RED4ext

// clang-format on
