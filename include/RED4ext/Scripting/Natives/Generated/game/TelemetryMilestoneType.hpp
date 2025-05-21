#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class TelemetryMilestoneType : int32_t
{
    StartFact = 0,
    ImportantFact = 1,
    Reward = 2,
    EndReward = 3,
    EndFact = 4,
    Invalid = 5,
};
} // namespace game
using gameTelemetryMilestoneType = game::TelemetryMilestoneType;
} // namespace RED4ext

// clang-format on
