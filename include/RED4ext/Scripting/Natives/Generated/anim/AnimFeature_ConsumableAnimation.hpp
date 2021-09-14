#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimFeature_ConsumableAnimation : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_ConsumableAnimation";
    static constexpr const char* ALIAS = "AnimFeature_ConsumableAnimation";

    int32_t consumableType; // 40
    bool useConsumable; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(AnimFeature_ConsumableAnimation, 0x48);
} // namespace anim
using AnimFeature_ConsumableAnimation = anim::AnimFeature_ConsumableAnimation;
} // namespace RED4ext
