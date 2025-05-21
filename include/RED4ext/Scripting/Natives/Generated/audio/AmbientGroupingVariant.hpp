#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class AmbientGroupingVariant : int32_t
{
    AllEntities = 0,
    IndoorEntities = 1,
    OutdoorEntities = 2,
    AllEntitiesAllDirections = 3,
    IndoorAllDirections = 4,
    OutdoorAllDirections = 5,
    SameRoomEntities = 6,
    DifferentRoomEntities = 7,
    DistanceExclusion = 8,
};
} // namespace audio
using audioAmbientGroupingVariant = audio::AmbientGroupingVariant;
} // namespace RED4ext

// clang-format on
