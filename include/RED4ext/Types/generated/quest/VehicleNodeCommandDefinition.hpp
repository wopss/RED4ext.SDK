#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/AICommandNodeBase.hpp>

namespace RED4ext
{
namespace quest { struct VehicleCommandParams; }

namespace quest { 
struct VehicleNodeCommandDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questVehicleNodeCommandDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicle; // 48
    Handle<quest::VehicleCommandParams> commandParams; // 80
};
RED4EXT_ASSERT_SIZE(VehicleNodeCommandDefinition, 0x90);
} // namespace quest
} // namespace RED4ext
