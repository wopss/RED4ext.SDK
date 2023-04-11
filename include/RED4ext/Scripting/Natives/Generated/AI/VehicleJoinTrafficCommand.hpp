#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleJoinTrafficCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleJoinTrafficCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VehicleJoinTrafficCommand, 0x68);
} // namespace AI
using AIVehicleJoinTrafficCommand = AI::VehicleJoinTrafficCommand;
} // namespace RED4ext

// clang-format on
