#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/MarkerType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) SpawnDespawnEntityParams
{
    static constexpr const char* NAME = "scnSpawnDespawnEntityParams";
    static constexpr const char* ALIAS = NAME;

    CName dynamicEntityUniqueName; // 00
    scn::MarkerType spawnMarkerType; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    NodeRef spawnMarkerNodeRef; // 10
    CName spawnMarker; // 18
    Transform spawnOffset; // 20
    scn::PerformerId itemOwnerId; // 40
    TweakDBID specRecordId; // 44
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    CName appearance; // 50
    bool spawnOnStart; // 58
    bool isEnabled; // 59
    bool validateSpawnPostion; // 5A
    bool alwaysSpawned; // 5B
    bool keepAlive; // 5C
    bool findInWorld; // 5D
    bool forceMaxVisibility; // 5E
    bool prefetchAppearance; // 5F
};
RED4EXT_ASSERT_SIZE(SpawnDespawnEntityParams, 0x60);
} // namespace scn
using scnSpawnDespawnEntityParams = scn::SpawnDespawnEntityParams;
} // namespace RED4ext

// clang-format on
