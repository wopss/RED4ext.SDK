#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class StatPoolDataValueChangeMode : int8_t
{
    Normal = 0,
    IncreasingOnly = 1,
    DecreasingOnly = 2,
    NonZero = 3,
};
} // namespace game
using gameStatPoolDataValueChangeMode = game::StatPoolDataValueChangeMode;
} // namespace RED4ext

// clang-format on
