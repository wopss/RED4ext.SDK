#pragma once

// clang-format off

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
namespace quest
{
struct ToggleDoor_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questToggleDoor_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    vehicle::EQuestVehicleDoorState doorAction; // 68
    vehicle::EVehicleDoor door; // 6C
    bool forceScene; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    CName doorID; // 78
    bool toOpen; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(ToggleDoor_NodeType, 0x88);
} // namespace quest
using questToggleDoor_NodeType = quest::ToggleDoor_NodeType;
} // namespace RED4ext

// clang-format on
