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
struct AnimFeature_Stance : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Stance";
    static constexpr const char* ALIAS = "AnimFeature_Stance";

    int32_t stanceState; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_Stance, 0x48);
} // namespace anim
using animAnimFeature_Stance = anim::AnimFeature_Stance;
using AnimFeature_Stance = anim::AnimFeature_Stance;
} // namespace RED4ext

// clang-format on
