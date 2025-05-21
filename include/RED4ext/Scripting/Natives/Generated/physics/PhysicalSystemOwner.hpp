#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class PhysicalSystemOwner : int8_t
{
    Unknown = 0,
    BakedDestructionNode = 1,
    ClothMeshNode = 2,
    CollisionAreaNode = 3,
    DecorationMeshNode = 4,
    DynamicMeshNode = 5,
    InstancedDestructibleNode = 6,
    PhysicalDestructionNode = 7,
    PhysicalTriggerNode = 8,
    StaticMeshNode = 9,
    TerrainCollisionNode = 10,
    WaterPatchNode = 11,
    WorldCollisionNode = 12,
    BakedDestructionComponent = 13,
    ClothComponent = 14,
    ColliderComponent = 15,
    PhysicalDestructionComponent = 16,
    PhysicalMeshComponent = 17,
    PhysicalSkinnedMeshComponent = 18,
    PhysicalTriggerComponent = 19,
    SimpleColliderComponent = 20,
    SkinnedClothComponent = 21,
    StateMachineComponent = 22,
    VehicleChassisComponent = 23,
    PhysicalParticleSystem = 24,
    PhotoModeSystem = 25,
    RagdollBinder = 26,
    FoliageDestruction = 27,
    EntityProxy = 28,
};
} // namespace physics
using physicsPhysicalSystemOwner = physics::PhysicalSystemOwner;
} // namespace RED4ext

// clang-format on
