#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct CurrentTargetPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameCurrentTargetPrereqState";
    static constexpr const char* ALIAS = "CurrentTargetPrereqState";

    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(CurrentTargetPrereqState, 0xC8);
} // namespace game
using CurrentTargetPrereqState = game::CurrentTargetPrereqState;
} // namespace RED4ext
