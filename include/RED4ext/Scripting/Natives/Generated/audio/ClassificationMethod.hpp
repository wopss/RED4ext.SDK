#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class ClassificationMethod : int32_t
{
    HasAnyTag = 0,
    HasAllTags = 1,
    NameEquals = 2,
    EventNameEquals = 3,
    HasAllEventTags = 4,
};
} // namespace audio
using audioClassificationMethod = audio::ClassificationMethod;
} // namespace RED4ext

// clang-format on
