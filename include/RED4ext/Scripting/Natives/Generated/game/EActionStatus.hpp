#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class EActionStatus : int32_t
{
    STATUS_INVALID = 0,
    STATUS_BOUND = 1,
    STATUS_READY = 2,
    STATUS_PROGRESS = 3,
    STATUS_COMPLETE = 4,
    STATUS_FAILURE = 5,
};
} // namespace game
using gameEActionStatus = game::EActionStatus;
} // namespace RED4ext

// clang-format on
