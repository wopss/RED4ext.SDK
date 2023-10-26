#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/IRacingSystem.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) RacingSystem : vehicle::IRacingSystem
{
    static constexpr const char* NAME = "vehicleRacingSystem";
    static constexpr const char* ALIAS = "RacingSystem";

    uint8_t unk48[0x130 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RacingSystem, 0x130);
} // namespace vehicle
using vehicleRacingSystem = vehicle::RacingSystem;
using RacingSystem = vehicle::RacingSystem;
} // namespace RED4ext

// clang-format on
