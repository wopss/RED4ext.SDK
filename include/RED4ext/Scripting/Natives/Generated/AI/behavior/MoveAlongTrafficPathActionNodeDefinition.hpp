#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct MoveAlongTrafficPathActionNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorMoveAlongTrafficPathActionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
    Handle<AI::ArgumentMapping> joinTrafficSettings; // 60
    uint8_t unk70[0x80 - 0x70]; // 70
    Handle<AI::ArgumentMapping> ignoreTrafficSpots; // 80
    Handle<AI::ArgumentMapping> useCrowdAnimationGraph; // 90
    uint8_t unkA0[0xB0 - 0xA0]; // A0
    Handle<AI::ArgumentMapping> workspotData; // B0
    Handle<AI::ArgumentMapping> workspotExitPositionWS; // C0
    Handle<AI::ArgumentMapping> workspotReturnPositionVector; // D0
    Handle<AI::ArgumentMapping> workspotExitTangent; // E0
    Handle<AI::ArgumentMapping> trafficLaneReturnTangent; // F0
    Handle<AI::ArgumentMapping> trafficLaneExitTangent; // 100
};
RED4EXT_ASSERT_SIZE(MoveAlongTrafficPathActionNodeDefinition, 0x110);
} // namespace AI::behavior
using AIbehaviorMoveAlongTrafficPathActionNodeDefinition = AI::behavior::MoveAlongTrafficPathActionNodeDefinition;
} // namespace RED4ext

// clang-format on
