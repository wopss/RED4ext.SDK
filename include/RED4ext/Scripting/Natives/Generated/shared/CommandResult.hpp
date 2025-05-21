#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace shared {
enum class CommandResult : int32_t
{
    Success = 0,
    NeedOptions = 1,
    Fail = 2,
    Abort = 3,
};
} // namespace shared
using sharedCommandResult = shared::CommandResult;
} // namespace RED4ext

// clang-format on
