#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneExitDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLightDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSourceNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSplineNodeUsage.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficSplineNode : world::TrafficSourceNode
{
    static constexpr const char* NAME = "worldTrafficSplineNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficLaneExitDefinition> outLanes; // 70
    DynArray<world::TrafficLightDefinition> lights; // 80
    DynArray<CName> markings; // 90
    float pathSamplingDistance; // A0
    world::TrafficSplineNodeUsage usage; // A4
    float maxSlotMaxSpeed; // A8
    float width; // AC
    float autoConnectionRange; // B0
    float laneSamplingAngle; // B4
    bool bidirectional; // B8
    bool neverDeadEnd; // B9
    bool trafficDisabled; // BA
    bool noAIDriving; // BB
    bool noAutodrive; // BC
    uint8_t unkBD[0xC0 - 0xBD]; // BD
};
RED4EXT_ASSERT_SIZE(TrafficSplineNode, 0xC0);
} // namespace world
using worldTrafficSplineNode = world::TrafficSplineNode;
} // namespace RED4ext

// clang-format on
