#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/WaterPatchNodeType.hpp>

namespace RED4ext
{
namespace world { 
struct WaterPatchNode : world::MeshNode
{
    static constexpr const char* NAME = "worldWaterPatchNode";
    static constexpr const char* ALIAS = NAME;

    world::WaterPatchNodeType type; // 58
    float depth; // 68
    bool generateNavmesh; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(WaterPatchNode, 0x70);
} // namespace world
} // namespace RED4ext
