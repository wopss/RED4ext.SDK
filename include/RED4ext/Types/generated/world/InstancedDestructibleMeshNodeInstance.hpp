#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/MeshNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct InstancedDestructibleMeshNodeInstance : world::MeshNodeInstance
{
    static constexpr const char* NAME = "worldInstancedDestructibleMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x200 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(InstancedDestructibleMeshNodeInstance, 0x200);
} // namespace world
} // namespace RED4ext
