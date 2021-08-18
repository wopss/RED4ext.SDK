#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/EClothCollisionMaskEnum.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct ClothMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldClothMeshNode";
    static constexpr const char* ALIAS = NAME;

    bool affectedByWind; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    physics::EClothCollisionMaskEnum collisionMask; // 5C
};
RED4EXT_ASSERT_SIZE(ClothMeshNode, 0x60);
} // namespace world
} // namespace RED4ext
