#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EngineTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleType.hpp>

namespace RED4ext
{
namespace vehicle
{
struct PlayerVehicle
{
    static constexpr const char* NAME = "vehiclePlayerVehicle";
    static constexpr const char* ALIAS = "PlayerVehicle";

    CName name; // 00
    TweakDBID recordID; // 08
    game::data::VehicleType vehicleType; // 10
    uint8_t unk14[0x30 - 0x14]; // 14
    EngineTime destructionTimeStamp; // 30
    uint8_t unk38[0x3C - 0x38]; // 38
    bool isUnlocked; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    int32_t uiFavoriteIndex; // 40
    bool overrideDisplay; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    CName icon; // 48
    CName defaultState; // 50
    CName activeState; // 58
    bool forcedFavorite; // 60
    bool spawnOnlyOnValidRoad; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(PlayerVehicle, 0x68);
} // namespace vehicle
using vehiclePlayerVehicle = vehicle::PlayerVehicle;
using PlayerVehicle = vehicle::PlayerVehicle;
} // namespace RED4ext

// clang-format on
