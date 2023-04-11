#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace move
{
struct SecureFootingParameters
{
    static constexpr const char* NAME = "moveSecureFootingParameters";
    static constexpr const char* ALIAS = "SecureFootingParameters";

    CName unsecureCollisionFilterName; // 00
    CName slopeCurveName; // 08
    float maxVerticalDistanceForCentreRaycast; // 10
    float maxAngularDistanceForOtherRaycasts; // 14
    float standingMinCollisionHorizontalDistance; // 18
    uint32_t standingMinNumberOfRaycasts; // 1C
    float fallingMinCollisionHorizontalDistance; // 20
    uint32_t fallingMinNumberOfRaycasts; // 24
    float maxStaticGroundFactor; // 28
    float minVelocityForFalling; // 2C
    bool needsCentreRaycast; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(SecureFootingParameters, 0x38);
} // namespace move
using moveSecureFootingParameters = move::SecureFootingParameters;
using SecureFootingParameters = move::SecureFootingParameters;
} // namespace RED4ext

// clang-format on
