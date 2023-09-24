#pragma once

// clang-format off

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

namespace world
{
struct PhysicalDestructionNode : world::Node
{
    static constexpr const char* NAME = "worldPhysicalDestructionNode";
    static constexpr const char* ALIAS = "PhysicalDestructionNode";

    physics::DestructionParams destructionParams; // 38
    DynArray<physics::DestructionLevelData> destructionLevelData; // 88
    RaRef<CMesh> mesh; // 98
    CName meshAppearance; // A0
    CName audioMetadata; // A8
    float forceAutoHideDistance; // B0
    int32_t forceLODLevel; // B4
    NavGenNavigationSetting navigationSetting; // B8
    uint16_t systemsToNotifyFlags; // BA
    bool useMeshNavmeshSettings; // BC
    uint8_t unkBD[0xC0 - 0xBD]; // BD
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionNode, 0xC0);
} // namespace world
using worldPhysicalDestructionNode = world::PhysicalDestructionNode;
using PhysicalDestructionNode = world::PhysicalDestructionNode;
} // namespace RED4ext

// clang-format on
