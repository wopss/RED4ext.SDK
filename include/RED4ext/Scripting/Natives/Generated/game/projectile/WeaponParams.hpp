#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/RicochetData.hpp>

namespace RED4ext
{
namespace ent { struct IPlacedComponent; }

namespace game::projectile
{
struct __declspec(align(0x10)) WeaponParams
{
    static constexpr const char* NAME = "gameprojectileWeaponParams";
    static constexpr const char* ALIAS = NAME;

    Vector4 targetPosition; // 00
    Vector3 smartGunSpreadOnHitPlane; // 10
    float charge; // 1C
    WeakHandle<ent::IPlacedComponent> trackedTargetComponent; // 20
    float smartGunAccuracy; // 30
    bool smartGunIsProjectileGuided; // 34
    uint8_t unk35[0x40 - 0x35]; // 35
    Vector4 hitPlaneOffset; // 40
    float shootingOffset; // 50
    bool ignoreWeaponOwnerCollision; // 54
    bool ignoreMountedVehicleCollision; // 55
    uint8_t unk56[0x58 - 0x56]; // 56
    float range; // 58
    uint8_t unk5C[0xA8 - 0x5C]; // 5C
    game::RicochetData ricochetData; // A8
};
RED4EXT_ASSERT_SIZE(WeaponParams, 0xC0);
} // namespace game::projectile
using gameprojectileWeaponParams = game::projectile::WeaponParams;
} // namespace RED4ext

// clang-format on
