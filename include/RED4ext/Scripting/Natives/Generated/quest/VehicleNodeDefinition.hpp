#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IVehicleManagerNodeType; }

namespace quest
{
struct VehicleNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questVehicleNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IVehicleManagerNodeType> type; // 48
};
RED4EXT_ASSERT_SIZE(VehicleNodeDefinition, 0x58);
} // namespace quest
using questVehicleNodeDefinition = quest::VehicleNodeDefinition;
} // namespace RED4ext

// clang-format on
