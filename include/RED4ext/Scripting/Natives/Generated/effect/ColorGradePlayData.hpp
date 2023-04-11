#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/GenericTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect
{
struct ColorGradePlayData : effect::GenericTrackItemPlayData
{
    static constexpr const char* NAME = "effectColorGradePlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ColorGradePlayData, 0x38);
} // namespace effect
using effectColorGradePlayData = effect::ColorGradePlayData;
} // namespace RED4ext

// clang-format on
