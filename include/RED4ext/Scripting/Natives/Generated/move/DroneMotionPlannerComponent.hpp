#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MotionPlannerComponent.hpp>

namespace RED4ext
{
namespace move
{
struct DroneMotionPlannerComponent : move::MotionPlannerComponent
{
    static constexpr const char* NAME = "moveDroneMotionPlannerComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DroneMotionPlannerComponent, 0x1F8);
} // namespace move
using moveDroneMotionPlannerComponent = move::DroneMotionPlannerComponent;
} // namespace RED4ext

// clang-format on
