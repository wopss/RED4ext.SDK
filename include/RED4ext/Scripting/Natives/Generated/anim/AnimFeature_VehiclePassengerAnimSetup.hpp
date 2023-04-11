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
struct AnimFeature_VehiclePassengerAnimSetup : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_VehiclePassengerAnimSetup";
    static constexpr const char* ALIAS = NAME;

    bool enableAdditiveAnim; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float additiveScale; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_VehiclePassengerAnimSetup, 0x48);
} // namespace anim
using animAnimFeature_VehiclePassengerAnimSetup = anim::AnimFeature_VehiclePassengerAnimSetup;
} // namespace RED4ext

// clang-format on
