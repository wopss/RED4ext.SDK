#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) MeleeAttackData : IScriptable
{
    static constexpr const char* NAME = "gameMeleeAttackData";
    static constexpr const char* ALIAS = "MeleeAttackData";

    CString trailAttackSide; // 40
    bool isThrust; // 60
    bool useMiddlePosition; // 61
    uint8_t unk62[0x70 - 0x62]; // 62
    Vector4 startPosition; // 70
    Vector4 middlePosition; // 80
    Vector4 endPosition; // 90
    Vector3 ikOffset; // A0
    uint8_t unkAC[0xB0 - 0xAC]; // AC
    CName attackName; // B0
    CName attackEffectDirection; // B8
    CName impactFxSlot; // C0
    float attackSpeed; // C8
    float attackWindowOpen; // CC
    float attackWindowClosed; // D0
    float idleTransitionTime; // D4
    float holdTransitionTime; // D8
    float blockTransitionTime; // DC
    float attackEffectDuration; // E0
    float attackEffectDelay; // E4
    float impulseDelay; // E8
    float cameraSpaceImpulse; // EC
    float forwardImpulse; // F0
    float upImpulse; // F4
    float staminaCost; // F8
    float weaponChargeCost; // FC
    float trailStartDelay; // 100
    float trailStopDelay; // 104
    float startupDuration; // 108
    float activeDuration; // 10C
    float recoverDuration; // 110
    float activeHitDuration; // 114
    float recoverHitDuration; // 118
    float standUpDelay; // 11C
    bool incrementsCombo; // 120
    bool hasDeflectAnim; // 121
    bool hasHitAnim; // 122
    bool useAdjustmentInsteadOfImpulse; // 123
    bool enableAdjustingPlayerPositionToTarget; // 124
    uint8_t unk125[0x130 - 0x125]; // 125
};
RED4EXT_ASSERT_SIZE(MeleeAttackData, 0x130);
} // namespace game
using gameMeleeAttackData = game::MeleeAttackData;
using MeleeAttackData = game::MeleeAttackData;
} // namespace RED4ext

// clang-format on
