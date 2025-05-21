#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class DamagePipelineStage : int32_t
{
    PreProcess = 0,
    Process = 1,
    ProcessHitReaction = 2,
    PostProcess = 3,
    COUNT = 4,
    INVALID = 5,
};
} // namespace game
using gameDamagePipelineStage = game::DamagePipelineStage;
} // namespace RED4ext

// clang-format on
