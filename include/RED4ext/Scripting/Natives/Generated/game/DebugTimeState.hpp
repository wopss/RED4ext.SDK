#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITimeState.hpp>

namespace RED4ext
{
namespace game
{
struct DebugTimeState : game::ITimeState
{
    static constexpr const char* NAME = "gameDebugTimeState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(DebugTimeState, 0x50);
} // namespace game
using gameDebugTimeState = game::DebugTimeState;
} // namespace RED4ext

// clang-format on
