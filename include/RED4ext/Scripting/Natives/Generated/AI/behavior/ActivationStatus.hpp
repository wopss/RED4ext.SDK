#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI::behavior {
enum class ActivationStatus : int8_t
{
    NOT_ACTIVATED = 0,
    ACTIVATING = 1,
    ACTIVATED = 2,
    DEACTIVATING = 3,
};
} // namespace AI::behavior
using AIbehaviorActivationStatus = AI::behavior::ActivationStatus;
} // namespace RED4ext

// clang-format on
