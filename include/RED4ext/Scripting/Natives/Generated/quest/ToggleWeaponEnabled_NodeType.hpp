#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleWeaponQuestID.hpp>

namespace RED4ext
{
namespace quest
{
struct ToggleWeaponEnabled_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questToggleWeaponEnabled_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    bool playerVehicle; // 68
    bool val; // 69
    quest::VehicleWeaponQuestID weapon; // 6A
    uint8_t unk6B[0x70 - 0x6B]; // 6B
};
RED4EXT_ASSERT_SIZE(ToggleWeaponEnabled_NodeType, 0x70);
} // namespace quest
using questToggleWeaponEnabled_NodeType = quest::ToggleWeaponEnabled_NodeType;
} // namespace RED4ext

// clang-format on
