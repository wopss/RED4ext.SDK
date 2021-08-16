#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
struct AnimFeature_Landing : anim::AnimFeature
{
    static constexpr const char* NAME = "AnimFeature_Landing";
    static constexpr const char* ALIAS = "AnimFeature_Landing";

    int32_t type; // 40
    float impactSpeed; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_Landing, 0x48);
} // namespace RED4ext
