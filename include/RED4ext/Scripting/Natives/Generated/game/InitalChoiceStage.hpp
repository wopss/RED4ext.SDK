#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class InitalChoiceStage : int32_t
{
    None = 0,
    Difficulty = 1,
    LifePath = 2,
    Gender = 3,
    Customizations = 4,
    Attributes = 5,
    Finished = 6,
};
} // namespace game
using gameInitalChoiceStage = game::InitalChoiceStage;
using telemetryInitalChoiceStage = game::InitalChoiceStage;
} // namespace RED4ext

// clang-format on
