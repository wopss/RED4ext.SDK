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
struct __declspec(align(0x10)) AnimFeature_PlayerSpatialAwareness : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_PlayerSpatialAwareness";
    static constexpr const char* ALIAS = "AnimFeature_PlayerSpatialAwareness";

    Vector4 leftClosestVector; // 40
    Vector4 rightClosestVector; // 50
    Vector4 upHitPosition; // 60
    float forwardDistance; // 70
    uint8_t unk74[0x80 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(AnimFeature_PlayerSpatialAwareness, 0x80);
} // namespace anim
using animAnimFeature_PlayerSpatialAwareness = anim::AnimFeature_PlayerSpatialAwareness;
using AnimFeature_PlayerSpatialAwareness = anim::AnimFeature_PlayerSpatialAwareness;
} // namespace RED4ext

// clang-format on
