#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/TimeDilatable.hpp>

namespace RED4ext
{
namespace game { 
struct PuppetBase : game::TimeDilatable
{
    static constexpr const char* NAME = "gamePuppetBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2B0[0x2B8 - 0x2B0]; // 2B0
};
RED4EXT_ASSERT_SIZE(PuppetBase, 0x2B8);
} // namespace game
} // namespace RED4ext
