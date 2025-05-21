#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class EnemyState : int8_t
{
    InCombat = 0,
    Alerted = 1,
    Afraid = 2,
    Alive = 3,
    Dead = 4,
};
} // namespace audio
using audioEnemyState = audio::EnemyState;
} // namespace RED4ext

// clang-format on
