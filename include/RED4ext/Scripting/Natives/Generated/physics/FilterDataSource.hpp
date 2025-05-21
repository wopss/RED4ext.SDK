#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
enum class FilterDataSource : int8_t
{
    Parent = 0,
    Collider = 1,
    Body = Collider,
    Component = Parent,
};
} // namespace physics
using physicsFilterDataSource = physics::FilterDataSource;
} // namespace RED4ext

// clang-format on
