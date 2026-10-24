#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class ModioModState : int32_t
{
    InstallationPending = 0,
    Installed = 1,
    UpdatePending = 2,
    Downloading = 3,
    Extracting = 4,
    UninstallPending = 5,
    Reconciling = 6,
    MAX = 7,
};
} // namespace ink
using inkModioModState = ink::ModioModState;
} // namespace RED4ext

// clang-format on
