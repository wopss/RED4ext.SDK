#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/PuppetStatPoolsListener.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerHealthStatPoolsListener : game::PuppetStatPoolsListener
{
    static constexpr const char* NAME = "gamePlayerHealthStatPoolsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PlayerHealthStatPoolsListener, 0x60);
} // namespace game
} // namespace RED4ext
