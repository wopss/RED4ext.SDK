#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class InGameConfigChangeReason : uint8_t
{
    Accepted = 0,
    Rejected = 1,
    NeedsConfirmation = 2,
    NeedsRestart = 3,
    Invalid = 255,
};
using ConfigChangeReason = InGameConfigChangeReason;
} // namespace RED4ext

// clang-format on
