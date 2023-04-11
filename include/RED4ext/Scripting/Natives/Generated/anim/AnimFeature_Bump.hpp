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
struct AnimFeature_Bump : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Bump";
    static constexpr const char* ALIAS = "AnimFeature_Bump";

    float direction; // 40
    float intensity; // 44
    float source; // 48
    int32_t bumpType; // 4C
    bool isBumping; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(AnimFeature_Bump, 0x58);
} // namespace anim
using animAnimFeature_Bump = anim::AnimFeature_Bump;
using AnimFeature_Bump = anim::AnimFeature_Bump;
} // namespace RED4ext

// clang-format on
