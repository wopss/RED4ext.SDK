#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/PhysicalMeshComponent.hpp>

namespace RED4ext
{
struct CMesh;
namespace world { struct Effect; }

namespace ent { 
struct BakedDestructionComponent : ent::PhysicalMeshComponent
{
    static constexpr const char* NAME = "entBakedDestructionComponent";
    static constexpr const char* ALIAS = "BakedDestructionComponent";

    uint8_t unk230[0x250 - 0x230]; // 230
    RaRef<world::Effect> destructionEffect; // 250
    RaRef<CMesh> meshFractured; // 258
    uint8_t unk260[0x280 - 0x260]; // 260
    CName audioMetadata; // 280
    CName meshFracturedAppearance; // 288
    uint8_t unk290[0x2F8 - 0x290]; // 290
    DataBuffer compiledBufferFractured; // 2F8
    float damageThreshold; // 320
    float damageEndurance; // 324
    float impulseToDamage; // 328
    float contactToDamage; // 32C
    uint8_t unk330[0x338 - 0x330]; // 330
    float numFrames; // 338
    float frameRate; // 33C
    bool playOnlyOnce; // 340
    bool restartOnTrigger; // 341
    bool disableCollidersOnTrigger; // 342
    bool accumulateDamage; // 343
    uint8_t unk344[0x350 - 0x344]; // 344
};
RED4EXT_ASSERT_SIZE(BakedDestructionComponent, 0x350);
} // namespace ent
using BakedDestructionComponent = ent::BakedDestructionComponent;
} // namespace RED4ext
