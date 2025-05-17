#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMCover : uint32_t
{
    Default = 0,
    InCover = 1,
    Peek = 2,
    Lean = 3,
    OutOfCover = 4,
    Any = 4294967295,
};
} // namespace game
using gamePSMCover = game::PSMCover;
} // namespace RED4ext

// clang-format on
