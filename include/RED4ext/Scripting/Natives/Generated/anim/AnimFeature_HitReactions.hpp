#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_HitReactions : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_HitReactions";
    static constexpr const char* ALIAS = "AnimFeature_HitReactions";

    Vector4 hitDirection; // 40
    float hitIntensity; // 50
    int32_t hitType; // 54
    int32_t hitBodyPart; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(AnimFeature_HitReactions, 0x60);
} // namespace anim
using animAnimFeature_HitReactions = anim::AnimFeature_HitReactions;
using AnimFeature_HitReactions = anim::AnimFeature_HitReactions;
} // namespace RED4ext

// clang-format on
