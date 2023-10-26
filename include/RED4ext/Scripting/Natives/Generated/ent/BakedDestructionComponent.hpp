#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalMeshComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldType.hpp>

namespace RED4ext
{
struct CMesh;
namespace world { struct Effect; }

namespace ent
{
struct __declspec(align(0x10)) BakedDestructionComponent : ent::PhysicalMeshComponent
{
    static constexpr const char* NAME = "entBakedDestructionComponent";
    static constexpr const char* ALIAS = "BakedDestructionComponent";

    uint8_t unk240[0x260 - 0x240]; // 240
    RaRef<world::Effect> destructionEffect; // 260
    RaRef<CMesh> meshFractured; // 268
    uint8_t unk270[0x2A0 - 0x270]; // 270
    CName audioMetadata; // 2A0
    CName meshFracturedAppearance; // 2A8
    uint8_t unk2B0[0x320 - 0x2B0]; // 2B0
    float damageThreshold; // 320
    float damageEndurance; // 324
    float impulseToDamage; // 328
    float contactToDamage; // 32C
    uint8_t unk330[0x338 - 0x330]; // 330
    float numFrames; // 338
    float frameRate; // 33C
    physics::FractureFieldType fractureFieldMask; // 340
    bool playOnlyOnce; // 342
    bool restartOnTrigger; // 343
    bool disableCollidersOnTrigger; // 344
    bool accumulateDamage; // 345
    uint8_t unk346[0x350 - 0x346]; // 346
};
RED4EXT_ASSERT_SIZE(BakedDestructionComponent, 0x350);
} // namespace ent
using entBakedDestructionComponent = ent::BakedDestructionComponent;
using BakedDestructionComponent = ent::BakedDestructionComponent;
} // namespace RED4ext

// clang-format on
