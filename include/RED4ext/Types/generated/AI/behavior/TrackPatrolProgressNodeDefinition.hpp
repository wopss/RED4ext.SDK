#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct TrackPatrolProgressNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorTrackPatrolProgressNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> pathParameters; // 40
    Handle<AI::ArgumentMapping> patrolProgress; // 50
    Handle<AI::ArgumentMapping> startFromClosestPoint; // 60
};
RED4EXT_ASSERT_SIZE(TrackPatrolProgressNodeDefinition, 0x70);
} // namespace AI::behavior
} // namespace RED4ext
