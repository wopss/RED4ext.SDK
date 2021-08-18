#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct BlackboardPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameBlackboardPrereqState";
    static constexpr const char* ALIAS = "BlackboardPrereqState";

    uint8_t unkC0[0xC8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(BlackboardPrereqState, 0xC8);
} // namespace game
using BlackboardPrereqState = game::BlackboardPrereqState;
} // namespace RED4ext
