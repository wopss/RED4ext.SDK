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
struct Muppet : game::PuppetBase
{
    static constexpr const char* NAME = "gameMuppet";
    static constexpr const char* ALIAS = "Muppet";

    uint8_t unk268[0x298 - 0x268]; // 268
};
RED4EXT_ASSERT_SIZE(Muppet, 0x298);
} // namespace game
using gameMuppet = game::Muppet;
using Muppet = game::Muppet;
} // namespace RED4ext

// clang-format on
