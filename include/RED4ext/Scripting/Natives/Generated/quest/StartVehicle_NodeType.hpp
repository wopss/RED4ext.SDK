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
struct StartVehicle_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questStartVehicle_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    float blendTime; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(StartVehicle_NodeType, 0x70);
} // namespace quest
using questStartVehicle_NodeType = quest::StartVehicle_NodeType;
} // namespace RED4ext

// clang-format on
