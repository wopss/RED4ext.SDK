#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DynamicVehicleType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/PoliceStrategy.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct SpawnRequestResult
{
    static constexpr const char* NAME = "gameSpawnRequestResult";
    static constexpr const char* ALIAS = "SpawnRequestResult";

    uint32_t requestID; // 00
    vehicle::PoliceStrategy policeStrategy; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    game::DynamicVehicleType vehicleType; // 08
    bool success; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    DynArray<WeakHandle<game::Object>> spawnedObjects; // 10
};
RED4EXT_ASSERT_SIZE(SpawnRequestResult, 0x20);
} // namespace game
using gameSpawnRequestResult = game::SpawnRequestResult;
using SpawnRequestResult = game::SpawnRequestResult;
} // namespace RED4ext

// clang-format on
