#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FractureFieldType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
struct CMesh;
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace world
{
struct BakedDestructionNode : world::MeshNode
{
    static constexpr const char* NAME = "worldBakedDestructionNode";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 60
    RaRef<world::Effect> destructionEffect; // 70
    RaRef<CMesh> meshFractured; // 78
    CName audioMetadata; // 80
    CName meshFracturedAppearance; // 88
    physics::FilterDataSource filterDataSource; // 90
    uint8_t unk91[0x94 - 0x91]; // 91
    float damageThreshold; // 94
    float damageEndurance; // 98
    float impulseToDamage; // 9C
    float contactToDamage; // A0
    float numFrames; // A4
    float frameRate; // A8
    physics::FractureFieldType fractureFieldMask; // AC
    bool playOnlyOnce; // AE
    bool restartOnTrigger; // AF
    bool disableCollidersOnTrigger; // B0
    bool useMeshNavmeshSettings; // B1
    bool accumulateDamage; // B2
    uint8_t unkB3[0xB4 - 0xB3]; // B3
    NavGenNavigationSetting navigationSetting; // B4
    uint8_t unkB6[0xB8 - 0xB6]; // B6
};
RED4EXT_ASSERT_SIZE(BakedDestructionNode, 0xB8);
} // namespace world
using worldBakedDestructionNode = world::BakedDestructionNode;
} // namespace RED4ext

// clang-format on
