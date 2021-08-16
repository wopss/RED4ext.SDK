#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct HasDialogVisualizerVisiblePrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameHasDialogVisualizerVisiblePrereqState";
    static constexpr const char* ALIAS = "HasDialogVisualizerVisiblePrereqState";

    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(HasDialogVisualizerVisiblePrereqState, 0xC8);
} // namespace game
using HasDialogVisualizerVisiblePrereqState = game::HasDialogVisualizerVisiblePrereqState;
} // namespace RED4ext
