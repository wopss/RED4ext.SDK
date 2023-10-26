#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/OnCollisionAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/VelocityParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/QueryPreset.hpp>

namespace RED4ext
{
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace game::projectile
{
struct __declspec(align(0x10)) Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameprojectileComponent";
    static constexpr const char* ALIAS = "ProjectileComponent";

    uint8_t unk120[0x7A9 - 0x120]; // 120
    bool deriveOwnerVelocity; // 7A9
    uint8_t unk7AA[0x7AC - 0x7AA]; // 7AA
    game::projectile::OnCollisionAction onCollisionAction; // 7AC
    bool useSweepCollision; // 7B0
    uint8_t unk7B1[0x7B4 - 0x7B1]; // 7B1
    float sweepCollisionRadius; // 7B4
    uint8_t unk7B8[0x7BC - 0x7B8]; // 7B8
    bool collisionsFilterClosest; // 7BC
    uint8_t unk7BD[0x7D0 - 0x7BD]; // 7BD
    game::projectile::VelocityParams derivedVelocityParams; // 7D0
    uint8_t unk7DC[0x800 - 0x7DC]; // 7DC
    Handle<physics::FilterData> filterData; // 800
    physics::QueryPreset queryPreset; // 810
    uint8_t unk818[0x820 - 0x818]; // 818
    game::EffectRef gameEffectRef; // 820
    uint8_t unk848[0x878 - 0x848]; // 848
    RaRef<world::Effect> previewEffect; // 878
    RaRef<world::Effect> bouncePreviewEffect; // 880
    RaRef<world::Effect> explosionPreviewEffect; // 888
    float explosionPreviewTime; // 890
    uint8_t unk894[0x8A0 - 0x894]; // 894
    Quaternion rotationOffset; // 8A0
    uint8_t unk8B0[0x920 - 0x8B0]; // 8B0
};
RED4EXT_ASSERT_SIZE(Component, 0x920);
} // namespace game::projectile
using gameprojectileComponent = game::projectile::Component;
using ProjectileComponent = game::projectile::Component;
} // namespace RED4ext

// clang-format on
