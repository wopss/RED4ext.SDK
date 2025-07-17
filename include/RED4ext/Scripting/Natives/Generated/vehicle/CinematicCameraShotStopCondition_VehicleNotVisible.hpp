#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CinematicCameraShotStopCondition.hpp>

namespace RED4ext
{
namespace vehicle
{
struct CinematicCameraShotStopCondition_VehicleNotVisible : vehicle::CinematicCameraShotStopCondition
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotStopCondition_VehicleNotVisible";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CinematicCameraShotStopCondition_VehicleNotVisible, 0x40);
} // namespace vehicle
using vehicleCinematicCameraShotStopCondition_VehicleNotVisible = vehicle::CinematicCameraShotStopCondition_VehicleNotVisible;
} // namespace RED4ext

// clang-format on
