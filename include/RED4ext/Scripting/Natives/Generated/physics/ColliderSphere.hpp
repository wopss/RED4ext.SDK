#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ColliderSphere : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderSphere";
    static constexpr const char* ALIAS = NAME;

    float radius; // 90
    uint8_t unk94[0xA0 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(ColliderSphere, 0xA0);
} // namespace physics
using physicsColliderSphere = physics::ColliderSphere;
} // namespace RED4ext

// clang-format on
