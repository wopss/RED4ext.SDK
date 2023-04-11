#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct GenericAnimDatabase_AnimationData
{
    static constexpr const char* NAME = "animGenericAnimDatabase_AnimationData";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
    CName fallbackAnimationName; // 08
    CName streamingContext; // 10
};
RED4EXT_ASSERT_SIZE(GenericAnimDatabase_AnimationData, 0x18);
} // namespace anim
using animGenericAnimDatabase_AnimationData = anim::GenericAnimDatabase_AnimationData;
} // namespace RED4ext

// clang-format on
