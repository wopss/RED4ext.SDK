#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class TelemetryMovementType : int32_t
{
    Jump = 0,
    DoubleJump = 1,
    ChargedJump = 2,
    Dodge = 3,
    AirDodge = 4,
};
} // namespace game
using gameTelemetryMovementType = game::TelemetryMovementType;
using telemetryMovementType = game::TelemetryMovementType;
} // namespace RED4ext

// clang-format on
