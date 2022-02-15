#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionLevelData.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world { 
struct PhysicalDestructionNode : world::Node
{
    static constexpr const char* NAME = "worldPhysicalDestructionNode";
    static constexpr const char* ALIAS = "PhysicalDestructionNode";

    physics::DestructionParams destructionParams; // 38
    DynArray<physics::DestructionLevelData> destructionLevelData; // 80
    RaRef<CMesh> mesh; // 90
    CName meshAppearance; // 98
    CName audioMetadata; // A0
    float forceAutoHideDistance; // A8
    int32_t forceLODLevel; // AC
    NavGenNavigationSetting navigationSetting; // B0
    uint16_t systemsToNotifyFlags; // B2
    bool useMeshNavmeshSettings; // B4
    uint8_t unkB5[0xB8 - 0xB5]; // B5
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionNode, 0xB8);
} // namespace world
using PhysicalDestructionNode = world::PhysicalDestructionNode;
} // namespace RED4ext
