#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game { 
enum class TickableEventState : uint32_t
{
    Idle = 0,
    FirstTick = 1,
    NormalTick = 2,
    LastTick = 3,
    Canceled = 4,
};
} // namespace game
} // namespace RED4ext
