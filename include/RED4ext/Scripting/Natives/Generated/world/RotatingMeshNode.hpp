#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RotatingMeshNodeAxis.hpp>

namespace RED4ext
{
namespace world { 
struct RotatingMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldRotatingMeshNode";
    static constexpr const char* ALIAS = NAME;

    world::RotatingMeshNodeAxis rotationAxis; // 58
    float fullRotationTime; // 5C
    bool reverseDirection; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(RotatingMeshNode, 0x68);
} // namespace world
} // namespace RED4ext
