#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EQuestVehicleDoorState.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleDoor.hpp>

namespace RED4ext
{
namespace quest { 
struct ToggleDoor_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questToggleDoor_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    vehicle::EQuestVehicleDoorState doorAction; // 68
    vehicle::EVehicleDoor door; // 6C
    CName doorID; // 70
    bool toOpen; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(ToggleDoor_NodeType, 0x80);
} // namespace quest
} // namespace RED4ext
