#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IStimuliSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIStimuliSystem";
    static constexpr const char* ALIAS = "IStimuliSystem";

};
RED4EXT_ASSERT_SIZE(IStimuliSystem, 0x48);
} // namespace game
using IStimuliSystem = game::IStimuliSystem;
} // namespace RED4ext
