#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionMoveToState.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct ActionMoveToDynamicNodeState : game::ActionMoveToState
{
    static constexpr const char* NAME = "gameActionMoveToDynamicNodeState";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> target; // 40
    uint8_t unk50[0x58 - 0x50]; // 50
    WeakHandle<game::Object> strafingTarget; // 58
    float desiredDistanceFromTarget; // 68
    bool stopWhenDestinationReached; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
    float pathfindingUpdateInterval; // 70
    bool usePathfinding; // 74
    bool useStart; // 75
    bool useStop; // 76
    uint8_t unk77[0x78 - 0x77]; // 77
};
RED4EXT_ASSERT_SIZE(ActionMoveToDynamicNodeState, 0x78);
} // namespace game
using gameActionMoveToDynamicNodeState = game::ActionMoveToDynamicNodeState;
} // namespace RED4ext

// clang-format on
