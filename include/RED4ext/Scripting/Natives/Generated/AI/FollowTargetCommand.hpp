#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/MoveCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI
{
struct FollowTargetCommand : AI::MoveCommand
{
    static constexpr const char* NAME = "AIFollowTargetCommand";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> target; // 68
    float desiredDistance; // 78
    float tolerance; // 7C
    bool stopWhenDestinationReached; // 80
    uint8_t unk81[0x84 - 0x81]; // 81
    move::MovementType movementType; // 84
    WeakHandle<game::Object> lookAtTarget; // 88
    bool matchSpeed; // 98
    bool teleport; // 99
    uint8_t unk9A[0xA0 - 0x9A]; // 9A
};
RED4EXT_ASSERT_SIZE(FollowTargetCommand, 0xA0);
} // namespace AI
using AIFollowTargetCommand = AI::FollowTargetCommand;
} // namespace RED4ext

// clang-format on
