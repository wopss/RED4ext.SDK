#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::ui {
enum class BinkVideoStatus : int32_t
{
    Idle = 0,
    NotStarted = 1,
    Initializing = 2,
    Playing = 3,
    Finished = 4,
    OutOfFrustum = 5,
    Stopped = 6,
    Error = 7,
};
} // namespace game::ui
using gameuiBinkVideoStatus = game::ui::BinkVideoStatus;
} // namespace RED4ext

// clang-format on
