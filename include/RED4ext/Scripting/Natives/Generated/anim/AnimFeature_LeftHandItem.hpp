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
struct AnimFeature_LeftHandItem : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_LeftHandItem";
    static constexpr const char* ALIAS = "AnimFeature_LeftHandItem";

    bool itemInLeftHand; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AnimFeature_LeftHandItem, 0x48);
} // namespace anim
using animAnimFeature_LeftHandItem = anim::AnimFeature_LeftHandItem;
using AnimFeature_LeftHandItem = anim::AnimFeature_LeftHandItem;
} // namespace RED4ext

// clang-format on
