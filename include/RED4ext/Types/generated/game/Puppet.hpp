#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/PuppetBase.hpp>

namespace RED4ext
{
namespace game { 
struct Puppet : game::PuppetBase
{
    static constexpr const char* NAME = "gamePuppet";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2B8[0x5F0 - 0x2B8]; // 2B8
};
RED4EXT_ASSERT_SIZE(Puppet, 0x5F0);
} // namespace game
} // namespace RED4ext
