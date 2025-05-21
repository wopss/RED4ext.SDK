#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class MixParamsAction : int32_t
{
    Mull = 0,
    MullPercent = 1,
    MullComplemtement = 2,
    MullComplemtementPercent = 3,
    Add = 4,
};
} // namespace audio
using audioMixParamsAction = audio::MixParamsAction;
} // namespace RED4ext

// clang-format on
