#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct MoveOnSplineAndKeepDistance_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questMoveOnSplineAndKeepDistance_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    game::EntityReference keepDistanceFromRef; // 68
    NodeRef splineRef; // A0
    float distance; // A8
    float blendTime; // AC
    float minSpeed; // B0
    bool reduceSpeedOnTurns; // B4
    uint8_t unkB5[0xC8 - 0xB5]; // B5
};
RED4EXT_ASSERT_SIZE(MoveOnSplineAndKeepDistance_NodeType, 0xC8);
} // namespace quest
using questMoveOnSplineAndKeepDistance_NodeType = quest::MoveOnSplineAndKeepDistance_NodeType;
} // namespace RED4ext

// clang-format on
