#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTagProjectilePenetration.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTagProjectileRicochet.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTagVehicleTraction.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTagVisibility.hpp>

namespace RED4ext
{
namespace physics
{
struct MaterialTags
{
    static constexpr const char* NAME = "physicsMaterialTags";
    static constexpr const char* ALIAS = NAME;

    physics::MaterialTagVisibility aiVisibility; // 00
    physics::MaterialTagVisibility playerVisibility; // 01
    physics::MaterialTagProjectilePenetration projectilePenetration; // 02
    physics::MaterialTagProjectileRicochet projectileRicochet; // 03
    physics::MaterialTagVehicleTraction vehicleTraction; // 04
};
RED4EXT_ASSERT_SIZE(MaterialTags, 0x5);
} // namespace physics
using physicsMaterialTags = physics::MaterialTags;
} // namespace RED4ext

// clang-format on
