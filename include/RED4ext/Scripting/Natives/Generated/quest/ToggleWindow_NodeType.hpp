#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EQuestVehicleWindowState.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleDoor.hpp>

namespace RED4ext
{
namespace quest
{
struct ToggleWindow_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questToggleWindow_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    vehicle::EQuestVehicleWindowState windowState; // 68
    vehicle::EVehicleDoor door; // 6C
};
RED4EXT_ASSERT_SIZE(ToggleWindow_NodeType, 0x70);
} // namespace quest
using questToggleWindow_NodeType = quest::ToggleWindow_NodeType;
} // namespace RED4ext

// clang-format on
