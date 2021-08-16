#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/PuppetBase.hpp>

namespace RED4ext
{
namespace game { 
struct Puppet : game::PuppetBase
{
    static constexpr const char* NAME = "gamePuppet";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2C0[0x5F8 - 0x2C0]; // 2C0
};
RED4EXT_ASSERT_SIZE(Puppet, 0x5F8);
} // namespace game
} // namespace RED4ext
