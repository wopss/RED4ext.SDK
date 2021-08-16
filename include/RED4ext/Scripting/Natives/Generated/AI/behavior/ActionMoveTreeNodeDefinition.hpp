#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct ActionMoveTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMoveTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> movementTarget; // 40
    Handle<AI::ArgumentMapping> lookAtTarget; // 50
    Handle<AI::ArgumentMapping> tolerance; // 60
    Handle<AI::ArgumentMapping> movementType; // 70
    Handle<AI::ArgumentMapping> ignoreNavigation; // 80
    Handle<AI::ArgumentMapping> rotateEntity; // 90
    Handle<AI::ArgumentMapping> useStart; // A0
    Handle<AI::ArgumentMapping> useStop; // B0
    Handle<AI::ArgumentMapping> destinationTangent; // C0
    Handle<AI::ArgumentMapping> startTangent; // D0
    Handle<AI::ArgumentMapping> spotReservation; // E0
    Handle<AI::ArgumentMapping> ignoreRestrictedArea; // F0
};
RED4EXT_ASSERT_SIZE(ActionMoveTreeNodeDefinition, 0x100);
} // namespace AI::behavior
} // namespace RED4ext
