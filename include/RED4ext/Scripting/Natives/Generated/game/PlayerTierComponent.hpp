#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerTierComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePlayerTierComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PlayerTierComponent, 0x90);
} // namespace game
} // namespace RED4ext
