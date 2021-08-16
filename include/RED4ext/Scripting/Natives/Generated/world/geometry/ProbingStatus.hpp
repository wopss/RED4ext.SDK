#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world::geometry { 
enum class ProbingStatus : uint32_t
{
    None = 0,
    StillInObstacle = 1,
    GeometryDiverged = 2,
    Failure = 3,
};
} // namespace world::geometry
} // namespace RED4ext
