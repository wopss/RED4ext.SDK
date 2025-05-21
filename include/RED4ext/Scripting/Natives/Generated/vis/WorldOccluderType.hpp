#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vis {
enum class WorldOccluderType : int8_t
{
    Default = 0,
    None = 1,
    Detail = 2,
    MinorInterior = 3,
    MajorInterior = 4,
    Exterior = 5,
};
} // namespace vis
using visWorldOccluderType = vis::WorldOccluderType;
} // namespace RED4ext

// clang-format on
