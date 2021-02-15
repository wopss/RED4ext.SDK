#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::interactions { 
enum class ReactionState : uint32_t
{
    Idle = 0,
    Starting = 1,
    InInteraction = 2,
    Finishing = 3,
    Canceling = 4,
};
} // namespace game::interactions
} // namespace RED4ext
