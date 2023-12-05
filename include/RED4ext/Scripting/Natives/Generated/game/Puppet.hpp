#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PuppetBase.hpp>

namespace RED4ext
{
namespace game
{
struct Puppet : game::PuppetBase
{
    static constexpr const char* NAME = "gamePuppet";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk268[0x5F8 - 0x268]; // 268
};
RED4EXT_ASSERT_SIZE(Puppet, 0x5F8);
} // namespace game
using gamePuppet = game::Puppet;
} // namespace RED4ext

// clang-format on
