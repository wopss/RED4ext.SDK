#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ICollider.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) ColliderConvex : physics::ICollider
{
    static constexpr const char* NAME = "physicsColliderConvex";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector3> vertices; // 90
    DynArray<uint8_t> indexBuffer; // A0
    DynArray<uint16_t> polygonVertices; // B0
    DataBuffer compiledGeometryBuffer; // C0
    uint8_t unkE8[0x100 - 0xE8]; // E8
};
RED4EXT_ASSERT_SIZE(ColliderConvex, 0x100);
} // namespace physics
using physicsColliderConvex = physics::ColliderConvex;
} // namespace RED4ext

// clang-format on
