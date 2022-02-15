#pragma once

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
namespace game { 
struct MeleeAttackData : IScriptable
{
    static constexpr const char* NAME = "gameMeleeAttackData";
    static constexpr const char* ALIAS = "MeleeAttackData";

    CString trailAttackSide; // 40
    Vector4 startPosition; // 60
    Vector4 endPosition; // 70
    Vector3 ikOffset; // 80
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    CName attackName; // 90
    CName attackEffectDirection; // 98
    CName impactFxSlot; // A0
    float attackSpeed; // A8
    float attackWindowOpen; // AC
    float attackWindowClosed; // B0
    float idleTransitionTime; // B4
    float holdTransitionTime; // B8
    float blockTransitionTime; // BC
    float attackEffectDuration; // C0
    float attackEffectDelay; // C4
    float impulseDelay; // C8
    float cameraSpaceImpulse; // CC
    float forwardImpulse; // D0
    float upImpulse; // D4
    float staminaCost; // D8
    float weaponChargeCost; // DC
    float trailStartDelay; // E0
    float trailStopDelay; // E4
    float startupDuration; // E8
    float activeDuration; // EC
    float recoverDuration; // F0
    float activeHitDuration; // F4
    float recoverHitDuration; // F8
    float standUpDelay; // FC
    bool incrementsCombo; // 100
    bool hasDeflectAnim; // 101
    bool hasHitAnim; // 102
    bool useAdjustmentInsteadOfImpulse; // 103
    bool enableAdjustingPlayerPositionToTarget; // 104
    uint8_t unk105[0x110 - 0x105]; // 105
};
RED4EXT_ASSERT_SIZE(MeleeAttackData, 0x110);
} // namespace game
using MeleeAttackData = game::MeleeAttackData;
} // namespace RED4ext
