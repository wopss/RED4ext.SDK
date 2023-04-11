#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct ActionMoveToPositionState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionMoveToPositionState";
    static constexpr const char* ALIAS = NAME;

    Vector3 target; // 28
    bool useSpotReservation; // 34
    bool usePathfinding; // 35
    bool useStart; // 36
    bool useStop; // 37
    move::MovementType movementType; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    WeakHandle<game::Object> strafingTarget; // 40
};
RED4EXT_ASSERT_SIZE(ActionMoveToPositionState, 0x50);
} // namespace game
using gameActionMoveToPositionState = game::ActionMoveToPositionState;
} // namespace RED4ext

// clang-format on
