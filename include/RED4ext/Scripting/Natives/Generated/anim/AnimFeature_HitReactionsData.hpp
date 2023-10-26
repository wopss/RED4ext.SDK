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
struct __declspec(align(0x10)) AnimFeature_HitReactionsData : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_HitReactionsData";
    static constexpr const char* ALIAS = "AnimFeature_HitReactionsData";

    int32_t hitIntensity; // 40
    int32_t hitSource; // 44
    int32_t hitType; // 48
    int32_t hitBodyPart; // 4C
    int32_t npcMovementSpeed; // 50
    int32_t hitDirection; // 54
    int32_t npcMovementDirection; // 58
    int32_t stance; // 5C
    int32_t animVariation; // 60
    bool useInitialRotation; // 64
    uint8_t unk65[0x70 - 0x65]; // 65
    Vector4 hitDirectionWs; // 70
    float angleToAttack; // 80
    float initialRotationDuration; // 84
    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(AnimFeature_HitReactionsData, 0x90);
} // namespace anim
using animAnimFeature_HitReactionsData = anim::AnimFeature_HitReactionsData;
using AnimFeature_HitReactionsData = anim::AnimFeature_HitReactionsData;
} // namespace RED4ext

// clang-format on
