#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/IVisualComponent.hpp>
#include <RED4ext/Types/generated/physics/DestructionLevelData.hpp>
#include <RED4ext/Types/generated/physics/DestructionParams.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent { 
struct PhysicalDestructionComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entPhysicalDestructionComponent";
    static constexpr const char* ALIAS = "PhysicalDestructionComponent";

    uint8_t unk140[0x160 - 0x140]; // 140
    physics::DestructionParams destructionParams; // 160
    uint8_t unk1A4[0x1A8 - 0x1A4]; // 1A4
    DynArray<physics::DestructionLevelData> destructionLevelData; // 1A8
    uint8_t unk1B8[0x208 - 0x1B8]; // 1B8
    RaRef<CMesh> mesh; // 208
    uint8_t unk210[0x258 - 0x210]; // 210
    CName audioMetadata; // 258
    CName meshAppearance; // 260
    uint8_t unk268[0x280 - 0x268]; // 268
    float forceAutoHideDistance; // 280
    uint8_t unk284[0x290 - 0x284]; // 284
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionComponent, 0x290);
} // namespace ent
using PhysicalDestructionComponent = ent::PhysicalDestructionComponent;
} // namespace RED4ext
