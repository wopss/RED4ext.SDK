#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class EExecutionStatus : int32_t
{
    STATUS_INVALID = 0,
    STATUS_SUCCESS = 1,
    STATUS_FAILURE = 2,
    STATUS_RUNNING = 3,
    STATUS_ABORTED = 4,
};
} // namespace AI
using AIEExecutionStatus = AI::EExecutionStatus;
} // namespace RED4ext

// clang-format on
