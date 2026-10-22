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
struct TierPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameTierPrereqState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x110 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(TierPrereqState, 0x110);
} // namespace game
using gameTierPrereqState = game::TierPrereqState;
} // namespace RED4ext

// clang-format on
