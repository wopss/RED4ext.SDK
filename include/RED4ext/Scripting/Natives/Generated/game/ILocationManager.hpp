#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct ILocationManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameILocationManager";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ILocationManager, 0x48);
} // namespace game
} // namespace RED4ext
