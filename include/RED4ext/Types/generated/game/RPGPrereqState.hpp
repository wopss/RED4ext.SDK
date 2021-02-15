#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game { 
struct RPGPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameRPGPrereqState";
    static constexpr const char* ALIAS = "RPGPrereqState";

    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(RPGPrereqState, 0xD0);
} // namespace game
using RPGPrereqState = game::RPGPrereqState;
} // namespace RED4ext
