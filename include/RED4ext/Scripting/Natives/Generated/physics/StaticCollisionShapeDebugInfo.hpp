#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics
{
struct StaticCollisionShapeDebugInfo
{
    static constexpr const char* NAME = "physicsStaticCollisionShapeDebugInfo";
    static constexpr const char* ALIAS = NAME;

    uint64_t sourceMeshPathHash; // 00
    uint64_t prefabPathHash; // 08
    uint64_t nodeNameHash; // 10
};
RED4EXT_ASSERT_SIZE(StaticCollisionShapeDebugInfo, 0x18);
} // namespace physics
using physicsStaticCollisionShapeDebugInfo = physics::StaticCollisionShapeDebugInfo;
} // namespace RED4ext

// clang-format on
