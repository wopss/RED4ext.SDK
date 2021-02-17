#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect { 
struct ExposureScalePlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectExposureScalePlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(ExposureScalePlayData, 0x40);
} // namespace effect
} // namespace RED4ext
