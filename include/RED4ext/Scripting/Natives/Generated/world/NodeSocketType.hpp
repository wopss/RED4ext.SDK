#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class NodeSocketType : int8_t
{
    Bidirectional = 0,
    Inward = 1,
    Outward = 2,
    Disabled = 3,
};
} // namespace world
using worldNodeSocketType = world::NodeSocketType;
} // namespace RED4ext

// clang-format on
