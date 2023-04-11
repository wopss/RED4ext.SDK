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
struct AnimFeature_MeleeData : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_MeleeData";
    static constexpr const char* ALIAS = "AnimFeature_MeleeData";

    bool isMeleeWeaponEquipped; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float attackSpeed; // 44
    bool isEquippingThrowable; // 48
    bool isTargeting; // 49
    bool isBlocking; // 4A
    bool isHolding; // 4B
    bool isAttacking; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    int32_t attackNumber; // 50
    bool shouldHandsDisappear; // 54
    bool isSliding; // 55
    uint8_t unk56[0x58 - 0x56]; // 56
    float deflectDuration; // 58
    bool isSafe; // 5C
    bool keepRenderPlane; // 5D
    bool hasDeflectAnim; // 5E
    bool hasHitAnim; // 5F
    int32_t attackType; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(AnimFeature_MeleeData, 0x68);
} // namespace anim
using animAnimFeature_MeleeData = anim::AnimFeature_MeleeData;
using AnimFeature_MeleeData = anim::AnimFeature_MeleeData;
} // namespace RED4ext

// clang-format on
