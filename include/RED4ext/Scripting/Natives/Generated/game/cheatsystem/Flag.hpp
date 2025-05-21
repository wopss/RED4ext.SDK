#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::cheatsystem {
enum class Flag : int32_t
{
    God_Immortal = 1,
    God_Invulnerable = 2,
    Resurrect = 4,
    IgnoreTimeDilation = 8,
    BypassMagazine = 16,
    InfiniteAmmo = 32,
    Kill = 64,
    Invisible = 128,
};
} // namespace game::cheatsystem
using gamecheatsystemFlag = game::cheatsystem::Flag;
} // namespace RED4ext

// clang-format on
