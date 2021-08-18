#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenNavigationSetting.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/FilterDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNode.hpp>

namespace RED4ext
{
struct CMesh;
namespace physics { struct FilterData; }
namespace world { struct Effect; }

namespace world { 
struct BakedDestructionNode : world::MeshNode
{
    static constexpr const char* NAME = "worldBakedDestructionNode";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::FilterData> filterData; // 58
    RaRef<world::Effect> destructionEffect; // 68
    RaRef<CMesh> meshFractured; // 70
    CName audioMetadata; // 78
    CName meshFracturedAppearance; // 80
    physics::FilterDataSource filterDataSource; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    float damageThreshold; // 8C
    float damageEndurance; // 90
    float impulseToDamage; // 94
    float contactToDamage; // 98
    float numFrames; // 9C
    float frameRate; // A0
    bool playOnlyOnce; // A4
    bool restartOnTrigger; // A5
    bool disableCollidersOnTrigger; // A6
    bool useMeshNavmeshSettings; // A7
    bool accumulateDamage; // A8
    uint8_t unkA9[0xD8 - 0xA9]; // A9
    NavGenNavigationSetting navigationSetting; // D8
    uint8_t unkDA[0xE0 - 0xDA]; // DA
};
RED4EXT_ASSERT_SIZE(BakedDestructionNode, 0xE0);
} // namespace world
} // namespace RED4ext
