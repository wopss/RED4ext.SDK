#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class EInterruptionOutcome : int32_t
{
    INTERRUPTION_SUCCESS = 0,
    INTERRUPTION_DELAYED = 1,
    INTERRUPTION_FAILED = 2,
};
} // namespace AI
using AIEInterruptionOutcome = AI::EInterruptionOutcome;
} // namespace RED4ext

// clang-format on
