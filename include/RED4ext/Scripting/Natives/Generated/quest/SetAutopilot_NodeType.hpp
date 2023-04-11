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
struct SetAutopilot_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questSetAutopilot_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    bool val; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(SetAutopilot_NodeType, 0x70);
} // namespace quest
using questSetAutopilot_NodeType = quest::SetAutopilot_NodeType;
} // namespace RED4ext

// clang-format on
