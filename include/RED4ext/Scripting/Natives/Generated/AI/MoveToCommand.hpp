#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/PositionSpec.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace AI
{
struct MoveToCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIMoveToCommand";
    static constexpr const char* ALIAS = NAME;

    AI::PositionSpec movementTarget; // 68
    bool rotateEntityTowardsFacingTarget; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
    AI::PositionSpec facingTarget; // 98
    move::MovementType movementType; // C0
    bool ignoreNavigation; // C4
    bool useStart; // C5
    bool useStop; // C6
    uint8_t unkC7[0xC8 - 0xC7]; // C7
    float desiredDistanceFromTarget; // C8
    bool finishWhenDestinationReached; // CC
    uint8_t unkCD[0xD0 - 0xCD]; // CD
};
RED4EXT_ASSERT_SIZE(MoveToCommand, 0xD0);
} // namespace AI
using AIMoveToCommand = AI::MoveToCommand;
} // namespace RED4ext

// clang-format on
