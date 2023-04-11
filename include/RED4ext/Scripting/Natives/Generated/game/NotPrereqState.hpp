#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game
{
struct NotPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameNotPrereqState";
    static constexpr const char* ALIAS = "NotPrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(NotPrereqState, 0xD0);
} // namespace game
using gameNotPrereqState = game::NotPrereqState;
using NotPrereqState = game::NotPrereqState;
} // namespace RED4ext

// clang-format on
