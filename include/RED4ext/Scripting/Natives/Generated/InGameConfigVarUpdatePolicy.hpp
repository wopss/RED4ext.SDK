#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class InGameConfigVarUpdatePolicy : int8_t
{
    Disabled = 0,
    Immediately = 1,
    ConfirmationRequired = 2,
    RestartRequired = 3,
    LoadLastCheckpointRequired = 4,
};
using ConfigVarUpdatePolicy = InGameConfigVarUpdatePolicy;
} // namespace RED4ext

// clang-format on
