#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct SetAggressiveMask : red::Event
{
    static constexpr const char* NAME = "gameSetAggressiveMask";
    static constexpr const char* ALIAS = "SetAggressiveMask";

};
RED4EXT_ASSERT_SIZE(SetAggressiveMask, 0x40);
} // namespace game
using SetAggressiveMask = game::SetAggressiveMask;
} // namespace RED4ext
