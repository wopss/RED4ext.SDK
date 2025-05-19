#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class ThreatPersistenceStatus : int32_t
{
    ThreatNotFound = 0,
    Persistent = 1,
    NotPersistent = 2,
};
} // namespace AI
using AIThreatPersistenceStatus = AI::ThreatPersistenceStatus;
} // namespace RED4ext

// clang-format on
