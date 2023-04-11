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
struct IsVisualizerActivePrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameIsVisualizerActivePrereqState";
    static constexpr const char* ALIAS = "IsVisualizerActivePrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(IsVisualizerActivePrereqState, 0xD0);
} // namespace game
using gameIsVisualizerActivePrereqState = game::IsVisualizerActivePrereqState;
using IsVisualizerActivePrereqState = game::IsVisualizerActivePrereqState;
} // namespace RED4ext

// clang-format on
