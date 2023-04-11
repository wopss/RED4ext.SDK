#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ToggleTankCustomFPPLockOff_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questToggleTankCustomFPPLockOff_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    bool playerVehicle; // 68
    bool val; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(ToggleTankCustomFPPLockOff_NodeType, 0x70);
} // namespace quest
using questToggleTankCustomFPPLockOff_NodeType = quest::ToggleTankCustomFPPLockOff_NodeType;
} // namespace RED4ext

// clang-format on
