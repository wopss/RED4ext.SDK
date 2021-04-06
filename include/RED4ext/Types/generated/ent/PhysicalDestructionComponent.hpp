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

    uint8_t unk140[0x1E8 - 0x140]; // 140
    physics::DestructionParams destructionParams; // 1E8
    uint8_t unk22C[0x230 - 0x22C]; // 22C
    DynArray<physics::DestructionLevelData> destructionLevelData; // 230
    uint8_t unk240[0x290 - 0x240]; // 240
    RaRef<CMesh> mesh; // 290
    uint8_t unk298[0x2E0 - 0x298]; // 298
    CName audioMetadata; // 2E0
    CName meshAppearance; // 2E8
    uint8_t unk2F0[0x308 - 0x2F0]; // 2F0
    float forceAutoHideDistance; // 308
    uint8_t unk30C[0x320 - 0x30C]; // 30C
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionComponent, 0x320);
} // namespace ent
using PhysicalDestructionComponent = ent::PhysicalDestructionComponent;
} // namespace RED4ext
