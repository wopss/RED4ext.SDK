#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
struct JsonResource;

namespace physics { 
struct CollisionFilterResource : ISerializable
{
    static constexpr const char* NAME = "physicsCollisionFilterResource";
    static constexpr const char* ALIAS = NAME;

    Ref<JsonResource> presetJson; // 30
    Ref<JsonResource> overridesJson; // 48
    uint8_t unk60[0x80 - 0x60]; // 60
    alignas(8) StaticArray<CName, 64> collisionGroups; // 80
    alignas(8) StaticArray<CName, 64> queryGroups; // 288
    uint8_t unk490[0x710 - 0x490]; // 490
};
RED4EXT_ASSERT_SIZE(CollisionFilterResource, 0x710);
} // namespace physics
} // namespace RED4ext
