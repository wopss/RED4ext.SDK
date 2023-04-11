#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandNodeBase.hpp>

namespace RED4ext
{
namespace quest { struct VehicleCommandParams; }

namespace quest
{
struct VehicleNodeCommandDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questVehicleNodeCommandDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicle; // 48
    Handle<quest::VehicleCommandParams> commandParams; // 80
};
RED4EXT_ASSERT_SIZE(VehicleNodeCommandDefinition, 0x90);
} // namespace quest
using questVehicleNodeCommandDefinition = quest::VehicleNodeCommandDefinition;
} // namespace RED4ext

// clang-format on
