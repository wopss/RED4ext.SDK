#pragma once

// clang-format off

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

namespace ent
{
struct __declspec(align(0x10)) PhysicalDestructionComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entPhysicalDestructionComponent";
    static constexpr const char* ALIAS = "PhysicalDestructionComponent";

    uint8_t unk140[0x1E8 - 0x140]; // 140
    physics::DestructionParams destructionParams; // 1E8
    DynArray<physics::DestructionLevelData> destructionLevelData; // 238
    uint8_t unk248[0x298 - 0x248]; // 248
    RaRef<CMesh> mesh; // 298
    uint8_t unk2A0[0x300 - 0x2A0]; // 2A0
    CName audioMetadata; // 300
    CName meshAppearance; // 308
    uint8_t unk310[0x328 - 0x310]; // 310
    float forceAutoHideDistance; // 328
    uint8_t unk32C[0x334 - 0x32C]; // 32C
    uint16_t systemsToNotifyFlags; // 334
    uint8_t unk336[0x340 - 0x336]; // 336
};
RED4EXT_ASSERT_SIZE(PhysicalDestructionComponent, 0x340);
} // namespace ent
using entPhysicalDestructionComponent = ent::PhysicalDestructionComponent;
using PhysicalDestructionComponent = ent::PhysicalDestructionComponent;
} // namespace RED4ext

// clang-format on
