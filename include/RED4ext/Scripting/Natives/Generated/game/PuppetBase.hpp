#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TimeDilatable.hpp>

namespace RED4ext
{
namespace game { 
struct PuppetBase : game::TimeDilatable
{
    static constexpr const char* NAME = "gamePuppetBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2B8[0x2C0 - 0x2B8]; // 2B8
};
RED4EXT_ASSERT_SIZE(PuppetBase, 0x2C0);
} // namespace game
} // namespace RED4ext
