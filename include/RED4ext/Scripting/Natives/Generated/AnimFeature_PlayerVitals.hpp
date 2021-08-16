#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
struct AnimFeature_PlayerVitals : anim::AnimFeature
{
    static constexpr const char* NAME = "AnimFeature_PlayerVitals";
    static constexpr const char* ALIAS = "AnimFeature_PlayerVitals";

    int32_t state; // 40
    float stateDuration; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_PlayerVitals, 0x48);
} // namespace RED4ext
