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
struct AnimFeature_Crowd : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Crowd";
    static constexpr const char* ALIAS = NAME;

    int32_t stopType; // 40
    int32_t speedType; // 44
    int32_t speedOverrideType; // 48
    int32_t bumpDirection; // 4C
    int32_t threatSource; // 50
    int32_t locomotionState; // 54
    int32_t bumpSourceLocation; // 58
    int32_t bumpType; // 5C
    int32_t fearStage; // 60
    int32_t startType; // 64
    int32_t fleeType; // 68
    float randomVariation; // 6C
    float lookAtAngle; // 70
    float startDirectionAngle; // 74
    float animTime; // 78
    float animScale; // 7C
    float slopeRatio; // 80
    float distanceToPlayer2D; // 84
    float angleToPlayer; // 88
    bool isBlocked; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
};
RED4EXT_ASSERT_SIZE(AnimFeature_Crowd, 0x90);
} // namespace anim
using animAnimFeature_Crowd = anim::AnimFeature_Crowd;
} // namespace RED4ext

// clang-format on
