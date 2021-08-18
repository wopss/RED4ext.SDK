#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct VisionModePrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameVisionModePrereqState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkC0[0xE0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(VisionModePrereqState, 0xE0);
} // namespace game
} // namespace RED4ext
