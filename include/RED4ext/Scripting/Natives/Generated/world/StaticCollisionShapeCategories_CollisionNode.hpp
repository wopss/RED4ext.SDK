#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct StaticCollisionShapeCategories_CollisionNode
{
    static constexpr const char* NAME = "worldStaticCollisionShapeCategories_CollisionNode";
    static constexpr const char* ALIAS = NAME;

    std::array<uint8_t, 60>/* UNHANDLED: [5][6]Uint16 (RT_FixedArray) */ arr; // 00
};
RED4EXT_ASSERT_SIZE(StaticCollisionShapeCategories_CollisionNode, 0x3C);
} // namespace world
using worldStaticCollisionShapeCategories_CollisionNode = world::StaticCollisionShapeCategories_CollisionNode;
} // namespace RED4ext

// clang-format on
