#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct JsonResource;

namespace physics
{
struct CollisionFilterResource : ISerializable
{
    static constexpr const char* NAME = "physicsCollisionFilterResource";
    static constexpr const char* ALIAS = NAME;

    Ref<JsonResource> collisionPresetJson; // 30
    Ref<JsonResource> overridesJson; // 48
    Ref<JsonResource> queryPresetJson; // 60
    uint8_t unk78[0xA8 - 0x78]; // 78
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<CName, 64> collisionGroups; // A8
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<CName, 64> queryGroups; // 2B0
    uint8_t unk4B8[0x738 - 0x4B8]; // 4B8
};
RED4EXT_ASSERT_SIZE(CollisionFilterResource, 0x738);
} // namespace physics
using physicsCollisionFilterResource = physics::CollisionFilterResource;
} // namespace RED4ext

// clang-format on
