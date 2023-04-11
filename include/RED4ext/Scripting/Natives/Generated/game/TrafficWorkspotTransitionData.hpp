#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game { struct SetupWorkspotActionEvent; }
namespace world { struct TrafficGlobalPathPosition; }

namespace game
{
struct TrafficWorkspotTransitionData : ISerializable
{
    static constexpr const char* NAME = "gameTrafficWorkspotTransitionData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::SetupWorkspotActionEvent> workspotData; // 30
    Handle<world::TrafficGlobalPathPosition> returnPosition; // 40
    Vector3 workspotExitTangent; // 50
    Vector3 trafficLaneReturnTangent; // 5C
};
RED4EXT_ASSERT_SIZE(TrafficWorkspotTransitionData, 0x68);
} // namespace game
using gameTrafficWorkspotTransitionData = game::TrafficWorkspotTransitionData;
} // namespace RED4ext

// clang-format on
