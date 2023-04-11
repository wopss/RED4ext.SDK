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
struct AnimFeature_QuickMelee : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_QuickMelee";
    static constexpr const char* ALIAS = "AnimFeature_QuickMelee";

    int32_t state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_QuickMelee, 0x48);
} // namespace anim
using animAnimFeature_QuickMelee = anim::AnimFeature_QuickMelee;
using AnimFeature_QuickMelee = anim::AnimFeature_QuickMelee;
} // namespace RED4ext

// clang-format on
