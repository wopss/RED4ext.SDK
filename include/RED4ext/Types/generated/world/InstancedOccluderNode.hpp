#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Types/generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world { 
struct InstancedOccluderNode : world::Node
{
    static constexpr const char* NAME = "worldInstancedOccluderNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x50 - 0x38]; // 38
    Box worldBounds; // 50
    RaRef<CMesh> mesh; // 70
    uint8_t autohideDistanceScale; // 78
    vis::WorldOccluderType occluderType; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(InstancedOccluderNode, 0x80);
} // namespace world
} // namespace RED4ext
