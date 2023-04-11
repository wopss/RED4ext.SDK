#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/Command.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleCommand : AI::Command
{
    static constexpr const char* NAME = "AIVehicleCommand";
    static constexpr const char* ALIAS = NAME;

    bool useKinematic; // 60
    bool needDriver; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(VehicleCommand, 0x68);
} // namespace AI
using AIVehicleCommand = AI::VehicleCommand;
} // namespace RED4ext

// clang-format on
