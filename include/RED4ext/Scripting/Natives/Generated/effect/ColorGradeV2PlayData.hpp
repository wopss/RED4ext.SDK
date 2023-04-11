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
struct ColorGradeV2PlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectColorGradeV2PlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ColorGradeV2PlayData, 0x38);
} // namespace effect
using effectColorGradeV2PlayData = effect::ColorGradeV2PlayData;
} // namespace RED4ext

// clang-format on
