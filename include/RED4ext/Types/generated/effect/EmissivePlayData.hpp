#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect { 
struct EmissivePlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectEmissivePlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EmissivePlayData, 0x38);
} // namespace effect
} // namespace RED4ext
