#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TransformBuffer.hpp>

namespace RED4ext
{
struct CMesh;
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace world
{
struct InstancedDestructibleMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldInstancedDestructibleMeshNode";
    static constexpr const char* ALIAS = NAME;

    NavGenNavigationSetting navigationSetting; // 60
    uint8_t unk62[0x68 - 0x62]; // 62
    world::TransformBuffer cookedInstanceTransforms; // 68
    physics::SimulationType simulationType; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
    Handle<physics::FilterData> filterData; // 88
    physics::FilterDataSource filterDataSource; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
    RaRef<world::Effect> fracturingEffect; // A0
    RaRef<world::Effect> idleEffect; // A8
    RaRef<CMesh> staticMesh; // B0
    CName staticMeshAppearance; // B8
    float impulseToDamage; // C0
    float damageThreshold; // C4
    float damageEndurance; // C8
    bool useAggregate; // CC
    bool enableSelfCollisionInAggregate; // CD
    bool startInactive; // CE
    bool turnDynamicOnImpulse; // CF
    bool isDestructible; // D0
    bool accumulateDamage; // D1
    bool isPierceable; // D2
    bool isWorkspot; // D3
    bool useMeshNavmeshSettings; // D4
    uint8_t unkD5[0xD6 - 0xD5]; // D5
    uint16_t systemsToNotifyFlags; // D6
    DynArray<Transform> instanceTransforms; // D8
};
RED4EXT_ASSERT_SIZE(InstancedDestructibleMeshNode, 0xE8);
} // namespace world
using worldInstancedDestructibleMeshNode = world::InstancedDestructibleMeshNode;
} // namespace RED4ext

// clang-format on
