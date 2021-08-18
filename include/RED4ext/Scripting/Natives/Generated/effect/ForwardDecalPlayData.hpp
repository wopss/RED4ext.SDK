#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect { 
struct ForwardDecalPlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectForwardDecalPlayData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x80 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(ForwardDecalPlayData, 0x80);
} // namespace effect
} // namespace RED4ext
