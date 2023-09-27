#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RotatingMeshNodeAxis.hpp>

namespace RED4ext
{
namespace world
{
struct RotatingMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldRotatingMeshNode";
    static constexpr const char* ALIAS = NAME;

    world::RotatingMeshNodeAxis rotationAxis; // 60
    float fullRotationTime; // 64
    bool reverseDirection; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(RotatingMeshNode, 0x70);
} // namespace world
using worldRotatingMeshNode = world::RotatingMeshNode;
} // namespace RED4ext

// clang-format on
