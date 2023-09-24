#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/WaterPatchNodeType.hpp>

namespace RED4ext
{
namespace world
{
struct WaterPatchNode : world::MeshNode
{
    static constexpr const char* NAME = "worldWaterPatchNode";
    static constexpr const char* ALIAS = NAME;

    world::WaterPatchNodeType type; // 60
    float depth; // 70
    bool generateNavmesh; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(WaterPatchNode, 0x78);
} // namespace world
using worldWaterPatchNode = world::WaterPatchNode;
} // namespace RED4ext

// clang-format on
