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

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(TierPrereqState, 0xD0);
} // namespace game
using gameTierPrereqState = game::TierPrereqState;
} // namespace RED4ext

// clang-format on
