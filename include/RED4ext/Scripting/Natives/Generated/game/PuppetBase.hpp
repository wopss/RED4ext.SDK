#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TimeDilatable.hpp>

namespace RED4ext
{
namespace game
{
struct PuppetBase : game::TimeDilatable
{
    static constexpr const char* NAME = "gamePuppetBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk260[0x268 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(PuppetBase, 0x268);
} // namespace game
using gamePuppetBase = game::PuppetBase;
} // namespace RED4ext

// clang-format on
