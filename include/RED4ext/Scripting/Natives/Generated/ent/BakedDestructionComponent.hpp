#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalMeshComponent.hpp>

namespace RED4ext
{
struct CMesh;
namespace world { struct Effect; }

namespace ent { 
struct BakedDestructionComponent : ent::PhysicalMeshComponent
{
    static constexpr const char* NAME = "entBakedDestructionComponent";
    static constexpr const char* ALIAS = "BakedDestructionComponent";

    uint8_t unk240[0x260 - 0x240]; // 240
    RaRef<world::Effect> destructionEffect; // 260
    RaRef<CMesh> meshFractured; // 268
    uint8_t unk270[0x2A0 - 0x270]; // 270
    CName audioMetadata; // 2A0
    CName meshFracturedAppearance; // 2A8
    uint8_t unk2B0[0x328 - 0x2B0]; // 2B0
    DataBuffer compiledBufferFractured; // 328
    float damageThreshold; // 350
    float damageEndurance; // 354
    float impulseToDamage; // 358
    float contactToDamage; // 35C
    uint8_t unk360[0x368 - 0x360]; // 360
    float numFrames; // 368
    float frameRate; // 36C
    bool playOnlyOnce; // 370
    bool restartOnTrigger; // 371
    bool disableCollidersOnTrigger; // 372
    bool accumulateDamage; // 373
    uint8_t unk374[0x380 - 0x374]; // 374
};
RED4EXT_ASSERT_SIZE(BakedDestructionComponent, 0x380);
} // namespace ent
using BakedDestructionComponent = ent::BakedDestructionComponent;
} // namespace RED4ext
