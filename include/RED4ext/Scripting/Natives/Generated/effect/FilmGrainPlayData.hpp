#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect
{
struct FilmGrainPlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectFilmGrainPlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(FilmGrainPlayData, 0x38);
} // namespace effect
using effectFilmGrainPlayData = effect::FilmGrainPlayData;
} // namespace RED4ext

// clang-format on
