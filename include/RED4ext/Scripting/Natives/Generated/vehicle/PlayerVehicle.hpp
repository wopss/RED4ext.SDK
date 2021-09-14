#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleType.hpp>

namespace RED4ext
{
namespace vehicle { 
struct PlayerVehicle
{
    static constexpr const char* NAME = "vehiclePlayerVehicle";
    static constexpr const char* ALIAS = "PlayerVehicle";

    CName name; // 00
    TweakDBID recordID; // 08
    game::data::VehicleType vehicleType; // 10
    uint8_t unk14[0x30 - 0x14]; // 14
    bool isUnlocked; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(PlayerVehicle, 0x38);
} // namespace vehicle
using PlayerVehicle = vehicle::PlayerVehicle;
} // namespace RED4ext
