#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class State : int8_t
{
    InitEngine = 0,
    PreGameMenu = 3,
    InitialLoading = 4,
    Game = 5,
    InGameMenu = 6,
    PauseMenu = 7,
    FastTravelLoading = 8,
    PhotoMode = 9,
    MiniGameMenu = 10,
    EndGameLoading = 11,
    EditorMode = 12,
};
} // namespace ink
using inkState = ink::State;
} // namespace RED4ext

// clang-format on
