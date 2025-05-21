#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class ScanningState : int32_t
{
    Default = 0,
    Started = 1,
    Stopped = 2,
    Complete = 3,
    ShallowComplete = 4,
    Reset = 5,
};
} // namespace game
using gameScanningState = game::ScanningState;
} // namespace RED4ext

// clang-format on
