#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PuppetBase.hpp>

namespace RED4ext
{
namespace game { 
struct Puppet : game::PuppetBase
{
    static constexpr const char* NAME = "gamePuppet";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D0[0x608 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(Puppet, 0x608);
} // namespace game
} // namespace RED4ext
