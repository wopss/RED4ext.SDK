#pragma once

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

namespace world { 
struct InstancedDestructibleMeshNode : world::MeshNode
{
    static constexpr const char* NAME = "worldInstancedDestructibleMeshNode";
    static constexpr const char* ALIAS = NAME;

    NavGenNavigationSetting navigationSetting; // 58
    uint8_t unk5A[0x60 - 0x5A]; // 5A
    world::TransformBuffer cookedInstanceTransforms; // 60
    physics::SimulationType simulationType; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    Handle<physics::FilterData> filterData; // 80
    physics::FilterDataSource filterDataSource; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
    RaRef<world::Effect> fracturingEffect; // 98
    RaRef<world::Effect> idleEffect; // A0
    RaRef<CMesh> staticMesh; // A8
    CName staticMeshAppearance; // B0
    float impulseToDamage; // B8
    float damageThreshold; // BC
    float damageEndurance; // C0
    bool useAggregate; // C4
    bool enableSelfCollisionInAggregate; // C5
    bool startInactive; // C6
    bool turnDynamicOnImpulse; // C7
    bool isDestructible; // C8
    bool accumulateDamage; // C9
    bool isPierceable; // CA
    bool isWorkspot; // CB
    bool useMeshNavmeshSettings; // CC
    uint8_t unkCD[0xCE - 0xCD]; // CD
    uint16_t systemsToNotifyFlags; // CE
    DynArray<Transform> instanceTransforms; // D0
};
RED4EXT_ASSERT_SIZE(InstancedDestructibleMeshNode, 0xE0);
} // namespace world
} // namespace RED4ext
