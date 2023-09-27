#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct VehicleDynamicSpawnLogic
{
    static constexpr const char* NAME = "gameVehicleDynamicSpawnLogic";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x148 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(VehicleDynamicSpawnLogic, 0x148);
} // namespace game
using gameVehicleDynamicSpawnLogic = game::VehicleDynamicSpawnLogic;
} // namespace RED4ext

// clang-format on
