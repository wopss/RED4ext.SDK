#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMBodyCarrying : uint32_t
{
    Default = 0,
    PickUp = 1,
    Carry = 2,
    Dispose = 3,
    Drop = 4,
    Aim = 5,
    Throw = 6,
    Any = 4294967295,
};
} // namespace game
using gamePSMBodyCarrying = game::PSMBodyCarrying;
} // namespace RED4ext

// clang-format on
