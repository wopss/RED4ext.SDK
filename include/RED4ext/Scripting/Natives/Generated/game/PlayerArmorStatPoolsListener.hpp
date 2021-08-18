#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PuppetStatPoolsListener.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerArmorStatPoolsListener : game::PuppetStatPoolsListener
{
    static constexpr const char* NAME = "gamePlayerArmorStatPoolsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PlayerArmorStatPoolsListener, 0x60);
} // namespace game
} // namespace RED4ext
