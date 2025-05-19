#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class StreamingSectorCategory : int8_t
{
    Unknown = -1,
    Exterior = 0,
    Interior = 1,
    Quest = 2,
    Navigation = 3,
    AlwaysLoaded = 4,
};
} // namespace world
using worldStreamingSectorCategory = world::StreamingSectorCategory;
} // namespace RED4ext

// clang-format on
