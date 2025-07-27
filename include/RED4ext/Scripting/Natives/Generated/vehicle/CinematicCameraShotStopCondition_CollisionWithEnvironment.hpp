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
struct CinematicCameraShotStopCondition_CollisionWithEnvironment : vehicle::CinematicCameraShotStopCondition
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotStopCondition_CollisionWithEnvironment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CinematicCameraShotStopCondition_CollisionWithEnvironment, 0x40);
} // namespace vehicle
using vehicleCinematicCameraShotStopCondition_CollisionWithEnvironment = vehicle::CinematicCameraShotStopCondition_CollisionWithEnvironment;
} // namespace RED4ext

// clang-format on
