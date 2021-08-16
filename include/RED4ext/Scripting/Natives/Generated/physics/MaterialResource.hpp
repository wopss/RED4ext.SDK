#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialFriction.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/MaterialTags.hpp>

namespace RED4ext
{
namespace physics { 
struct MaterialResource : CResource
{
    static constexpr const char* NAME = "physicsMaterialResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
    uint64_t id; // 48
    Color color; // 50
    float staticFriction; // 54
    float dynamicFriction; // 58
    float restitution; // 5C
    float density; // 60
    physics::MaterialFriction frictionMode; // 64
    physics::MaterialTags tags; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(MaterialResource, 0x70);
} // namespace physics
} // namespace RED4ext
