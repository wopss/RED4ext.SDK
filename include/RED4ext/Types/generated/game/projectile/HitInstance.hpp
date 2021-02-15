#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/game/QueryResult.hpp>
#include <RED4ext/Types/generated/physics/TraceResult.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game { struct WeakspotObject; }

namespace game::projectile { 
struct HitInstance
{
    static constexpr const char* NAME = "gameprojectileHitInstance";
    static constexpr const char* ALIAS = NAME;

    physics::TraceResult traceResult; // 00
    Vector4 position; // 60
    Vector4 projectilePosition; // 70
    Vector4 projectileSourcePosition; // 80
    Vector4 forward; // 90
    Vector4 velocity; // A0
    WeakHandle<ent::Entity> hitObject; // B0
    uint8_t unkC0[0xC8 - 0xC0]; // C0
    WeakHandle<game::WeakspotObject> hitWeakspot; // C8
    game::QueryResult hitRepresentationResult; // D8
    uint8_t unkE8[0xEC - 0xE8]; // E8
    int32_t numRicochetBounces; // EC
};
RED4EXT_ASSERT_SIZE(HitInstance, 0xF0);
} // namespace game::projectile
} // namespace RED4ext
