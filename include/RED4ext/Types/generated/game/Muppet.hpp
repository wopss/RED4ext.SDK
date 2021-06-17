#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/PuppetBase.hpp>

namespace RED4ext
{
namespace game { 
struct Muppet : game::PuppetBase
{
    static constexpr const char* NAME = "gameMuppet";
    static constexpr const char* ALIAS = "Muppet";

    uint8_t unk2C0[0x3B0 - 0x2C0]; // 2C0
};
RED4EXT_ASSERT_SIZE(Muppet, 0x3B0);
} // namespace game
using Muppet = game::Muppet;
} // namespace RED4ext
