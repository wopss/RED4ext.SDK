#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics { 
enum class FilterDataSource : uint8_t
{
    Parent = 0,
    Collider = 1,
    Body = Collider,
    Component = Parent,
};
} // namespace physics
} // namespace RED4ext
