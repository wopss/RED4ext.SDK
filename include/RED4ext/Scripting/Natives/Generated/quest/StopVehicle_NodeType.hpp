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
struct StopVehicle_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questStopVehicle_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    float time; // 68
    bool detachFromSpline; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(StopVehicle_NodeType, 0x70);
} // namespace quest
using questStopVehicle_NodeType = quest::StopVehicle_NodeType;
} // namespace RED4ext

// clang-format on
