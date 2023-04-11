#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct ActionMoveToState : game::ActionReplicatedState
{
    static constexpr const char* NAME = "gameActionMoveToState";
    static constexpr const char* ALIAS = NAME;

    Vector3 targetPos; // 28
    float toleranceRadius; // 34
    bool rotateEntity; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    uint32_t moveStyle; // 3C
};
RED4EXT_ASSERT_SIZE(ActionMoveToState, 0x40);
} // namespace game
using gameActionMoveToState = game::ActionMoveToState;
} // namespace RED4ext

// clang-format on
