#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class StatObjectsRelation : int32_t
{
    Self = 0,
    Owner = 1,
    Root = 2,
    Parent = 3,
    Target = 4,
    Player = 5,
    Instigator = 6,
    Count = 7,
    Invalid = 9,
};
} // namespace game
using gameStatObjectsRelation = game::StatObjectsRelation;
} // namespace RED4ext

// clang-format on
