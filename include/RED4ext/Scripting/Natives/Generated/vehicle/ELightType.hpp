#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class ELightType : int32_t
{
    Head = 1,
    Brake = 2,
    LeftBlinker = 4,
    RightBlinker = 8,
    Blinkers = 12,
    Reverse = 16,
    Interior = 32,
    Default = 47,
    Utility = 64,
};
} // namespace vehicle
using vehicleELightType = vehicle::ELightType;
} // namespace RED4ext

// clang-format on
