#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IActionsFactory : game::IGameSystem
{
    static constexpr const char* NAME = "gameIActionsFactory";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IActionsFactory, 0x48);
} // namespace game
} // namespace RED4ext
