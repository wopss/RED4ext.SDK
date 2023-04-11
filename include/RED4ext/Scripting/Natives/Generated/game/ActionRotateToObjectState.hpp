#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionRotateBaseState.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct ActionRotateToObjectState : game::ActionRotateBaseState
{
    static constexpr const char* NAME = "gameActionRotateToObjectState";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> targetObject; // 40
    bool completeWhenRotated; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(ActionRotateToObjectState, 0x58);
} // namespace game
using gameActionRotateToObjectState = game::ActionRotateToObjectState;
} // namespace RED4ext

// clang-format on
