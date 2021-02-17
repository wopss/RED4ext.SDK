#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game { 
enum class TargetingSet : uint32_t
{
    Visible = 0,
    Frustum = 2,
    Complete = 3,
    None = 4,
};
} // namespace game
using TargetingSet = game::TargetingSet;
} // namespace RED4ext
