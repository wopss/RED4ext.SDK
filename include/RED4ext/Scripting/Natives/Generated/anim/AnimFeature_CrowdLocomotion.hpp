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
struct AnimFeature_CrowdLocomotion : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_CrowdLocomotion";
    static constexpr const char* ALIAS = NAME;

    float speed; // 40
    float slopeAngle; // 44
    bool isCrowd; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(AnimFeature_CrowdLocomotion, 0x50);
} // namespace anim
using animAnimFeature_CrowdLocomotion = anim::AnimFeature_CrowdLocomotion;
} // namespace RED4ext

// clang-format on
