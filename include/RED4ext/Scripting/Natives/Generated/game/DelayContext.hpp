#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class DelayContext : int32_t
{
    Standard_TD = 1,
    Standard_ND = 2,
    Quest_TD = 4,
    SpawnManager_ND = 8,
};
} // namespace game
using gameDelayContext = game::DelayContext;
} // namespace RED4ext

// clang-format on
