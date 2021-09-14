#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionLevelData.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionParams.hpp>

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
    uint8_t unk298[0x2F0 - 0x298]; // 298
    CName audioMetadata; // 2F0
    CName meshAppearance; // 2F8
    uint8_t unk300[0x318 - 0x300]; // 300
    float forceAutoHideDistance; // 318
    uint8_t unk31C[0x330 - 0x31C]; // 31C
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionComponent, 0x330);
} // namespace ent
using PhysicalDestructionComponent = ent::PhysicalDestructionComponent;
} // namespace RED4ext
