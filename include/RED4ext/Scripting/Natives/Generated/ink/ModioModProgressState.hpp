#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class ModioModProgressState : int32_t
{
    Initializing = 0,
    Downloading = 1,
    Extracting = 2,
    Compressing = 3,
    Uploading = 4,
    CleaningUp = 5,
    MAX = 6,
};
} // namespace ink
using inkModioModProgressState = ink::ModioModProgressState;
} // namespace RED4ext

// clang-format on
