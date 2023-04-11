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
struct HasDialogVisualizerVisiblePrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameHasDialogVisualizerVisiblePrereqState";
    static constexpr const char* ALIAS = "HasDialogVisualizerVisiblePrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(HasDialogVisualizerVisiblePrereqState, 0xD0);
} // namespace game
using gameHasDialogVisualizerVisiblePrereqState = game::HasDialogVisualizerVisiblePrereqState;
using HasDialogVisualizerVisiblePrereqState = game::HasDialogVisualizerVisiblePrereqState;
} // namespace RED4ext

// clang-format on
