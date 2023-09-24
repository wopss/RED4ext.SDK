#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDynamicSpawnSystemType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SpawnDirectionPreference.hpp>

namespace RED4ext
{
namespace quest
{
struct DynamicVehicleSpawn_NodeType : quest::IDynamicSpawnSystemType
{
    static constexpr const char* NAME = "questDynamicVehicleSpawn_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> VehicleData; // 30
    CName waveTag; // 40
    quest::SpawnDirectionPreference spawnDirectionPreference; // 48
    Vector2 distanceRange; // 4C
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(DynamicVehicleSpawn_NodeType, 0x58);
} // namespace quest
using questDynamicVehicleSpawn_NodeType = quest::DynamicVehicleSpawn_NodeType;
} // namespace RED4ext

// clang-format on
