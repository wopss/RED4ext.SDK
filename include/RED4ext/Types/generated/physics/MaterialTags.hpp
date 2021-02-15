#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/physics/MaterialTagAIVisibility.hpp>
#include <RED4ext/Types/generated/physics/MaterialTagProjectilePenetration.hpp>
#include <RED4ext/Types/generated/physics/MaterialTagVehicleTraction.hpp>

namespace RED4ext
{
namespace physics { 
struct MaterialTags
{
    static constexpr const char* NAME = "physicsMaterialTags";
    static constexpr const char* ALIAS = NAME;

    physics::MaterialTagAIVisibility aiVisibility; // 00
    physics::MaterialTagProjectilePenetration projectilePenetration; // 01
    physics::MaterialTagVehicleTraction vehicleTraction; // 02
};
RED4EXT_ASSERT_SIZE(MaterialTags, 0x3);
} // namespace physics
} // namespace RED4ext
