#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BaseGameSession.hpp>

namespace RED4ext
{
namespace game { 
struct GameSession : game::BaseGameSession
{
    static constexpr const char* NAME = "gameGameSession";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(GameSession, 0x30);
} // namespace game
} // namespace RED4ext
