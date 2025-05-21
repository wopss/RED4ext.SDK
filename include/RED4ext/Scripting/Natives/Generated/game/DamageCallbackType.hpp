#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class DamageCallbackType : int32_t
{
    HitTriggered = 0,
    HitReceived = 1,
    PipelineProcessed = 2,
    MissTriggered = 3,
    COUNT = 4,
    INVALID = 5,
};
} // namespace game
using gameDamageCallbackType = game::DamageCallbackType;
} // namespace RED4ext

// clang-format on
