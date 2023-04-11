#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }
namespace AI::behavior { struct MovementPolicyTaskItemDefinition; }

namespace AI::behavior
{
struct MovementPolicyTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorMovementPolicyTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    bool useCurrentPolicy; // 38
    bool waitForPolicy; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
    Handle<AI::ArgumentMapping> stopWhenDestinationReached; // 40
    DynArray<Handle<AI::behavior::MovementPolicyTaskItemDefinition>> policies; // 50
};
RED4EXT_ASSERT_SIZE(MovementPolicyTaskDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorMovementPolicyTaskDefinition = AI::behavior::MovementPolicyTaskDefinition;
} // namespace RED4ext

// clang-format on
