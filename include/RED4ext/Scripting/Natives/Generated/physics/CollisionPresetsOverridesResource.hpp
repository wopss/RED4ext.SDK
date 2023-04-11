#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/CollisionPresetOverride.hpp>

namespace RED4ext
{
namespace physics
{
struct CollisionPresetsOverridesResource : ISerializable
{
    static constexpr const char* NAME = "physicsCollisionPresetsOverridesResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<physics::CollisionPresetOverride> overrides; // 30
};
RED4EXT_ASSERT_SIZE(CollisionPresetsOverridesResource, 0x40);
} // namespace physics
using physicsCollisionPresetsOverridesResource = physics::CollisionPresetsOverridesResource;
} // namespace RED4ext

// clang-format on
