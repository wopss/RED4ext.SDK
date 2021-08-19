#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PersistentState.hpp>

namespace RED4ext
{
namespace game { 
struct ComponentPS : game::PersistentState
{
    static constexpr const char* NAME = "gameComponentPS";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ComponentPS, 0x68);
} // namespace game
} // namespace RED4ext
