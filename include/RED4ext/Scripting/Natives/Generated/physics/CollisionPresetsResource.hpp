#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/CollisionPresetDefinition.hpp>

namespace RED4ext
{
namespace physics
{
struct CollisionPresetsResource : ISerializable
{
    static constexpr const char* NAME = "physicsCollisionPresetsResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<physics::CollisionPresetDefinition> presets; // 30
};
RED4EXT_ASSERT_SIZE(CollisionPresetsResource, 0x40);
} // namespace physics
using physicsCollisionPresetsResource = physics::CollisionPresetsResource;
} // namespace RED4ext

// clang-format on
