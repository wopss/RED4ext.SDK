#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IVehicleSystem.hpp>

namespace RED4ext
{
namespace game { 
struct VehicleSystem : game::IVehicleSystem
{
    static constexpr const char* NAME = "gameVehicleSystem";
    static constexpr const char* ALIAS = "VehicleSystem";

    uint8_t unk50[0x208C0 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(VehicleSystem, 0x208C0);
} // namespace game
using VehicleSystem = game::VehicleSystem;
} // namespace RED4ext
