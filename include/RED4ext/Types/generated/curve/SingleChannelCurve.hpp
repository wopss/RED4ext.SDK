#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/curve/EInterpolationType.hpp>
#include <RED4ext/Types/generated/curve/ESegmentsLinkType.hpp>

namespace RED4ext
{
namespace curve { 
struct SingleChannelCurve
{
    static constexpr const char* NAME = "curveSingleChannelCurve";
    static constexpr const char* ALIAS = NAME;

    curve::EInterpolationType interpolationType; // 00
    curve::ESegmentsLinkType linkType; // 01
    uint8_t unk02[0x8 - 0x2]; // 2
    DataBuffer data; // 08
    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(SingleChannelCurve, 0x38);
} // namespace curve
} // namespace RED4ext
