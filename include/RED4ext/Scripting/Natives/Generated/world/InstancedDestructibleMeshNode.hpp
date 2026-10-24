#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SimulationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

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
    physics::SimulationType simulationType; // 62
    uint8_t unk63[0x68 - 0x63]; // 63
    Handle<physics::FilterData> filterData; // 68
    physics::FilterDataSource filterDataSource; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    RaRef<world::Effect> fracturingEffect; // 80
    RaRef<world::Effect> idleEffect; // 88
    RaRef<CMesh> staticMesh; // 90
    CName staticMeshAppearance; // 98
    float impulseToDamage; // A0
    float damageThreshold; // A4
    float damageEndurance; // A8
    bool useAggregate; // AC
    bool enableSelfCollisionInAggregate; // AD
    bool startInactive; // AE
    bool turnDynamicOnImpulse; // AF
    bool isDestructible; // B0
    bool accumulateDamage; // B1
    bool isPierceable; // B2
    bool isWorkspot; // B3
    bool useMeshNavmeshSettings; // B4
    uint8_t unkB5[0xB6 - 0xB5]; // B5
    uint16_t systemsToNotifyFlags; // B6
    DynArray<Transform> instanceTransforms; // B8
};
RED4EXT_ASSERT_SIZE(InstancedDestructibleMeshNode, 0xC8);
} // namespace world
using worldInstancedDestructibleMeshNode = world::InstancedDestructibleMeshNode;
} // namespace RED4ext

// clang-format on
