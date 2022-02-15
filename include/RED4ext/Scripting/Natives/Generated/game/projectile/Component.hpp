#pragma once

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

namespace game::projectile { 
struct Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameprojectileComponent";
    static constexpr const char* ALIAS = "ProjectileComponent";

    uint8_t unk120[0x749 - 0x120]; // 120
    bool deriveOwnerVelocity; // 749
    uint8_t unk74A[0x74C - 0x74A]; // 74A
    game::projectile::OnCollisionAction onCollisionAction; // 74C
    bool useSweepCollision; // 750
    uint8_t unk751[0x754 - 0x751]; // 751
    float sweepCollisionRadius; // 754
    uint8_t unk758[0x75C - 0x758]; // 758
    bool collisionsFilterClosest; // 75C
    uint8_t unk75D[0x770 - 0x75D]; // 75D
    game::projectile::VelocityParams derivedVelocityParams; // 770
    uint8_t unk77C[0x7A0 - 0x77C]; // 77C
    Handle<physics::FilterData> filterData; // 7A0
    physics::QueryPreset queryPreset; // 7B0
    uint8_t unk7B8[0x7C0 - 0x7B8]; // 7B8
    game::EffectRef gameEffectRef; // 7C0
    uint8_t unk7E8[0x810 - 0x7E8]; // 7E8
    RaRef<world::Effect> previewEffect; // 810
    RaRef<world::Effect> bouncePreviewEffect; // 818
    RaRef<world::Effect> explosionPreviewEffect; // 820
    float explosionPreviewTime; // 828
    uint8_t unk82C[0x830 - 0x82C]; // 82C
    Quaternion rotationOffset; // 830
    uint8_t unk840[0x8B0 - 0x840]; // 840
};
RED4EXT_ASSERT_SIZE(Component, 0x8B0);
} // namespace game::projectile
using ProjectileComponent = game::projectile::Component;
} // namespace RED4ext
