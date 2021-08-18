#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/TrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect { 
struct PlacedTrackItemPlayData : effect::TrackItemPlayData
{
    static constexpr const char* NAME = "effectPlacedTrackItemPlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PlacedTrackItemPlayData, 0x38);
} // namespace effect
} // namespace RED4ext
