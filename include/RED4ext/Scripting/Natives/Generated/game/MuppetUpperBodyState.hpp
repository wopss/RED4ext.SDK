#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetUpperBodyState
{
    static constexpr const char* NAME = "gameMuppetUpperBodyState";
    static constexpr const char* ALIAS = NAME;

    ItemID currentWeapon; // 00
    ItemID wantedWeapon; // 10
    ItemID inProgressWeapon; // 20
    ItemID logicWantedWeapon; // 30
    float equippingTransitionTime; // 40
    float remainingShotTime; // 44
    float timeTillNextShootSeconds; // 48
    bool isAimingDownSight; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    int32_t currentWeaponAmmo; // 50
    int32_t currentWeaponAmmoCapacity; // 54
    bool isShooting; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    float weaponZoomLevel; // 5C
    float weaponAimFOV; // 60
    float remainingReloadTime; // 64
    float remainingReloadCooldownTime; // 68
    uint32_t shotsMade; // 6C
    bool isMeleeAttackInProgress; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    uint32_t meleeAttacksMade; // 74
    int32_t meleeAttackIndex; // 78
    float remainingMeleeAttackDuration; // 7C
    ItemID selectedConsumable; // 80
    bool consumableInUse; // 90
    bool consumableEffectApplied; // 91
    uint8_t unk92[0x94 - 0x92]; // 92
    float consumableUseTimeStartup; // 94
    float consumableUseTimeRecovery; // 98
    float remainingQuickMeleeTime; // 9C
    float remainingQuickMeleeCooldownTime; // A0
};
RED4EXT_ASSERT_SIZE(MuppetUpperBodyState, 0xA4);
} // namespace game
using gameMuppetUpperBodyState = game::MuppetUpperBodyState;
} // namespace RED4ext

// clang-format on
