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

    uint8_t unk2B8[0x3A8 - 0x2B8]; // 2B8
};
RED4EXT_ASSERT_SIZE(Muppet, 0x3A8);
} // namespace game
using Muppet = game::Muppet;
} // namespace RED4ext
