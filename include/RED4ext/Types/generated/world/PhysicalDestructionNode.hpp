#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Types/generated/physics/DestructionLevelData.hpp>
#include <RED4ext/Types/generated/physics/DestructionParams.hpp>
#include <RED4ext/Types/generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world { 
struct PhysicalDestructionNode : world::Node
{
    static constexpr const char* NAME = "worldPhysicalDestructionNode";
    static constexpr const char* ALIAS = "PhysicalDestructionNode";

    physics::DestructionParams destructionParams; // 38
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    DynArray<physics::DestructionLevelData> destructionLevelData; // 80
    RaRef<CMesh> mesh; // 90
    CName meshAppearance; // 98
    CName audioMetadata; // A0
    float forceAutoHideDistance; // A8
    int32_t forceLODLevel; // AC
    NavGenNavigationSetting navigationSetting; // B0
    bool useMeshNavmeshSettings; // B2
    uint8_t unkB3[0xB8 - 0xB3]; // B3
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionNode, 0xB8);
} // namespace world
using PhysicalDestructionNode = world::PhysicalDestructionNode;
} // namespace RED4ext
