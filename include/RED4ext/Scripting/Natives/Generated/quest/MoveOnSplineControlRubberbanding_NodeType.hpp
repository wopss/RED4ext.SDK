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
struct MoveOnSplineControlRubberbanding_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questMoveOnSplineControlRubberbanding_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    game::EntityReference vehicleRef; // 38
    game::EntityReference keepDistanceFromRef; // 70
    float distance; // A8
    float minSpeed; // AC
    bool reduceSpeedOnTurns; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
};
RED4EXT_ASSERT_SIZE(MoveOnSplineControlRubberbanding_NodeType, 0xB8);
} // namespace quest
using questMoveOnSplineControlRubberbanding_NodeType = quest::MoveOnSplineControlRubberbanding_NodeType;
} // namespace RED4ext

// clang-format on
