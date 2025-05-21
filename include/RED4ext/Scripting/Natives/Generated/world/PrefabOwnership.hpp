#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class PrefabOwnership : int8_t
{
    None = 0,
    Quest = 1,
    Audio = 2,
    Environment = 3,
    FX = 4,
    LevelDesign = 5,
    Lighting = 6,
    OpenWorld = 7,
    Cinematics = 8,
};
} // namespace world
using worldPrefabOwnership = world::PrefabOwnership;
} // namespace RED4ext

// clang-format on
