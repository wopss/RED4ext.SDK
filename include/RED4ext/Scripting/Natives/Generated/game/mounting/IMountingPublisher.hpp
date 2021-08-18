#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::mounting { 
struct IMountingPublisher : game::IGameSystem
{
    static constexpr const char* NAME = "gamemountingIMountingPublisher";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMountingPublisher, 0x48);
} // namespace game::mounting
} // namespace RED4ext
