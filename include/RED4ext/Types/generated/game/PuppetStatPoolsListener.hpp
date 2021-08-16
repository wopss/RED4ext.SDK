#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/IStatPoolsListener.hpp>

namespace RED4ext
{
namespace game { 
struct PuppetStatPoolsListener : game::IStatPoolsListener
{
    static constexpr const char* NAME = "gamePuppetStatPoolsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PuppetStatPoolsListener, 0x58);
} // namespace game
} // namespace RED4ext
