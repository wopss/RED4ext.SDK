#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/IRacingSystem.hpp>

namespace RED4ext
{
namespace vehicle { 
struct RacingSystem : vehicle::IRacingSystem
{
    static constexpr const char* NAME = "vehicleRacingSystem";
    static constexpr const char* ALIAS = "RacingSystem";

    uint8_t unk48[0x120 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RacingSystem, 0x120);
} // namespace vehicle
using RacingSystem = vehicle::RacingSystem;
} // namespace RED4ext
