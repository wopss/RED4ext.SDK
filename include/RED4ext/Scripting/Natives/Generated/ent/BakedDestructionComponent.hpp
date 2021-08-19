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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x260 - 0x240]; // 240
    RaRef<world::Effect> destructionEffect; // 260
    RaRef<CMesh> meshFractured; // 268
    uint8_t unk270[0x290 - 0x270]; // 270
    CName audioMetadata; // 290
    CName meshFracturedAppearance; // 298
    uint8_t unk2A0[0x318 - 0x2A0]; // 2A0
    DataBuffer compiledBufferFractured; // 318
    float damageThreshold; // 340
    float damageEndurance; // 344
    float impulseToDamage; // 348
    float contactToDamage; // 34C
    uint8_t unk350[0x358 - 0x350]; // 350
    float numFrames; // 358
    float frameRate; // 35C
    bool playOnlyOnce; // 360
    bool restartOnTrigger; // 361
    bool disableCollidersOnTrigger; // 362
    bool accumulateDamage; // 363
    uint8_t unk364[0x370 - 0x364]; // 364
};
RED4EXT_ASSERT_SIZE(BakedDestructionComponent, 0x370);
} // namespace ent
} // namespace RED4ext
