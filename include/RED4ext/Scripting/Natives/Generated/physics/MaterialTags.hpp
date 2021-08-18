#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTagProjectilePenetration.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTagVehicleTraction.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTagVisibility.hpp>

namespace RED4ext
{
namespace physics { 
struct MaterialTags
{
    static constexpr const char* NAME = "physicsMaterialTags";
    static constexpr const char* ALIAS = NAME;

    physics::MaterialTagVisibility aiVisibility; // 00
    physics::MaterialTagVisibility playerVisibility; // 01
    physics::MaterialTagProjectilePenetration projectilePenetration; // 02
    physics::MaterialTagVehicleTraction vehicleTraction; // 03
};
RED4EXT_ASSERT_SIZE(MaterialTags, 0x4);
} // namespace physics
} // namespace RED4ext
