#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class ReflectionVariant : int32_t
{
    WorldSpaceFixedDrections = 0,
    LocalSpaceFixedDirections = 1,
    FindingMaximumFaceAlignemnt = 2,
    LocalSpaceSideDirections = 3,
    FindingMaximumFaceAligment2Sides = 4,
};
} // namespace audio
using audioReflectionVariant = audio::ReflectionVariant;
} // namespace RED4ext

// clang-format on
